// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Unreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Unreal()
	{
		if (!Z_Registration_Info_UPackage__Script_Unreal.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Unreal",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7C8C4C2B,
				0x47BDE02F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Unreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Unreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Unreal(Z_Construct_UPackage__Script_Unreal, TEXT("/Script/Unreal"), Z_Registration_Info_UPackage__Script_Unreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7C8C4C2B, 0x47BDE02F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
