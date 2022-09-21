// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAME/GAMEGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAMEGameModeBase() {}
// Cross Module References
	GAME_API UClass* Z_Construct_UClass_AGAMEGameModeBase_NoRegister();
	GAME_API UClass* Z_Construct_UClass_AGAMEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GAME();
// End Cross Module References
	void AGAMEGameModeBase::StaticRegisterNativesAGAMEGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAMEGameModeBase);
	UClass* Z_Construct_UClass_AGAMEGameModeBase_NoRegister()
	{
		return AGAMEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGAMEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAMEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAMEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GAMEGameModeBase.h" },
		{ "ModuleRelativePath", "GAMEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAMEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAMEGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAMEGameModeBase_Statics::ClassParams = {
		&AGAMEGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGAMEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGAMEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAMEGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGAMEGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAMEGameModeBase.OuterSingleton, Z_Construct_UClass_AGAMEGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGAMEGameModeBase.OuterSingleton;
	}
	template<> GAME_API UClass* StaticClass<AGAMEGameModeBase>()
	{
		return AGAMEGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAMEGameModeBase);
	struct Z_CompiledInDeferFile_FID_GAME_Source_GAME_GAMEGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAME_Source_GAME_GAMEGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGAMEGameModeBase, AGAMEGameModeBase::StaticClass, TEXT("AGAMEGameModeBase"), &Z_Registration_Info_UClass_AGAMEGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAMEGameModeBase), 1438385080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAME_Source_GAME_GAMEGameModeBase_h_1192874862(TEXT("/Script/GAME"),
		Z_CompiledInDeferFile_FID_GAME_Source_GAME_GAMEGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAME_Source_GAME_GAMEGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
