// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGravityInfo;
struct FVector;
class APlanetActor;
class UPrimitiveComponent;
#ifdef CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h
#error "CustomGravityComponent.generated.h already included, missing '#pragma once' in CustomGravityComponent.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h

#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=this->GetCurrentGravityInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCurrentGravityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlanetActor**)Z_Param__Result=this->GetCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpdatedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetUpdatedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdatedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewUpdatedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUpdatedComponent(Z_Param_NewUpdatedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPlanet) \
	{ \
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCurrentPlanet(Z_Param_NewPlanet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewGravityType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGravityType(EGravityType::Type(Z_Param_NewGravityType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravityScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGravityScale(Z_Param_NewGravityScale); \
		P_NATIVE_END; \
	}


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGravityInfo*)Z_Param__Result=this->GetCurrentGravityInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentGravityPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGravityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCurrentGravityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlanetActor**)Z_Param__Result=this->GetCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpdatedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=this->GetUpdatedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpdatedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewUpdatedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetUpdatedComponent(Z_Param_NewUpdatedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCurrentPlanet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearCurrentPlanet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentPlanet) \
	{ \
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCurrentPlanet(Z_Param_NewPlanet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewGravityType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGravityType(EGravityType::Type(Z_Param_NewGravityType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGravityScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGravityScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGravityScale(Z_Param_NewGravityScale); \
		P_NATIVE_END; \
	}


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend CUSTOMGRAVITYPLUGIN_API class UClass* Z_Construct_UClass_UCustomGravityComponent(); \
	public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend CUSTOMGRAVITYPLUGIN_API class UClass* Z_Construct_UClass_UCustomGravityComponent(); \
	public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGravityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGravityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public:


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGravityComponent)


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GravityScale() { return STRUCT_OFFSET(UCustomGravityComponent, GravityScale); } \
	FORCEINLINE static uint32 __PPO__CustomGravityInfo() { return STRUCT_OFFSET(UCustomGravityComponent, CustomGravityInfo); } \
	FORCEINLINE static uint32 __PPO__GravityType() { return STRUCT_OFFSET(UCustomGravityComponent, GravityType); } \
	FORCEINLINE static uint32 __PPO__PlanetActor() { return STRUCT_OFFSET(UCustomGravityComponent, PlanetActor); }


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_11_PROLOG
#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_RPC_WRAPPERS \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_INCLASS \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_INCLASS_NO_PURE_DECLS \
	Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Newtons_Heist_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
