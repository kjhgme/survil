// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegittest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_gittest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_gittest()
	{
		if (!Z_Registration_Info_UPackage__Script_gittest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/gittest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE6456466,
				0x729B7CF1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_gittest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_gittest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_gittest(Z_Construct_UPackage__Script_gittest, TEXT("/Script/gittest"), Z_Registration_Info_UPackage__Script_gittest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE6456466, 0x729B7CF1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
