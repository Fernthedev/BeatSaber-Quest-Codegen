// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialSongController
  class TutorialSongController;
  // Forward declaring type: IntroTutorialController
  class IntroTutorialController;
  // Forward declaring type: AudioFading
  class AudioFading;
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: PauseController
  class PauseController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialController
  class TutorialController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::TutorialController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialController*, "", "TutorialController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: TutorialController
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TutorialController::$OutroCoroutine$d__13
    class $OutroCoroutine$d__13;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TutorialSongController _tutorialSongController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TutorialSongController* tutorialSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialSongController*) == 0x8);
    // private IntroTutorialController _introTutorialController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IntroTutorialController* introTutorialController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntroTutorialController*) == 0x8);
    // private AudioFading _audioFading
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioFading* audioFading;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioFading*) == 0x8);
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x1246CAC
    // [SignalSenderAttribute] Offset: 0x1246CAC
    // private Signal _tutorialIntroStartedSignal
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::Signal* tutorialIntroStartedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [SignalSenderAttribute] Offset: 0x1246CF4
    // private Signal _tutorialFinishedSignal
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::Signal* tutorialFinishedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [InjectAttribute] Offset: 0x1246D2C
    // private PauseController _pauseController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PauseController* pauseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseController*) == 0x8);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x50
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _doingOutroTransition
    // Size: 0x1
    // Offset: 0x51
    bool doingOutroTransition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TutorialSongController _tutorialSongController
    GlobalNamespace::TutorialSongController*& dyn__tutorialSongController();
    // Get instance field reference: private IntroTutorialController _introTutorialController
    GlobalNamespace::IntroTutorialController*& dyn__introTutorialController();
    // Get instance field reference: private AudioFading _audioFading
    GlobalNamespace::AudioFading*& dyn__audioFading();
    // Get instance field reference: private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    GlobalNamespace::TutorialScenesTransitionSetupDataSO*& dyn__tutorialSceneSetupData();
    // Get instance field reference: private Signal _tutorialIntroStartedSignal
    GlobalNamespace::Signal*& dyn__tutorialIntroStartedSignal();
    // Get instance field reference: private Signal _tutorialFinishedSignal
    GlobalNamespace::Signal*& dyn__tutorialFinishedSignal();
    // Get instance field reference: private PauseController _pauseController
    GlobalNamespace::PauseController*& dyn__pauseController();
    // Get instance field reference: private System.Boolean _paused
    bool& dyn__paused();
    // Get instance field reference: private System.Boolean _doingOutroTransition
    bool& dyn__doingOutroTransition();
    // protected System.Void Start()
    // Offset: 0x2AEB510
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2AEB6E4
    void OnDestroy();
    // private System.Void HandleIntroTutorialDidFinishEvent()
    // Offset: 0x2AEB928
    void HandleIntroTutorialDidFinishEvent();
    // private System.Void HandleTutorialSongControllerSongDidFinishEvent()
    // Offset: 0x2AEB9A4
    void HandleTutorialSongControllerSongDidFinishEvent();
    // private System.Collections.IEnumerator OutroCoroutine()
    // Offset: 0x2AEB9F0
    System::Collections::IEnumerator* OutroCoroutine();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0x2AEBA8C
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0x2AEBB18
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0x2AEBB24
    void HandlePauseControllerDidResume();
    // public System.Void .ctor()
    // Offset: 0x2AEBB2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialController*, creationType>()));
    }
  }; // TutorialController
  #pragma pack(pop)
  static check_size<sizeof(TutorialController), 81 + sizeof(bool)> __GlobalNamespace_TutorialControllerSizeCheck;
  static_assert(sizeof(TutorialController) == 0x52);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandleIntroTutorialDidFinishEvent
// Il2CppName: HandleIntroTutorialDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandleIntroTutorialDidFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandleIntroTutorialDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandleTutorialSongControllerSongDidFinishEvent
// Il2CppName: HandleTutorialSongControllerSongDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandleTutorialSongControllerSongDidFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandleTutorialSongControllerSongDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::OutroCoroutine
// Il2CppName: OutroCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::OutroCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "OutroCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandlePauseControllerCanPause
// Il2CppName: HandlePauseControllerCanPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)(System::Action_1<bool>*)>(&GlobalNamespace::TutorialController::HandlePauseControllerCanPause)> {
  static const MethodInfo* get() {
    static auto* canPause = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandlePauseControllerCanPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canPause});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandlePauseControllerDidPause
// Il2CppName: HandlePauseControllerDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandlePauseControllerDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandlePauseControllerDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandlePauseControllerDidResume
// Il2CppName: HandlePauseControllerDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandlePauseControllerDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandlePauseControllerDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
