#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerResultsViewController)
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class ResultsTableView;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsViewController);
// Type: ::MultiplayerResultsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5720))
// CS Name: ::MultiplayerResultsViewController*
class CORDL_TYPE MultiplayerResultsViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb8 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _levelClearedGO offset 0x70
 __declspec(property(get=__get__levelClearedGO, put=__set__levelClearedGO)) ::UnityEngine::GameObject*  _levelClearedGO;

/// @brief Field _levelFailedGO offset 0x78
 __declspec(property(get=__get__levelFailedGO, put=__set__levelFailedGO)) ::UnityEngine::GameObject*  _levelFailedGO;

/// @brief Field _levelResultsGO offset 0x80
 __declspec(property(get=__get__levelResultsGO, put=__set__levelResultsGO)) ::UnityEngine::GameObject*  _levelResultsGO;

/// @brief Field _levelBar offset 0x88
 __declspec(property(get=__get__levelBar, put=__set__levelBar)) ::GlobalNamespace::LevelBar*  _levelBar;

/// @brief Field _resultsTableView offset 0x90
 __declspec(property(get=__get__resultsTableView, put=__set__resultsTableView)) ::GlobalNamespace::ResultsTableView*  _resultsTableView;

/// @brief Field _backToLobbyButton offset 0x98
 __declspec(property(get=__get__backToLobbyButton, put=__set__backToLobbyButton)) ::UnityEngine::UI::Button*  _backToLobbyButton;

/// @brief Field _backToMenuButton offset 0xa0
 __declspec(property(get=__get__backToMenuButton, put=__set__backToMenuButton)) ::UnityEngine::UI::Button*  _backToMenuButton;

/// @brief Field backToLobbyPressedEvent offset 0xa8
 __declspec(property(get=__get_backToLobbyPressedEvent, put=__set_backToLobbyPressedEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  backToLobbyPressedEvent;

/// @brief Field backToMenuPressedEvent offset 0xb0
 __declspec(property(get=__get_backToMenuPressedEvent, put=__set_backToMenuPressedEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  backToMenuPressedEvent;

constexpr void __set__levelClearedGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__levelClearedGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__levelClearedGO() const;

constexpr void __set__levelFailedGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__levelFailedGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__levelFailedGO() const;

constexpr void __set__levelResultsGO(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__levelResultsGO() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__levelResultsGO() const;

constexpr void __set__levelBar(::GlobalNamespace::LevelBar*  value) ;

constexpr ::GlobalNamespace::LevelBar* __get__levelBar() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> __get__levelBar() const;

constexpr void __set__resultsTableView(::GlobalNamespace::ResultsTableView*  value) ;

constexpr ::GlobalNamespace::ResultsTableView* __get__resultsTableView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsTableView*> __get__resultsTableView() const;

constexpr void __set__backToLobbyButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__backToLobbyButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__backToLobbyButton() const;

constexpr void __set__backToMenuButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__backToMenuButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__backToMenuButton() const;

constexpr void __set_backToLobbyPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* __get_backToLobbyPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*> __get_backToLobbyPressedEvent() const;

constexpr void __set_backToMenuPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>* __get_backToMenuPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*> __get_backToMenuPressedEvent() const;

/// @brief Method add_backToLobbyPressedEvent addr 0x22cfb1c size 0xb0 virtual false final false
inline void add_backToLobbyPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  value) ;

/// @brief Method remove_backToLobbyPressedEvent addr 0x22cfbcc size 0xb0 virtual false final false
inline void remove_backToLobbyPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  value) ;

/// @brief Method add_backToMenuPressedEvent addr 0x22cfc7c size 0xb0 virtual false final false
inline void add_backToMenuPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  value) ;

/// @brief Method remove_backToMenuPressedEvent addr 0x22cfd2c size 0xb0 virtual false final false
inline void remove_backToMenuPressedEvent(::System::Action_1<::GlobalNamespace::MultiplayerResultsViewController*>*  value) ;

/// @brief Method Init addr 0x22cfddc size 0x17c virtual false final false
inline void Init(::GlobalNamespace::MultiplayerResultsData*  multiplayerResultsData, ::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty  beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic, bool  showBackToLobbyButton, bool  showBackToMenuButton) ;

/// @brief Method DidActivate addr 0x22d0014 size 0x108 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method BackToLobbyPressed addr 0x22d011c size 0x20 virtual false final false
inline void BackToLobbyPressed() ;

/// @brief Method BackToMenuPressed addr 0x22d013c size 0x20 virtual false final false
inline void BackToMenuPressed() ;

static inline ::GlobalNamespace::MultiplayerResultsViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22d015c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerResultsViewController(MultiplayerResultsViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerResultsViewController(MultiplayerResultsViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerResultsViewController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsViewController, 0xb8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsViewController*, "", "MultiplayerResultsViewController");
