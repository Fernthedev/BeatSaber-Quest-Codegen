#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionToggle)
namespace HMUI {
class Interactable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class Signal;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionToggle;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionToggle);
// Type: ::MissionToggle
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13214))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5555))
// CS Name: ::MissionToggle*
class CORDL_TYPE MissionToggle : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::EventSystems::UIBehaviour)]{};

/// @brief Field _missionToggleWasPressedSignal offset 0x18
 __declspec(property(get=__get__missionToggleWasPressedSignal, put=__set__missionToggleWasPressedSignal)) ::GlobalNamespace::Signal*  _missionToggleWasPressedSignal;

/// @brief Field _text offset 0x20
 __declspec(property(get=__get__text, put=__set__text)) ::TMPro::TextMeshProUGUI*  _text;

/// @brief Field _lockedImage offset 0x28
 __declspec(property(get=__get__lockedImage, put=__set__lockedImage)) ::UnityEngine::UI::Image*  _lockedImage;

/// @brief Field _clearedImage offset 0x30
 __declspec(property(get=__get__clearedImage, put=__set__clearedImage)) ::UnityEngine::UI::Image*  _clearedImage;

/// @brief Field _bgImage offset 0x38
 __declspec(property(get=__get__bgImage, put=__set__bgImage)) ::UnityEngine::UI::Image*  _bgImage;

/// @brief Field _strokeImage offset 0x40
 __declspec(property(get=__get__strokeImage, put=__set__strokeImage)) ::UnityEngine::UI::Image*  _strokeImage;

/// @brief Field _vrInteractable offset 0x48
 __declspec(property(get=__get__vrInteractable, put=__set__vrInteractable)) ::HMUI::Interactable*  _vrInteractable;

/// @brief Field _disabledColor offset 0x50
 __declspec(property(get=__get__disabledColor, put=__set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _normalColor offset 0x60
 __declspec(property(get=__get__normalColor, put=__set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _invertColor offset 0x70
 __declspec(property(get=__get__invertColor, put=__set__invertColor)) ::UnityEngine::Color  _invertColor;

/// @brief Field _highlightColor offset 0x80
 __declspec(property(get=__get__highlightColor, put=__set__highlightColor)) ::UnityEngine::Color  _highlightColor;

/// @brief Field selectionDidChangeEvent offset 0x90
 __declspec(property(get=__get_selectionDidChangeEvent, put=__set_selectionDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MissionToggle*>*  selectionDidChangeEvent;

/// @brief Field _selected offset 0x98
 __declspec(property(get=__get__selected, put=__set__selected)) bool  _selected;

/// @brief Field _highlighted offset 0x99
 __declspec(property(get=__get__highlighted, put=__set__highlighted)) bool  _highlighted;

/// @brief Field _interactable offset 0x9a
 __declspec(property(get=__get__interactable, put=__set__interactable)) bool  _interactable;

/// @brief Field _missionCleared offset 0x9b
 __declspec(property(get=__get__missionCleared, put=__set__missionCleared)) bool  _missionCleared;

 __declspec(property(put=set_missionCleared)) bool  missionCleared;

 __declspec(property(get=get_selected, put=set_selected)) bool  selected;

 __declspec(property(get=get_interactable, put=set_interactable)) bool  interactable;

 __declspec(property(get=get_highlighted)) bool  highlighted;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr operator  ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

constexpr void __set__missionToggleWasPressedSignal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__missionToggleWasPressedSignal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__missionToggleWasPressedSignal() const;

constexpr void __set__text(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__text() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__text() const;

constexpr void __set__lockedImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__lockedImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__lockedImage() const;

constexpr void __set__clearedImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__clearedImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__clearedImage() const;

constexpr void __set__bgImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__bgImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__bgImage() const;

constexpr void __set__strokeImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__strokeImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__strokeImage() const;

constexpr void __set__vrInteractable(::HMUI::Interactable*  value) ;

constexpr ::HMUI::Interactable* __get__vrInteractable() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::Interactable*> __get__vrInteractable() const;

constexpr void __set__disabledColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__disabledColor() ;

constexpr ::UnityEngine::Color const& __get__disabledColor() const;

constexpr void __set__normalColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__normalColor() ;

constexpr ::UnityEngine::Color const& __get__normalColor() const;

constexpr void __set__invertColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__invertColor() ;

constexpr ::UnityEngine::Color const& __get__invertColor() const;

constexpr void __set__highlightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__highlightColor() ;

constexpr ::UnityEngine::Color const& __get__highlightColor() const;

constexpr void __set_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionToggle*>* __get_selectionDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionToggle*>*> __get_selectionDidChangeEvent() const;

constexpr void __set__selected(bool  value) ;

constexpr bool& __get__selected() ;

constexpr bool const& __get__selected() const;

constexpr void __set__highlighted(bool  value) ;

constexpr bool& __get__highlighted() ;

constexpr bool const& __get__highlighted() const;

constexpr void __set__interactable(bool  value) ;

constexpr bool& __get__interactable() ;

constexpr bool const& __get__interactable() const;

constexpr void __set__missionCleared(bool  value) ;

constexpr bool& __get__missionCleared() ;

constexpr bool const& __get__missionCleared() const;

/// @brief Method add_selectionDidChangeEvent addr 0x22a1e7c size 0xb0 virtual false final false
inline void add_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle*>*  value) ;

/// @brief Method remove_selectionDidChangeEvent addr 0x22a2064 size 0xb0 virtual false final false
inline void remove_selectionDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionToggle*>*  value) ;

/// @brief Method set_missionCleared addr 0x22a257c size 0xc virtual false final false
inline void set_missionCleared(bool  value) ;

/// @brief Method get_selected addr 0x22a2588 size 0x8 virtual false final false
inline bool get_selected() ;

/// @brief Method set_selected addr 0x22a1db0 size 0x10 virtual false final false
inline void set_selected(bool  value) ;

/// @brief Method get_interactable addr 0x22a2590 size 0x8 virtual false final false
inline bool get_interactable() ;

/// @brief Method set_interactable addr 0x22a1f2c size 0xc virtual false final false
inline void set_interactable(bool  value) ;

/// @brief Method get_highlighted addr 0x22a2840 size 0x8 virtual false final false
inline bool get_highlighted() ;

/// @brief Method Start addr 0x22a2848 size 0x1c virtual true final false
inline void Start() ;

/// @brief Method ChangeSelection addr 0x22a2198 size 0x64 virtual false final false
inline void ChangeSelection(bool  value, bool  callSelectionDidChange, bool  ignoreCurrentValue) ;

/// @brief Method ChangeHighlight addr 0x22a2864 size 0x20 virtual false final false
inline void ChangeHighlight(bool  value, bool  ignoreCurrentValue) ;

/// @brief Method SetText addr 0x22a2114 size 0x24 virtual false final false
inline void SetText(::StringW  text) ;

/// @brief Method InternalToggle addr 0x22a2884 size 0x30 virtual false final false
inline void InternalToggle() ;

/// @brief Method RefreshUI addr 0x22a2598 size 0x2a8 virtual false final false
inline void RefreshUI() ;

/// @brief Method OnPointerClick addr 0x22a28b4 size 0xa8 virtual true final false
inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSubmit addr 0x22a295c size 0x98 virtual true final false
inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnPointerEnter addr 0x22a29f4 size 0x24 virtual true final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit addr 0x22a2a18 size 0x1c virtual true final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::GlobalNamespace::MissionToggle* New_ctor() ;

/// @brief Method .ctor addr 0x22a2a34 size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionToggle(MissionToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionToggle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionToggle(MissionToggle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionToggle()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionToggle, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionToggle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionToggle*, "", "MissionToggle");
