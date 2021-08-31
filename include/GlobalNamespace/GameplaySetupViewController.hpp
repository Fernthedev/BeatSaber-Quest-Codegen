// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PlayerSettingsPanelController
  class PlayerSettingsPanelController;
  // Forward declaring type: GameplayModifiersPanelController
  class GameplayModifiersPanelController;
  // Forward declaring type: EnvironmentOverrideSettingsPanelController
  class EnvironmentOverrideSettingsPanelController;
  // Forward declaring type: ColorsOverrideSettingsPanelController
  class ColorsOverrideSettingsPanelController;
  // Forward declaring type: MultiplayerSettingsPanelController
  class MultiplayerSettingsPanelController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
  // Skipping declaration: GameplayMode because it is already included!
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControl
  class TextSegmentedControl;
  // Forward declaring type: SegmentedControl
  class SegmentedControl;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: GameplaySetupViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplaySetupViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::GameplaySetupViewController::Panel
    class Panel;
    // Nested type: GlobalNamespace::GameplaySetupViewController::GameplayMode
    struct GameplayMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GameplaySetupViewController/GameplayMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct GameplayMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GameplayMode
      constexpr GameplayMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GameplaySetupViewController/GameplayMode SinglePlayer
      static constexpr const int SinglePlayer = 0;
      // Get static field: static public GameplaySetupViewController/GameplayMode SinglePlayer
      static GlobalNamespace::GameplaySetupViewController::GameplayMode _get_SinglePlayer();
      // Set static field: static public GameplaySetupViewController/GameplayMode SinglePlayer
      static void _set_SinglePlayer(GlobalNamespace::GameplaySetupViewController::GameplayMode value);
      // static field const value: static public GameplaySetupViewController/GameplayMode MultiplayerQuickPlay
      static constexpr const int MultiplayerQuickPlay = 1;
      // Get static field: static public GameplaySetupViewController/GameplayMode MultiplayerQuickPlay
      static GlobalNamespace::GameplaySetupViewController::GameplayMode _get_MultiplayerQuickPlay();
      // Set static field: static public GameplaySetupViewController/GameplayMode MultiplayerQuickPlay
      static void _set_MultiplayerQuickPlay(GlobalNamespace::GameplaySetupViewController::GameplayMode value);
      // static field const value: static public GameplaySetupViewController/GameplayMode MultiplayerPrivate
      static constexpr const int MultiplayerPrivate = 2;
      // Get static field: static public GameplaySetupViewController/GameplayMode MultiplayerPrivate
      static GlobalNamespace::GameplaySetupViewController::GameplayMode _get_MultiplayerPrivate();
      // Set static field: static public GameplaySetupViewController/GameplayMode MultiplayerPrivate
      static void _set_MultiplayerPrivate(GlobalNamespace::GameplaySetupViewController::GameplayMode value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // GameplaySetupViewController/GameplayMode
    #pragma pack(pop)
    static check_size<sizeof(GameplaySetupViewController::GameplayMode), 0 + sizeof(int)> __GlobalNamespace_GameplaySetupViewController_GameplayModeSizeCheck;
    static_assert(sizeof(GameplaySetupViewController::GameplayMode) == 0x4);
    // private HMUI.TextSegmentedControl _selectionSegmentedControl
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextSegmentedControl* selectionSegmentedControl;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControl*) == 0x8);
    // private PlayerSettingsPanelController _playerSettingsPanelController
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSettingsPanelController*) == 0x8);
    // private GameplayModifiersPanelController _gameplayModifiersPanelController
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::GameplayModifiersPanelController* gameplayModifiersPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersPanelController*) == 0x8);
    // private EnvironmentOverrideSettingsPanelController _environmentOverrideSettingsPanelController
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::EnvironmentOverrideSettingsPanelController* environmentOverrideSettingsPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentOverrideSettingsPanelController*) == 0x8);
    // private ColorsOverrideSettingsPanelController _colorsOverrideSettingsPanelController
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::ColorsOverrideSettingsPanelController* colorsOverrideSettingsPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorsOverrideSettingsPanelController*) == 0x8);
    // private MultiplayerSettingsPanelController _multiplayerSettingsPanelController
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MultiplayerSettingsPanelController* multiplayerSettingsPanelController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSettingsPanelController*) == 0x8);
    // [InjectAttribute] Offset: 0xE4159C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private System.Action didChangeGameplayModifiersEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action* didChangeGameplayModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Collections.Generic.List`1<GameplaySetupViewController/Panel> _panels
    // Size: 0x8
    // Offset: 0xB0
    System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>* panels;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>*) == 0x8);
    // private System.Int32 _activePanelIdx
    // Size: 0x4
    // Offset: 0xB8
    int activePanelIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _showModifiers
    // Size: 0x1
    // Offset: 0xBC
    bool showModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _showEnvironmentOverrideSettings
    // Size: 0x1
    // Offset: 0xBD
    bool showEnvironmentOverrideSettings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _showColorSchemesSettings
    // Size: 0x1
    // Offset: 0xBE
    bool showColorSchemesSettings;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _shouldRefreshContent
    // Size: 0x1
    // Offset: 0xBF
    bool shouldRefreshContent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0xC0
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: gameplayMode
    char __padding14[0x3] = {};
    // private GameplaySetupViewController/GameplayMode _gameplayMode
    // Size: 0x4
    // Offset: 0xC4
    GlobalNamespace::GameplaySetupViewController::GameplayMode gameplayMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplaySetupViewController::GameplayMode) == 0x4);
    // Creating value type constructor for type: GameplaySetupViewController
    GameplaySetupViewController(HMUI::TextSegmentedControl* selectionSegmentedControl_ = {}, GlobalNamespace::PlayerSettingsPanelController* playerSettingsPanelController_ = {}, GlobalNamespace::GameplayModifiersPanelController* gameplayModifiersPanelController_ = {}, GlobalNamespace::EnvironmentOverrideSettingsPanelController* environmentOverrideSettingsPanelController_ = {}, GlobalNamespace::ColorsOverrideSettingsPanelController* colorsOverrideSettingsPanelController_ = {}, GlobalNamespace::MultiplayerSettingsPanelController* multiplayerSettingsPanelController_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, System::Action* didChangeGameplayModifiersEvent_ = {}, System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>* panels_ = {}, int activePanelIdx_ = {}, bool showModifiers_ = {}, bool showEnvironmentOverrideSettings_ = {}, bool showColorSchemesSettings_ = {}, bool shouldRefreshContent_ = {}, bool isInitialized_ = {}, GlobalNamespace::GameplaySetupViewController::GameplayMode gameplayMode_ = {}) noexcept : selectionSegmentedControl{selectionSegmentedControl_}, playerSettingsPanelController{playerSettingsPanelController_}, gameplayModifiersPanelController{gameplayModifiersPanelController_}, environmentOverrideSettingsPanelController{environmentOverrideSettingsPanelController_}, colorsOverrideSettingsPanelController{colorsOverrideSettingsPanelController_}, multiplayerSettingsPanelController{multiplayerSettingsPanelController_}, playerDataModel{playerDataModel_}, didChangeGameplayModifiersEvent{didChangeGameplayModifiersEvent_}, panels{panels_}, activePanelIdx{activePanelIdx_}, showModifiers{showModifiers_}, showEnvironmentOverrideSettings{showEnvironmentOverrideSettings_}, showColorSchemesSettings{showColorSchemesSettings_}, shouldRefreshContent{shouldRefreshContent_}, isInitialized{isInitialized_}, gameplayMode{gameplayMode_} {}
    // Get instance field: private HMUI.TextSegmentedControl _selectionSegmentedControl
    HMUI::TextSegmentedControl* _get__selectionSegmentedControl();
    // Set instance field: private HMUI.TextSegmentedControl _selectionSegmentedControl
    void _set__selectionSegmentedControl(HMUI::TextSegmentedControl* value);
    // Get instance field: private PlayerSettingsPanelController _playerSettingsPanelController
    GlobalNamespace::PlayerSettingsPanelController* _get__playerSettingsPanelController();
    // Set instance field: private PlayerSettingsPanelController _playerSettingsPanelController
    void _set__playerSettingsPanelController(GlobalNamespace::PlayerSettingsPanelController* value);
    // Get instance field: private GameplayModifiersPanelController _gameplayModifiersPanelController
    GlobalNamespace::GameplayModifiersPanelController* _get__gameplayModifiersPanelController();
    // Set instance field: private GameplayModifiersPanelController _gameplayModifiersPanelController
    void _set__gameplayModifiersPanelController(GlobalNamespace::GameplayModifiersPanelController* value);
    // Get instance field: private EnvironmentOverrideSettingsPanelController _environmentOverrideSettingsPanelController
    GlobalNamespace::EnvironmentOverrideSettingsPanelController* _get__environmentOverrideSettingsPanelController();
    // Set instance field: private EnvironmentOverrideSettingsPanelController _environmentOverrideSettingsPanelController
    void _set__environmentOverrideSettingsPanelController(GlobalNamespace::EnvironmentOverrideSettingsPanelController* value);
    // Get instance field: private ColorsOverrideSettingsPanelController _colorsOverrideSettingsPanelController
    GlobalNamespace::ColorsOverrideSettingsPanelController* _get__colorsOverrideSettingsPanelController();
    // Set instance field: private ColorsOverrideSettingsPanelController _colorsOverrideSettingsPanelController
    void _set__colorsOverrideSettingsPanelController(GlobalNamespace::ColorsOverrideSettingsPanelController* value);
    // Get instance field: private MultiplayerSettingsPanelController _multiplayerSettingsPanelController
    GlobalNamespace::MultiplayerSettingsPanelController* _get__multiplayerSettingsPanelController();
    // Set instance field: private MultiplayerSettingsPanelController _multiplayerSettingsPanelController
    void _set__multiplayerSettingsPanelController(GlobalNamespace::MultiplayerSettingsPanelController* value);
    // Get instance field: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel* _get__playerDataModel();
    // Set instance field: private readonly PlayerDataModel _playerDataModel
    void _set__playerDataModel(GlobalNamespace::PlayerDataModel* value);
    // Get instance field: private System.Action didChangeGameplayModifiersEvent
    System::Action* _get_didChangeGameplayModifiersEvent();
    // Set instance field: private System.Action didChangeGameplayModifiersEvent
    void _set_didChangeGameplayModifiersEvent(System::Action* value);
    // Get instance field: private System.Collections.Generic.List`1<GameplaySetupViewController/Panel> _panels
    System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>* _get__panels();
    // Set instance field: private System.Collections.Generic.List`1<GameplaySetupViewController/Panel> _panels
    void _set__panels(System::Collections::Generic::List_1<GlobalNamespace::GameplaySetupViewController::Panel*>* value);
    // Get instance field: private System.Int32 _activePanelIdx
    int _get__activePanelIdx();
    // Set instance field: private System.Int32 _activePanelIdx
    void _set__activePanelIdx(int value);
    // Get instance field: private System.Boolean _showModifiers
    bool _get__showModifiers();
    // Set instance field: private System.Boolean _showModifiers
    void _set__showModifiers(bool value);
    // Get instance field: private System.Boolean _showEnvironmentOverrideSettings
    bool _get__showEnvironmentOverrideSettings();
    // Set instance field: private System.Boolean _showEnvironmentOverrideSettings
    void _set__showEnvironmentOverrideSettings(bool value);
    // Get instance field: private System.Boolean _showColorSchemesSettings
    bool _get__showColorSchemesSettings();
    // Set instance field: private System.Boolean _showColorSchemesSettings
    void _set__showColorSchemesSettings(bool value);
    // Get instance field: private System.Boolean _shouldRefreshContent
    bool _get__shouldRefreshContent();
    // Set instance field: private System.Boolean _shouldRefreshContent
    void _set__shouldRefreshContent(bool value);
    // Get instance field: private System.Boolean _isInitialized
    bool _get__isInitialized();
    // Set instance field: private System.Boolean _isInitialized
    void _set__isInitialized(bool value);
    // Get instance field: private GameplaySetupViewController/GameplayMode _gameplayMode
    GlobalNamespace::GameplaySetupViewController::GameplayMode _get__gameplayMode();
    // Set instance field: private GameplaySetupViewController/GameplayMode _gameplayMode
    void _set__gameplayMode(GlobalNamespace::GameplaySetupViewController::GameplayMode value);
    // public PlayerSpecificSettings get_playerSettings()
    // Offset: 0x110FE04
    GlobalNamespace::PlayerSpecificSettings* get_playerSettings();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x110FE20
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public OverrideEnvironmentSettings get_environmentOverrideSettings()
    // Offset: 0x110FE3C
    GlobalNamespace::OverrideEnvironmentSettings* get_environmentOverrideSettings();
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0x110FE64
    GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // public System.Void add_didChangeGameplayModifiersEvent(System.Action value)
    // Offset: 0x110FCBC
    void add_didChangeGameplayModifiersEvent(System::Action* value);
    // public System.Void remove_didChangeGameplayModifiersEvent(System.Action value)
    // Offset: 0x110FD60
    void remove_didChangeGameplayModifiersEvent(System::Action* value);
    // public System.Void Setup(System.Boolean showModifiers, System.Boolean showEnvironmentOverrideSettings, System.Boolean showColorSchemesSettings, GameplaySetupViewController/GameplayMode gameplayMode)
    // Offset: 0x1100C50
    void Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, GlobalNamespace::GameplaySetupViewController::GameplayMode gameplayMode);
    // private System.Void Init()
    // Offset: 0x110FE8C
    void Init();
    // protected System.Void OnDisable()
    // Offset: 0x1110514
    void OnDisable();
    // private System.Void HandleSelectionSegmentedControlDidSelectCell(HMUI.SegmentedControl segmentedControl, System.Int32 cellIdx)
    // Offset: 0x11105FC
    void HandleSelectionSegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx);
    // private System.Void HandlePlayerSettingsPanelControllerDidChangePlayerSettings()
    // Offset: 0x11106BC
    void HandlePlayerSettingsPanelControllerDidChangePlayerSettings();
    // private System.Void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers()
    // Offset: 0x1110704
    void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers();
    // private System.Void SetActivePanel(System.Int32 panelIdx)
    // Offset: 0x1110604
    void SetActivePanel(int panelIdx);
    // private System.Void RefreshContent()
    // Offset: 0x110FF2C
    void RefreshContent();
    // private System.Void RefreshActivePanel()
    // Offset: 0x1110760
    void RefreshActivePanel();
    // public System.Void .ctor()
    // Offset: 0x111088C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplaySetupViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplaySetupViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplaySetupViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11103C8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // GameplaySetupViewController
  #pragma pack(pop)
  static check_size<sizeof(GameplaySetupViewController), 196 + sizeof(GlobalNamespace::GameplaySetupViewController::GameplayMode)> __GlobalNamespace_GameplaySetupViewControllerSizeCheck;
  static_assert(sizeof(GameplaySetupViewController) == 0xC8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController*, "", "GameplaySetupViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController::GameplayMode, "", "GameplaySetupViewController/GameplayMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::get_playerSettings
// Il2CppName: get_playerSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettings* (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_playerSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "get_playerSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings
// Il2CppName: get_environmentOverrideSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OverrideEnvironmentSettings* (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_environmentOverrideSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "get_environmentOverrideSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings
// Il2CppName: get_colorSchemesSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorSchemesSettings* (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::get_colorSchemesSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "get_colorSchemesSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::add_didChangeGameplayModifiersEvent
// Il2CppName: add_didChangeGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(System::Action*)>(&GlobalNamespace::GameplaySetupViewController::add_didChangeGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "add_didChangeGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::remove_didChangeGameplayModifiersEvent
// Il2CppName: remove_didChangeGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(System::Action*)>(&GlobalNamespace::GameplaySetupViewController::remove_didChangeGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "remove_didChangeGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(bool, bool, bool, GlobalNamespace::GameplaySetupViewController::GameplayMode)>(&GlobalNamespace::GameplaySetupViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* showModifiers = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showEnvironmentOverrideSettings = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showColorSchemesSettings = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* gameplayMode = &::il2cpp_utils::GetClassFromName("", "GameplaySetupViewController/GameplayMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showModifiers, showEnvironmentOverrideSettings, showColorSchemesSettings, gameplayMode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell
// Il2CppName: HandleSelectionSegmentedControlDidSelectCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(HMUI::SegmentedControl*, int)>(&GlobalNamespace::GameplaySetupViewController::HandleSelectionSegmentedControlDidSelectCell)> {
  static const MethodInfo* get() {
    static auto* segmentedControl = &::il2cpp_utils::GetClassFromName("HMUI", "SegmentedControl")->byval_arg;
    static auto* cellIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "HandleSelectionSegmentedControlDidSelectCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segmentedControl, cellIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings
// Il2CppName: HandlePlayerSettingsPanelControllerDidChangePlayerSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::HandlePlayerSettingsPanelControllerDidChangePlayerSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "HandlePlayerSettingsPanelControllerDidChangePlayerSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers
// Il2CppName: HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::SetActivePanel
// Il2CppName: SetActivePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(int)>(&GlobalNamespace::GameplaySetupViewController::SetActivePanel)> {
  static const MethodInfo* get() {
    static auto* panelIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "SetActivePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panelIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::RefreshContent
// Il2CppName: RefreshContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::RefreshContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "RefreshContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::RefreshActivePanel
// Il2CppName: RefreshActivePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)()>(&GlobalNamespace::GameplaySetupViewController::RefreshActivePanel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "RefreshActivePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplaySetupViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplaySetupViewController::*)(bool, bool, bool)>(&GlobalNamespace::GameplaySetupViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplaySetupViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
