#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHeightSettingsController)
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeightSettingsController);
// Type: ::PlayerHeightSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5608))
// CS Name: ::PlayerHeightSettingsController*
class CORDL_TYPE PlayerHeightSettingsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _text offset 0x18
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _setButton offset 0x20
 __declspec(property(get=__get__setButton, put=__set__setButton)) ::UnityEngine::UI::Button*  _setButton;

/// @brief Field _roomCenter offset 0x28
 __declspec(property(get=__get__roomCenter, put=__set__roomCenter)) ::GlobalNamespace::Vector3SO*  _roomCenter;

/// @brief Field _vrPlatformHelper offset 0x30
 __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper*  _vrPlatformHelper;

/// @brief Field valueDidChangeEvent offset 0x38
 __declspec(property(get=__get_valueDidChangeEvent, put=__set_valueDidChangeEvent)) ::System::Action_1<float_t>*  valueDidChangeEvent;

/// @brief Field _buttonBinder offset 0x40
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

/// @brief Field _value offset 0x48
 __declspec(property(get=__get__value, put=__set__value)) float_t  _value;

 __declspec(property(get=get_value)) float_t  value;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__setButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__setButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__setButton() const;

constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO*  value) ;

constexpr ::GlobalNamespace::Vector3SO* __get__roomCenter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> __get__roomCenter() const;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper* __get__vrPlatformHelper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> __get__vrPlatformHelper() const;

constexpr void __set_valueDidChangeEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_valueDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_valueDidChangeEvent() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

constexpr void __set__value(float_t  value) ;

constexpr float_t& __get__value() ;

constexpr float_t const& __get__value() const;

/// @brief Method add_valueDidChangeEvent addr 0x22aba80 size 0xb0 virtual false final false
inline void add_valueDidChangeEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_valueDidChangeEvent addr 0x22abb30 size 0xb0 virtual false final false
inline void remove_valueDidChangeEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method get_value addr 0x22abbe0 size 0x8 virtual false final false
inline float_t get_value() ;

/// @brief Method Awake addr 0x22abbe8 size 0xc4 virtual false final false
inline void Awake() ;

/// @brief Method Init addr 0x22abcac size 0x8 virtual false final false
inline void Init(float_t  playerHeight) ;

/// @brief Method AutoSetHeight addr 0x22abd5c size 0x120 virtual false final false
inline void AutoSetHeight() ;

/// @brief Method RefreshUI addr 0x22abcb4 size 0xa8 virtual false final false
inline void RefreshUI() ;

static inline ::GlobalNamespace::PlayerHeightSettingsController* New_ctor() ;

/// @brief Method .ctor addr 0x22abe7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerHeightSettingsController(PlayerHeightSettingsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightSettingsController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerHeightSettingsController(PlayerHeightSettingsController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerHeightSettingsController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeightSettingsController, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeightSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightSettingsController*, "", "PlayerHeightSettingsController");
