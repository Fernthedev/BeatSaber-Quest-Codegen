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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CountdownElementController
  class CountdownElementController;
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CountdownController
  // [TokenAttribute] Offset: FFFFFFFF
  class CountdownController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private CountdownElementController[] _countdownElementControllers
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::CountdownElementController*>* countdownElementControllers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CountdownElementController*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE405A4
    // private readonly ITimeProvider _timeProvider
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ITimeProvider* timeProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ITimeProvider*) == 0x8);
    // private System.Single _countdownEndTime
    // Size: 0x4
    // Offset: 0x30
    float countdownEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _currentRemainingSecond
    // Size: 0x4
    // Offset: 0x34
    int currentRemainingSecond;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _gongSounded
    // Size: 0x1
    // Offset: 0x38
    bool gongSounded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _countdownRunning
    // Size: 0x1
    // Offset: 0x39
    bool countdownRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownRunning and: countdownElementControllerQueue
    char __padding6[0x6] = {};
    // private readonly System.Collections.Generic.Queue`1<CountdownElementController> _countdownElementControllerQueue
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* countdownElementControllerQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>*) == 0x8);
    // Creating value type constructor for type: CountdownController
    CountdownController(UnityEngine::AudioSource* audioSource_ = {}, ::Array<GlobalNamespace::CountdownElementController*>* countdownElementControllers_ = {}, GlobalNamespace::ITimeProvider* timeProvider_ = {}, float countdownEndTime_ = {}, int currentRemainingSecond_ = {}, bool gongSounded_ = {}, bool countdownRunning_ = {}, System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* countdownElementControllerQueue_ = {}) noexcept : audioSource{audioSource_}, countdownElementControllers{countdownElementControllers_}, timeProvider{timeProvider_}, countdownEndTime{countdownEndTime_}, currentRemainingSecond{currentRemainingSecond_}, gongSounded{gongSounded_}, countdownRunning{countdownRunning_}, countdownElementControllerQueue{countdownElementControllerQueue_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kGongTime
    static constexpr const float kGongTime = 5;
    // Get static field: static private System.Single kGongTime
    static float _get_kGongTime();
    // Set static field: static private System.Single kGongTime
    static void _set_kGongTime(float value);
    // Get instance field: private UnityEngine.AudioSource _audioSource
    UnityEngine::AudioSource* _get__audioSource();
    // Set instance field: private UnityEngine.AudioSource _audioSource
    void _set__audioSource(UnityEngine::AudioSource* value);
    // Get instance field: private CountdownElementController[] _countdownElementControllers
    ::Array<GlobalNamespace::CountdownElementController*>* _get__countdownElementControllers();
    // Set instance field: private CountdownElementController[] _countdownElementControllers
    void _set__countdownElementControllers(::Array<GlobalNamespace::CountdownElementController*>* value);
    // Get instance field: private readonly ITimeProvider _timeProvider
    GlobalNamespace::ITimeProvider* _get__timeProvider();
    // Set instance field: private readonly ITimeProvider _timeProvider
    void _set__timeProvider(GlobalNamespace::ITimeProvider* value);
    // Get instance field: private System.Single _countdownEndTime
    float _get__countdownEndTime();
    // Set instance field: private System.Single _countdownEndTime
    void _set__countdownEndTime(float value);
    // Get instance field: private System.Int32 _currentRemainingSecond
    int _get__currentRemainingSecond();
    // Set instance field: private System.Int32 _currentRemainingSecond
    void _set__currentRemainingSecond(int value);
    // Get instance field: private System.Boolean _gongSounded
    bool _get__gongSounded();
    // Set instance field: private System.Boolean _gongSounded
    void _set__gongSounded(bool value);
    // Get instance field: private System.Boolean _countdownRunning
    bool _get__countdownRunning();
    // Set instance field: private System.Boolean _countdownRunning
    void _set__countdownRunning(bool value);
    // Get instance field: private readonly System.Collections.Generic.Queue`1<CountdownElementController> _countdownElementControllerQueue
    System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* _get__countdownElementControllerQueue();
    // Set instance field: private readonly System.Collections.Generic.Queue`1<CountdownElementController> _countdownElementControllerQueue
    void _set__countdownElementControllerQueue(System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* value);
    // protected System.Void Awake()
    // Offset: 0x10F3708
    void Awake();
    // protected System.Void Update()
    // Offset: 0x10F3720
    void Update();
    // public System.Void StartCountdown(System.Single countdownEndTime)
    // Offset: 0x10EAD4C
    void StartCountdown(float countdownEndTime);
    // public System.Void UpdateCountdown(System.Single countdownEndTime)
    // Offset: 0x10EAF3C
    void UpdateCountdown(float countdownEndTime);
    // public System.Void StopCountdown()
    // Offset: 0x10EAE4C
    void StopCountdown();
    // public System.Void .ctor()
    // Offset: 0x10F3940
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CountdownController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownController*, creationType>()));
    }
  }; // CountdownController
  #pragma pack(pop)
  static check_size<sizeof(CountdownController), 64 + sizeof(System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>*)> __GlobalNamespace_CountdownControllerSizeCheck;
  static_assert(sizeof(CountdownController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownController*, "", "CountdownController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CountdownController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownController::*)()>(&GlobalNamespace::CountdownController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownController::*)()>(&GlobalNamespace::CountdownController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownController::StartCountdown
// Il2CppName: StartCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownController::*)(float)>(&GlobalNamespace::CountdownController::StartCountdown)> {
  static const MethodInfo* get() {
    static auto* countdownEndTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownController*), "StartCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{countdownEndTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownController::UpdateCountdown
// Il2CppName: UpdateCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownController::*)(float)>(&GlobalNamespace::CountdownController::UpdateCountdown)> {
  static const MethodInfo* get() {
    static auto* countdownEndTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownController*), "UpdateCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{countdownEndTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownController::StopCountdown
// Il2CppName: StopCountdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownController::*)()>(&GlobalNamespace::CountdownController::StopCountdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CountdownController*), "StopCountdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CountdownController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
