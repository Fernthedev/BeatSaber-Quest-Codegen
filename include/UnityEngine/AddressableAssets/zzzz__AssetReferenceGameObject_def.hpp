#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceGameObject)
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceGameObject);
// Type: UnityEngine.AddressableAssets::AssetReferenceGameObject
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10196)), TypeDefinitionIndex(TypeDefinitionIndex(14082)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14082), inst: 311 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14083))
// CS Name: ::UnityEngine.AddressableAssets::AssetReferenceGameObject*
class CORDL_TYPE AssetReferenceGameObject : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::GameObject*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::GameObject*>)]{};

static inline ::UnityEngine::AddressableAssets::AssetReferenceGameObject* New_ctor(::StringW  guid) ;

/// @brief Method .ctor addr 0x2a23ac4 size 0x58 virtual false final false
inline void _ctor(::StringW  guid) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceGameObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReferenceGameObject(AssetReferenceGameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceGameObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReferenceGameObject(AssetReferenceGameObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetReferenceGameObject()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceGameObject, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceGameObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceGameObject*, "UnityEngine.AddressableAssets", "AssetReferenceGameObject");
