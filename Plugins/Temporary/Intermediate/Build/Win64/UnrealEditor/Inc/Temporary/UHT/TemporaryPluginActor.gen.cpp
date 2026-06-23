// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Temporary/Public/TemporaryPluginActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemporaryPluginActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEMPORARY_API UClass* Z_Construct_UClass_ATemporaryPluginActor();
TEMPORARY_API UClass* Z_Construct_UClass_ATemporaryPluginActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Temporary();
// End Cross Module References

// Begin Class ATemporaryPluginActor
void ATemporaryPluginActor::StaticRegisterNativesATemporaryPluginActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemporaryPluginActor);
UClass* Z_Construct_UClass_ATemporaryPluginActor_NoRegister()
{
	return ATemporaryPluginActor::StaticClass();
}
struct Z_Construct_UClass_ATemporaryPluginActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TemporaryPluginActor.h" },
		{ "ModuleRelativePath", "Public/TemporaryPluginActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemporaryPluginActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATemporaryPluginActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Temporary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemporaryPluginActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemporaryPluginActor_Statics::ClassParams = {
	&ATemporaryPluginActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemporaryPluginActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemporaryPluginActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemporaryPluginActor()
{
	if (!Z_Registration_Info_UClass_ATemporaryPluginActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemporaryPluginActor.OuterSingleton, Z_Construct_UClass_ATemporaryPluginActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemporaryPluginActor.OuterSingleton;
}
template<> TEMPORARY_API UClass* StaticClass<ATemporaryPluginActor>()
{
	return ATemporaryPluginActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemporaryPluginActor);
ATemporaryPluginActor::~ATemporaryPluginActor() {}
// End Class ATemporaryPluginActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_ModuleAndPlugin_Plugins_Temporary_Source_Temporary_Public_TemporaryPluginActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemporaryPluginActor, ATemporaryPluginActor::StaticClass, TEXT("ATemporaryPluginActor"), &Z_Registration_Info_UClass_ATemporaryPluginActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemporaryPluginActor), 177314909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_ModuleAndPlugin_Plugins_Temporary_Source_Temporary_Public_TemporaryPluginActor_h_2266342002(TEXT("/Script/Temporary"),
	Z_CompiledInDeferFile_FID_UnrealProject_ModuleAndPlugin_Plugins_Temporary_Source_Temporary_Public_TemporaryPluginActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_ModuleAndPlugin_Plugins_Temporary_Source_Temporary_Public_TemporaryPluginActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
