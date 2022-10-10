// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "humanandghost/humanandghostGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodehumanandghostGameModeBase() {}
// Cross Module References
	HUMANANDGHOST_API UClass* Z_Construct_UClass_AhumanandghostGameModeBase_NoRegister();
	HUMANANDGHOST_API UClass* Z_Construct_UClass_AhumanandghostGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_humanandghost();
// End Cross Module References
	void AhumanandghostGameModeBase::StaticRegisterNativesAhumanandghostGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AhumanandghostGameModeBase_NoRegister()
	{
		return AhumanandghostGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AhumanandghostGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AhumanandghostGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_humanandghost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AhumanandghostGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "humanandghostGameModeBase.h" },
		{ "ModuleRelativePath", "humanandghostGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AhumanandghostGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AhumanandghostGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AhumanandghostGameModeBase_Statics::ClassParams = {
		&AhumanandghostGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AhumanandghostGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AhumanandghostGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AhumanandghostGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AhumanandghostGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AhumanandghostGameModeBase, 2060620312);
	template<> HUMANANDGHOST_API UClass* StaticClass<AhumanandghostGameModeBase>()
	{
		return AhumanandghostGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AhumanandghostGameModeBase(Z_Construct_UClass_AhumanandghostGameModeBase, &AhumanandghostGameModeBase::StaticClass, TEXT("/Script/humanandghost"), TEXT("AhumanandghostGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AhumanandghostGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
