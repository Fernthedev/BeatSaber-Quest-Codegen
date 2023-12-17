#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ButtonStaticAnimations)
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace HMUI {
class NoTransitionsButton;
}
// Forward declare root types
namespace HMUI {
class ButtonStaticAnimations;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonStaticAnimations);
// Type: HMUI::ButtonStaticAnimations
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13621))
// CS Name: ::HMUI::ButtonStaticAnimations*
class CORDL_TYPE ButtonStaticAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _button offset 0x18
 __declspec(property(get=__get__button, put=__set__button)) ::HMUI::NoTransitionsButton*  _button;

/// @brief Field _normalClip offset 0x20
 __declspec(property(get=__get__normalClip, put=__set__normalClip)) ::UnityEngine::AnimationClip*  _normalClip;

/// @brief Field _highlightedClip offset 0x28
 __declspec(property(get=__get__highlightedClip, put=__set__highlightedClip)) ::UnityEngine::AnimationClip*  _highlightedClip;

/// @brief Field _pressedClip offset 0x30
 __declspec(property(get=__get__pressedClip, put=__set__pressedClip)) ::UnityEngine::AnimationClip*  _pressedClip;

/// @brief Field _disabledClip offset 0x38
 __declspec(property(get=__get__disabledClip, put=__set__disabledClip)) ::UnityEngine::AnimationClip*  _disabledClip;

/// @brief Field _didStart offset 0x40
 __declspec(property(get=__get__didStart, put=__set__didStart)) bool  _didStart;

constexpr void __set__button(::HMUI::NoTransitionsButton*  value) ;

constexpr ::HMUI::NoTransitionsButton* __get__button() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::NoTransitionsButton*> __get__button() const;

constexpr void __set__normalClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__normalClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__normalClip() const;

constexpr void __set__highlightedClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__highlightedClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__highlightedClip() const;

constexpr void __set__pressedClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__pressedClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__pressedClip() const;

constexpr void __set__disabledClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__disabledClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__disabledClip() const;

constexpr void __set__didStart(bool  value) ;

constexpr bool& __get__didStart() ;

constexpr bool const& __get__didStart() const;

/// @brief Method Awake addr 0x2130848 size 0x88 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x21308d0 size 0x24 virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x21309ec size 0x1c virtual false final false
inline void OnEnable() ;

/// @brief Method OnDestroy addr 0x2130a08 size 0xd0 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleButtonSelectionStateDidChange addr 0x21308f4 size 0xf8 virtual false final false
inline void HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState  state) ;

static inline ::HMUI::ButtonStaticAnimations* New_ctor() ;

/// @brief Method .ctor addr 0x2130ad8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStaticAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonStaticAnimations(ButtonStaticAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStaticAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonStaticAnimations(ButtonStaticAnimations const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ButtonStaticAnimations()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonStaticAnimations, 0x48>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ButtonStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonStaticAnimations*, "HMUI", "ButtonStaticAnimations");
