#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseStateTransition)
namespace GlobalNamespace {
class SelectableStateController;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct __SelectableStateController__ViewState;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseStateTransition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseStateTransition);
// Type: ::BaseStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5441))
// CS Name: ::BaseStateTransition*
class CORDL_TYPE BaseStateTransition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _selectableStateController offset 0x18
 __declspec(property(get=__get__selectableStateController, put=__set__selectableStateController)) ::GlobalNamespace::SelectableStateController*  _selectableStateController;

 __declspec(property(get=get_tweeningManager)) ::Tweening::TimeTweeningManager*  tweeningManager;

 __declspec(property(get=get_transition)) ::GlobalNamespace::BaseTransitionSO*  transition;

constexpr void __set__selectableStateController(::GlobalNamespace::SelectableStateController*  value) ;

constexpr ::GlobalNamespace::SelectableStateController* __get__selectableStateController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectableStateController*> __get__selectableStateController() const;

/// @brief Method get_tweeningManager addr 0x227c97c size 0x1c virtual false final false
inline ::Tweening::TimeTweeningManager* get_tweeningManager() ;

/// @brief Method get_transition addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BaseTransitionSO* get_transition() ;

/// @brief Method SetState addr 0x227c998 size 0x7c virtual false final false
inline void SetState(::GlobalNamespace::__SelectableStateController__ViewState  viewState) ;

/// @brief Method OnEnable addr 0x227ca14 size 0x9c virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x227cb68 size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x227cca0 size 0x98 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleSelectableStateControllerStateDidChange addr 0x227cd38 size 0x6c virtual false final false
inline void HandleSelectableStateControllerStateDidChange(::GlobalNamespace::__SelectableStateController__ViewState  state, bool  animated) ;

/// @brief Method TransitionToNormalState addr 0x227cda4 size 0x4 virtual true final false
inline void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x227cda8 size 0x4 virtual true final false
inline void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x227cdac size 0x4 virtual true final false
inline void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x227cdb0 size 0x4 virtual true final false
inline void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x227cdb4 size 0x4 virtual true final false
inline void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x227cdb8 size 0x4 virtual true final false
inline void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x227cdbc size 0x4 virtual true final false
inline void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x227cdc0 size 0x4 virtual true final false
inline void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x227cdc4 size 0x4 virtual true final false
inline void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x227cdc8 size 0x4 virtual true final false
inline void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x227cdcc size 0x4 virtual true final false
inline void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x227cdd0 size 0x4 virtual true final false
inline void SetSelectedAndHighlightedState() ;

static inline ::GlobalNamespace::BaseStateTransition* New_ctor() ;

/// @brief Method .ctor addr 0x227cdd4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseStateTransition(BaseStateTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseStateTransition(BaseStateTransition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseStateTransition()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseStateTransition, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseStateTransition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseStateTransition*, "", "BaseStateTransition");
