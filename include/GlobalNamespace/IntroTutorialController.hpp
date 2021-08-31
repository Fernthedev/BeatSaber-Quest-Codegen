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
  // Forward declaring type: IntroTutorialRing
  class IntroTutorialRing;
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
  // Forward declaring type: BloomFogParamsAnimator
  class BloomFogParamsAnimator;
  // Forward declaring type: IGamePause
  class IGamePause;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6B
  #pragma pack(push, 1)
  // Autogenerated type: IntroTutorialController
  // [TokenAttribute] Offset: FFFFFFFF
  class IntroTutorialController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::IntroTutorialController::$ShowFinishAnimationCoroutine$d__22
    class $ShowFinishAnimationCoroutine$d__22;
    // private IntroTutorialRing _redRing
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IntroTutorialRing* redRing;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntroTutorialRing*) == 0x8);
    // private IntroTutorialRing _blueRing
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IntroTutorialRing* blueRing;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntroTutorialRing*) == 0x8);
    // private UnityEngine.GameObject _redRingWrapper
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* redRingWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _blueRingWrapper
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* blueRingWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.CanvasGroup _textCanvasGroup
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::CanvasGroup* textCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.ParticleSystem _shockWavePS
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::ParticleSystem* shockWavePS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3C7B8
    // private BloomFogEnvironmentParams _finishForParams
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BloomFogEnvironmentParams* finishForParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // [InjectAttribute] Offset: 0xE3C7F0
    // private readonly BloomFogParamsAnimator _bloomFogAnimator
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BloomFogParamsAnimator* bloomFogAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogParamsAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE3C800
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // private System.Action introTutorialDidFinishEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* introTutorialDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _showingFinishAnimation
    // Size: 0x1
    // Offset: 0x68
    bool showingFinishAnimation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _redRingWrapperActive
    // Size: 0x1
    // Offset: 0x69
    bool redRingWrapperActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _blueRingWrapperActive
    // Size: 0x1
    // Offset: 0x6A
    bool blueRingWrapperActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IntroTutorialController
    IntroTutorialController(GlobalNamespace::IntroTutorialRing* redRing_ = {}, GlobalNamespace::IntroTutorialRing* blueRing_ = {}, UnityEngine::GameObject* redRingWrapper_ = {}, UnityEngine::GameObject* blueRingWrapper_ = {}, UnityEngine::CanvasGroup* textCanvasGroup_ = {}, UnityEngine::ParticleSystem* shockWavePS_ = {}, GlobalNamespace::BloomFogEnvironmentParams* finishForParams_ = {}, GlobalNamespace::BloomFogParamsAnimator* bloomFogAnimator_ = {}, GlobalNamespace::IGamePause* gamePause_ = {}, System::Action* introTutorialDidFinishEvent_ = {}, bool showingFinishAnimation_ = {}, bool redRingWrapperActive_ = {}, bool blueRingWrapperActive_ = {}) noexcept : redRing{redRing_}, blueRing{blueRing_}, redRingWrapper{redRingWrapper_}, blueRingWrapper{blueRingWrapper_}, textCanvasGroup{textCanvasGroup_}, shockWavePS{shockWavePS_}, finishForParams{finishForParams_}, bloomFogAnimator{bloomFogAnimator_}, gamePause{gamePause_}, introTutorialDidFinishEvent{introTutorialDidFinishEvent_}, showingFinishAnimation{showingFinishAnimation_}, redRingWrapperActive{redRingWrapperActive_}, blueRingWrapperActive{blueRingWrapperActive_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private IntroTutorialRing _redRing
    GlobalNamespace::IntroTutorialRing* _get__redRing();
    // Set instance field: private IntroTutorialRing _redRing
    void _set__redRing(GlobalNamespace::IntroTutorialRing* value);
    // Get instance field: private IntroTutorialRing _blueRing
    GlobalNamespace::IntroTutorialRing* _get__blueRing();
    // Set instance field: private IntroTutorialRing _blueRing
    void _set__blueRing(GlobalNamespace::IntroTutorialRing* value);
    // Get instance field: private UnityEngine.GameObject _redRingWrapper
    UnityEngine::GameObject* _get__redRingWrapper();
    // Set instance field: private UnityEngine.GameObject _redRingWrapper
    void _set__redRingWrapper(UnityEngine::GameObject* value);
    // Get instance field: private UnityEngine.GameObject _blueRingWrapper
    UnityEngine::GameObject* _get__blueRingWrapper();
    // Set instance field: private UnityEngine.GameObject _blueRingWrapper
    void _set__blueRingWrapper(UnityEngine::GameObject* value);
    // Get instance field: private UnityEngine.CanvasGroup _textCanvasGroup
    UnityEngine::CanvasGroup* _get__textCanvasGroup();
    // Set instance field: private UnityEngine.CanvasGroup _textCanvasGroup
    void _set__textCanvasGroup(UnityEngine::CanvasGroup* value);
    // Get instance field: private UnityEngine.ParticleSystem _shockWavePS
    UnityEngine::ParticleSystem* _get__shockWavePS();
    // Set instance field: private UnityEngine.ParticleSystem _shockWavePS
    void _set__shockWavePS(UnityEngine::ParticleSystem* value);
    // Get instance field: private BloomFogEnvironmentParams _finishForParams
    GlobalNamespace::BloomFogEnvironmentParams* _get__finishForParams();
    // Set instance field: private BloomFogEnvironmentParams _finishForParams
    void _set__finishForParams(GlobalNamespace::BloomFogEnvironmentParams* value);
    // Get instance field: private readonly BloomFogParamsAnimator _bloomFogAnimator
    GlobalNamespace::BloomFogParamsAnimator* _get__bloomFogAnimator();
    // Set instance field: private readonly BloomFogParamsAnimator _bloomFogAnimator
    void _set__bloomFogAnimator(GlobalNamespace::BloomFogParamsAnimator* value);
    // Get instance field: private readonly IGamePause _gamePause
    GlobalNamespace::IGamePause* _get__gamePause();
    // Set instance field: private readonly IGamePause _gamePause
    void _set__gamePause(GlobalNamespace::IGamePause* value);
    // Get instance field: private System.Action introTutorialDidFinishEvent
    System::Action* _get_introTutorialDidFinishEvent();
    // Set instance field: private System.Action introTutorialDidFinishEvent
    void _set_introTutorialDidFinishEvent(System::Action* value);
    // Get instance field: private System.Boolean _showingFinishAnimation
    bool _get__showingFinishAnimation();
    // Set instance field: private System.Boolean _showingFinishAnimation
    void _set__showingFinishAnimation(bool value);
    // Get instance field: private System.Boolean _redRingWrapperActive
    bool _get__redRingWrapperActive();
    // Set instance field: private System.Boolean _redRingWrapperActive
    void _set__redRingWrapperActive(bool value);
    // Get instance field: private System.Boolean _blueRingWrapperActive
    bool _get__blueRingWrapperActive();
    // Set instance field: private System.Boolean _blueRingWrapperActive
    void _set__blueRingWrapperActive(bool value);
    // public System.Void add_introTutorialDidFinishEvent(System.Action value)
    // Offset: 0x1146040
    void add_introTutorialDidFinishEvent(System::Action* value);
    // public System.Void remove_introTutorialDidFinishEvent(System.Action value)
    // Offset: 0x11460E4
    void remove_introTutorialDidFinishEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x1146188
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x114630C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x11464AC
    void Update();
    // private System.Void CleanUp()
    // Offset: 0x1146310
    void CleanUp();
    // private System.Void HandleGameDidPause()
    // Offset: 0x11465FC
    void HandleGameDidPause();
    // private System.Void HandlegameDidResume()
    // Offset: 0x1146678
    void HandlegameDidResume();
    // private System.Void ShowFinishAnimation()
    // Offset: 0x1146570
    void ShowFinishAnimation();
    // private System.Collections.IEnumerator ShowFinishAnimationCoroutine()
    // Offset: 0x11466BC
    System::Collections::IEnumerator* ShowFinishAnimationCoroutine();
    // private System.Void SetFinishAnimationParams(System.Single progress)
    // Offset: 0x1146758
    void SetFinishAnimationParams(float progress);
    // public System.Void .ctor()
    // Offset: 0x11467EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntroTutorialController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IntroTutorialController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntroTutorialController*, creationType>()));
    }
  }; // IntroTutorialController
  #pragma pack(pop)
  static check_size<sizeof(IntroTutorialController), 106 + sizeof(bool)> __GlobalNamespace_IntroTutorialControllerSizeCheck;
  static_assert(sizeof(IntroTutorialController) == 0x6B);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntroTutorialController*, "", "IntroTutorialController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::add_introTutorialDidFinishEvent
// Il2CppName: add_introTutorialDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)(System::Action*)>(&GlobalNamespace::IntroTutorialController::add_introTutorialDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "add_introTutorialDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::remove_introTutorialDidFinishEvent
// Il2CppName: remove_introTutorialDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)(System::Action*)>(&GlobalNamespace::IntroTutorialController::remove_introTutorialDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "remove_introTutorialDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::CleanUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::HandleGameDidPause
// Il2CppName: HandleGameDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::HandleGameDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "HandleGameDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::HandlegameDidResume
// Il2CppName: HandlegameDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::HandlegameDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "HandlegameDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::ShowFinishAnimation
// Il2CppName: ShowFinishAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::ShowFinishAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "ShowFinishAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::ShowFinishAnimationCoroutine
// Il2CppName: ShowFinishAnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::ShowFinishAnimationCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "ShowFinishAnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::SetFinishAnimationParams
// Il2CppName: SetFinishAnimationParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)(float)>(&GlobalNamespace::IntroTutorialController::SetFinishAnimationParams)> {
  static const MethodInfo* get() {
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "SetFinishAnimationParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
