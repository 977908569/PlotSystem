// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlotTalkData;
#ifdef PLOTPLUGIN_PlotWidget_generated_h
#error "PlotWidget.generated.h already included, missing '#pragma once' in PlotWidget.h"
#endif
#define PLOTPLUGIN_PlotWidget_generated_h

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_13_DELEGATE \
static inline void FOnInput_DelegateWrapper(const FMulticastScriptDelegate& OnInput) \
{ \
	OnInput.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_RPC_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_EVENT_PARMS \
	struct PlotWidget_eventDoTalk_Parms \
	{ \
		FPlotTalkData InData; \
	};


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_CALLBACK_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotWidget(); \
	friend struct Z_Construct_UClass_UPlotWidget_Statics; \
public: \
	DECLARE_CLASS(UPlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotWidget)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPlotWidget(); \
	friend struct Z_Construct_UClass_UPlotWidget_Statics; \
public: \
	DECLARE_CLASS(UPlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotWidget)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotWidget(UPlotWidget&&); \
	NO_API UPlotWidget(const UPlotWidget&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotWidget(UPlotWidget&&); \
	NO_API UPlotWidget(const UPlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotWidget)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_8_PROLOG \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_EVENT_PARMS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
