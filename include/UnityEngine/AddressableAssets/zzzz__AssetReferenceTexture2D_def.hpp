#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceTexture2D)
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceTexture2D);
// Type: UnityEngine.AddressableAssets::AssetReferenceTexture2D
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14082), inst: 403 }), TypeDefinitionIndex(TypeDefinitionIndex(14082))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14085))
// CS Name: ::UnityEngine.AddressableAssets::AssetReferenceTexture2D*
class CORDL_TYPE AssetReferenceTexture2D : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Texture2D*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Texture2D*>)]{};

static inline ::UnityEngine::AddressableAssets::AssetReferenceTexture2D* New_ctor(::StringW  guid) ;

/// @brief Method .ctor addr 0x2a23b74 size 0x58 virtual false final false
inline void _ctor(::StringW  guid) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReferenceTexture2D(AssetReferenceTexture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReferenceTexture2D(AssetReferenceTexture2D const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetReferenceTexture2D()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceTexture2D, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceTexture2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceTexture2D*, "UnityEngine.AddressableAssets", "AssetReferenceTexture2D");
