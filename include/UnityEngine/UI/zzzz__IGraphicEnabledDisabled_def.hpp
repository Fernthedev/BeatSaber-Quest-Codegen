#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGraphicEnabledDisabled)
// Forward declare root types
namespace UnityEngine::UI {
class IGraphicEnabledDisabled;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IGraphicEnabledDisabled);
// Type: UnityEngine.UI::IGraphicEnabledDisabled
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13047))
// CS Name: ::UnityEngine.UI::IGraphicEnabledDisabled*
class CORDL_TYPE IGraphicEnabledDisabled {
public:
// Declarations
/// @brief Method OnSiblingGraphicEnabledDisabled addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnSiblingGraphicEnabledDisabled() ;

// Ctor Parameters [CppParam { name: "", ty: "IGraphicEnabledDisabled", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IGraphicEnabledDisabled(IGraphicEnabledDisabled && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IGraphicEnabledDisabled", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGraphicEnabledDisabled(IGraphicEnabledDisabled const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IGraphicEnabledDisabled);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IGraphicEnabledDisabled*, "UnityEngine.UI", "IGraphicEnabledDisabled");
