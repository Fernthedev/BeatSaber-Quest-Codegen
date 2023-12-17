#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(JoinQuickPlayViewController)
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JoinQuickPlayViewController);
// Type: ::JoinQuickPlayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5716))
// CS Name: ::JoinQuickPlayViewController*
class CORDL_TYPE JoinQuickPlayViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _beatmapDifficultyDropdown offset 0x70
 __declspec(property(get=__get__beatmapDifficultyDropdown, put=__set__beatmapDifficultyDropdown)) ::GlobalNamespace::BeatmapDifficultyDropdown*  _beatmapDifficultyDropdown;

/// @brief Field _songPacksDropdown offset 0x78
 __declspec(property(get=__get__songPacksDropdown, put=__set__songPacksDropdown)) ::GlobalNamespace::QuickPlaySongPacksDropdown*  _songPacksDropdown;

/// @brief Field _levelSelectionToggle offset 0x80
 __declspec(property(get=__get__levelSelectionToggle, put=__set__levelSelectionToggle)) ::UnityEngine::UI::Toggle*  _levelSelectionToggle;

/// @brief Field _joinButton offset 0x88
 __declspec(property(get=__get__joinButton, put=__set__joinButton)) ::UnityEngine::UI::Button*  _joinButton;

/// @brief Field _cancelJoinButton offset 0x90
 __declspec(property(get=__get__cancelJoinButton, put=__set__cancelJoinButton)) ::UnityEngine::UI::Button*  _cancelJoinButton;

/// @brief Field didFinishEvent offset 0x98
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<bool>*  didFinishEvent;

/// @brief Field _multiplayerModeSettings offset 0xa0
 __declspec(property(get=__get__multiplayerModeSettings, put=__set__multiplayerModeSettings)) ::GlobalNamespace::MultiplayerModeSettings*  _multiplayerModeSettings;

 __declspec(property(get=get_multiplayerModeSettings)) ::GlobalNamespace::MultiplayerModeSettings*  multiplayerModeSettings;

constexpr void __set__beatmapDifficultyDropdown(::GlobalNamespace::BeatmapDifficultyDropdown*  value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyDropdown* __get__beatmapDifficultyDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDifficultyDropdown*> __get__beatmapDifficultyDropdown() const;

constexpr void __set__songPacksDropdown(::GlobalNamespace::QuickPlaySongPacksDropdown*  value) ;

constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown* __get__songPacksDropdown() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySongPacksDropdown*> __get__songPacksDropdown() const;

constexpr void __set__levelSelectionToggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__levelSelectionToggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__levelSelectionToggle() const;

constexpr void __set__joinButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__joinButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__joinButton() const;

constexpr void __set__cancelJoinButton(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__cancelJoinButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__cancelJoinButton() const;

constexpr void __set_didFinishEvent(::System::Action_1<bool>*  value) ;

constexpr ::System::Action_1<bool>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> __get_didFinishEvent() const;

constexpr void __set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings*  value) ;

constexpr ::GlobalNamespace::MultiplayerModeSettings* __get__multiplayerModeSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSettings*> __get__multiplayerModeSettings() const;

/// @brief Method add_didFinishEvent addr 0x22cda2c size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x22cdadc size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<bool>*  value) ;

/// @brief Method get_multiplayerModeSettings addr 0x22cdb8c size 0x8 virtual false final false
inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings() ;

/// @brief Method Setup addr 0x22cdb94 size 0x90 virtual false final false
inline void Setup(::GlobalNamespace::QuickPlaySetupData*  quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings*  multiplayerModeSettings) ;

/// @brief Method DidActivate addr 0x22cdc24 size 0x128 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method ButtonPressed addr 0x22cdd4c size 0x8c virtual false final false
inline void ButtonPressed(bool  success) ;

static inline ::GlobalNamespace::JoinQuickPlayViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22cddd8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DidActivate>b__12_0 addr 0x22cdde0 size 0x8 virtual false final false
inline void _DidActivate_b__12_0() ;

/// @brief Method <DidActivate>b__12_1 addr 0x22cdde8 size 0x8 virtual false final false
inline void _DidActivate_b__12_1() ;

// Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JoinQuickPlayViewController(JoinQuickPlayViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoinQuickPlayViewController(JoinQuickPlayViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JoinQuickPlayViewController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JoinQuickPlayViewController, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JoinQuickPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoinQuickPlayViewController*, "", "JoinQuickPlayViewController");
