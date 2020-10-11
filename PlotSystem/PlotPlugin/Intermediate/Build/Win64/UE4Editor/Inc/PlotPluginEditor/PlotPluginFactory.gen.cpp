// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPluginEditor/Public/PlotPluginFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPluginFactory() {}
// Cross Module References
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginFactory_NoRegister();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PlotPluginEditor();
// End Cross Module References
	void UPlotPluginFactory::StaticRegisterNativesUPlotPluginFactory()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginFactory_NoRegister()
	{
		return UPlotPluginFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory\n */" },
		{ "IncludePath", "PlotPluginFactory.h" },
		{ "ModuleRelativePath", "Public/PlotPluginFactory.h" },
		{ "ToolTip", "Factory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginFactory_Statics::ClassParams = {
		&UPlotPluginFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginFactory, 2164847049);
	template<> PLOTPLUGINEDITOR_API UClass* StaticClass<UPlotPluginFactory>()
	{
		return UPlotPluginFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginFactory(Z_Construct_UClass_UPlotPluginFactory, &UPlotPluginFactory::StaticClass, TEXT("/Script/PlotPluginEditor"), TEXT("UPlotPluginFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
