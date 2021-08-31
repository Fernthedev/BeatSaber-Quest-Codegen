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
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: ReleaseInfoViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ReleaseInfoViewController : public HMUI::ViewController {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x78
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private UnityEngine.TextAsset _releaseNotesTextAsset
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::TextAsset* releaseNotesTextAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // private UnityEngine.TextAsset _firstTextAsset
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::TextAsset* firstTextAsset;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // Creating value type constructor for type: ReleaseInfoViewController
    ReleaseInfoViewController(GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, HMUI::TextPageScrollView* textPageScrollView_ = {}, UnityEngine::TextAsset* releaseNotesTextAsset_ = {}, UnityEngine::TextAsset* firstTextAsset_ = {}) noexcept : mainSettingsModel{mainSettingsModel_}, textPageScrollView{textPageScrollView_}, releaseNotesTextAsset{releaseNotesTextAsset_}, firstTextAsset{firstTextAsset_} {}
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private HMUI.TextPageScrollView _textPageScrollView
    HMUI::TextPageScrollView*& dyn__textPageScrollView();
    // Get instance field reference: private UnityEngine.TextAsset _releaseNotesTextAsset
    UnityEngine::TextAsset*& dyn__releaseNotesTextAsset();
    // Get instance field reference: private UnityEngine.TextAsset _firstTextAsset
    UnityEngine::TextAsset*& dyn__firstTextAsset();
    // public System.Void .ctor()
    // Offset: 0x118B6D0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReleaseInfoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReleaseInfoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReleaseInfoViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x118B664
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // ReleaseInfoViewController
  #pragma pack(pop)
  static check_size<sizeof(ReleaseInfoViewController), 136 + sizeof(UnityEngine::TextAsset*)> __GlobalNamespace_ReleaseInfoViewControllerSizeCheck;
  static_assert(sizeof(ReleaseInfoViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReleaseInfoViewController*, "", "ReleaseInfoViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReleaseInfoViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ReleaseInfoViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReleaseInfoViewController::*)(bool, bool, bool)>(&GlobalNamespace::ReleaseInfoViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReleaseInfoViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
