#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBakedLightWithRenderer)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class IBakedLightWithRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBakedLightWithRenderer);
// Type: ::IBakedLightWithRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15275))
// CS Name: ::IBakedLightWithRenderer*
class CORDL_TYPE IBakedLightWithRenderer {
public:
// Declarations
 __declspec(property(get=get_bakingMaterial)) ::UnityEngine::Material*  bakingMaterial;

/// @brief Method get_bakingMaterial addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Material* get_bakingMaterial() ;

// Ctor Parameters [CppParam { name: "", ty: "IBakedLightWithRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IBakedLightWithRenderer(IBakedLightWithRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IBakedLightWithRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBakedLightWithRenderer(IBakedLightWithRenderer const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBakedLightWithRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBakedLightWithRenderer*, "", "IBakedLightWithRenderer");
