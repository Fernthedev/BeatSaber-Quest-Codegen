#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GameServerBrowserViewController)
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class GameServersListTableView;
}
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerBrowserViewController);
// Type: ::GameServerBrowserViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5713))
// CS Name: ::GameServerBrowserViewController*
class CORDL_TYPE GameServerBrowserViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _filterServersButton offset 0x70
 __declspec(property(get=__get__filterServersButton, put=__set__filterServersButton)) ::UnityEngine::UI::Button*  _filterServersButton;

/// @brief Field _filterText offset 0x78
 __declspec(property(get=__get__filterText, put=__set__filterText)) ::GlobalNamespace::GameServersFilterText*  _filterText;

/// @brief Field _createServerButton offset 0x80
 __declspec(property(get=__get__createServerButton, put=__set__createServerButton)) ::UnityEngine::UI::Button*  _createServerButton;

/// @brief Field _gameServersListTableView offset 0x88
 __declspec(property(get=__get__gameServersListTableView, put=__set__gameServersListTableView)) ::GlobalNamespace::GameServersListTableView*  _gameServersListTableView;

/// @brief Field _mainLoadingControl offset 0x90
 __declspec(property(get=__get__mainLoadingControl, put=__set__mainLoadingControl)) ::GlobalNamespace::LoadingControl*  _mainLoadingControl;

/// @brief Field _smallLoadingControl offset 0x98
 __declspec(property(get=__get__smallLoadingControl, put=__set__smallLoadingControl)) ::GlobalNamespace::LoadingControl*  _smallLoadingControl;

constexpr void __set__filterServersButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__filterServersButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__filterServersButton() const;

constexpr void __set__filterText(::GlobalNamespace::GameServersFilterText*  value) ;

constexpr ::GlobalNamespace::GameServersFilterText* __get__filterText() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersFilterText*> __get__filterText() const;

constexpr void __set__createServerButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__createServerButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__createServerButton() const;

constexpr void __set__gameServersListTableView(::GlobalNamespace::GameServersListTableView*  value) ;

constexpr ::GlobalNamespace::GameServersListTableView* __get__gameServersListTableView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersListTableView*> __get__gameServersListTableView() const;

constexpr void __set__mainLoadingControl(::GlobalNamespace::LoadingControl*  value) ;

constexpr ::GlobalNamespace::LoadingControl* __get__mainLoadingControl() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> __get__mainLoadingControl() const;

constexpr void __set__smallLoadingControl(::GlobalNamespace::LoadingControl*  value) ;

constexpr ::GlobalNamespace::LoadingControl* __get__smallLoadingControl() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> __get__smallLoadingControl() const;

static inline ::GlobalNamespace::GameServerBrowserViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22cd30c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerBrowserViewController(GameServerBrowserViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerBrowserViewController(GameServerBrowserViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServerBrowserViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserViewController, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserViewController*, "", "GameServerBrowserViewController");
