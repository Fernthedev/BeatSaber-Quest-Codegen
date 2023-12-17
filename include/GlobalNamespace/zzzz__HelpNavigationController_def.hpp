#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__NavigationController_def.hpp"
CORDL_MODULE_EXPORT(HelpNavigationController)
// Forward declare root types
namespace GlobalNamespace {
class HelpNavigationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpNavigationController);
// Type: ::HelpNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13588))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5647))
// CS Name: ::HelpNavigationController*
class CORDL_TYPE HelpNavigationController : public ::HMUI::NavigationController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::NavigationController)]{};

static inline ::GlobalNamespace::HelpNavigationController* New_ctor() ;

/// @brief Method .ctor addr 0x22b592c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HelpNavigationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpNavigationController(HelpNavigationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpNavigationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpNavigationController(HelpNavigationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HelpNavigationController()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpNavigationController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpNavigationController*, "", "HelpNavigationController");
