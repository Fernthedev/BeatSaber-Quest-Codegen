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
  // Forward declaring type: TrackLaneRingsManager
  class TrackLaneRingsManager;
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsRotationEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRingsRotationEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect
    class RingRotationEffect;
    // private TrackLaneRingsManager _trackLaneRingsManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TrackLaneRingsManager*) == 0x8);
    // [HeaderAttribute] Offset: 0xE3E540
    // private System.Single _startupRotationAngle
    // Size: 0x4
    // Offset: 0x20
    float startupRotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startupRotationStep
    // Size: 0x4
    // Offset: 0x24
    float startupRotationStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _startupRotationPropagationSpeed
    // Size: 0x4
    // Offset: 0x28
    int startupRotationPropagationSpeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _startupRotationFlexySpeed
    // Size: 0x4
    // Offset: 0x2C
    float startupRotationFlexySpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.List`1<TrackLaneRingsRotationEffect/RingRotationEffect> _activeRingRotationEffects
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>* activeRingRotationEffects;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>*) == 0x8);
    // private System.Collections.Generic.List`1<TrackLaneRingsRotationEffect/RingRotationEffect> _ringRotationEffectsPool
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>* ringRotationEffectsPool;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> ringRotationEffectsToDelete
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<int>* ringRotationEffectsToDelete;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // Creating value type constructor for type: TrackLaneRingsRotationEffect
    TrackLaneRingsRotationEffect(GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager_ = {}, float startupRotationAngle_ = {}, float startupRotationStep_ = {}, int startupRotationPropagationSpeed_ = {}, float startupRotationFlexySpeed_ = {}, System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>* activeRingRotationEffects_ = {}, System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>* ringRotationEffectsPool_ = {}, System::Collections::Generic::List_1<int>* ringRotationEffectsToDelete_ = {}) noexcept : trackLaneRingsManager{trackLaneRingsManager_}, startupRotationAngle{startupRotationAngle_}, startupRotationStep{startupRotationStep_}, startupRotationPropagationSpeed{startupRotationPropagationSpeed_}, startupRotationFlexySpeed{startupRotationFlexySpeed_}, activeRingRotationEffects{activeRingRotationEffects_}, ringRotationEffectsPool{ringRotationEffectsPool_}, ringRotationEffectsToDelete{ringRotationEffectsToDelete_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TrackLaneRingsManager _trackLaneRingsManager
    GlobalNamespace::TrackLaneRingsManager*& dyn__trackLaneRingsManager();
    // Get instance field reference: private System.Single _startupRotationAngle
    float& dyn__startupRotationAngle();
    // Get instance field reference: private System.Single _startupRotationStep
    float& dyn__startupRotationStep();
    // Get instance field reference: private System.Int32 _startupRotationPropagationSpeed
    int& dyn__startupRotationPropagationSpeed();
    // Get instance field reference: private System.Single _startupRotationFlexySpeed
    float& dyn__startupRotationFlexySpeed();
    // Get instance field reference: private System.Collections.Generic.List`1<TrackLaneRingsRotationEffect/RingRotationEffect> _activeRingRotationEffects
    System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>*& dyn__activeRingRotationEffects();
    // Get instance field reference: private System.Collections.Generic.List`1<TrackLaneRingsRotationEffect/RingRotationEffect> _ringRotationEffectsPool
    System::Collections::Generic::List_1<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*>*& dyn__ringRotationEffectsPool();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> ringRotationEffectsToDelete
    System::Collections::Generic::List_1<int>*& dyn_ringRotationEffectsToDelete();
    // protected System.Void Awake()
    // Offset: 0x10732D4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x10733EC
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0x1073498
    void FixedUpdate();
    // public System.Void AddRingRotationEffect(System.Single angle, System.Single step, System.Int32 propagationSpeed, System.Single flexySpeed)
    // Offset: 0x10733FC
    void AddRingRotationEffect(float angle, float step, int propagationSpeed, float flexySpeed);
    // public System.Single GetFirstRingRotationAngle()
    // Offset: 0x1073714
    float GetFirstRingRotationAngle();
    // public System.Single GetFirstRingDestinationRotationAngle()
    // Offset: 0x1073758
    float GetFirstRingDestinationRotationAngle();
    // private TrackLaneRingsRotationEffect/RingRotationEffect SpawnRingRotationEffect()
    // Offset: 0x107367C
    GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect* SpawnRingRotationEffect();
    // private System.Void RecycleRingRotationEffect(TrackLaneRingsRotationEffect/RingRotationEffect ringRotationEffect)
    // Offset: 0x1073614
    void RecycleRingRotationEffect(GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect* ringRotationEffect);
    // public System.Void .ctor()
    // Offset: 0x107379C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsRotationEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrackLaneRingsRotationEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsRotationEffect*, creationType>()));
    }
  }; // TrackLaneRingsRotationEffect
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsRotationEffect), 64 + sizeof(System::Collections::Generic::List_1<int>*)> __GlobalNamespace_TrackLaneRingsRotationEffectSizeCheck;
  static_assert(sizeof(TrackLaneRingsRotationEffect) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsRotationEffect*, "", "TrackLaneRingsRotationEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffect::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::AddRingRotationEffect
// Il2CppName: AddRingRotationEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffect::*)(float, float, int, float)>(&GlobalNamespace::TrackLaneRingsRotationEffect::AddRingRotationEffect)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* step = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* propagationSpeed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flexySpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "AddRingRotationEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, step, propagationSpeed, flexySpeed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingRotationAngle
// Il2CppName: GetFirstRingRotationAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingRotationAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "GetFirstRingRotationAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingDestinationRotationAngle
// Il2CppName: GetFirstRingDestinationRotationAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffect::GetFirstRingDestinationRotationAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "GetFirstRingDestinationRotationAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::SpawnRingRotationEffect
// Il2CppName: SpawnRingRotationEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect* (GlobalNamespace::TrackLaneRingsRotationEffect::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffect::SpawnRingRotationEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "SpawnRingRotationEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::RecycleRingRotationEffect
// Il2CppName: RecycleRingRotationEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffect::*)(GlobalNamespace::TrackLaneRingsRotationEffect::RingRotationEffect*)>(&GlobalNamespace::TrackLaneRingsRotationEffect::RecycleRingRotationEffect)> {
  static const MethodInfo* get() {
    static auto* ringRotationEffect = &::il2cpp_utils::GetClassFromName("", "TrackLaneRingsRotationEffect/RingRotationEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffect*), "RecycleRingRotationEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ringRotationEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
