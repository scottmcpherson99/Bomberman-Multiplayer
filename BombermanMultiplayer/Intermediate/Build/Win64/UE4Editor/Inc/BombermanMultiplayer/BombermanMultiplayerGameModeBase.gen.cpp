// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BombermanMultiplayer/GameSettings/BombermanMultiplayerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanMultiplayerGameModeBase() {}
// Cross Module References
	BOMBERMANMULTIPLAYER_API UClass* Z_Construct_UClass_ABombermanMultiplayerGameModeBase_NoRegister();
	BOMBERMANMULTIPLAYER_API UClass* Z_Construct_UClass_ABombermanMultiplayerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BombermanMultiplayer();
// End Cross Module References
	void ABombermanMultiplayerGameModeBase::StaticRegisterNativesABombermanMultiplayerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABombermanMultiplayerGameModeBase_NoRegister()
	{
		return ABombermanMultiplayerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BombermanMultiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameSettings/BombermanMultiplayerGameModeBase.h" },
		{ "ModuleRelativePath", "GameSettings/BombermanMultiplayerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombermanMultiplayerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::ClassParams = {
		&ABombermanMultiplayerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombermanMultiplayerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombermanMultiplayerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanMultiplayerGameModeBase, 3399168963);
	template<> BOMBERMANMULTIPLAYER_API UClass* StaticClass<ABombermanMultiplayerGameModeBase>()
	{
		return ABombermanMultiplayerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanMultiplayerGameModeBase(Z_Construct_UClass_ABombermanMultiplayerGameModeBase, &ABombermanMultiplayerGameModeBase::StaticClass, TEXT("/Script/BombermanMultiplayer"), TEXT("ABombermanMultiplayerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanMultiplayerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
