#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JoiningLobbyViewController)
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class LoadingControl;
}
// Forward declare root types
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JoiningLobbyViewController);
// Type: ::JoiningLobbyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5715))
// CS Name: ::JoiningLobbyViewController*
class CORDL_TYPE JoiningLobbyViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _cancelJoiningButton offset 0x70
 __declspec(property(get=__get__cancelJoiningButton, put=__set__cancelJoiningButton)) ::UnityEngine::UI::Button*  _cancelJoiningButton;

/// @brief Field _loadingControl offset 0x78
 __declspec(property(get=__get__loadingControl, put=__set__loadingControl)) ::GlobalNamespace::LoadingControl*  _loadingControl;

/// @brief Field _text offset 0x80
 __declspec(property(get=__get__text, put=__set__text)) ::StringW  _text;

/// @brief Field didCancelEvent offset 0x88
 __declspec(property(get=__get_didCancelEvent, put=__set_didCancelEvent)) ::System::Action*  didCancelEvent;

constexpr void __set__cancelJoiningButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__cancelJoiningButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__cancelJoiningButton() const;

constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl*  value) ;

constexpr ::GlobalNamespace::LoadingControl* __get__loadingControl() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> __get__loadingControl() const;

constexpr void __set__text(::StringW  value) ;

constexpr ::StringW& __get__text() ;

constexpr ::StringW const& __get__text() const;

constexpr void __set_didCancelEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didCancelEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didCancelEvent() const;

/// @brief Method add_didCancelEvent addr 0x22cd794 size 0x9c virtual false final false
inline void add_didCancelEvent(::System::Action*  value) ;

/// @brief Method remove_didCancelEvent addr 0x22cd830 size 0x9c virtual false final false
inline void remove_didCancelEvent(::System::Action*  value) ;

/// @brief Method Init addr 0x22cd8cc size 0x34 virtual false final false
inline void Init(::StringW  text) ;

/// @brief Method HideLoading addr 0x22cd900 size 0x40 virtual false final false
inline void HideLoading() ;

/// @brief Method DidActivate addr 0x22cd940 size 0xc8 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::JoiningLobbyViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22cda08 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x22cda10 size 0x1c virtual false final false
inline void _DidActivate_b__8_0() ;

// Ctor Parameters [CppParam { name: "", ty: "JoiningLobbyViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoiningLobbyViewController(JoiningLobbyViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoiningLobbyViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoiningLobbyViewController(JoiningLobbyViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JoiningLobbyViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JoiningLobbyViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JoiningLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoiningLobbyViewController*, "", "JoiningLobbyViewController");
