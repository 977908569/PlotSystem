// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlotPlugin;
class UWorld;
#ifdef PLOTPLUGIN_PlotEvent_generated_h
#error "PlotEvent.generated.h already included, missing '#pragma once' in PlotEvent.h"
#endif
#define PLOTPLUGIN_PlotEvent_generated_h

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlotPlugin); \
	DECLARE_FUNCTION(execGetWorld);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlotPlugin); \
	DECLARE_FUNCTION(execGetWorld);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_EVENT_PARMS \
	struct PlotEvent_eventOnEvent_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlotEvent_eventOnEvent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_CALLBACK_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotEvent(); \
	friend struct Z_Construct_UClass_UPlotEvent_Statics; \
public: \
	DECLARE_CLASS(UPlotEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotEvent)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPlotEvent(); \
	friend struct Z_Construct_UClass_UPlotEvent_Statics; \
public: \
	DECLARE_CLASS(UPlotEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotEvent)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotEvent(UPlotEvent&&); \
	NO_API UPlotEvent(const UPlotEvent&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotEvent(UPlotEvent&&); \
	NO_API UPlotEvent(const UPlotEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotEvent)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_8_PROLOG \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_EVENT_PARMS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
