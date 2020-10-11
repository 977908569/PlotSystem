#pragma once
#include "PlotPluginGraphTypes.generated.h"
/**
 * Class Data
 */
USTRUCT()
struct PLOTPLUGINEDITOR_API  FPlotPluginGraphNodeClassData
{
	GENERATED_USTRUCT_BODY()
		FPlotPluginGraphNodeClassData() : bIsHidden(0), bHideParent(0)
	{
	}
	FPlotPluginGraphNodeClassData(UClass* InClass, const FString& InDeprecatedMessage);
	FPlotPluginGraphNodeClassData(const FString& InAssetName, const FString& InGeneratedClassPackage, const FString& InClassName, UClass* InClass);
	FString ToString() const;
	FString GetClassName() const;
	FText GetCategory() const;
	FString GetDisplayName() const;
	UClass* GetClass(bool bSilent = false);
	bool IsAbstract() const;

	FORCEINLINE bool IsBlueprint() const { return AssetName.Len() > 0; }
	FORCEINLINE bool IsDeprecated() const { return DeprecatedMessage.Len() > 0; }
	FORCEINLINE FString GetDeprecatedMessage() const { return DeprecatedMessage; }
	FORCEINLINE FString GetPackageName() const { return GeneratedClassPackage; }

	/** set when child class masked this one out (e.g. always use game specific class instead of engine one) */
	uint32 bIsHidden : 1;

	/** set when class wants to hide parent class from selection (just one class up hierarchy) */
	uint32 bHideParent : 1;

private:

	/** pointer to uclass */
	TWeakObjectPtr<UClass> Class;

	/** path to class if it's not loaded yet */
	UPROPERTY()
		FString AssetName;

	UPROPERTY()
		FString GeneratedClassPackage;

	/** resolved name of class from asset data */
	UPROPERTY()
		FString ClassName;

	/** User-defined category for this class */
	UPROPERTY()
		FText Category;

	/** message for deprecated class */
	FString DeprecatedMessage;
};

/**
 * Class Node
 */
struct PLOTPLUGINEDITOR_API  FPlotPluginGraphNodeClassNode
{
	FPlotPluginGraphNodeClassNode() {
	}
	FPlotPluginGraphNodeClassData Data;
	FString ParentClassName;
	TSharedPtr<FPlotPluginGraphNodeClassNode> ParentNode;
	TArray<TSharedPtr<FPlotPluginGraphNodeClassNode> > SubNodes;
	void AddUniqueSubNode(TSharedPtr<FPlotPluginGraphNodeClassNode> SubNode);
};

/**
 * Node Helper
 */
struct PLOTPLUGINEDITOR_API  FPlotPluginGraphNodeClassHelper
{
	DECLARE_MULTICAST_DELEGATE(FOnPackageListUpdated);

	FPlotPluginGraphNodeClassHelper() : RootNodeClass(nullptr) {

	}

	FPlotPluginGraphNodeClassHelper(UClass* InRootClass);
	~FPlotPluginGraphNodeClassHelper();

	void GatherClasses(const UClass* BaseClass, TArray<FPlotPluginGraphNodeClassData>& AvailableClasses);
	static FString GetDeprecationMessage(const UClass* Class);

	void OnAssetAdded(const struct FAssetData& AssetData);
	void OnAssetRemoved(const struct FAssetData& AssetData);
	void InvalidateCache();
	void OnHotReload(bool bWasTriggeredAutomatically);

	static void AddUnknownClass(const FPlotPluginGraphNodeClassData& ClassData);
	static bool IsClassKnown(const FPlotPluginGraphNodeClassData& ClassData);
	static FOnPackageListUpdated OnPackageListUpdated;

	static int32 GetObservedBlueprintClassCount(UClass* BaseNativeClass);
	static void AddObservedBlueprintClasses(UClass* BaseNativeClass);
	void UpdateAvailableBlueprintClasses();

private:
	UClass* RootNodeClass;
	TSharedPtr<FPlotPluginGraphNodeClassNode> RootNode;
	static TArray<FName> UnknownPackages;
	static TMap<UClass*, int32> BlueprintClassCount;

	TSharedPtr<FPlotPluginGraphNodeClassNode> CreateClassDataNode(const struct FAssetData& AssetData);
	TSharedPtr<FPlotPluginGraphNodeClassNode> FindBaseClassNode(TSharedPtr<FPlotPluginGraphNodeClassNode> Node, const FString& ClassName);
	void FindAllSubClasses(TSharedPtr<FPlotPluginGraphNodeClassNode> Node, TArray<FPlotPluginGraphNodeClassData>& AvailableClasses);

	UClass* FindAssetClass(const FString& GeneratedClassPackage, const FString& AssetName);
	void BuildClassGraph();
	void AddClassGraphChildren(TSharedPtr<FPlotPluginGraphNodeClassNode> Node, TArray<TSharedPtr<FPlotPluginGraphNodeClassNode> >& NodeList);

	bool IsHidingClass(UClass* Class);
	bool IsHidingParentClass(UClass* Class);
	bool IsPackageSaved(FName PackageName);
};