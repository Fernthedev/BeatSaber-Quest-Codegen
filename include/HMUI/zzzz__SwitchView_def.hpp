#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SwitchView)
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace HMUI {
struct __SwitchView__AnimationType;
}
namespace HMUI {
class ToggleWithCallbacks;
}
// Forward declare root types
namespace HMUI {
struct __SwitchView__AnimationType;
}
namespace HMUI {
class SwitchView;
}
// Write type traits
MARK_VAL_T(::HMUI::__SwitchView__AnimationType);
MARK_REF_PTR_T(::HMUI::SwitchView);
// Type: ::AnimationType
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13657))
// CS Name: ::SwitchView::AnimationType
struct CORDL_TYPE __SwitchView__AnimationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SwitchView__AnimationType_Unwrapped
enum struct ____SwitchView__AnimationType_Unwrapped : int32_t {
__E_OnOff = static_cast<int32_t>(0x0),
__E_SelectedState = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OnOff value: static_cast<int32_t>(0x0)
static ::HMUI::__SwitchView__AnimationType const OnOff;

/// @brief Field SelectedState value: static_cast<int32_t>(0x1)
static ::HMUI::__SwitchView__AnimationType const SelectedState;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SwitchView__AnimationType_Unwrapped () const noexcept {
return std::bit_cast<____SwitchView__AnimationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SwitchView__AnimationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SwitchView__AnimationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SwitchView__AnimationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__SwitchView__AnimationType, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::SwitchView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13658))
// CS Name: ::HMUI::SwitchView*
class CORDL_TYPE SwitchView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimationType = ::HMUI::__SwitchView__AnimationType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _animationType offset 0x18
 __declspec(property(get=__get__animationType, put=__set__animationType)) ::HMUI::__SwitchView__AnimationType  _animationType;

/// @brief Field _normalAnimationClip offset 0x20
 __declspec(property(get=__get__normalAnimationClip, put=__set__normalAnimationClip)) ::UnityEngine::AnimationClip*  _normalAnimationClip;

/// @brief Field _highlightedAnimationClip offset 0x28
 __declspec(property(get=__get__highlightedAnimationClip, put=__set__highlightedAnimationClip)) ::UnityEngine::AnimationClip*  _highlightedAnimationClip;

/// @brief Field _pressedAnimationClip offset 0x30
 __declspec(property(get=__get__pressedAnimationClip, put=__set__pressedAnimationClip)) ::UnityEngine::AnimationClip*  _pressedAnimationClip;

/// @brief Field _disabledAnimationClip offset 0x38
 __declspec(property(get=__get__disabledAnimationClip, put=__set__disabledAnimationClip)) ::UnityEngine::AnimationClip*  _disabledAnimationClip;

/// @brief Field _onAnimationClip offset 0x40
 __declspec(property(get=__get__onAnimationClip, put=__set__onAnimationClip)) ::UnityEngine::AnimationClip*  _onAnimationClip;

/// @brief Field _offAnimationClip offset 0x48
 __declspec(property(get=__get__offAnimationClip, put=__set__offAnimationClip)) ::UnityEngine::AnimationClip*  _offAnimationClip;

/// @brief Field _selectedAnimationClip offset 0x50
 __declspec(property(get=__get__selectedAnimationClip, put=__set__selectedAnimationClip)) ::UnityEngine::AnimationClip*  _selectedAnimationClip;

/// @brief Field _selectedAndHighlightedAnimationClip offset 0x58
 __declspec(property(get=__get__selectedAndHighlightedAnimationClip, put=__set__selectedAndHighlightedAnimationClip)) ::UnityEngine::AnimationClip*  _selectedAndHighlightedAnimationClip;

/// @brief Field _toggle offset 0x60
 __declspec(property(get=__get__toggle, put=__set__toggle)) ::HMUI::ToggleWithCallbacks*  _toggle;

constexpr void __set__animationType(::HMUI::__SwitchView__AnimationType  value) ;

constexpr ::HMUI::__SwitchView__AnimationType& __get__animationType() ;

constexpr ::HMUI::__SwitchView__AnimationType const& __get__animationType() const;

constexpr void __set__normalAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__normalAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__normalAnimationClip() const;

constexpr void __set__highlightedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__highlightedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__highlightedAnimationClip() const;

constexpr void __set__pressedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__pressedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__pressedAnimationClip() const;

constexpr void __set__disabledAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__disabledAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__disabledAnimationClip() const;

constexpr void __set__onAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__onAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__onAnimationClip() const;

constexpr void __set__offAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__offAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__offAnimationClip() const;

constexpr void __set__selectedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__selectedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__selectedAnimationClip() const;

constexpr void __set__selectedAndHighlightedAnimationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__selectedAndHighlightedAnimationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__selectedAndHighlightedAnimationClip() const;

constexpr void __set__toggle(::HMUI::ToggleWithCallbacks*  value) ;

constexpr ::HMUI::ToggleWithCallbacks* __get__toggle() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleWithCallbacks*> __get__toggle() const;

/// @brief Method Awake addr 0x2146a7c size 0x50 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x2146acc size 0x114 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2146db8 size 0x10c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleOnValueChanged addr 0x2146f78 size 0x4 virtual false final false
inline void HandleOnValueChanged(bool  value) ;

/// @brief Method HandleStateDidChange addr 0x2146f7c size 0x4 virtual false final false
inline void HandleStateDidChange(::HMUI::__ToggleWithCallbacks__SelectionState  value) ;

/// @brief Method RefreshVisuals addr 0x2146c94 size 0x124 virtual false final false
inline void RefreshVisuals() ;

static inline ::HMUI::SwitchView* New_ctor() ;

/// @brief Method .ctor addr 0x2146fd4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SwitchView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SwitchView(SwitchView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwitchView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwitchView(SwitchView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SwitchView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SwitchView, 0x68>, "Size mismatch!");

} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SwitchView__AnimationType, "HMUI", "SwitchView/AnimationType");
NEED_NO_BOX(::HMUI::SwitchView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SwitchView*, "HMUI", "SwitchView");
