#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PersistentScriptableObject)
// Forward declare root types
namespace GlobalNamespace {
class PersistentScriptableObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PersistentScriptableObject);
// Type: ::PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15857))
// CS Name: ::PersistentScriptableObject*
class CORDL_TYPE PersistentScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Method OnEnable addr 0xe28418 size 0x24 virtual true final false
inline void OnEnable() ;

static inline ::GlobalNamespace::PersistentScriptableObject* New_ctor() ;

/// @brief Method .ctor addr 0xe2843c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PersistentScriptableObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PersistentScriptableObject(PersistentScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersistentScriptableObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersistentScriptableObject(PersistentScriptableObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PersistentScriptableObject()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PersistentScriptableObject, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PersistentScriptableObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PersistentScriptableObject*, "", "PersistentScriptableObject");
