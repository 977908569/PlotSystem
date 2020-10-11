#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "PlotPluginGraphTypes.h"
#include "PlotPluginGraphNode.generated.h"
/**
 * Graph Node
 */
UCLASS()
class PLOTPLUGINEDITOR_API UPlotPluginGraphNode :public UEdGraphNode
{
	GENERATED_BODY()
public:
	/** instance class */
	UPROPERTY()
		struct FPlotPluginGraphNodeClassData ClassData;

	UPROPERTY()
		bool bRootNode;

	UPROPERTY()
		UObject* NodeInstance;

	UPROPERTY(transient)
		UPlotPluginGraphNode* ParentNode;

	UPROPERTY()
		TArray<UPlotPluginGraphNode*> SubNodes;

	/** subnode index assigned during copy operation to connect nodes again on paste */
	UPROPERTY()
		int32 CopySubNodeIndex;

	/** if set, all modifications (including delete/cut) are disabled */
	UPROPERTY()
		uint32 bIsReadOnly : 1;

	/** if set, this node will be always considered as subnode */
	UPROPERTY()
		uint32 bIsSubNode : 1;

	/** error message for node */
	UPROPERTY()
		FString ErrorMessage;

	//~ Begin UEdGraphNode Interface
	virtual class UPlotPluginGraph* GetPlotPluginGraph();
	void AutowireNewNode(UEdGraphPin* FromPin) override;
	void PostPlacedNewNode() override;
	void PrepareForCopying() override;
	bool CanDuplicateNode() const override;
	bool CanUserDeleteNode() const override;
	void DestroyNode() override;
	FText GetTooltipText() const override;
	void NodeConnectionListChanged() override;
	bool CanCreateUnderSpecifiedSchema(const UEdGraphSchema* DesiredSchema) const override;
	void FindDiffs(class UEdGraphNode* OtherNode, struct FDiffResults& Results) override;
	//~ End UEdGraphNode Interface

	//~ Begin UObject Interface
#if WITH_EDITOR
	void PostEditImport() override;
	void PostEditUndo() override;
#endif
	// End UObject

	// @return the input pin for this state
	virtual UEdGraphPin* GetInputPin(int32 InputIndex = 0) const;
	// @return the output pin for this state
	virtual UEdGraphPin* GetOutputPin(int32 InputIndex = 0) const;
	virtual UEdGraph* GetBoundGraph() const { return NULL; }

	virtual FText GetDescription() const;
	virtual void PostCopyNode();

	void AddSubNode(UPlotPluginGraphNode* SubNode, class UEdGraph* ParentGraph);
	void RemoveSubNode(UPlotPluginGraphNode* SubNode);
	virtual void RemoveAllSubNodes();
	virtual void OnSubNodeRemoved(UPlotPluginGraphNode* SubNode);
	virtual void OnSubNodeAdded(UPlotPluginGraphNode* SubNode);

	virtual int32 FindSubNodeDropIndex(UPlotPluginGraphNode* SubNode) const;
	virtual void InsertSubNodeAt(UPlotPluginGraphNode* SubNode, int32 DropIndex);

	/** check if node is subnode */
	virtual bool IsSubNode() const;

	/** initialize instance object  */
	virtual void InitializeInstance();

	/** reinitialize node instance */
	virtual bool RefreshNodeClass();

	/** updates ClassData from node instance */
	virtual void UpdateNodeClassData();

	/** Check if node instance uses blueprint for its implementation */
	bool UsesBlueprint() const;

	/** check if node has any errors, used for assigning colors on graph */
	virtual bool HasErrors() const;
	static void UpdateNodeClassDataFrom(UClass* InstanceClass, FPlotPluginGraphNodeClassData& UpdatedData);
	FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	void AllocateDefaultPins() override;
protected:
	virtual void ResetNodeOwner();
	FString GetClassDisplayName() const;
};