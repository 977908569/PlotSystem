// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotCondition() {}
// Cross Module References
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotCondition_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotCondition_And_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotCondition_And();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotCondition_Or_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotCondition_Or();
// End Cross Module References
	DEFINE_FUNCTION(UPlotCondition::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotCondition::execConditionMet)
	{
		P_GET_OBJECT(UObject,Z_Param_InOuter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConditionMet_Implementation(Z_Param_InOuter);
		P_NATIVE_END;
	}
	static FName NAME_UPlotCondition_ConditionMet = FName(TEXT("ConditionMet"));
	bool UPlotCondition::ConditionMet(UObject* InOuter)
	{
		PlotCondition_eventConditionMet_Parms Parms;
		Parms.InOuter=InOuter;
		ProcessEvent(FindFunctionChecked(NAME_UPlotCondition_ConditionMet),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UPlotCondition_OnInit = FName(TEXT("OnInit"));
	void UPlotCondition::OnInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlotCondition_OnInit),NULL);
	}
	void UPlotCondition::StaticRegisterNativesUPlotCondition()
	{
		UClass* Class = UPlotCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConditionMet", &UPlotCondition::execConditionMet },
			{ "GetWorld", &UPlotCondition::execGetWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlotCondition_eventConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotCondition_eventConditionMet_Parms), &Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotCondition_eventConditionMet_Parms, InOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::NewProp_InOuter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotCondition, nullptr, "ConditionMet", nullptr, nullptr, sizeof(PlotCondition_eventConditionMet_Parms), Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotCondition_ConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotCondition_ConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotCondition_GetWorld_Statics
	{
		struct PlotCondition_eventGetWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotCondition_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotCondition, nullptr, "GetWorld", nullptr, nullptr, sizeof(PlotCondition_eventGetWorld_Parms), Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotCondition_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotCondition_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotCondition_OnInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotCondition_OnInit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Blueprint Function\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
		{ "ToolTip", "Blueprint Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotCondition_OnInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotCondition, nullptr, "OnInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotCondition_OnInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotCondition_OnInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotCondition_OnInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotCondition_OnInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotCondition_NoRegister()
	{
		return UPlotCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPlotCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotCondition_ConditionMet, "ConditionMet" }, // 2945389578
		{ &Z_Construct_UFunction_UPlotCondition_GetWorld, "GetWorld" }, // 1328345941
		{ &Z_Construct_UFunction_UPlotCondition_OnInit, "OnInit" }, // 3728796450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Condition\n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "PlotCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
		{ "ToolTip", "Condition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotCondition_Statics::ClassParams = {
		&UPlotCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotCondition, 2773106424);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotCondition>()
	{
		return UPlotCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotCondition(Z_Construct_UClass_UPlotCondition, &UPlotCondition::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotCondition);
	void UPlotCondition_And::StaticRegisterNativesUPlotCondition_And()
	{
	}
	UClass* Z_Construct_UClass_UPlotCondition_And_NoRegister()
	{
		return UPlotCondition_And::StaticClass();
	}
	struct Z_Construct_UClass_UPlotCondition_And_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotCondition_And_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_And_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * And\n */" },
		{ "DisplayName", "And" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "PlotCondition.h" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
		{ "ToolTip", "And" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "PlotCondition_And" },
		{ "DisplayName", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotCondition_And, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "PlotCondition_And" },
		{ "DisplayName", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotCondition_And_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotCondition_And_Statics::NewProp_Conditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotCondition_And_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotCondition_And>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotCondition_And_Statics::ClassParams = {
		&UPlotCondition_And::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotCondition_And_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_And_Statics::PropPointers),
		0,
		0x00B030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_And_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_And_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotCondition_And()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotCondition_And_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotCondition_And, 2792272467);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotCondition_And>()
	{
		return UPlotCondition_And::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotCondition_And(Z_Construct_UClass_UPlotCondition_And, &UPlotCondition_And::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotCondition_And"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotCondition_And);
	void UPlotCondition_Or::StaticRegisterNativesUPlotCondition_Or()
	{
	}
	UClass* Z_Construct_UClass_UPlotCondition_Or_NoRegister()
	{
		return UPlotCondition_Or::StaticClass();
	}
	struct Z_Construct_UClass_UPlotCondition_Or_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotCondition_Or_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlotCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_Or_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Or\n */" },
		{ "DisplayName", "Or" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "PlotCondition.h" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
		{ "ToolTip", "Or" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "PlotCondition_Or" },
		{ "DisplayName", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlotCondition_Or, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "PlotCondition_Or" },
		{ "DisplayName", "Conditions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlotCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlotCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotCondition_Or_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotCondition_Or_Statics::NewProp_Conditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotCondition_Or_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotCondition_Or>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotCondition_Or_Statics::ClassParams = {
		&UPlotCondition_Or::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlotCondition_Or_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_Or_Statics::PropPointers),
		0,
		0x00B030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotCondition_Or_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotCondition_Or_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotCondition_Or()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotCondition_Or_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotCondition_Or, 673185816);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotCondition_Or>()
	{
		return UPlotCondition_Or::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotCondition_Or(Z_Construct_UClass_UPlotCondition_Or, &UPlotCondition_Or::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotCondition_Or"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotCondition_Or);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
