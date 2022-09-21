// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal/UnrealGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGameModeBase() {}
// Cross Module References
	UNREAL_API UClass* Z_Construct_UClass_AUnrealGameModeBase_NoRegister();
	UNREAL_API UClass* Z_Construct_UClass_AUnrealGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Unreal();
// End Cross Module References
	void AUnrealGameModeBase::StaticRegisterNativesAUnrealGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealGameModeBase);
	UClass* Z_Construct_UClass_AUnrealGameModeBase_NoRegister()
	{
		return AUnrealGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealGameModeBase_Statics::ClassParams = {
		&AUnrealGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealGameModeBase.OuterSingleton;
	}
	template<> UNREAL_API UClass* StaticClass<AUnrealGameModeBase>()
	{
		return AUnrealGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealGameModeBase);
	struct Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealGameModeBase, AUnrealGameModeBase::StaticClass, TEXT("AUnrealGameModeBase"), &Z_Registration_Info_UClass_AUnrealGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealGameModeBase), 320062342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameModeBase_h_1504669540(TEXT("/Script/Unreal"),
		Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Source_Unreal_UnrealGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
