#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleControls)
namespace GlobalNamespace {
struct __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleInputHandler;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::UI {
class InputField;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleControls;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardSampleControls);
MARK_VAL_T(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup);
// Type: ::OVRVirtualKeyboardBackup
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8060))
// CS Name: ::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup
struct CORDL_TYPE __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field _textCommitField offset 0x0
 __declspec(property(get=__get__textCommitField, put=__set__textCommitField)) ::UnityEngine::UI::InputField*  _textCommitField;

/// @brief Field _position offset 0x8
 __declspec(property(get=__get__position, put=__set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _rotation offset 0x14
 __declspec(property(get=__get__rotation, put=__set__rotation)) ::UnityEngine::Quaternion  _rotation;

/// @brief Field _scale offset 0x24
 __declspec(property(get=__get__scale, put=__set__scale)) ::UnityEngine::Vector3  _scale;

/// @brief Field _rightControllerDirectTransform offset 0x30
 __declspec(property(get=__get__rightControllerDirectTransform, put=__set__rightControllerDirectTransform)) ::UnityEngine::Transform*  _rightControllerDirectTransform;

/// @brief Field _rightControllerRootTransform offset 0x38
 __declspec(property(get=__get__rightControllerRootTransform, put=__set__rightControllerRootTransform)) ::UnityEngine::Transform*  _rightControllerRootTransform;

/// @brief Field _leftControllerDirectTransform offset 0x40
 __declspec(property(get=__get__leftControllerDirectTransform, put=__set__leftControllerDirectTransform)) ::UnityEngine::Transform*  _leftControllerDirectTransform;

/// @brief Field _leftControllerRootTransform offset 0x48
 __declspec(property(get=__get__leftControllerRootTransform, put=__set__leftControllerRootTransform)) ::UnityEngine::Transform*  _leftControllerRootTransform;

/// @brief Field _controllerRayInteraction offset 0x50
 __declspec(property(get=__get__controllerRayInteraction, put=__set__controllerRayInteraction)) bool  _controllerRayInteraction;

/// @brief Field _controllerDirectInteraction offset 0x51
 __declspec(property(get=__get__controllerDirectInteraction, put=__set__controllerDirectInteraction)) bool  _controllerDirectInteraction;

/// @brief Field _handLeft offset 0x58
 __declspec(property(get=__get__handLeft, put=__set__handLeft)) ::GlobalNamespace::OVRHand*  _handLeft;

/// @brief Field _handRight offset 0x60
 __declspec(property(get=__get__handRight, put=__set__handRight)) ::GlobalNamespace::OVRHand*  _handRight;

/// @brief Field _handRayInteraction offset 0x68
 __declspec(property(get=__get__handRayInteraction, put=__set__handRayInteraction)) bool  _handRayInteraction;

/// @brief Field _handDirectInteraction offset 0x69
 __declspec(property(get=__get__handDirectInteraction, put=__set__handDirectInteraction)) bool  _handDirectInteraction;

/// @brief Field _controllerRaycaster offset 0x70
 __declspec(property(get=__get__controllerRaycaster, put=__set__controllerRaycaster)) ::UnityEngine::EventSystems::OVRPhysicsRaycaster*  _controllerRaycaster;

/// @brief Field _handRaycaster offset 0x78
 __declspec(property(get=__get__handRaycaster, put=__set__handRaycaster)) ::UnityEngine::EventSystems::OVRPhysicsRaycaster*  _handRaycaster;

constexpr void __set__textCommitField(::UnityEngine::UI::InputField*  value) ;

constexpr ::UnityEngine::UI::InputField* __get__textCommitField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> __get__textCommitField() const;

constexpr void __set__position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__position() ;

constexpr ::UnityEngine::Vector3 const& __get__position() const;

constexpr void __set__rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__rotation() ;

constexpr ::UnityEngine::Quaternion const& __get__rotation() const;

constexpr void __set__scale(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__scale() ;

constexpr ::UnityEngine::Vector3 const& __get__scale() const;

constexpr void __set__rightControllerDirectTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__rightControllerDirectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__rightControllerDirectTransform() const;

constexpr void __set__rightControllerRootTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__rightControllerRootTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__rightControllerRootTransform() const;

constexpr void __set__leftControllerDirectTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__leftControllerDirectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__leftControllerDirectTransform() const;

constexpr void __set__leftControllerRootTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__leftControllerRootTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__leftControllerRootTransform() const;

constexpr void __set__controllerRayInteraction(bool  value) ;

constexpr bool& __get__controllerRayInteraction() ;

constexpr bool const& __get__controllerRayInteraction() const;

constexpr void __set__controllerDirectInteraction(bool  value) ;

constexpr bool& __get__controllerDirectInteraction() ;

constexpr bool const& __get__controllerDirectInteraction() const;

constexpr void __set__handLeft(::GlobalNamespace::OVRHand*  value) ;

constexpr ::GlobalNamespace::OVRHand* __get__handLeft() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> __get__handLeft() const;

constexpr void __set__handRight(::GlobalNamespace::OVRHand*  value) ;

constexpr ::GlobalNamespace::OVRHand* __get__handRight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> __get__handRight() const;

constexpr void __set__handRayInteraction(bool  value) ;

constexpr bool& __get__handRayInteraction() ;

constexpr bool const& __get__handRayInteraction() const;

constexpr void __set__handDirectInteraction(bool  value) ;

constexpr bool& __get__handDirectInteraction() ;

constexpr bool const& __get__handDirectInteraction() const;

constexpr void __set__controllerRaycaster(::UnityEngine::EventSystems::OVRPhysicsRaycaster*  value) ;

constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster* __get__controllerRaycaster() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRPhysicsRaycaster*> __get__controllerRaycaster() const;

constexpr void __set__handRaycaster(::UnityEngine::EventSystems::OVRPhysicsRaycaster*  value) ;

constexpr ::UnityEngine::EventSystems::OVRPhysicsRaycaster* __get__handRaycaster() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRPhysicsRaycaster*> __get__handRaycaster() const;

/// @brief Method .ctor addr 0x279f9bc size 0xdc virtual false final false
inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard) ;

/// @brief Method RestoreTo addr 0x279f49c size 0xc8 virtual false final false
inline void RestoreTo(::GlobalNamespace::OVRVirtualKeyboard*  keyboard) ;

// Ctor Parameters [CppParam { name: "_textCommitField", ty: "::UnityEngine::UI::InputField*", modifiers: "", def_value: None }, CppParam { name: "_position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_rightControllerDirectTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "_rightControllerRootTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "_leftControllerDirectTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "_leftControllerRootTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "_controllerRayInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_controllerDirectInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_handLeft", ty: "::GlobalNamespace::OVRHand*", modifiers: "", def_value: None }, CppParam { name: "_handRight", ty: "::GlobalNamespace::OVRHand*", modifiers: "", def_value: None }, CppParam { name: "_handRayInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_handDirectInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_controllerRaycaster", ty: "::UnityEngine::EventSystems::OVRPhysicsRaycaster*", modifiers: "", def_value: None }, CppParam { name: "_handRaycaster", ty: "::UnityEngine::EventSystems::OVRPhysicsRaycaster*", modifiers: "", def_value: None }]
constexpr __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup(::UnityEngine::UI::InputField*  _textCommitField, ::UnityEngine::Vector3  _position, ::UnityEngine::Quaternion  _rotation, ::UnityEngine::Vector3  _scale, ::UnityEngine::Transform*  _rightControllerDirectTransform, ::UnityEngine::Transform*  _rightControllerRootTransform, ::UnityEngine::Transform*  _leftControllerDirectTransform, ::UnityEngine::Transform*  _leftControllerRootTransform, bool  _controllerRayInteraction, bool  _controllerDirectInteraction, ::GlobalNamespace::OVRHand*  _handLeft, ::GlobalNamespace::OVRHand*  _handRight, bool  _handRayInteraction, bool  _handDirectInteraction, ::UnityEngine::EventSystems::OVRPhysicsRaycaster*  _controllerRaycaster, ::UnityEngine::EventSystems::OVRPhysicsRaycaster*  _handRaycaster) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRVirtualKeyboardSampleControls
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8061))
// CS Name: ::OVRVirtualKeyboardSampleControls*
class CORDL_TYPE OVRVirtualKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OVRVirtualKeyboardBackup = ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field THUMBSTICK_DEADZONE offset 0x0
static constexpr float_t  THUMBSTICK_DEADZONE{0.2};

/// @brief Field ShowButton offset 0x18
 __declspec(property(get=__get_ShowButton, put=__set_ShowButton)) ::UnityEngine::UI::Button*  ShowButton;

/// @brief Field MoveButton offset 0x20
 __declspec(property(get=__get_MoveButton, put=__set_MoveButton)) ::UnityEngine::UI::Button*  MoveButton;

/// @brief Field HideButton offset 0x28
 __declspec(property(get=__get_HideButton, put=__set_HideButton)) ::UnityEngine::UI::Button*  HideButton;

/// @brief Field MoveNearButton offset 0x30
 __declspec(property(get=__get_MoveNearButton, put=__set_MoveNearButton)) ::UnityEngine::UI::Button*  MoveNearButton;

/// @brief Field MoveFarButton offset 0x38
 __declspec(property(get=__get_MoveFarButton, put=__set_MoveFarButton)) ::UnityEngine::UI::Button*  MoveFarButton;

/// @brief Field DestroyKeyboardButton offset 0x40
 __declspec(property(get=__get_DestroyKeyboardButton, put=__set_DestroyKeyboardButton)) ::UnityEngine::UI::Button*  DestroyKeyboardButton;

/// @brief Field keyboard offset 0x48
 __declspec(property(get=__get_keyboard, put=__set_keyboard)) ::GlobalNamespace::OVRVirtualKeyboard*  keyboard;

/// @brief Field inputHandler offset 0x50
 __declspec(property(get=__get_inputHandler, put=__set_inputHandler)) ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*  inputHandler;

/// @brief Field isMovingKeyboard_ offset 0x58
 __declspec(property(get=__get_isMovingKeyboard_, put=__set_isMovingKeyboard_)) bool  isMovingKeyboard_;

/// @brief Field isMovingKeyboardFinished_ offset 0x59
 __declspec(property(get=__get_isMovingKeyboardFinished_, put=__set_isMovingKeyboardFinished_)) bool  isMovingKeyboardFinished_;

/// @brief Field keyboardMoveDistance_ offset 0x5c
 __declspec(property(get=__get_keyboardMoveDistance_, put=__set_keyboardMoveDistance_)) float_t  keyboardMoveDistance_;

/// @brief Field keyboardScale_ offset 0x60
 __declspec(property(get=__get_keyboardScale_, put=__set_keyboardScale_)) float_t  keyboardScale_;

/// @brief Field keyboardBackup offset 0x68
 __declspec(property(get=__get_keyboardBackup, put=__set_keyboardBackup)) ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup  keyboardBackup;

constexpr void __set_ShowButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_ShowButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_ShowButton() const;

constexpr void __set_MoveButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_MoveButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_MoveButton() const;

constexpr void __set_HideButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_HideButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_HideButton() const;

constexpr void __set_MoveNearButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_MoveNearButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_MoveNearButton() const;

constexpr void __set_MoveFarButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_MoveFarButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_MoveFarButton() const;

constexpr void __set_DestroyKeyboardButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get_DestroyKeyboardButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get_DestroyKeyboardButton() const;

constexpr void __set_keyboard(::GlobalNamespace::OVRVirtualKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRVirtualKeyboard* __get_keyboard() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> __get_keyboard() const;

constexpr void __set_inputHandler(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*  value) ;

constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* __get_inputHandler() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*> __get_inputHandler() const;

constexpr void __set_isMovingKeyboard_(bool  value) ;

constexpr bool& __get_isMovingKeyboard_() ;

constexpr bool const& __get_isMovingKeyboard_() const;

constexpr void __set_isMovingKeyboardFinished_(bool  value) ;

constexpr bool& __get_isMovingKeyboardFinished_() ;

constexpr bool const& __get_isMovingKeyboardFinished_() const;

constexpr void __set_keyboardMoveDistance_(float_t  value) ;

constexpr float_t& __get_keyboardMoveDistance_() ;

constexpr float_t const& __get_keyboardMoveDistance_() const;

constexpr void __set_keyboardScale_(float_t  value) ;

constexpr float_t& __get_keyboardScale_() ;

constexpr float_t const& __get_keyboardScale_() const;

constexpr void __set_keyboardBackup(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup  value) ;

constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup& __get_keyboardBackup() ;

constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup const& __get_keyboardBackup() const;

/// @brief Method Start addr 0x279efe0 size 0x1cc virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x279f2b0 size 0x1ec virtual false final false
inline void OnDestroy() ;

/// @brief Method ShowKeyboard addr 0x279f1ac size 0x104 virtual false final false
inline void ShowKeyboard() ;

/// @brief Method MoveKeyboard addr 0x279f6bc size 0x12c virtual false final false
inline void MoveKeyboard() ;

/// @brief Method MoveKeyboardNear addr 0x279f80c size 0x48 virtual false final false
inline void MoveKeyboardNear() ;

/// @brief Method MoveKeyboardFar addr 0x279f854 size 0x48 virtual false final false
inline void MoveKeyboardFar() ;

/// @brief Method HideKeyboard addr 0x279f89c size 0x3c virtual false final false
inline void HideKeyboard() ;

/// @brief Method DestroyKeyboard addr 0x279f8d8 size 0xe4 virtual false final false
inline void DestroyKeyboard() ;

/// @brief Method OnHideKeyboard addr 0x279fa98 size 0x4 virtual false final false
inline void OnHideKeyboard() ;

/// @brief Method UpdateButtonInteractable addr 0x279f564 size 0x158 virtual false final false
inline void UpdateButtonInteractable() ;

/// @brief Method Update addr 0x279fa9c size 0x274 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRVirtualKeyboardSampleControls* New_ctor() ;

/// @brief Method .ctor addr 0x27a0030 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleControls", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRVirtualKeyboardSampleControls(OVRVirtualKeyboardSampleControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleControls", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRVirtualKeyboardSampleControls(OVRVirtualKeyboardSampleControls const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRVirtualKeyboardSampleControls()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardSampleControls, 0xe8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleControls*, "", "OVRVirtualKeyboardSampleControls");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, "", "OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup");
