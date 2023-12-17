#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceSprite)
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceSprite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceSprite);
// Type: UnityEngine.AddressableAssets::AssetReferenceSprite
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14082)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14082), inst: 777 }), TypeDefinitionIndex(TypeDefinitionIndex(10291))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14087))
// CS Name: ::UnityEngine.AddressableAssets::AssetReferenceSprite*
class CORDL_TYPE AssetReferenceSprite : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite*>)]{};

static inline ::UnityEngine::AddressableAssets::AssetReferenceSprite* New_ctor(::StringW  guid) ;

/// @brief Method .ctor addr 0x2a23c24 size 0x58 virtual false final false
inline void _ctor(::StringW  guid) ;

/// @brief Method ValidateAsset addr 0x2a23c7c size 0x8 virtual true final false
inline bool ValidateAsset(::StringW  path) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceSprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReferenceSprite(AssetReferenceSprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceSprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReferenceSprite(AssetReferenceSprite const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetReferenceSprite()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceSprite, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceSprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceSprite*, "UnityEngine.AddressableAssets", "AssetReferenceSprite");
