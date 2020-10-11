// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPluginEditor/Private/EdGraphSchema_PlotPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_PlotPlugin() {}
// Cross Module References
	PLOTPLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode();
	UPackage* Z_Construct_UPackage__Script_PlotPluginEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraphNode_NoRegister();
	PLOTPLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_PlotPlugin_NoRegister();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_PlotPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
// End Cross Module References
class UScriptStruct* FPlotPluginSchemaAction_NewSubNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOTPLUGINEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode, Z_Construct_UPackage__Script_PlotPluginEditor(), TEXT("PlotPluginSchemaAction_NewSubNode"), sizeof(FPlotPluginSchemaAction_NewSubNode), Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Hash());
	}
	return Singleton;
}
template<> PLOTPLUGINEDITOR_API UScriptStruct* StaticStruct<FPlotPluginSchemaAction_NewSubNode>()
{
	return FPlotPluginSchemaAction_NewSubNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode(FPlotPluginSchemaAction_NewSubNode::StaticStruct, TEXT("/Script/PlotPluginEditor"), TEXT("PlotPluginSchemaAction_NewSubNode"), false, nullptr, nullptr);
static struct FScriptStruct_PlotPluginEditor_StaticRegisterNativesFPlotPluginSchemaAction_NewSubNode
{
	FScriptStruct_PlotPluginEditor_StaticRegisterNativesFPlotPluginSchemaAction_NewSubNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotPluginSchemaAction_NewSubNode")),new UScriptStruct::TCppStructOps<FPlotPluginSchemaAction_NewSubNode>);
	}
} ScriptStruct_PlotPluginEditor_StaticRegisterNativesFPlotPluginSchemaAction_NewSubNode;
	struct Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Action to add a subnode to the selected node\n */" },
		{ "ModuleRelativePath", "Private/EdGraphSchema_PlotPlugin.h" },
		{ "ToolTip", "Action to add a subnode to the selected node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotPluginSchemaAction_NewSubNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "Comment", "/** parent node */" },
		{ "ModuleRelativePath", "Private/EdGraphSchema_PlotPlugin.h" },
		{ "ToolTip", "parent node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotPluginSchemaAction_NewSubNode, ParentNode), Z_Construct_UClass_UPlotPluginGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Private/EdGraphSchema_PlotPlugin.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotPluginSchemaAction_NewSubNode, NodeTemplate), Z_Construct_UClass_UPlotPluginGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PlotPluginSchemaAction_NewSubNode",
		sizeof(FPlotPluginSchemaAction_NewSubNode),
		alignof(FPlotPluginSchemaAction_NewSubNode),
		Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlotPluginEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotPluginSchemaAction_NewSubNode"), sizeof(FPlotPluginSchemaAction_NewSubNode), Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewSubNode_Hash() { return 1563171327U; }
class UScriptStruct* FPlotPluginSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOTPLUGINEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode, Z_Construct_UPackage__Script_PlotPluginEditor(), TEXT("PlotPluginSchemaAction_NewNode"), sizeof(FPlotPluginSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Hash());
	}
	return Singleton;
}
template<> PLOTPLUGINEDITOR_API UScriptStruct* StaticStruct<FPlotPluginSchemaAction_NewNode>()
{
	return FPlotPluginSchemaAction_NewNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotPluginSchemaAction_NewNode(FPlotPluginSchemaAction_NewNode::StaticStruct, TEXT("/Script/PlotPluginEditor"), TEXT("PlotPluginSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_PlotPluginEditor_StaticRegisterNativesFPlotPluginSchemaAction_NewNode
{
	FScriptStruct_PlotPluginEditor_StaticRegisterNativesFPlotPluginSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotPluginSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FPlotPluginSchemaAction_NewNode>);
	}
} ScriptStruct_PlotPluginEditor_StaticRegisterNativesFPlotPluginSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Action to add a node to the graph\n */" },
		{ "ModuleRelativePath", "Private/EdGraphSchema_PlotPlugin.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotPluginSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "Comment", "/** Template of node we want to create */" },
		{ "ModuleRelativePath", "Private/EdGraphSchema_PlotPlugin.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotPluginSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UPlotPluginGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"PlotPluginSchemaAction_NewNode",
		sizeof(FPlotPluginSchemaAction_NewNode),
		alignof(FPlotPluginSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlotPluginEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotPluginSchemaAction_NewNode"), sizeof(FPlotPluginSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotPluginSchemaAction_NewNode_Hash() { return 4054790282U; }
	void UEdGraphSchema_PlotPlugin::StaticRegisterNativesUEdGraphSchema_PlotPlugin()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_PlotPlugin_NoRegister()
	{
		return UEdGraphSchema_PlotPlugin::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Schema\n */" },
		{ "IncludePath", "EdGraphSchema_PlotPlugin.h" },
		{ "ModuleRelativePath", "Private/EdGraphSchema_PlotPlugin.h" },
		{ "ToolTip", "Schema" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_PlotPlugin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::ClassParams = {
		&UEdGraphSchema_PlotPlugin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_PlotPlugin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphSchema_PlotPlugin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphSchema_PlotPlugin, 3250636036);
	template<> PLOTPLUGINEDITOR_API UClass* StaticClass<UEdGraphSchema_PlotPlugin>()
	{
		return UEdGraphSchema_PlotPlugin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema_PlotPlugin(Z_Construct_UClass_UEdGraphSchema_PlotPlugin, &UEdGraphSchema_PlotPlugin::StaticClass, TEXT("/Script/PlotPluginEditor"), TEXT("UEdGraphSchema_PlotPlugin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_PlotPlugin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
