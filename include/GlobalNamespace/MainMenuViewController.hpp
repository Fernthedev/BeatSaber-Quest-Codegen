// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: MusicPackPromoBanner
  class MusicPackPromoBanner;
  // Forward declaring type: DlcPromoPanelModel
  class DlcPromoPanelModel;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Skipping declaration: MenuButton because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MainMenuViewController
  class MainMenuViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MainMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MainMenuViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MainMenuViewController::MenuButton
    struct MenuButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MainMenuViewController/MenuButton
    // [TokenAttribute] Offset: FFFFFFFF
    struct MenuButton/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MainMenuViewController/MenuButton SoloFreePlay
      static constexpr const int SoloFreePlay = 0;
      // Get static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloFreePlay();
      // Set static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static void _set_SoloFreePlay(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Party
      static constexpr const int Party = 1;
      // Get static field: static public MainMenuViewController/MenuButton Party
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Party();
      // Set static field: static public MainMenuViewController/MenuButton Party
      static void _set_Party(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton BeatmapEditor
      static constexpr const int BeatmapEditor = 2;
      // Get static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static GlobalNamespace::MainMenuViewController::MenuButton _get_BeatmapEditor();
      // Set static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static void _set_BeatmapEditor(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton SoloCampaign
      static constexpr const int SoloCampaign = 3;
      // Get static field: static public MainMenuViewController/MenuButton SoloCampaign
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloCampaign();
      // Set static field: static public MainMenuViewController/MenuButton SoloCampaign
      static void _set_SoloCampaign(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton FloorAdjust
      static constexpr const int FloorAdjust = 4;
      // Get static field: static public MainMenuViewController/MenuButton FloorAdjust
      static GlobalNamespace::MainMenuViewController::MenuButton _get_FloorAdjust();
      // Set static field: static public MainMenuViewController/MenuButton FloorAdjust
      static void _set_FloorAdjust(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Quit
      static constexpr const int Quit = 5;
      // Get static field: static public MainMenuViewController/MenuButton Quit
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Quit();
      // Set static field: static public MainMenuViewController/MenuButton Quit
      static void _set_Quit(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Multiplayer
      static constexpr const int Multiplayer = 6;
      // Get static field: static public MainMenuViewController/MenuButton Multiplayer
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Multiplayer();
      // Set static field: static public MainMenuViewController/MenuButton Multiplayer
      static void _set_Multiplayer(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Options
      static constexpr const int Options = 7;
      // Get static field: static public MainMenuViewController/MenuButton Options
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Options();
      // Set static field: static public MainMenuViewController/MenuButton Options
      static void _set_Options(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton HowToPlay
      static constexpr const int HowToPlay = 8;
      // Get static field: static public MainMenuViewController/MenuButton HowToPlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_HowToPlay();
      // Set static field: static public MainMenuViewController/MenuButton HowToPlay
      static void _set_HowToPlay(GlobalNamespace::MainMenuViewController::MenuButton value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MainMenuViewController/MenuButton
    #pragma pack(pop)
    static check_size<sizeof(MainMenuViewController::MenuButton), 0 + sizeof(int)> __GlobalNamespace_MainMenuViewController_MenuButtonSizeCheck;
    static_assert(sizeof(MainMenuViewController::MenuButton) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _soloButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* soloButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _partyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* partyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _campaignButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* campaignButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _quitButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* quitButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _howToPlayButton
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Button* howToPlayButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _beatmapEditorButton
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Button* beatmapEditorButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _multiplayerButton
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Button* multiplayerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _optionsButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* optionsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _musicPackPromoButton
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::UI::Button* musicPackPromoButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private MusicPackPromoBanner _musicPackPromoBanner
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::MusicPackPromoBanner* musicPackPromoBanner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MusicPackPromoBanner*) == 0x8);
    // [InjectAttribute] Offset: 0x124C9E0
    // private readonly DlcPromoPanelModel _dlcPromoPanelModel
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::DlcPromoPanelModel* dlcPromoPanelModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoPanelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x124C9F0
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [InjectAttribute] Offset: 0x124CA00
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // private System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> didFinishEvent
    // Size: 0x8
    // Offset: 0xD8
    System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*) == 0x8);
    // private System.Action`2<IBeatmapLevelPack,IPreviewBeatmapLevel> musicPackPromoButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>* musicPackPromoButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _soloButton
    UnityEngine::UI::Button*& dyn__soloButton();
    // Get instance field reference: private UnityEngine.UI.Button _partyButton
    UnityEngine::UI::Button*& dyn__partyButton();
    // Get instance field reference: private UnityEngine.UI.Button _campaignButton
    UnityEngine::UI::Button*& dyn__campaignButton();
    // Get instance field reference: private UnityEngine.UI.Button _quitButton
    UnityEngine::UI::Button*& dyn__quitButton();
    // Get instance field reference: private UnityEngine.UI.Button _howToPlayButton
    UnityEngine::UI::Button*& dyn__howToPlayButton();
    // Get instance field reference: private UnityEngine.UI.Button _beatmapEditorButton
    UnityEngine::UI::Button*& dyn__beatmapEditorButton();
    // Get instance field reference: private UnityEngine.UI.Button _multiplayerButton
    UnityEngine::UI::Button*& dyn__multiplayerButton();
    // Get instance field reference: private UnityEngine.UI.Button _optionsButton
    UnityEngine::UI::Button*& dyn__optionsButton();
    // Get instance field reference: private UnityEngine.UI.Button _musicPackPromoButton
    UnityEngine::UI::Button*& dyn__musicPackPromoButton();
    // Get instance field reference: private MusicPackPromoBanner _musicPackPromoBanner
    GlobalNamespace::MusicPackPromoBanner*& dyn__musicPackPromoBanner();
    // Get instance field reference: private readonly DlcPromoPanelModel _dlcPromoPanelModel
    GlobalNamespace::DlcPromoPanelModel*& dyn__dlcPromoPanelModel();
    // Get instance field reference: private readonly AppStaticSettingsSO _appStaticSettings
    GlobalNamespace::AppStaticSettingsSO*& dyn__appStaticSettings();
    // Get instance field reference: private readonly IAnalyticsModel _analyticsModel
    GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> didFinishEvent
    System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*& dyn_didFinishEvent();
    // Get instance field reference: private System.Action`2<IBeatmapLevelPack,IPreviewBeatmapLevel> musicPackPromoButtonWasPressedEvent
    System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>*& dyn_musicPackPromoButtonWasPressedEvent();
    // public System.Void add_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x2BA67BC
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x2BA6F30
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // public System.Void add_musicPackPromoButtonWasPressedEvent(System.Action`2<IBeatmapLevelPack,IPreviewBeatmapLevel> value)
    // Offset: 0x2BA6860
    void add_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // public System.Void remove_musicPackPromoButtonWasPressedEvent(System.Action`2<IBeatmapLevelPack,IPreviewBeatmapLevel> value)
    // Offset: 0x2BA6FD4
    void remove_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>* value);
    // private System.Void PackPromoButtonWasPressed()
    // Offset: 0x2BA9844
    void PackPromoButtonWasPressed();
    // private System.Void HandleMenuButton(MainMenuViewController/MenuButton menuButton)
    // Offset: 0x2BA98F0
    void HandleMenuButton(GlobalNamespace::MainMenuViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__20_0()
    // Offset: 0x2BA9A80
    void $DidActivate$b__20_0();
    // private System.Void <DidActivate>b__20_1()
    // Offset: 0x2BA9A88
    void $DidActivate$b__20_1();
    // private System.Void <DidActivate>b__20_2()
    // Offset: 0x2BA9A90
    void $DidActivate$b__20_2();
    // private System.Void <DidActivate>b__20_3()
    // Offset: 0x2BA9A98
    void $DidActivate$b__20_3();
    // private System.Void <DidActivate>b__20_4()
    // Offset: 0x2BA9AA0
    void $DidActivate$b__20_4();
    // private System.Void <DidActivate>b__20_5()
    // Offset: 0x2BA9AA8
    void $DidActivate$b__20_5();
    // private System.Void <DidActivate>b__20_6()
    // Offset: 0x2BA9AB0
    void $DidActivate$b__20_6();
    // private System.Void <DidActivate>b__20_7()
    // Offset: 0x2BA9AB8
    void $DidActivate$b__20_7();
    // public System.Void .ctor()
    // Offset: 0x2BA9A78
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainMenuViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x2BA93D8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MainMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(MainMenuViewController), 224 + sizeof(System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>*)> __GlobalNamespace_MainMenuViewControllerSizeCheck;
  static_assert(sizeof(MainMenuViewController) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController::MenuButton, "", "MainMenuViewController/MenuButton");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*)>(&GlobalNamespace::MainMenuViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MainMenuViewController"), ::il2cpp_utils::GetClassFromName("", "MainMenuViewController/MenuButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*)>(&GlobalNamespace::MainMenuViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MainMenuViewController"), ::il2cpp_utils::GetClassFromName("", "MainMenuViewController/MenuButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent
// Il2CppName: add_musicPackPromoButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::MainMenuViewController::add_musicPackPromoButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack"), ::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "add_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent
// Il2CppName: remove_musicPackPromoButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(System::Action_2<GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::IPreviewBeatmapLevel*>*)>(&GlobalNamespace::MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack"), ::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "remove_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed
// Il2CppName: PackPromoButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::PackPromoButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "PackPromoButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::HandleMenuButton
// Il2CppName: HandleMenuButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(GlobalNamespace::MainMenuViewController::MenuButton)>(&GlobalNamespace::MainMenuViewController::HandleMenuButton)> {
  static const MethodInfo* get() {
    static auto* menuButton = &::il2cpp_utils::GetClassFromName("", "MainMenuViewController/MenuButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "HandleMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{menuButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_0
// Il2CppName: <DidActivate>b__20_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_1
// Il2CppName: <DidActivate>b__20_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_2
// Il2CppName: <DidActivate>b__20_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_3
// Il2CppName: <DidActivate>b__20_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_4
// Il2CppName: <DidActivate>b__20_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_5
// Il2CppName: <DidActivate>b__20_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_6
// Il2CppName: <DidActivate>b__20_6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::$DidActivate$b__20_7
// Il2CppName: <DidActivate>b__20_7
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)()>(&GlobalNamespace::MainMenuViewController::$DidActivate$b__20_7)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "<DidActivate>b__20_7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainMenuViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuViewController::*)(bool, bool, bool)>(&GlobalNamespace::MainMenuViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
