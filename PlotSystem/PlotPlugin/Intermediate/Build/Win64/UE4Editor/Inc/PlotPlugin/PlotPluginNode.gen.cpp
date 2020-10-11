// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotPluginNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPluginNode() {}
// Cross Module References
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNodeBase_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNodeRoot_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNodeRoot();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNode_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNode();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotEvent_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotNodeData_NoRegister();
// End Cross Module References
	void UPlotPluginNodeBase::StaticRegisterNativesUPlotPluginNodeBase()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginNodeBase_NoRegister()
	{
		return UPlotPluginNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRootNode_MetaData[];
#endif
		static void NewProp_bRootNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNodeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Base Node\n */" },
		{ "IncludePath", "PlotPluginNode.h" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Base Node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Is Root Node\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Is Root Node" },
	};
#endif
	void Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode_SetBit(void* Obj)
	{
		((UPlotPluginNodeBase*)Obj)->bRootNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode = { "bRootNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotPluginNodeBase), &Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "PlotPluginNodeBase" },
		{ "Comment", "/**\n\x09 * Link Nodes\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Link Nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginNodeBase, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotPluginNodeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_NodeId_MetaData[] = {
		{ "Category", "PlotPluginNodeBase" },
		{ "Comment", "/**\n\x09 *Node ID\n\x09 */" },
		{ "DisplayName", "ID" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Node ID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginNodeBase, NodeId), METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_NodeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotPluginNodeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_bRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_Links_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNodeBase_Statics::NewProp_NodeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginNodeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginNodeBase_Statics::ClassParams = {
		&UPlotPluginNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotPluginNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNodeBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginNodeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginNodeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginNodeBase, 2034262703);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotPluginNodeBase>()
	{
		return UPlotPluginNodeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginNodeBase(Z_Construct_UClass_UPlotPluginNodeBase, &UPlotPluginNodeBase::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotPluginNodeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginNodeBase);
	void UPlotPluginNodeRoot::StaticRegisterNativesUPlotPluginNodeRoot()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginNodeRoot_NoRegister()
	{
		return UPlotPluginNodeRoot::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginNodeRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginNodeRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotPluginNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNodeRoot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Root Node\n */" },
		{ "IncludePath", "PlotPluginNode.h" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Root Node" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginNodeRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginNodeRoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginNodeRoot_Statics::ClassParams = {
		&UPlotPluginNodeRoot::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNodeRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNodeRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginNodeRoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginNodeRoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginNodeRoot, 2485402480);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotPluginNodeRoot>()
	{
		return UPlotPluginNodeRoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginNodeRoot(Z_Construct_UClass_UPlotPluginNodeRoot, &UPlotPluginNodeRoot::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotPluginNodeRoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginNodeRoot);
	DEFINE_FUNCTION(UPlotPluginNode::execOnFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotPluginNode::execExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Exit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotPluginNode::execEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Enter();
		P_NATIVE_END;
	}
	static FName NAME_UPlotPluginNode_OnEnter = FName(TEXT("OnEnter"));
	void UPlotPluginNode::OnEnter()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlotPluginNode_OnEnter),NULL);
	}
	static FName NAME_UPlotPluginNode_OnExit = FName(TEXT("OnExit"));
	void UPlotPluginNode::OnExit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlotPluginNode_OnExit),NULL);
	}
	void UPlotPluginNode::StaticRegisterNativesUPlotPluginNode()
	{
		UClass* Class = UPlotPluginNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Enter", &UPlotPluginNode::execEnter },
			{ "Exit", &UPlotPluginNode::execExit },
			{ "OnFinish", &UPlotPluginNode::execOnFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotPluginNode_Enter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPluginNode_Enter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enter Node\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Enter Node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPluginNode_Enter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPluginNode, nullptr, "Enter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPluginNode_Enter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPluginNode_Enter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPluginNode_Enter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPluginNode_Enter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotPluginNode_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPluginNode_Exit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Exit Node\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Exit Node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPluginNode_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPluginNode, nullptr, "Exit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPluginNode_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPluginNode_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPluginNode_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPluginNode_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotPluginNode_OnEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPluginNode_OnEnter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Blurprint Function\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Blurprint Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPluginNode_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPluginNode, nullptr, "OnEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPluginNode_OnEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPluginNode_OnEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPluginNode_OnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPluginNode_OnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotPluginNode_OnExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPluginNode_OnExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPluginNode_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPluginNode, nullptr, "OnExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPluginNode_OnExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPluginNode_OnExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPluginNode_OnExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPluginNode_OnExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotPluginNode_OnFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPluginNode_OnFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPluginNode_OnFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPluginNode, nullptr, "OnFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPluginNode_OnFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPluginNode_OnFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPluginNode_OnFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPluginNode_OnFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotPluginNode_NoRegister()
	{
		return UPlotPluginNode::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExitEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitEvents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnterEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterEvents_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotNodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlotNodeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotPluginNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotPluginNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotPluginNode_Enter, "Enter" }, // 1133375453
		{ &Z_Construct_UFunction_UPlotPluginNode_Exit, "Exit" }, // 2165451040
		{ &Z_Construct_UFunction_UPlotPluginNode_OnEnter, "OnEnter" }, // 2749930068
		{ &Z_Construct_UFunction_UPlotPluginNode_OnExit, "OnExit" }, // 150016157
		{ &Z_Construct_UFunction_UPlotPluginNode_OnFinish, "OnFinish" }, // 3706996691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Node\n */" },
		{ "IncludePath", "PlotPluginNode.h" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_MetaData[] = {
		{ "Category", "PlotPluginNode" },
		{ "DisplayName", "Exit Events" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents = { "ExitEvents", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginNode, ExitEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_Inner_MetaData[] = {
		{ "Category", "PlotPluginNode" },
		{ "DisplayName", "Exit Events" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_Inner = { "ExitEvents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_MetaData[] = {
		{ "Category", "PlotPluginNode" },
		{ "Comment", "/**\n * Event\n */" },
		{ "DisplayName", "Enter Events" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Event" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents = { "EnterEvents", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginNode, EnterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_Inner_MetaData[] = {
		{ "Category", "PlotPluginNode" },
		{ "Comment", "/**\n * Event\n */" },
		{ "DisplayName", "Enter Events" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_Inner = { "EnterEvents", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_PlotNodeData_MetaData[] = {
		{ "Category", "PlotPluginNode" },
		{ "Comment", "/**\n\x09 * Node Data\n\x09 */" },
		{ "DisplayName", "Node Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotPluginNode.h" },
		{ "ToolTip", "Node Data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_PlotNodeData = { "PlotNodeData", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginNode, PlotNodeData), Z_Construct_UClass_UPlotNodeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_PlotNodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_PlotNodeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotPluginNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_ExitEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_EnterEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginNode_Statics::NewProp_PlotNodeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginNode_Statics::ClassParams = {
		&UPlotPluginNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotPluginNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginNode, 1622933366);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotPluginNode>()
	{
		return UPlotPluginNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginNode(Z_Construct_UClass_UPlotPluginNode, &UPlotPluginNode::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotPluginNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
