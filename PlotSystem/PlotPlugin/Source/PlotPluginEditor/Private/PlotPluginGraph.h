#pragma once
#include "EdGraph/EdGraph.h"
#include "PlotPlugin.h"
#include "PlotPluginGraph.generated.h"
/**
 * Auto Create Node ID
 */
class FPlotPluginNodeIdCreator
{
public:
	void Reset() { Id = 0; }
	inline int32 CreateId() { return Id++; }
private:
	int32 Id = 1;
};

UCLASS()
class PLOTPLUGINEDITOR_API UPlotPluginGraph : public UEdGraph
{
	GENERATED_BODY()
public:
	UPlotPluginGraph();

	UPROPERTY()
		bool bRoot;

	UPROPERTY()
		int32 GraphVersion;
	//
	void OnSave();
	UPlotPlugin* GetPlotPlugin() const;

	virtual void OnCreated();
	virtual void OnLoaded();
	virtual void Initialize();

	virtual void UpdateAsset(int32 UpdateFlags = 0);
	virtual void UpdateVersion();
	virtual void MarkVersion();

	virtual void OnSubNodeDropped();
	virtual void OnNodesPasted(const FString& ImportStr);

	void RemoveOrphanedNodes();
	void UpdateClassData();

	bool IsLocked() const;
	void LockUpdates();
	void UnlockUpdates();

	//~ Begin UObject Interface.
	virtual void Serialize(FArchive& Ar) override;
	//~ End UObject Interface.

protected:
	uint32 bLockUpdates : 1;

	virtual void CollectAllNodeInstances(TSet<UObject*>& NodeInstances);
	virtual bool CanRemoveNestedObject(UObject* TestObject) const;
	virtual void OnNodeInstanceRemoved(UObject* NodeInstance);

	UEdGraphPin* FindGraphNodePin(UEdGraphNode* Node, EEdGraphPinDirection Dir);

	/// ID Creator
	FPlotPluginNodeIdCreator IdCreator;

private:
	bool CreatePlotFromGraph();
};

