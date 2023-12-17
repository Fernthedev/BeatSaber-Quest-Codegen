#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerPasswordEntryViewController)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class UIKeyboard;
}
namespace HMUI {
class InputFieldView;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerPasswordEntryViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerPasswordEntryViewController);
// Type: ::ServerPasswordEntryViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5723))
// CS Name: ::ServerPasswordEntryViewController*
class CORDL_TYPE ServerPasswordEntryViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _passwordInput offset 0x70
 __declspec(property(get=__get__passwordInput, put=__set__passwordInput)) ::HMUI::InputFieldView*  _passwordInput;

/// @brief Field _uiKeyboard offset 0x78
 __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard)) ::HMUI::UIKeyboard*  _uiKeyboard;

/// @brief Field didFinishEvent offset 0x80
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::INetworkPlayer*,::StringW>*  didFinishEvent;

/// @brief Field _selectedNetworkPlayer offset 0x88
 __declspec(property(get=__get__selectedNetworkPlayer, put=__set__selectedNetworkPlayer)) ::GlobalNamespace::INetworkPlayer*  _selectedNetworkPlayer;

constexpr void __set__passwordInput(::HMUI::InputFieldView*  value) ;

constexpr ::HMUI::InputFieldView* __get__passwordInput() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> __get__passwordInput() const;

constexpr void __set__uiKeyboard(::HMUI::UIKeyboard*  value) ;

constexpr ::HMUI::UIKeyboard* __get__uiKeyboard() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> __get__uiKeyboard() const;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::INetworkPlayer*,::StringW>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::INetworkPlayer*,::StringW>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::INetworkPlayer*,::StringW>*> __get_didFinishEvent() const;

constexpr void __set__selectedNetworkPlayer(::GlobalNamespace::INetworkPlayer*  value) ;

constexpr ::GlobalNamespace::INetworkPlayer* __get__selectedNetworkPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> __get__selectedNetworkPlayer() const;

/// @brief Method add_didFinishEvent addr 0x22d06ac size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::INetworkPlayer*,::StringW>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22d075c size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::INetworkPlayer*,::StringW>*  value) ;

/// @brief Method Setup addr 0x22d080c size 0x8 virtual false final false
inline void Setup(::GlobalNamespace::INetworkPlayer*  selectedPlayer) ;

/// @brief Method DidActivate addr 0x22d0814 size 0xc4 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22d08d8 size 0xb4 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleJoinClicked addr 0x22d098c size 0x3c virtual false final false
inline void HandleJoinClicked() ;

/// @brief Method HandleUIKeyboardOkButtonWasPressed addr 0x22d09c8 size 0x3c virtual false final false
inline void HandleUIKeyboardOkButtonWasPressed() ;

static inline ::GlobalNamespace::ServerPasswordEntryViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d0a04 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ServerPasswordEntryViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerPasswordEntryViewController(ServerPasswordEntryViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerPasswordEntryViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerPasswordEntryViewController(ServerPasswordEntryViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServerPasswordEntryViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerPasswordEntryViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerPasswordEntryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerPasswordEntryViewController*, "", "ServerPasswordEntryViewController");
