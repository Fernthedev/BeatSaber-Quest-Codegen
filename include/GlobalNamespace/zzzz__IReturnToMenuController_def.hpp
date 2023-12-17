#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReturnToMenuController)
// Forward declare root types
namespace GlobalNamespace {
class IReturnToMenuController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReturnToMenuController);
// Type: ::IReturnToMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5069))
// CS Name: ::IReturnToMenuController*
class CORDL_TYPE IReturnToMenuController {
public:
// Declarations
/// @brief Method ReturnToMenu addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReturnToMenu() ;

// Ctor Parameters [CppParam { name: "", ty: "IReturnToMenuController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IReturnToMenuController(IReturnToMenuController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IReturnToMenuController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IReturnToMenuController(IReturnToMenuController const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReturnToMenuController*, "", "IReturnToMenuController");
