// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CreditsScenesTransitionSetupDataSO
  class CreditsScenesTransitionSetupDataSO;
  // Forward declaring type: AudioPlayerBase
  class AudioPlayerBase;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5A
  #pragma pack(push, 1)
  // Autogenerated type: CreditsController
  // [TokenAttribute] Offset: FFFFFFFF
  class CreditsController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CreditsController::$ScrollCoroutine$d__13
    class $ScrollCoroutine$d__13;
    // private CreditsScenesTransitionSetupDataSO _creditsSceneSetupDataSO
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneSetupDataSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CreditsScenesTransitionSetupDataSO*) == 0x8);
    // private AudioPlayerBase _audioPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioPlayerBase* audioPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPlayerBase*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.RectTransform _contentRectTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::RectTransform* contentRectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private System.Single _overflowHeight
    // Size: 0x4
    // Offset: 0x38
    float overflowHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: overflowHeight and: contentWrapper
    char __padding4[0x4] = {};
    // private UnityEngine.RectTransform _contentWrapper
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::RectTransform* contentWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // [InjectAttribute] Offset: 0xE44F90
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x50
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Boolean _didFinish
    // Size: 0x1
    // Offset: 0x58
    bool didFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isPaused
    // Size: 0x1
    // Offset: 0x59
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CreditsController
    CreditsController(GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneSetupDataSO_ = {}, GlobalNamespace::AudioPlayerBase* audioPlayer_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::RectTransform* contentRectTransform_ = {}, float overflowHeight_ = {}, UnityEngine::RectTransform* contentWrapper_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, bool didFinish_ = {}, bool isPaused_ = {}) noexcept : creditsSceneSetupDataSO{creditsSceneSetupDataSO_}, audioPlayer{audioPlayer_}, continueButton{continueButton_}, contentRectTransform{contentRectTransform_}, overflowHeight{overflowHeight_}, contentWrapper{contentWrapper_}, vrPlatformHelper{vrPlatformHelper_}, buttonBinder{buttonBinder_}, didFinish{didFinish_}, isPaused{isPaused_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private CreditsScenesTransitionSetupDataSO _creditsSceneSetupDataSO
    GlobalNamespace::CreditsScenesTransitionSetupDataSO*& dyn__creditsSceneSetupDataSO();
    // Get instance field reference: private AudioPlayerBase _audioPlayer
    GlobalNamespace::AudioPlayerBase*& dyn__audioPlayer();
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private UnityEngine.RectTransform _contentRectTransform
    UnityEngine::RectTransform*& dyn__contentRectTransform();
    // Get instance field reference: private System.Single _overflowHeight
    float& dyn__overflowHeight();
    // Get instance field reference: private UnityEngine.RectTransform _contentWrapper
    UnityEngine::RectTransform*& dyn__contentWrapper();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.Boolean _didFinish
    bool& dyn__didFinish();
    // Get instance field reference: private System.Boolean _isPaused
    bool& dyn__isPaused();
    // protected System.Void Start()
    // Offset: 0x10E7C20
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10E7F44
    void OnDestroy();
    // private System.Void Finish()
    // Offset: 0x10E80F0
    void Finish();
    // private System.Collections.IEnumerator ScrollCoroutine()
    // Offset: 0x10E7ED4
    System::Collections::IEnumerator* ScrollCoroutine();
    // private System.Void HandleInputFocusCaptured()
    // Offset: 0x10E7E98
    void HandleInputFocusCaptured();
    // private System.Void HandleInputFocusReleased()
    // Offset: 0x10E8338
    void HandleInputFocusReleased();
    // public System.Void .ctor()
    // Offset: 0x10E8370
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CreditsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsController*, creationType>()));
    }
  }; // CreditsController
  #pragma pack(pop)
  static check_size<sizeof(CreditsController), 89 + sizeof(bool)> __GlobalNamespace_CreditsControllerSizeCheck;
  static_assert(sizeof(CreditsController) == 0x5A);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsController*, "", "CreditsController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::*)()>(&GlobalNamespace::CreditsController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::*)()>(&GlobalNamespace::CreditsController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::*)()>(&GlobalNamespace::CreditsController::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::ScrollCoroutine
// Il2CppName: ScrollCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::CreditsController::*)()>(&GlobalNamespace::CreditsController::ScrollCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController*), "ScrollCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::HandleInputFocusCaptured
// Il2CppName: HandleInputFocusCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::*)()>(&GlobalNamespace::CreditsController::HandleInputFocusCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController*), "HandleInputFocusCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::HandleInputFocusReleased
// Il2CppName: HandleInputFocusReleased
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CreditsController::*)()>(&GlobalNamespace::CreditsController::HandleInputFocusReleased)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CreditsController*), "HandleInputFocusReleased", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CreditsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
