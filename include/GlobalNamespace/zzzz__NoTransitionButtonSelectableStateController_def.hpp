#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
CORDL_MODULE_EXPORT(NoTransitionButtonSelectableStateController)
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionButtonSelectableStateController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoTransitionButtonSelectableStateController);
// Type: ::NoTransitionButtonSelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5457), inst: 4965 }), TypeDefinitionIndex(TypeDefinitionIndex(13623)), TypeDefinitionIndex(TypeDefinitionIndex(5457))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5458))
// CS Name: ::NoTransitionButtonSelectableStateController*
class CORDL_TYPE NoTransitionButtonSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::HMUI::NoTransitionsButton*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::SelectableStateController_1<::HMUI::NoTransitionsButton*>)]{};

/// @brief Method OnEnable addr 0x227f60c size 0xa4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x227f768 size 0x8c virtual false final false
inline void OnDisable() ;

/// @brief Method HandleNoTransitionButtonSelectionStateDidChange addr 0x227f7f4 size 0x8 virtual false final false
inline void HandleNoTransitionButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState  state) ;

/// @brief Method ResolveSelectionState addr 0x227f6b0 size 0xb8 virtual false final false
inline void ResolveSelectionState(::HMUI::__NoTransitionsButton__SelectionState  state, bool  animated) ;

static inline ::GlobalNamespace::NoTransitionButtonSelectableStateController* New_ctor() ;

/// @brief Method .ctor addr 0x227f7fc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoTransitionButtonSelectableStateController()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoTransitionButtonSelectableStateController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoTransitionButtonSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoTransitionButtonSelectableStateController*, "", "NoTransitionButtonSelectableStateController");
