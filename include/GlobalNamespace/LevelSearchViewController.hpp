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
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: SongPackMasksModel
  class SongPackMasksModel;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: LevelFilterParams
  class LevelFilterParams;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: LevelSearchViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelSearchViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection
    class BeatmapLevelPackCollection;
    // Nested type: GlobalNamespace::LevelSearchViewController::$UpdateBeatmapLevelPackCollectionAsync$d__30
    struct $UpdateBeatmapLevelPackCollectionAsync$d__30;
    // private UnityEngine.UI.Button _searchButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* searchButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _clearFiltersButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* clearFiltersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _filterParamsText
    // Size: 0x8
    // Offset: 0x80
    TMPro::TextMeshProUGUI* filterParamsText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _filterPlaceholder
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* filterPlaceholder;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private HMUI.InputFieldView _searchTextInputFieldView
    // Size: 0x8
    // Offset: 0x90
    HMUI::InputFieldView* searchTextInputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // [InjectAttribute] Offset: 0xE47B54
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE47B64
    // private readonly SongPackMasksModel _songPackMasksModel
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::SongPackMasksModel* songPackMasksModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMasksModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE47B74
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Action`2<LevelSearchViewController,LevelFilterParams> didPressSearchButtonEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* didPressSearchButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>*) == 0x8);
    // private System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> didFilterBeatmapLevelCollectionEvent
    // Size: 0x8
    // Offset: 0xB8
    System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* didFilterBeatmapLevelCollectionEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // private System.Action`1<LevelSearchViewController> didStartLoadingEvent
    // Size: 0x8
    // Offset: 0xC0
    System::Action_1<GlobalNamespace::LevelSearchViewController*>* didStartLoadingEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::LevelSearchViewController*>*) == 0x8);
    // private LevelSearchViewController/BeatmapLevelPackCollection _beatmapLevelPackCollection
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection* beatmapLevelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*) == 0x8);
    // private BeatmapCharacteristicSO _preferredBeatmapCharacteristic
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private LevelFilterParams _currentFilterParams
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::LevelFilterParams* currentFilterParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilterParams*) == 0x8);
    // private System.Boolean _onlyFavorites
    // Size: 0x1
    // Offset: 0xE0
    bool onlyFavorites;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: onlyFavorites and: cancellationTokenSource
    char __padding14[0x7] = {};
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xE8
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private IBeatmapLevelPack[] _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0xF0
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // Creating value type constructor for type: LevelSearchViewController
    LevelSearchViewController(UnityEngine::UI::Button* searchButton_ = {}, UnityEngine::UI::Button* clearFiltersButton_ = {}, TMPro::TextMeshProUGUI* filterParamsText_ = {}, UnityEngine::GameObject* filterPlaceholder_ = {}, HMUI::InputFieldView* searchTextInputFieldView_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::SongPackMasksModel* songPackMasksModel_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* didPressSearchButtonEvent_ = {}, System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* didFilterBeatmapLevelCollectionEvent_ = {}, System::Action_1<GlobalNamespace::LevelSearchViewController*>* didStartLoadingEvent_ = {}, GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection* beatmapLevelPackCollection_ = {}, GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic_ = {}, GlobalNamespace::LevelFilterParams* currentFilterParams_ = {}, bool onlyFavorites_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks_ = {}) noexcept : searchButton{searchButton_}, clearFiltersButton{clearFiltersButton_}, filterParamsText{filterParamsText_}, filterPlaceholder{filterPlaceholder_}, searchTextInputFieldView{searchTextInputFieldView_}, playerDataModel{playerDataModel_}, songPackMasksModel{songPackMasksModel_}, additionalContentModel{additionalContentModel_}, didPressSearchButtonEvent{didPressSearchButtonEvent_}, didFilterBeatmapLevelCollectionEvent{didFilterBeatmapLevelCollectionEvent_}, didStartLoadingEvent{didStartLoadingEvent_}, beatmapLevelPackCollection{beatmapLevelPackCollection_}, preferredBeatmapCharacteristic{preferredBeatmapCharacteristic_}, currentFilterParams{currentFilterParams_}, onlyFavorites{onlyFavorites_}, cancellationTokenSource{cancellationTokenSource_}, beatmapLevelPacks{beatmapLevelPacks_} {}
    // Get instance field reference: private UnityEngine.UI.Button _searchButton
    UnityEngine::UI::Button*& dyn__searchButton();
    // Get instance field reference: private UnityEngine.UI.Button _clearFiltersButton
    UnityEngine::UI::Button*& dyn__clearFiltersButton();
    // Get instance field reference: private TMPro.TextMeshProUGUI _filterParamsText
    TMPro::TextMeshProUGUI*& dyn__filterParamsText();
    // Get instance field reference: private UnityEngine.GameObject _filterPlaceholder
    UnityEngine::GameObject*& dyn__filterPlaceholder();
    // Get instance field reference: private HMUI.InputFieldView _searchTextInputFieldView
    HMUI::InputFieldView*& dyn__searchTextInputFieldView();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private readonly SongPackMasksModel _songPackMasksModel
    GlobalNamespace::SongPackMasksModel*& dyn__songPackMasksModel();
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private System.Action`2<LevelSearchViewController,LevelFilterParams> didPressSearchButtonEvent
    System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>*& dyn_didPressSearchButtonEvent();
    // Get instance field reference: private System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> didFilterBeatmapLevelCollectionEvent
    System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>*& dyn_didFilterBeatmapLevelCollectionEvent();
    // Get instance field reference: private System.Action`1<LevelSearchViewController> didStartLoadingEvent
    System::Action_1<GlobalNamespace::LevelSearchViewController*>*& dyn_didStartLoadingEvent();
    // Get instance field reference: private LevelSearchViewController/BeatmapLevelPackCollection _beatmapLevelPackCollection
    GlobalNamespace::LevelSearchViewController::BeatmapLevelPackCollection*& dyn__beatmapLevelPackCollection();
    // Get instance field reference: private BeatmapCharacteristicSO _preferredBeatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__preferredBeatmapCharacteristic();
    // Get instance field reference: private LevelFilterParams _currentFilterParams
    GlobalNamespace::LevelFilterParams*& dyn__currentFilterParams();
    // Get instance field reference: private System.Boolean _onlyFavorites
    bool& dyn__onlyFavorites();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // Get instance field reference: private IBeatmapLevelPack[] _beatmapLevelPacks
    ::Array<GlobalNamespace::IBeatmapLevelPack*>*& dyn__beatmapLevelPacks();
    // public System.Void add_didPressSearchButtonEvent(System.Action`2<LevelSearchViewController,LevelFilterParams> value)
    // Offset: 0x1201244
    void add_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void remove_didPressSearchButtonEvent(System.Action`2<LevelSearchViewController,LevelFilterParams> value)
    // Offset: 0x12012E8
    void remove_didPressSearchButtonEvent(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>* value);
    // public System.Void add_didFilterBeatmapLevelCollectionEvent(System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> value)
    // Offset: 0x120138C
    void add_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didFilterBeatmapLevelCollectionEvent(System.Action`2<IAnnotatedBeatmapLevelCollection,BeatmapCharacteristicSO> value)
    // Offset: 0x1201430
    void remove_didFilterBeatmapLevelCollectionEvent(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void add_didStartLoadingEvent(System.Action`1<LevelSearchViewController> value)
    // Offset: 0x12014D4
    void add_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController*>* value);
    // public System.Void remove_didStartLoadingEvent(System.Action`1<LevelSearchViewController> value)
    // Offset: 0x1201578
    void remove_didStartLoadingEvent(System::Action_1<GlobalNamespace::LevelSearchViewController*>* value);
    // public System.Void Setup(IBeatmapLevelPack[] beatmapLevelPacks)
    // Offset: 0x120161C
    void Setup(::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);
    // public System.Void ResetFilterParams(System.Boolean onlyFavorites)
    // Offset: 0x1201744
    void ResetFilterParams(bool onlyFavorites);
    // public System.Void UpdateSearchLevelFilterParams(LevelFilterParams levelFilterParams)
    // Offset: 0x1201884
    void UpdateSearchLevelFilterParams(GlobalNamespace::LevelFilterParams* levelFilterParams);
    // private System.Void ResetCurrentFilterParams()
    // Offset: 0x1201628
    void ResetCurrentFilterParams();
    // private System.Void UpdateBeatmapLevelPackCollectionAsync()
    // Offset: 0x12017C4
    void UpdateBeatmapLevelPackCollectionAsync();
    // private System.Void SearchTextInputFieldViewOnValueChanged(HMUI.InputFieldView inputFieldView)
    // Offset: 0x1201AE0
    void SearchTextInputFieldViewOnValueChanged(HMUI::InputFieldView* inputFieldView);
    // private System.Void UpdateCurrentFilterParams()
    // Offset: 0x1201770
    void UpdateCurrentFilterParams();
    // public System.Void RefreshAfterIncreaseNumberOfGameplay()
    // Offset: 0x1201B08
    void RefreshAfterIncreaseNumberOfGameplay();
    // private System.Void Refresh()
    // Offset: 0x120188C
    void Refresh();
    // private System.String LocalizedLevelFilterParamsDescription(LevelFilterParams levelFilterParams)
    // Offset: 0x1201B2C
    ::Il2CppString* LocalizedLevelFilterParamsDescription(GlobalNamespace::LevelFilterParams* levelFilterParams);
    // private System.Void <DidActivate>b__27_0()
    // Offset: 0x1201E48
    void $DidActivate$b__27_0();
    // private System.Void <DidActivate>b__27_1()
    // Offset: 0x1201EB0
    void $DidActivate$b__27_1();
    // public System.Void .ctor()
    // Offset: 0x1201E40
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelSearchViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelSearchViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelSearchViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1201890
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1201A1C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // LevelSearchViewController
  #pragma pack(pop)
  static check_size<sizeof(LevelSearchViewController), 240 + sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*)> __GlobalNamespace_LevelSearchViewControllerSizeCheck;
  static_assert(sizeof(LevelSearchViewController) == 0xF8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSearchViewController*, "", "LevelSearchViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::add_didPressSearchButtonEvent
// Il2CppName: add_didPressSearchButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>*)>(&GlobalNamespace::LevelSearchViewController::add_didPressSearchButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelSearchViewController"), ::il2cpp_utils::GetClassFromName("", "LevelFilterParams")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "add_didPressSearchButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::remove_didPressSearchButtonEvent
// Il2CppName: remove_didPressSearchButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(System::Action_2<GlobalNamespace::LevelSearchViewController*, GlobalNamespace::LevelFilterParams*>*)>(&GlobalNamespace::LevelSearchViewController::remove_didPressSearchButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelSearchViewController"), ::il2cpp_utils::GetClassFromName("", "LevelFilterParams")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "remove_didPressSearchButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::add_didFilterBeatmapLevelCollectionEvent
// Il2CppName: add_didFilterBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::LevelSearchViewController::add_didFilterBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "add_didFilterBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::remove_didFilterBeatmapLevelCollectionEvent
// Il2CppName: remove_didFilterBeatmapLevelCollectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(System::Action_2<GlobalNamespace::IAnnotatedBeatmapLevelCollection*, GlobalNamespace::BeatmapCharacteristicSO*>*)>(&GlobalNamespace::LevelSearchViewController::remove_didFilterBeatmapLevelCollectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IAnnotatedBeatmapLevelCollection"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "remove_didFilterBeatmapLevelCollectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::add_didStartLoadingEvent
// Il2CppName: add_didStartLoadingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(System::Action_1<GlobalNamespace::LevelSearchViewController*>*)>(&GlobalNamespace::LevelSearchViewController::add_didStartLoadingEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelSearchViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "add_didStartLoadingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::remove_didStartLoadingEvent
// Il2CppName: remove_didStartLoadingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(System::Action_1<GlobalNamespace::LevelSearchViewController*>*)>(&GlobalNamespace::LevelSearchViewController::remove_didStartLoadingEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelSearchViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "remove_didStartLoadingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(::Array<GlobalNamespace::IBeatmapLevelPack*>*)>(&GlobalNamespace::LevelSearchViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelPacks = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelPacks});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::ResetFilterParams
// Il2CppName: ResetFilterParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(bool)>(&GlobalNamespace::LevelSearchViewController::ResetFilterParams)> {
  static const MethodInfo* get() {
    static auto* onlyFavorites = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "ResetFilterParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onlyFavorites});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::UpdateSearchLevelFilterParams
// Il2CppName: UpdateSearchLevelFilterParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(GlobalNamespace::LevelFilterParams*)>(&GlobalNamespace::LevelSearchViewController::UpdateSearchLevelFilterParams)> {
  static const MethodInfo* get() {
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "UpdateSearchLevelFilterParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelFilterParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::ResetCurrentFilterParams
// Il2CppName: ResetCurrentFilterParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::ResetCurrentFilterParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "ResetCurrentFilterParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::UpdateBeatmapLevelPackCollectionAsync
// Il2CppName: UpdateBeatmapLevelPackCollectionAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::UpdateBeatmapLevelPackCollectionAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "UpdateBeatmapLevelPackCollectionAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::SearchTextInputFieldViewOnValueChanged
// Il2CppName: SearchTextInputFieldViewOnValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(HMUI::InputFieldView*)>(&GlobalNamespace::LevelSearchViewController::SearchTextInputFieldViewOnValueChanged)> {
  static const MethodInfo* get() {
    static auto* inputFieldView = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "SearchTextInputFieldViewOnValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputFieldView});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::UpdateCurrentFilterParams
// Il2CppName: UpdateCurrentFilterParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::UpdateCurrentFilterParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "UpdateCurrentFilterParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::RefreshAfterIncreaseNumberOfGameplay
// Il2CppName: RefreshAfterIncreaseNumberOfGameplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::RefreshAfterIncreaseNumberOfGameplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "RefreshAfterIncreaseNumberOfGameplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::LocalizedLevelFilterParamsDescription
// Il2CppName: LocalizedLevelFilterParamsDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LevelSearchViewController::*)(GlobalNamespace::LevelFilterParams*)>(&GlobalNamespace::LevelSearchViewController::LocalizedLevelFilterParamsDescription)> {
  static const MethodInfo* get() {
    static auto* levelFilterParams = &::il2cpp_utils::GetClassFromName("", "LevelFilterParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "LocalizedLevelFilterParamsDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelFilterParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::$DidActivate$b__27_0
// Il2CppName: <DidActivate>b__27_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::$DidActivate$b__27_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "<DidActivate>b__27_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::$DidActivate$b__27_1
// Il2CppName: <DidActivate>b__27_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)()>(&GlobalNamespace::LevelSearchViewController::$DidActivate$b__27_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "<DidActivate>b__27_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(bool, bool, bool)>(&GlobalNamespace::LevelSearchViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelSearchViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelSearchViewController::*)(bool, bool)>(&GlobalNamespace::LevelSearchViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelSearchViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
