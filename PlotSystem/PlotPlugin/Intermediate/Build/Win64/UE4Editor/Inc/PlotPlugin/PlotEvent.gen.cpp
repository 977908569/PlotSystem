// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotEvent() {}
// Cross Module References
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotEvent_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPlugin_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlotEvent::execGetPlotPlugin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotPlugin**)Z_Param__Result=P_THIS->GetPlotPlugin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotEvent::execGetWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorld();
		P_NATIVE_END;
	}
	static FName NAME_UPlotEvent_OnEvent = FName(TEXT("OnEvent"));
	bool UPlotEvent::OnEvent()
	{
		PlotEvent_eventOnEvent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UPlotEvent_OnEvent),&Parms);
		return !!Parms.ReturnValue;
	}
	void UPlotEvent::StaticRegisterNativesUPlotEvent()
	{
		UClass* Class = UPlotEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlotPlugin", &UPlotEvent::execGetPlotPlugin },
			{ "GetWorld", &UPlotEvent::execGetWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics
	{
		struct PlotEvent_eventGetPlotPlugin_Parms
		{
			UPlotPlugin* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotEvent_eventGetPlotPlugin_Parms, ReturnValue), Z_Construct_UClass_UPlotPlugin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotEvent, nullptr, "GetPlotPlugin", nullptr, nullptr, sizeof(PlotEvent_eventGetPlotPlugin_Parms), Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotEvent_GetPlotPlugin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotEvent_GetPlotPlugin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotEvent_GetWorld_Statics
	{
		struct PlotEvent_eventGetWorld_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotEvent_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotEvent, nullptr, "GetWorld", nullptr, nullptr, sizeof(PlotEvent_eventGetWorld_Parms), Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotEvent_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotEvent_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotEvent_OnEvent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlotEvent_eventOnEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlotEvent_eventOnEvent_Parms), &Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *Blueprint Function\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
		{ "ToolTip", "Blueprint Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotEvent, nullptr, "OnEvent", nullptr, nullptr, sizeof(PlotEvent_eventOnEvent_Parms), Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotEvent_OnEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotEvent_OnEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotEvent_NoRegister()
	{
		return UPlotEvent::StaticClass();
	}
	struct Z_Construct_UClass_UPlotEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotEvent_GetPlotPlugin, "GetPlotPlugin" }, // 1454721308
		{ &Z_Construct_UFunction_UPlotEvent_GetWorld, "GetWorld" }, // 3179439573
		{ &Z_Construct_UFunction_UPlotEvent_OnEvent, "OnEvent" }, // 3334960038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotEvent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom Event\n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "PlotEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotEvent.h" },
		{ "ToolTip", "Custom Event" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotEvent_Statics::ClassParams = {
		&UPlotEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlotEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotEvent, 460588542);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotEvent>()
	{
		return UPlotEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotEvent(Z_Construct_UClass_UPlotEvent, &UPlotEvent::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
