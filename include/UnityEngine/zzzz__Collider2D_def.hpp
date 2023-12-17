#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Collider2D)
// Forward declare root types
namespace UnityEngine {
class Collider2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collider2D);
// Type: UnityEngine::Collider2D
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15936))
// CS Name: ::UnityEngine::Collider2D*
class CORDL_TYPE Collider2D : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Behaviour)]{};

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Collider2D(Collider2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collider2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collider2D(Collider2D const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Collider2D()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collider2D, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Collider2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collider2D*, "UnityEngine", "Collider2D");
