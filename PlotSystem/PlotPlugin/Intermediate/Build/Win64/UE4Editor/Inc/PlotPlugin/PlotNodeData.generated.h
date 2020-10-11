// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlotPluginNode;
class UPlotPlugin;
#ifdef PLOTPLUGIN_PlotNodeData_generated_h
#error "PlotNodeData.generated.h already included, missing '#pragma once' in PlotNodeData.h"
#endif
#define PLOTPLUGIN_PlotNodeData_generated_h

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlotTalkData_Statics; \
	PLOTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PLOTPLUGIN_API UScriptStruct* StaticStruct<struct FPlotTalkData>();

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_RPC_WRAPPERS \
	virtual FString GetDataDes_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetPlugin); \
	DECLARE_FUNCTION(execGetDataDes);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetDataDes_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetPlugin); \
	DECLARE_FUNCTION(execGetDataDes);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_EVENT_PARMS \
	struct PlotNodeData_eventGetDataDes_Parms \
	{ \
		FString ReturnValue; \
	};


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_CALLBACK_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotNodeData(); \
	friend struct Z_Construct_UClass_UPlotNodeData_Statics; \
public: \
	DECLARE_CLASS(UPlotNodeData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotNodeData)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPlotNodeData(); \
	friend struct Z_Construct_UClass_UPlotNodeData_Statics; \
public: \
	DECLARE_CLASS(UPlotNodeData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotNodeData)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotNodeData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotNodeData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotNodeData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotNodeData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotNodeData(UPlotNodeData&&); \
	NO_API UPlotNodeData(const UPlotNodeData&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotNodeData(UPlotNodeData&&); \
	NO_API UPlotNodeData(const UPlotNodeData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotNodeData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotNodeData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotNodeData)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_20_PROLOG \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_EVENT_PARMS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotNodeData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotNodeData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
