// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECTION_sectionGameModeBase_generated_h
#error "sectionGameModeBase.generated.h already included, missing '#pragma once' in sectionGameModeBase.h"
#endif
#define SECTION_sectionGameModeBase_generated_h

#define section_Source_section_sectionGameModeBase_h_15_RPC_WRAPPERS
#define section_Source_section_sectionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define section_Source_section_sectionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAsectionGameModeBase(); \
	friend struct Z_Construct_UClass_AsectionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AsectionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/section"), NO_API) \
	DECLARE_SERIALIZER(AsectionGameModeBase)


#define section_Source_section_sectionGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAsectionGameModeBase(); \
	friend struct Z_Construct_UClass_AsectionGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AsectionGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/section"), NO_API) \
	DECLARE_SERIALIZER(AsectionGameModeBase)


#define section_Source_section_sectionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AsectionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AsectionGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AsectionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AsectionGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AsectionGameModeBase(AsectionGameModeBase&&); \
	NO_API AsectionGameModeBase(const AsectionGameModeBase&); \
public:


#define section_Source_section_sectionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AsectionGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AsectionGameModeBase(AsectionGameModeBase&&); \
	NO_API AsectionGameModeBase(const AsectionGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AsectionGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AsectionGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AsectionGameModeBase)


#define section_Source_section_sectionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define section_Source_section_sectionGameModeBase_h_12_PROLOG
#define section_Source_section_sectionGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	section_Source_section_sectionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	section_Source_section_sectionGameModeBase_h_15_RPC_WRAPPERS \
	section_Source_section_sectionGameModeBase_h_15_INCLASS \
	section_Source_section_sectionGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define section_Source_section_sectionGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	section_Source_section_sectionGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	section_Source_section_sectionGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	section_Source_section_sectionGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	section_Source_section_sectionGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECTION_API UClass* StaticClass<class AsectionGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID section_Source_section_sectionGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
