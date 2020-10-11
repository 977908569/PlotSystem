// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPluginEditor/Private/PlotPluginGraphNode_Root.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPluginGraphNode_Root() {}
// Cross Module References
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraphNode_Root_NoRegister();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraphNode_Root();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginGraphNode();
	UPackage* Z_Construct_UPackage__Script_PlotPluginEditor();
// End Cross Module References
	void UPlotPluginGraphNode_Root::StaticRegisterNativesUPlotPluginGraphNode_Root()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginGraphNode_Root_NoRegister()
	{
		return UPlotPluginGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotPluginGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Root Node Graph\n */" },
		{ "IncludePath", "PlotPluginGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/PlotPluginGraphNode_Root.h" },
		{ "ToolTip", "Root Node Graph" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginGraphNode_Root>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::ClassParams = {
		&UPlotPluginGraphNode_Root::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginGraphNode_Root()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginGraphNode_Root_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginGraphNode_Root, 1504466222);
	template<> PLOTPLUGINEDITOR_API UClass* StaticClass<UPlotPluginGraphNode_Root>()
	{
		return UPlotPluginGraphNode_Root::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginGraphNode_Root(Z_Construct_UClass_UPlotPluginGraphNode_Root, &UPlotPluginGraphNode_Root::StaticClass, TEXT("/Script/PlotPluginEditor"), TEXT("UPlotPluginGraphNode_Root"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginGraphNode_Root);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
