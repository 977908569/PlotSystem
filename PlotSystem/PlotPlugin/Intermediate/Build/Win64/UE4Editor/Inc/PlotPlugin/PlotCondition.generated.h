// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class UObject;
#ifdef PLOTPLUGIN_PlotCondition_generated_h
#error "PlotCondition.generated.h already included, missing '#pragma once' in PlotCondition.h"
#endif
#define PLOTPLUGIN_PlotCondition_generated_h

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_RPC_WRAPPERS \
	virtual bool ConditionMet_Implementation(UObject* InOuter); \
 \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execConditionMet);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execConditionMet);


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_EVENT_PARMS \
	struct PlotCondition_eventConditionMet_Parms \
	{ \
		UObject* InOuter; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlotCondition_eventConditionMet_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_CALLBACK_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotCondition(); \
	friend struct Z_Construct_UClass_UPlotCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPlotCondition(); \
	friend struct Z_Construct_UClass_UPlotCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition(UPlotCondition&&); \
	NO_API UPlotCondition(const UPlotCondition&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition(UPlotCondition&&); \
	NO_API UPlotCondition(const UPlotCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_7_PROLOG \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_EVENT_PARMS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_CALLBACK_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotCondition>();

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_RPC_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotCondition_And(); \
	friend struct Z_Construct_UClass_UPlotCondition_And_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition_And, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition_And)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUPlotCondition_And(); \
	friend struct Z_Construct_UClass_UPlotCondition_And_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition_And, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition_And)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition_And(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition_And) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition_And); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition_And); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition_And(UPlotCondition_And&&); \
	NO_API UPlotCondition_And(const UPlotCondition_And&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition_And(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition_And(UPlotCondition_And&&); \
	NO_API UPlotCondition_And(const UPlotCondition_And&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition_And); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition_And); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition_And)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_30_PROLOG
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotCondition_And>();

#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_SPARSE_DATA
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_RPC_WRAPPERS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotCondition_Or(); \
	friend struct Z_Construct_UClass_UPlotCondition_Or_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition_Or, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition_Or)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUPlotCondition_Or(); \
	friend struct Z_Construct_UClass_UPlotCondition_Or_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition_Or, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition_Or)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition_Or(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition_Or) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition_Or); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition_Or); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition_Or(UPlotCondition_Or&&); \
	NO_API UPlotCondition_Or(const UPlotCondition_Or&); \
public:


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition_Or(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition_Or(UPlotCondition_Or&&); \
	NO_API UPlotCondition_Or(const UPlotCondition_Or&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition_Or); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition_Or); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition_Or)


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_PRIVATE_PROPERTY_OFFSET
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_44_PROLOG
#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_RPC_WRAPPERS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_INCLASS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_PRIVATE_PROPERTY_OFFSET \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_SPARSE_DATA \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_INCLASS_NO_PURE_DECLS \
	Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTPLUGIN_API UClass* StaticClass<class UPlotCondition_Or>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plot_Plugins_PlotPlugin_Source_PlotPlugin_Public_PlotCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
