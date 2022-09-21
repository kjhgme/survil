// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survill/SurvillGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvillGameModeBase() {}
// Cross Module References
	SURVILL_API UClass* Z_Construct_UClass_ASurvillGameModeBase_NoRegister();
	SURVILL_API UClass* Z_Construct_UClass_ASurvillGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Survill();
// End Cross Module References
	void ASurvillGameModeBase::StaticRegisterNativesASurvillGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvillGameModeBase);
	UClass* Z_Construct_UClass_ASurvillGameModeBase_NoRegister()
	{
		return ASurvillGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASurvillGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvillGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survill,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvillGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvillGameModeBase.h" },
		{ "ModuleRelativePath", "SurvillGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvillGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvillGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvillGameModeBase_Statics::ClassParams = {
		&ASurvillGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASurvillGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvillGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvillGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASurvillGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvillGameModeBase.OuterSingleton, Z_Construct_UClass_ASurvillGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvillGameModeBase.OuterSingleton;
	}
	template<> SURVILL_API UClass* StaticClass<ASurvillGameModeBase>()
	{
		return ASurvillGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvillGameModeBase);
	struct Z_CompiledInDeferFile_FID_Survill_Source_Survill_SurvillGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Survill_Source_Survill_SurvillGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvillGameModeBase, ASurvillGameModeBase::StaticClass, TEXT("ASurvillGameModeBase"), &Z_Registration_Info_UClass_ASurvillGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvillGameModeBase), 1358938879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Survill_Source_Survill_SurvillGameModeBase_h_90556709(TEXT("/Script/Survill"),
		Z_CompiledInDeferFile_FID_Survill_Source_Survill_SurvillGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Survill_Source_Survill_SurvillGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
