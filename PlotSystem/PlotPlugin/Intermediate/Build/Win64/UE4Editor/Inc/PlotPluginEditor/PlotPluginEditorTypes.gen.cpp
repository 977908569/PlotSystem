// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPluginEditor/Private/PlotPluginEditorTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotPluginEditorTypes() {}
// Cross Module References
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginEditorTypes_NoRegister();
	PLOTPLUGINEDITOR_API UClass* Z_Construct_UClass_UPlotPluginEditorTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlotPluginEditor();
// End Cross Module References
	void UPlotPluginEditorTypes::StaticRegisterNativesUPlotPluginEditorTypes()
	{
	}
	UClass* Z_Construct_UClass_UPlotPluginEditorTypes_NoRegister()
	{
		return UPlotPluginEditorTypes::StaticClass();
	}
	struct Z_Construct_UClass_UPlotPluginEditorTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotPluginEditorTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotPluginEditorTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Type\n */" },
		{ "IncludePath", "PlotPluginEditorTypes.h" },
		{ "ModuleRelativePath", "Private/PlotPluginEditorTypes.h" },
		{ "ToolTip", "Type" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotPluginEditorTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotPluginEditorTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotPluginEditorTypes_Statics::ClassParams = {
		&UPlotPluginEditorTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlotPluginEditorTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotPluginEditorTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotPluginEditorTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotPluginEditorTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotPluginEditorTypes, 1232385094);
	template<> PLOTPLUGINEDITOR_API UClass* StaticClass<UPlotPluginEditorTypes>()
	{
		return UPlotPluginEditorTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotPluginEditorTypes(Z_Construct_UClass_UPlotPluginEditorTypes, &UPlotPluginEditorTypes::StaticClass, TEXT("/Script/PlotPluginEditor"), TEXT("UPlotPluginEditorTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotPluginEditorTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
