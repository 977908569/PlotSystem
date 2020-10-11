// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPlugin() {}
// Cross Module References
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPlugin_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNodeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlotPlugin::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotPlugin::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void UPlotPlugin::StaticRegisterNativesUPlotPlugin()
	{
		UClass* Class = UPlotPlugin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "End", &UPlotPlugin::execEnd },
			{ "Start", &UPlotPlugin::execStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotPlugin_End_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPlugin_End_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPlugin_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPlugin, nullptr, "End", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPlugin_End_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPlugin_End_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPlugin_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPlugin_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotPlugin_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotPlugin_Start_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Plot Start\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
		{ "ToolTip", "Plot Start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotPlugin_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotPlugin, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotPlugin_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotPlugin_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotPlugin_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotPlugin_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotPlugin_NoRegister()
	{
		return UPlotPlugin::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPlugin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlotGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotOuter_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PlotOuter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlotRootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlotRootNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPlugin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotPlugin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotPlugin_End, "End" }, // 3434079275
		{ &Z_Construct_UFunction_UPlotPlugin_Start, "Start" }, // 2610499904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPlugin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset\n */" },
		{ "IncludePath", "PlotPlugin.h" },
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
		{ "ToolTip", "Asset" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotGraph = { "PlotGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPlugin, PlotGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "PlotPlugin" },
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPlugin, Comment), METADATA_PARAMS(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PlotPlugin" },
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPlugin, Name), METADATA_PARAMS(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Name_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotOuter_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotOuter = { "PlotOuter", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPlugin, PlotOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotOuter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotOuter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotRootNode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Start Node\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotPlugin.h" },
		{ "ToolTip", "Start Node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotRootNode = { "PlotRootNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPlugin, PlotRootNode), Z_Construct_UClass_UPlotPluginNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotRootNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotPlugin_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPlugin_Statics::NewProp_Name,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotOuter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPlugin_Statics::NewProp_PlotRootNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPlugin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPlugin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPlugin_Statics::ClassParams = {
		&UPlotPlugin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotPlugin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotPlugin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPlugin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPlugin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPlugin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPlugin, 1866101889);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotPlugin>()
	{
		return UPlotPlugin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPlugin(Z_Construct_UClass_UPlotPlugin, &UPlotPlugin::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotPlugin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPlugin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
