// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlotPlugin/Public/PlotNodeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlotNodeData() {}
// Cross Module References
	PLOTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlotTalkData();
	UPackage* Z_Construct_UPackage__Script_PlotPlugin();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotNodeData_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotNodeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPluginNode_NoRegister();
	PLOTPLUGIN_API UClass* Z_Construct_UClass_UPlotPlugin_NoRegister();
// End Cross Module References
class UScriptStruct* FPlotTalkData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLOTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPlotTalkData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlotTalkData, Z_Construct_UPackage__Script_PlotPlugin(), TEXT("PlotTalkData"), sizeof(FPlotTalkData), Get_Z_Construct_UScriptStruct_FPlotTalkData_Hash());
	}
	return Singleton;
}
template<> PLOTPLUGIN_API UScriptStruct* StaticStruct<FPlotTalkData>()
{
	return FPlotTalkData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlotTalkData(FPlotTalkData::StaticStruct, TEXT("/Script/PlotPlugin"), TEXT("PlotTalkData"), false, nullptr, nullptr);
static struct FScriptStruct_PlotPlugin_StaticRegisterNativesFPlotTalkData
{
	FScriptStruct_PlotPlugin_StaticRegisterNativesFPlotTalkData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlotTalkData")),new UScriptStruct::TCppStructOps<FPlotTalkData>);
	}
} ScriptStruct_PlotPlugin_StaticRegisterNativesFPlotTalkData;
	struct Z_Construct_UScriptStruct_FPlotTalkData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Speaker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotTalkData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *Talk Config Data\n */" },
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
		{ "ToolTip", "Talk Config Data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlotTalkData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "PlotTalkData" },
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotTalkData, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "PlotTalkData" },
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlotTalkData, Speaker), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Speaker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlotTalkData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlotTalkData_Statics::NewProp_Speaker,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlotTalkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
		nullptr,
		&NewStructOps,
		"PlotTalkData",
		sizeof(FPlotTalkData),
		alignof(FPlotTalkData),
		Z_Construct_UScriptStruct_FPlotTalkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotTalkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlotTalkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlotTalkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlotTalkData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlotTalkData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlotPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlotTalkData"), sizeof(FPlotTalkData), Get_Z_Construct_UScriptStruct_FPlotTalkData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlotTalkData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlotTalkData_Hash() { return 1635240350U; }
	DEFINE_FUNCTION(UPlotNodeData::execGetNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotPluginNode**)Z_Param__Result=P_THIS->GetNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotNodeData::execGetPlugin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPlotPlugin**)Z_Param__Result=P_THIS->GetPlugin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlotNodeData::execGetDataDes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDataDes_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UPlotNodeData_GetDataDes = FName(TEXT("GetDataDes"));
	FString UPlotNodeData::GetDataDes()
	{
		PlotNodeData_eventGetDataDes_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UPlotNodeData_GetDataDes),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPlotNodeData_OnDo = FName(TEXT("OnDo"));
	void UPlotNodeData::OnDo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlotNodeData_OnDo),NULL);
	}
	void UPlotNodeData::StaticRegisterNativesUPlotNodeData()
	{
		UClass* Class = UPlotNodeData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataDes", &UPlotNodeData::execGetDataDes },
			{ "GetNode", &UPlotNodeData::execGetNode },
			{ "GetPlugin", &UPlotNodeData::execGetPlugin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotNodeData_eventGetDataDes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotNodeData, nullptr, "GetDataDes", nullptr, nullptr, sizeof(PlotNodeData_eventGetDataDes_Parms), Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotNodeData_GetDataDes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotNodeData_GetDataDes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotNodeData_GetNode_Statics
	{
		struct PlotNodeData_eventGetNode_Parms
		{
			UPlotPluginNode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotNodeData_eventGetNode_Parms, ReturnValue), Z_Construct_UClass_UPlotPluginNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotNodeData, nullptr, "GetNode", nullptr, nullptr, sizeof(PlotNodeData_eventGetNode_Parms), Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotNodeData_GetNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotNodeData_GetNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics
	{
		struct PlotNodeData_eventGetPlugin_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlotNodeData_eventGetPlugin_Parms, ReturnValue), Z_Construct_UClass_UPlotPlugin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotNodeData, nullptr, "GetPlugin", nullptr, nullptr, sizeof(PlotNodeData_eventGetPlugin_Parms), Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotNodeData_GetPlugin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotNodeData_GetPlugin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlotNodeData_OnDo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlotNodeData_OnDo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlotNodeData_OnDo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlotNodeData, nullptr, "OnDo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlotNodeData_OnDo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlotNodeData_OnDo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlotNodeData_OnDo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlotNodeData_OnDo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlotNodeData_NoRegister()
	{
		return UPlotNodeData::StaticClass();
	}
	struct Z_Construct_UClass_UPlotNodeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWait_MetaData[];
#endif
		static void NewProp_bWait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWait;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlotNodeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlotPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlotNodeData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlotNodeData_GetDataDes, "GetDataDes" }, // 3266206272
		{ &Z_Construct_UFunction_UPlotNodeData_GetNode, "GetNode" }, // 2212568924
		{ &Z_Construct_UFunction_UPlotNodeData_GetPlugin, "GetPlugin" }, // 2478107893
		{ &Z_Construct_UFunction_UPlotNodeData_OnDo, "OnDo" }, // 2082875732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotNodeData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom Base Data\n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "PlotNodeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
		{ "ToolTip", "Custom Base Data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait_MetaData[] = {
		{ "Category", "PlotNodeData" },
		{ "DisplayName", "Is Wait" },
		{ "ModuleRelativePath", "Public/PlotNodeData.h" },
	};
#endif
	void Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait_SetBit(void* Obj)
	{
		((UPlotNodeData*)Obj)->bWait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait = { "bWait", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlotNodeData), &Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlotNodeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlotNodeData_Statics::NewProp_bWait,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlotNodeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlotNodeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlotNodeData_Statics::ClassParams = {
		&UPlotNodeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlotNodeData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlotNodeData_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlotNodeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlotNodeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlotNodeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlotNodeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlotNodeData, 2711402325);
	template<> PLOTPLUGIN_API UClass* StaticClass<UPlotNodeData>()
	{
		return UPlotNodeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlotNodeData(Z_Construct_UClass_UPlotNodeData, &UPlotNodeData::StaticClass, TEXT("/Script/PlotPlugin"), TEXT("UPlotNodeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlotNodeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
