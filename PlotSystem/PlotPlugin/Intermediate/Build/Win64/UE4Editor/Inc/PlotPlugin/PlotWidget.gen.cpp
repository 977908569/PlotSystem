// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotWidget() {}
// Cross Module References
	PLOTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotWidget();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	PLOTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlotTalkData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotWidget, nullptr, "OnInput__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UPlotWidget_DoTalk = FName(TEXT("DoTalk"));
	void UPlotWidget::DoTalk(FPlotTalkData InData)
	{
		PlotWidget_eventDoTalk_Parms Parms;
		Parms.InData=InData;
		ProcessEvent(FindFunctionChecked(NAME_UPlotWidget_DoTalk),&Parms);
	}
	void UPlotWidget::StaticRegisterNativesUPlotWidget()
	{
	}
	struct Z_Construct_UFunction_UPlotWidget_DoTalk_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotWidget_eventDoTalk_Parms, InData), Z_Construct_UScriptStruct_FPlotTalkData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotWidget, nullptr, "DoTalk", nullptr, nullptr, sizeof(PlotWidget_eventDoTalk_Parms), Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotWidget_DoTalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotWidget_DoTalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotWidget_NoRegister()
	{
		return UPlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotWidget_DoTalk, "DoTalk" }, // 3917332548
		{ &Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature, "OnInput__DelegateSignature" }, // 2667700363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Test Widget\n */" },
		{ "IncludePath", "PlotWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotWidget.h" },
		{ "ToolTip", "Test Widget" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotWidget_Statics::NewProp_OnInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlotWidget_Statics::NewProp_OnInput = { "OnInput", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotWidget, OnInput), Z_Construct_UDelegateFunction_UPlotWidget_OnInput__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPlotWidget_Statics::NewProp_OnInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotWidget_Statics::NewProp_OnInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotWidget_Statics::NewProp_OnInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotWidget_Statics::ClassParams = {
		&UPlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotWidget, 649512499);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotWidget>()
	{
		return UPlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotWidget(Z_Construct_UClass_UPlotWidget, &UPlotWidget::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
