// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
    // [SpaceAttribute] Offset: 0xE1FB78
    // private BloomFogEnvironmentParams _finishForParams
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BloomFogEnvironmentParams* finishForParams;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogEnvironmentParams*) == 0x8);
    // [InjectAttribute] Offset: 0xE1FBB0
    // private readonly BloomFogParamsAnimator _bloomFogAnimator
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BloomFogParamsAnimator* bloomFogAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogParamsAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xE1FBC0
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1FBD0
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
    // public System.Void add_introTutorialDidFinishEvent(System.Action value)
    // Offset: 0x10C4BC0
    void add_introTutorialDidFinishEvent(System::Action* value);
    // public System.Void remove_introTutorialDidFinishEvent(System.Action value)
    // Offset: 0x10C4C64
    void remove_introTutorialDidFinishEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x10C4D08
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10C4E8C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x10C502C
    void Update();
    // private System.Void CleanUp()
    // Offset: 0x10C4E90
    void CleanUp();
    // private System.Void HandleGameDidPause()
    // Offset: 0x10C517C
    void HandleGameDidPause();
    // private System.Void HandlegameDidResume()
    // Offset: 0x10C51F8
    void HandlegameDidResume();
    // private System.Void ShowFinishAnimation()
    // Offset: 0x10C50F0
    void ShowFinishAnimation();
    // private System.Collections.IEnumerator ShowFinishAnimationCoroutine()
    // Offset: 0x10C523C
    System::Collections::IEnumerator* ShowFinishAnimationCoroutine();
    // private System.Void SetFinishAnimationParams(System.Single progress)
    // Offset: 0x10C52D8
    void SetFinishAnimationParams(float progress);
    // public System.Void .ctor()
    // Offset: 0x10C536C
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
// Writing includes for template specializations
#include "System/Action.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::add_introTutorialDidFinishEvent
// Il2CppName: add_introTutorialDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)(System::Action*)>(&GlobalNamespace::IntroTutorialController::add_introTutorialDidFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "add_introTutorialDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::remove_introTutorialDidFinishEvent
// Il2CppName: remove_introTutorialDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)(System::Action*)>(&GlobalNamespace::IntroTutorialController::remove_introTutorialDidFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "remove_introTutorialDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::CleanUp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::HandleGameDidPause
// Il2CppName: HandleGameDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::HandleGameDidPause)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "HandleGameDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::HandlegameDidResume
// Il2CppName: HandlegameDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::HandlegameDidResume)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "HandlegameDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::ShowFinishAnimation
// Il2CppName: ShowFinishAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::ShowFinishAnimation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "ShowFinishAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::ShowFinishAnimationCoroutine
// Il2CppName: ShowFinishAnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::IntroTutorialController::*)()>(&GlobalNamespace::IntroTutorialController::ShowFinishAnimationCoroutine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "ShowFinishAnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::SetFinishAnimationParams
// Il2CppName: SetFinishAnimationParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialController::*)(float)>(&GlobalNamespace::IntroTutorialController::SetFinishAnimationParams)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialController*), "SetFinishAnimationParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
