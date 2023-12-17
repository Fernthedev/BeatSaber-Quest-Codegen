#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGroupBox)
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupBox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IGroupBox);
// Type: UnityEngine.UIElements::IGroupBox
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6937))
// CS Name: ::UnityEngine.UIElements::IGroupBox*
class CORDL_TYPE IGroupBox {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IGroupBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IGroupBox(IGroupBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IGroupBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGroupBox(IGroupBox const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IGroupBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupBox*, "UnityEngine.UIElements", "IGroupBox");
