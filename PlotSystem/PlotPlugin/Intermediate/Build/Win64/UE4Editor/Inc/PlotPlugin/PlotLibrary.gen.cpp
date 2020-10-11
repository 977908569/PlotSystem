// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotLibrary() {}
// Cross Module References
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotLibrary_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	DEFINE_FUNCTION(UPlotLibrary::execGetPlotWidget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotWidget**)Z_Param__Result=UPlotLibrary::GetPlotWidget(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotLibrary::execPlayPlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSoftObjectPath,Z_Param_InPlotPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPlotLibrary::PlayPlot(Z_Param_WorldContextObject,Z_Param_InPlotPath);
		P_NATIVE_END;
	}
	void UPlotLibrary::StaticRegisterNativesUPlotLibrary()
	{
		UClass* Class = UPlotLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlotWidget", &UPlotLibrary::execGetPlotWidget },
			{ "PlayPlot", &UPlotLibrary::execPlayPlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics
	{
		struct PlotLibrary_eventGetPlotWidget_Parms
		{
			UObject* WorldContextObject;
			UPlotWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventGetPlotWidget_Parms, ReturnValue), Z_Construct_UClass_UPlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventGetPlotWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Plot" },
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotLibrary, nullptr, "GetPlotWidget", nullptr, nullptr, sizeof(PlotLibrary_eventGetPlotWidget_Parms), Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotLibrary_GetPlotWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotLibrary_GetPlotWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics
	{
		struct PlotLibrary_eventPlayPlot_Parms
		{
			UObject* WorldContextObject;
			FSoftObjectPath InPlotPath;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlotPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::NewProp_InPlotPath = { "InPlotPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventPlayPlot_Parms, InPlotPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotLibrary_eventPlayPlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::NewProp_InPlotPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Plot" },
		{ "Comment", "/**\n\x09 * Test Play TODO Table-> ID\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
		{ "ToolTip", "Test Play TODO Table-> ID" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotLibrary, nullptr, "PlayPlot", nullptr, nullptr, sizeof(PlotLibrary_eventPlayPlot_Parms), Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotLibrary_PlayPlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotLibrary_PlayPlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotLibrary_NoRegister()
	{
		return UPlotLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPlotLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotLibrary_GetPlotWidget, "GetPlotWidget" }, // 1742006838
		{ &Z_Construct_UFunction_UPlotLibrary_PlayPlot, "PlayPlot" }, // 1128374502
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utils Func\n */" },
		{ "IncludePath", "PlotLibrary.h" },
		{ "ModuleRelativePath", "Public/PlotLibrary.h" },
		{ "ToolTip", "Utils Func" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotLibrary_Statics::ClassParams = {
		&UPlotLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotLibrary, 2180742669);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotLibrary>()
	{
		return UPlotLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotLibrary(Z_Construct_UClass_UPlotLibrary, &UPlotLibrary::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
