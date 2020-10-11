// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLOTPLUGIN_PlotPlugin_generated_h
#error "PlotPlugin.generated.h already included, missing '#pragma once' in PlotPlugin.h"
#endif
#define PLOTPLUGIN_PlotPlugin_generated_h

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotPlugin(); \
	friend struct Z_Construct_UClass_UPlotPlugin_Statics; \
public: \
	DECLARE_CLASS(UPlotPlugin, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotPlugin)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPlotPlugin(); \
	friend struct Z_Construct_UClass_UPlotPlugin_Statics; \
public: \
	DECLARE_CLASS(UPlotPlugin, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotPlugin)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotPlugin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotPlugin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotPlugin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotPlugin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotPlugin(UPlotPlugin&&); \
	NO_API UPlotPlugin(const UPlotPlugin&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotPlugin(UPlotPlugin&&); \
	NO_API UPlotPlugin(const UPlotPlugin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotPlugin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotPlugin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotPlugin)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_9_PROLOG
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotPlugin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotPlugin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
