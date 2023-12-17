#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AssetObjectListSO)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class AssetObjectListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssetObjectListSO);
// Type: ::AssetObjectListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5818))
// CS Name: ::AssetObjectListSO*
class CORDL_TYPE AssetObjectListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _objects offset 0x18
 __declspec(property(get=__get__objects, put=__set__objects)) ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  _objects;

 __declspec(property(get=get_objects)) ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  objects;

constexpr void __set__objects(::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*>& __get__objects() ;

constexpr ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> const& __get__objects() const;

/// @brief Method get_objects addr 0x22eb0b4 size 0x8 virtual false final false
inline ::ArrayW<::UnityEngine::Object*,::Array<::UnityEngine::Object*>*> get_objects() ;

static inline ::GlobalNamespace::AssetObjectListSO* New_ctor() ;

/// @brief Method .ctor addr 0x22eb0bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AssetObjectListSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetObjectListSO(AssetObjectListSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetObjectListSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetObjectListSO(AssetObjectListSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetObjectListSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssetObjectListSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssetObjectListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssetObjectListSO*, "", "AssetObjectListSO");
