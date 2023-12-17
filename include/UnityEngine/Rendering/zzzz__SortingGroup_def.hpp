#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(SortingGroup)
// Forward declare root types
namespace UnityEngine::Rendering {
class SortingGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SortingGroup);
// Type: UnityEngine.Rendering::SortingGroup
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10374))
// CS Name: ::UnityEngine.Rendering::SortingGroup*
class CORDL_TYPE SortingGroup : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Behaviour)]{};

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingGroup(SortingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingGroup(SortingGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SortingGroup()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingGroup, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SortingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
