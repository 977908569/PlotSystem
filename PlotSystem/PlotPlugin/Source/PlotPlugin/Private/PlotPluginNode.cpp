#include "PlotPluginNode.h"
#include "PlotEvent.h"
#include "PlotNodeData.h"
#include "PlotPlugin.h"

UPlotPluginNodeBase::UPlotPluginNodeBase()
{

}

UPlotPluginNodeRoot::UPlotPluginNodeRoot()
{
	bRootNode = true;
}

UPlotPluginNode::UPlotPluginNode()
{
	bRootNode = false;
}

void UPlotPluginNode::Enter()
{
	for (auto& Each : EnterEvents)
	{
		Each->OnEvent();
	}
	OnEnter();
	if (PlotNodeData)
	{
		PlotNodeData->Do();
		if (!PlotNodeData->bWait)
		{
			Exit();
		}
	}
}

void UPlotPluginNode::Exit()
{
	for (auto& Each : ExitEvents)
	{
		Each->OnEvent();
	}
	OnExit();

	//Next
	if (Links.Num() > 0)
	{
		if (UPlotPluginNode* NextNode = Cast<UPlotPluginNode>(Links[0]))
		{
			NextNode->Enter();
		}
	}
	else
	{
		UPlotPlugin* PlotPlugin = Cast<UPlotPlugin>(GetOuter());
		if (PlotPlugin)
		{
			PlotPlugin->End();
		}
	}
}

void UPlotPluginNode::OnFinish()
{
	if (PlotNodeData && PlotNodeData->bWait)
	{
		Exit();
	}
}

FString UPlotPluginNode::GetDesc()
{
	if (PlotNodeData)
	{
		return PlotNodeData->GetDataDes();
	}
	return Super::GetDesc();
}


