#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_PreAssetEventData)
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PreAssetEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PreAssetEventData);
// Type: HoudiniEngineUnity::HEU_PreAssetEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9599))
// CS Name: ::HoudiniEngineUnity::HEU_PreAssetEventData*
class CORDL_TYPE HEU_PreAssetEventData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field Asset offset 0x10
 __declspec(property(get=__get_Asset, put=__set_Asset)) ::HoudiniEngineUnity::HEU_HoudiniAsset*  Asset;

/// @brief Field AssetType offset 0x18
 __declspec(property(get=__get_AssetType, put=__set_AssetType)) ::HoudiniEngineUnity::HEU_AssetEventType  AssetType;

constexpr void __set_Asset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* __get_Asset() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> __get_Asset() const;

constexpr void __set_AssetType(::HoudiniEngineUnity::HEU_AssetEventType  value) ;

constexpr ::HoudiniEngineUnity::HEU_AssetEventType& __get_AssetType() ;

constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& __get_AssetType() const;

static inline ::HoudiniEngineUnity::HEU_PreAssetEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::HoudiniEngineUnity::HEU_AssetEventType  assetType) ;

/// @brief Method .ctor addr 0x214e388 size 0x30 virtual false final false
inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, ::HoudiniEngineUnity::HEU_AssetEventType  assetType) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_PreAssetEventData(HEU_PreAssetEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_PreAssetEventData(HEU_PreAssetEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_PreAssetEventData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PreAssetEventData, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PreAssetEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PreAssetEventData*, "HoudiniEngineUnity", "HEU_PreAssetEventData");
