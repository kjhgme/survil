// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAME_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GAME;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GAME()
	{
		if (!Z_Registration_Info_UPackage__Script_GAME.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GAME",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE9BF5A8A,
				0xEF21C251,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GAME.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GAME.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GAME(Z_Construct_UPackage__Script_GAME, TEXT("/Script/GAME"), Z_Registration_Info_UPackage__Script_GAME, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE9BF5A8A, 0xEF21C251));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
