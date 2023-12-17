#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerModeSelectionViewController)
namespace GlobalNamespace {
struct __MultiplayerModeSelectionViewController__MenuButton;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerModeSelectionViewController__MenuButton;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionViewController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerModeSelectionViewController);
// Type: ::MenuButton
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5718))
// CS Name: ::MultiplayerModeSelectionViewController::MenuButton
struct CORDL_TYPE __MultiplayerModeSelectionViewController__MenuButton : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MultiplayerModeSelectionViewController__MenuButton_Unwrapped
enum struct ____MultiplayerModeSelectionViewController__MenuButton_Unwrapped : int32_t {
__E_QuickPlay = static_cast<int32_t>(0x0),
__E_CreateServer = static_cast<int32_t>(0x1),
__E_JoinWithCode = static_cast<int32_t>(0x2),
__E_GameBrowser = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field QuickPlay value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const QuickPlay;

/// @brief Field CreateServer value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const CreateServer;

/// @brief Field JoinWithCode value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const JoinWithCode;

/// @brief Field GameBrowser value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton const GameBrowser;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MultiplayerModeSelectionViewController__MenuButton_Unwrapped () const noexcept {
return std::bit_cast<____MultiplayerModeSelectionViewController__MenuButton_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MultiplayerModeSelectionViewController__MenuButton(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerModeSelectionViewController__MenuButton(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerModeSelectionViewController__MenuButton()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerModeSelectionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5719))
// CS Name: ::MultiplayerModeSelectionViewController*
class CORDL_TYPE MultiplayerModeSelectionViewController : public ::HMUI::ViewController {
public:
// Declarations
using MenuButton = ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _quickPlayButton offset 0x70
 __declspec(property(get=__get__quickPlayButton, put=__set__quickPlayButton)) ::UnityEngine::UI::Button*  _quickPlayButton;

/// @brief Field _gameBrowserButton offset 0x78
 __declspec(property(get=__get__gameBrowserButton, put=__set__gameBrowserButton)) ::UnityEngine::UI::Button*  _gameBrowserButton;

/// @brief Field _joinWithCodeButton offset 0x80
 __declspec(property(get=__get__joinWithCodeButton, put=__set__joinWithCodeButton)) ::UnityEngine::UI::Button*  _joinWithCodeButton;

/// @brief Field _createServerButton offset 0x88
 __declspec(property(get=__get__createServerButton, put=__set__createServerButton)) ::UnityEngine::UI::Button*  _createServerButton;

/// @brief Field _maintenanceMessageText offset 0x90
 __declspec(property(get=__get__maintenanceMessageText, put=__set__maintenanceMessageText)) ::TMPro::TextMeshProUGUI*  _maintenanceMessageText;

/// @brief Field _customServerEndPointText offset 0x98
 __declspec(property(get=__get__customServerEndPointText, put=__set__customServerEndPointText)) ::TMPro::TextMeshProUGUI*  _customServerEndPointText;

/// @brief Field _networkConfig offset 0xa0
 __declspec(property(get=__get__networkConfig, put=__set__networkConfig)) ::GlobalNamespace::INetworkConfig*  _networkConfig;

/// @brief Field didFinishEvent offset 0xa8
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  didFinishEvent;

constexpr void __set__quickPlayButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__quickPlayButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__quickPlayButton() const;

constexpr void __set__gameBrowserButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__gameBrowserButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__gameBrowserButton() const;

constexpr void __set__joinWithCodeButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__joinWithCodeButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__joinWithCodeButton() const;

constexpr void __set__createServerButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__createServerButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__createServerButton() const;

constexpr void __set__maintenanceMessageText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__maintenanceMessageText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__maintenanceMessageText() const;

constexpr void __set__customServerEndPointText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__customServerEndPointText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__customServerEndPointText() const;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig*  value) ;

constexpr ::GlobalNamespace::INetworkConfig* __get__networkConfig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> __get__networkConfig() const;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x22cf3b4 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22cf464 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MultiplayerModeSelectionViewController*,::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*  value) ;

/// @brief Method DidActivate addr 0x22cf514 size 0x2dc virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method SetData addr 0x22cf7f0 size 0x26c virtual false final false
inline void SetData(::GlobalNamespace::MultiplayerStatusData*  multiplayerStatusData) ;

/// @brief Method HandleMenuButton addr 0x22cfa5c size 0x28 virtual false final false
inline void HandleMenuButton(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton  menuButton) ;

static inline ::GlobalNamespace::MultiplayerModeSelectionViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22cfa84 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__11_0 addr 0x22cfa8c size 0x24 virtual false final false
inline void _DidActivate_b__11_0() ;

/// @brief Method <DidActivate>b__11_1 addr 0x22cfab0 size 0x24 virtual false final false
inline void _DidActivate_b__11_1() ;

/// @brief Method <DidActivate>b__11_2 addr 0x22cfad4 size 0x24 virtual false final false
inline void _DidActivate_b__11_2() ;

/// @brief Method <DidActivate>b__11_3 addr 0x22cfaf8 size 0x24 virtual false final false
inline void _DidActivate_b__11_3() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerModeSelectionViewController(MultiplayerModeSelectionViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSelectionViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerModeSelectionViewController(MultiplayerModeSelectionViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerModeSelectionViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerModeSelectionViewController, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton, "", "MultiplayerModeSelectionViewController/MenuButton");
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSelectionViewController*, "", "MultiplayerModeSelectionViewController");
