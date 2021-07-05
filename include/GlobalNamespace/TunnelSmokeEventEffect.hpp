// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
// Including type: UnityEngine.ParticleSystem/ShapeModule
#include "UnityEngine/ParticleSystem_ShapeModule.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TunnelSmokeEventEffect
  class TunnelSmokeEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // private BeatmapEventType _event
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType event;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: event and: particleSystem
    char __padding0[0x4] = {};
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B1B0
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // private UnityEngine.ParticleSystem/MainModule _mainModule
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ParticleSystem::MainModule mainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/ShapeModule _shapeModule
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::ParticleSystem::ShapeModule shapeModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::ShapeModule) == 0x8);
    // private UnityEngine.ParticleSystem/Particle[] _particles
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::ParticleSystem::Particle>* particles;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::Particle>*) == 0x8);
    // Creating value type constructor for type: TunnelSmokeEventEffect
    TunnelSmokeEventEffect(GlobalNamespace::BeatmapEventType event_ = {}, UnityEngine::ParticleSystem* particleSystem_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, UnityEngine::ParticleSystem::MainModule mainModule_ = {}, UnityEngine::ParticleSystem::ShapeModule shapeModule_ = {}, ::Array<UnityEngine::ParticleSystem::Particle>* particles_ = {}) noexcept : event{event_}, particleSystem{particleSystem_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, mainModule{mainModule_}, shapeModule{shapeModule_}, particles{particles_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSpeedMultiplier
    static constexpr const float kSpeedMultiplier = 5;
    // Get static field: static private System.Single kSpeedMultiplier
    static float _get_kSpeedMultiplier();
    // Set static field: static private System.Single kSpeedMultiplier
    static void _set_kSpeedMultiplier(float value);
    // static field const value: static private System.Int32 kMaxParticles
    static constexpr const int kMaxParticles = 50;
    // Get static field: static private System.Int32 kMaxParticles
    static int _get_kMaxParticles();
    // Set static field: static private System.Int32 kMaxParticles
    static void _set_kMaxParticles(int value);
    // protected System.Void Start()
    // Offset: 0x111BE70
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x111BF4C
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x111C024
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x111C204
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TunnelSmokeEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TunnelSmokeEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TunnelSmokeEventEffect*, creationType>()));
    }
  }; // TunnelSmokeEventEffect
  #pragma pack(pop)
  static check_size<sizeof(TunnelSmokeEventEffect), 64 + sizeof(::Array<UnityEngine::ParticleSystem::Particle>*)> __GlobalNamespace_TunnelSmokeEventEffectSizeCheck;
  static_assert(sizeof(TunnelSmokeEventEffect) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TunnelSmokeEventEffect*, "", "TunnelSmokeEventEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TunnelSmokeEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TunnelSmokeEventEffect::*)()>(&GlobalNamespace::TunnelSmokeEventEffect::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TunnelSmokeEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TunnelSmokeEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TunnelSmokeEventEffect::*)()>(&GlobalNamespace::TunnelSmokeEventEffect::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TunnelSmokeEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TunnelSmokeEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TunnelSmokeEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::TunnelSmokeEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TunnelSmokeEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TunnelSmokeEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
