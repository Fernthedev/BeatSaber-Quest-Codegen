// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: DlcPromoPanelModel
  class DlcPromoPanelModel;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: EventBinder
  class EventBinder;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelPackDetailViewController
  class LevelPackDetailViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelPackDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: LevelPackDetailViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelPackDetailViewController : public ::HMUI::ViewController {
    public:
    // Nested type: ::GlobalNamespace::LevelPackDetailViewController::ContentType
    struct ContentType;
    // Nested type: ::GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    // Nested type: ::GlobalNamespace::LevelPackDetailViewController::$RefreshAvailabilityAsync$d__19
    struct $RefreshAvailabilityAsync$d__19;
    // Nested type: ::GlobalNamespace::LevelPackDetailViewController::$OpenLevelPackProductStoreAsync$d__21
    struct $OpenLevelPackProductStoreAsync$d__21;
    public:
    // private UnityEngine.GameObject _detailWrapper
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* detailWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private HMUI.ImageView _packImage
    // Size: 0x8
    // Offset: 0x78
    ::HMUI::ImageView* packImage;
    // Field size check
    static_assert(sizeof(::HMUI::ImageView*) == 0x8);
    // private UnityEngine.UI.Button _buyButton
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Button* buyButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.GameObject _buyContainer
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::GameObject* buyContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private LoadingControl _loadingControl
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::LoadingControl* loadingControl;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LoadingControl*) == 0x8);
    // private UnityEngine.GameObject _requireInternetContainer
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::GameObject* requireInternetContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0x10F2B74
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10F2BAC
    // private AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10F2BBC
    // private DlcPromoPanelModel _dlcPromoPanelModel
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::DlcPromoPanelModel* dlcPromoPanelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DlcPromoPanelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10F2BCC
    // private IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAnalyticsModel*) == 0x8);
    // private EventBinder _eventBinder
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::EventBinder* eventBinder;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EventBinder*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0xC8
    ::System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationTokenSource*) == 0x8);
    // private IBeatmapLevelPack _pack
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::IBeatmapLevelPack* pack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // private UnityEngine.Sprite _blurredPackArtwork
    // Size: 0x8
    // Offset: 0xD8
    ::UnityEngine::Sprite* blurredPackArtwork;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject _detailWrapper
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__detailWrapper();
    // Get instance field reference: private HMUI.ImageView _packImage
    [[deprecated("Use field access instead!")]] ::HMUI::ImageView*& dyn__packImage();
    // Get instance field reference: private UnityEngine.UI.Button _buyButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__buyButton();
    // Get instance field reference: private UnityEngine.GameObject _buyContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__buyContainer();
    // Get instance field reference: private LoadingControl _loadingControl
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LoadingControl*& dyn__loadingControl();
    // Get instance field reference: private UnityEngine.GameObject _requireInternetContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__requireInternetContainer();
    // Get instance field reference: private KawaseBlurRendererSO _kawaseBlurRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KawaseBlurRendererSO*& dyn__kawaseBlurRenderer();
    // Get instance field reference: private AdditionalContentModel _additionalContentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private DlcPromoPanelModel _dlcPromoPanelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DlcPromoPanelModel*& dyn__dlcPromoPanelModel();
    // Get instance field reference: private IAnalyticsModel _analyticsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private EventBinder _eventBinder
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EventBinder*& dyn__eventBinder();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // Get instance field reference: private IBeatmapLevelPack _pack
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevelPack*& dyn__pack();
    // Get instance field reference: private UnityEngine.Sprite _blurredPackArtwork
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__blurredPackArtwork();
    // public System.Void .ctor()
    // Offset: 0x14D3CDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelPackDetailViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelPackDetailViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelPackDetailViewController*, creationType>()));
    }
    // public System.Void SetData(IBeatmapLevelPack pack)
    // Offset: 0x14D2EF0
    void SetData(::GlobalNamespace::IBeatmapLevelPack* pack);
    // private System.Void RefreshAvailabilityAsync()
    // Offset: 0x14D32E4
    void RefreshAvailabilityAsync();
    // private System.Void BuyPackButtonWasPressed()
    // Offset: 0x14D3704
    void BuyPackButtonWasPressed();
    // private System.Void OpenLevelPackProductStoreAsync()
    // Offset: 0x14D3808
    void OpenLevelPackProductStoreAsync();
    // private System.Void ShowContent(LevelPackDetailViewController/ContentType contentType, System.String errorText)
    // Offset: 0x14D38C8
    void ShowContent(::GlobalNamespace::LevelPackDetailViewController::ContentType contentType, ::StringW errorText);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x14D3CD8
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void <DidActivate>b__16_0()
    // Offset: 0x14D3D44
    void $DidActivate$b__16_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x14D33A4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x14D354C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x14D35F8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // LevelPackDetailViewController
  #pragma pack(pop)
  static check_size<sizeof(LevelPackDetailViewController), 216 + sizeof(::UnityEngine::Sprite*)> __GlobalNamespace_LevelPackDetailViewControllerSizeCheck;
  static_assert(sizeof(LevelPackDetailViewController) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(::GlobalNamespace::IBeatmapLevelPack*)>(&GlobalNamespace::LevelPackDetailViewController::SetData)> {
  static const MethodInfo* get() {
    static auto* pack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pack});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync
// Il2CppName: RefreshAvailabilityAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed
// Il2CppName: BuyPackButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "BuyPackButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync
// Il2CppName: OpenLevelPackProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::ShowContent
// Il2CppName: ShowContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(::GlobalNamespace::LevelPackDetailViewController::ContentType, ::StringW)>(&GlobalNamespace::LevelPackDetailViewController::ShowContent)> {
  static const MethodInfo* get() {
    static auto* contentType = &::il2cpp_utils::GetClassFromName("", "LevelPackDetailViewController/ContentType")->byval_arg;
    static auto* errorText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "ShowContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentType, errorText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData
// Il2CppName: HandleAdditionalContentModelDidInvalidateData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::$DidActivate$b__16_0
// Il2CppName: <DidActivate>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::$DidActivate$b__16_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "<DidActivate>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(bool, bool, bool)>(&GlobalNamespace::LevelPackDetailViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)(bool, bool)>(&GlobalNamespace::LevelPackDetailViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelPackDetailViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelPackDetailViewController::*)()>(&GlobalNamespace::LevelPackDetailViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelPackDetailViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
