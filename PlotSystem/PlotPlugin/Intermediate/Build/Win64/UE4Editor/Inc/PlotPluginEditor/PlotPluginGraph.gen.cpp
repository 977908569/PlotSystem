// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPluginEditor/Private/PlotPluginGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPluginGraph() {}
// Cross Module References
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraph_NoRegister();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_PlotPluginEditor();
// End Cross Module References
	void UPlotPluginGraph::StaticRegisterNativesUPlotPluginGraph()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginGraph_NoRegister()
	{
		return UPlotPluginGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraphVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoot_MetaData[];
#endif
		static void NewProp_bRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlotPluginGraph.h" },
		{ "ModuleRelativePath", "Private/PlotPluginGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_GraphVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlotPluginGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_GraphVersion = { "GraphVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotPluginGraph, GraphVersion), METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_GraphVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_GraphVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlotPluginGraph.h" },
	};
#endif
	void Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot_SetBit(void* Obj)
	{
		((UPlotPluginGraph*)Obj)->bRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot = { "bRoot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotPluginGraph), &Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotPluginGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_GraphVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotPluginGraph_Statics::NewProp_bRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginGraph_Statics::ClassParams = {
		&UPlotPluginGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotPluginGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginGraph, 3068159988);
	template<> PLOTPLUGINEDITOR_API UClass* StaticClass<UPlotPluginGraph>()
	{
		return UPlotPluginGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginGraph(Z_Construct_UClass_UPlotPluginGraph, &UPlotPluginGraph::StaticClass, TEXT("/Script/PlotPluginEditor"), TEXT("UPlotPluginGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginGraph);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPlotPluginGraph)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
