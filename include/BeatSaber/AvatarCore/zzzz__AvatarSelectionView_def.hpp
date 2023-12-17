#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AvatarSelectionView)
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Action;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarSelectionView);
// Type: BeatSaber.AvatarCore::AvatarSelectionView
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15177))
// CS Name: ::BeatSaber.AvatarCore::AvatarSelectionView*
class CORDL_TYPE AvatarSelectionView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _createButton offset 0x18
 __declspec(property(get=__get__createButton, put=__set__createButton)) ::UnityEngine::UI::Button*  _createButton;

/// @brief Field _editButton offset 0x20
 __declspec(property(get=__get__editButton, put=__set__editButton)) ::UnityEngine::UI::Button*  _editButton;

/// @brief Field _setAsPreferredButton offset 0x28
 __declspec(property(get=__get__setAsPreferredButton, put=__set__setAsPreferredButton)) ::UnityEngine::UI::Button*  _setAsPreferredButton;

/// @brief Field _currentlyPreferredText offset 0x30
 __declspec(property(get=__get__currentlyPreferredText, put=__set__currentlyPreferredText)) ::TMPro::TextMeshProUGUI*  _currentlyPreferredText;

/// @brief Field _rectTransform offset 0x38
 __declspec(property(get=__get__rectTransform, put=__set__rectTransform)) ::UnityEngine::RectTransform*  _rectTransform;

/// @brief Field _backgroundImageView offset 0x40
 __declspec(property(get=__get__backgroundImageView, put=__set__backgroundImageView)) ::HMUI::ImageView*  _backgroundImageView;

/// @brief Field _preferredColor offset 0x48
 __declspec(property(get=__get__preferredColor, put=__set__preferredColor)) ::UnityEngine::Color  _preferredColor;

/// @brief Field _normalColor offset 0x58
 __declspec(property(get=__get__normalColor, put=__set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field didPressEditButtonEvent offset 0x68
 __declspec(property(get=__get_didPressEditButtonEvent, put=__set_didPressEditButtonEvent)) ::System::Action*  didPressEditButtonEvent;

/// @brief Field didPressCreateButtonEvent offset 0x70
 __declspec(property(get=__get_didPressCreateButtonEvent, put=__set_didPressCreateButtonEvent)) ::System::Action*  didPressCreateButtonEvent;

/// @brief Field didPressPreferredButtonEvent offset 0x78
 __declspec(property(get=__get_didPressPreferredButtonEvent, put=__set_didPressPreferredButtonEvent)) ::System::Action*  didPressPreferredButtonEvent;

/// @brief Field _buttonBinder offset 0x80
 __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder)) ::HMUI::ButtonBinder*  _buttonBinder;

 __declspec(property(get=get_rectTransform)) ::UnityEngine::RectTransform*  rectTransform;

constexpr void __set__createButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__createButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__createButton() const;

constexpr void __set__editButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__editButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__editButton() const;

constexpr void __set__setAsPreferredButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__setAsPreferredButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__setAsPreferredButton() const;

constexpr void __set__currentlyPreferredText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__currentlyPreferredText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__currentlyPreferredText() const;

constexpr void __set__rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransform() const;

constexpr void __set__backgroundImageView(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__backgroundImageView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__backgroundImageView() const;

constexpr void __set__preferredColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__preferredColor() ;

constexpr ::UnityEngine::Color const& __get__preferredColor() const;

constexpr void __set__normalColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__normalColor() ;

constexpr ::UnityEngine::Color const& __get__normalColor() const;

constexpr void __set_didPressEditButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressEditButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressEditButtonEvent() const;

constexpr void __set_didPressCreateButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressCreateButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressCreateButtonEvent() const;

constexpr void __set_didPressPreferredButtonEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didPressPreferredButtonEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didPressPreferredButtonEvent() const;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder*  value) ;

constexpr ::HMUI::ButtonBinder* __get__buttonBinder() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> __get__buttonBinder() const;

/// @brief Method add_didPressEditButtonEvent addr 0xe0c2c0 size 0x9c virtual false final false
inline void add_didPressEditButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressEditButtonEvent addr 0xe0c35c size 0x9c virtual false final false
inline void remove_didPressEditButtonEvent(::System::Action*  value) ;

/// @brief Method add_didPressCreateButtonEvent addr 0xe0c3f8 size 0x9c virtual false final false
inline void add_didPressCreateButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressCreateButtonEvent addr 0xe0c494 size 0x9c virtual false final false
inline void remove_didPressCreateButtonEvent(::System::Action*  value) ;

/// @brief Method add_didPressPreferredButtonEvent addr 0xe0c530 size 0x9c virtual false final false
inline void add_didPressPreferredButtonEvent(::System::Action*  value) ;

/// @brief Method remove_didPressPreferredButtonEvent addr 0xe0c5cc size 0x9c virtual false final false
inline void remove_didPressPreferredButtonEvent(::System::Action*  value) ;

/// @brief Method get_rectTransform addr 0xe0c668 size 0x8 virtual false final false
inline ::UnityEngine::RectTransform* get_rectTransform() ;

/// @brief Method Start addr 0xe0c670 size 0x144 virtual true final false
inline void Start() ;

/// @brief Method SetPreferred addr 0xe0c7b4 size 0xb4 virtual true final false
inline void SetPreferred(bool  isPreferred) ;

/// @brief Method SetCreated addr 0xe0c868 size 0x78 virtual true final false
inline void SetCreated(bool  isCreated) ;

/// @brief Method Activate addr 0xe0c8e0 size 0x4 virtual true final false
inline void Activate() ;

/// @brief Method Deactivate addr 0xe0c8e4 size 0x4 virtual true final false
inline void Deactivate() ;

static inline ::BeatSaber::AvatarCore::AvatarSelectionView* New_ctor() ;

/// @brief Method .ctor addr 0xe0c8e8 size 0x68 virtual false final false
inline void _ctor() ;

/// @brief Method <Start>b__20_0 addr 0xe0c950 size 0x1c virtual false final false
inline void _Start_b__20_0() ;

/// @brief Method <Start>b__20_1 addr 0xe0c96c size 0x1c virtual false final false
inline void _Start_b__20_1() ;

/// @brief Method <Start>b__20_2 addr 0xe0c988 size 0x1c virtual false final false
inline void _Start_b__20_2() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSelectionView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarSelectionView(AvatarSelectionView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSelectionView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarSelectionView(AvatarSelectionView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarSelectionView()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarSelectionView, 0x88>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarSelectionView*, "BeatSaber.AvatarCore", "AvatarSelectionView");
