// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPluginEditor/Private/PlotPluginGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPluginGraphNode() {}
// Cross Module References
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraphNode_NoRegister();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_PlotPluginEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLOTPLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPlotPluginGraphNodeClassData();
// End Cross Module References
	void UPlotPluginGraphNode::StaticRegisterNativesUPlotPluginGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginGraphNode_NoRegister()
	{
		return UPlotPluginGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSubNode_MetaData[];
#endif
		static void NewProp_bIsSubNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSubNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopySubNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopySubNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRootNode_MetaData[];
#endif
		static void NewProp_bRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Graph Node\n */" },
		{ "IncludePath", "PlotPluginGraphNode.h" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
		{ "ToolTip", "Graph Node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Comment", "/** error message for node */" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
		{ "ToolTip", "error message for node" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraphNode, ErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode_MetaData[] = {
		{ "Comment", "/** if set, this node will be always considered as subnode */" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
		{ "ToolTip", "if set, this node will be always considered as subnode" },
	};
#endif
	void Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode_SetBit(void* Obj)
	{
		((UPlotPluginGraphNode*)Obj)->bIsSubNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode = { "bIsSubNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPlotPluginGraphNode), &Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Comment", "/** if set, all modifications (including delete/cut) are disabled */" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
		{ "ToolTip", "if set, all modifications (including delete/cut) are disabled" },
	};
#endif
	void Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UPlotPluginGraphNode*)Obj)->bIsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPlotPluginGraphNode), &Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_CopySubNodeIndex_MetaData[] = {
		{ "Comment", "/** subnode index assigned during copy operation to connect nodes again on paste */" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
		{ "ToolTip", "subnode index assigned during copy operation to connect nodes again on paste" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_CopySubNodeIndex = { "CopySubNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraphNode, CopySubNodeIndex), METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_CopySubNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_CopySubNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes = { "SubNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraphNode, SubNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes_Inner = { "SubNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotPluginGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraphNode, ParentNode), Z_Construct_UClass_UPlotPluginGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_NodeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_NodeInstance = { "NodeInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraphNode, NodeInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_NodeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_NodeInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
	};
#endif
	void Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode_SetBit(void* Obj)
	{
		((UPlotPluginGraphNode*)Obj)->bRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode = { "bRootNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotPluginGraphNode), &Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ClassData_MetaData[] = {
		{ "Comment", "/** instance class */" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode.h" },
		{ "ToolTip", "instance class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ClassData = { "ClassData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraphNode, ClassData), Z_Construct_UScriptStruct_FPlotPluginGraphNodeClassData, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ClassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ClassData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotPluginGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsSubNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bIsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_CopySubNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_SubNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_NodeInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_bRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraphNode_Statics::NewProp_ClassData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginGraphNode_Statics::ClassParams = {
		&UPlotPluginGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotPluginGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginGraphNode, 1182075572);
	template<> PLOTPLUGINEDITOR_API UClass* StaticClass<UPlotPluginGraphNode>()
	{
		return UPlotPluginGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginGraphNode(Z_Construct_UClass_UPlotPluginGraphNode, &UPlotPluginGraphNode::StaticClass, TEXT("/Script/PlotPluginEditor"), TEXT("UPlotPluginGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
