// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME1START_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define GAME1START_MyCharacter_generated_h

#define FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game1Start"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMyCharacter*>(this); }


#define FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCharacter(AMyCharacter&&); \
	AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h_10_PROLOG
#define FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME1START_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_tjackson_Documents_GitHub_gamedesign1_Source_Game1Start_Public_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
