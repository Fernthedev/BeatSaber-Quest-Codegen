// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ParticleControlPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private System.Single m_LastPlayableTime
    // Size: 0x4
    // Offset: 0x10
    float m_LastPlayableTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_LastParticleTime
    // Size: 0x4
    // Offset: 0x14
    float m_LastParticleTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.UInt32 m_RandomSeed
    // Size: 0x4
    // Offset: 0x18
    uint m_RandomSeed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_RandomSeed and: particleSystem
    char __padding2[0x4] = {};
    // private UnityEngine.ParticleSystem <particleSystem>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // Creating value type constructor for type: ParticleControlPlayable
    ParticleControlPlayable(float m_LastPlayableTime_ = {}, float m_LastParticleTime_ = {}, uint m_RandomSeed_ = {}, UnityEngine::ParticleSystem* particleSystem_ = {}) noexcept : m_LastPlayableTime{m_LastPlayableTime_}, m_LastParticleTime{m_LastParticleTime_}, m_RandomSeed{m_RandomSeed_}, particleSystem{particleSystem_} {}
    // static field const value: static private System.Single kUnsetTime
    static constexpr const float kUnsetTime = 3.4028235e+38;
    // Get static field: static private System.Single kUnsetTime
    static float _get_kUnsetTime();
    // Set static field: static private System.Single kUnsetTime
    static void _set_kUnsetTime(float value);
    // Get instance field reference: private System.Single m_LastPlayableTime
    float& dyn_m_LastPlayableTime();
    // Get instance field reference: private System.Single m_LastParticleTime
    float& dyn_m_LastParticleTime();
    // Get instance field reference: private System.UInt32 m_RandomSeed
    uint& dyn_m_RandomSeed();
    // Get instance field reference: private UnityEngine.ParticleSystem <particleSystem>k__BackingField
    UnityEngine::ParticleSystem*& dyn_$particleSystem$k__BackingField();
    // public UnityEngine.ParticleSystem get_particleSystem()
    // Offset: 0x1829F60
    UnityEngine::ParticleSystem* get_particleSystem();
    // private System.Void set_particleSystem(UnityEngine.ParticleSystem value)
    // Offset: 0x1829F68
    void set_particleSystem(UnityEngine::ParticleSystem* value);
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.ParticleControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.ParticleSystem component, System.UInt32 randomSeed)
    // Offset: 0x18243D8
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ParticleControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::ParticleSystem* component, uint randomSeed);
    // public System.Void Initialize(UnityEngine.ParticleSystem ps, System.UInt32 randomSeed)
    // Offset: 0x1829ED0
    void Initialize(UnityEngine::ParticleSystem* ps, uint randomSeed);
    // static private System.Void SetRandomSeed(UnityEngine.ParticleSystem particleSystem, System.UInt32 randomSeed)
    // Offset: 0x1829F70
    static void SetRandomSeed(UnityEngine::ParticleSystem* particleSystem, uint randomSeed);
    // private System.Void Simulate(System.Single time, System.Boolean restart)
    // Offset: 0x182A23C
    void Simulate(float time, bool restart);
    // public System.Void .ctor()
    // Offset: 0x182A31C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ParticleControlPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleControlPlayable*, creationType>()));
    }
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData data)
    // Offset: 0x182A0BC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData data)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData data);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x182A304
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x182A310
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
  }; // UnityEngine.Timeline.ParticleControlPlayable
  #pragma pack(pop)
  static check_size<sizeof(ParticleControlPlayable), 32 + sizeof(UnityEngine::ParticleSystem*)> __UnityEngine_Timeline_ParticleControlPlayableSizeCheck;
  static_assert(sizeof(ParticleControlPlayable) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ParticleControlPlayable*, "UnityEngine.Timeline", "ParticleControlPlayable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::get_particleSystem
// Il2CppName: get_particleSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem* (UnityEngine::Timeline::ParticleControlPlayable::*)()>(&UnityEngine::Timeline::ParticleControlPlayable::get_particleSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "get_particleSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::set_particleSystem
// Il2CppName: set_particleSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ParticleControlPlayable::*)(UnityEngine::ParticleSystem*)>(&UnityEngine::Timeline::ParticleControlPlayable::set_particleSystem)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "set_particleSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ParticleControlPlayable*> (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::ParticleSystem*, uint)>(&UnityEngine::Timeline::ParticleControlPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* component = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* randomSeed = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, component, randomSeed});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ParticleControlPlayable::*)(UnityEngine::ParticleSystem*, uint)>(&UnityEngine::Timeline::ParticleControlPlayable::Initialize)> {
  static const MethodInfo* get() {
    static auto* ps = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* randomSeed = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ps, randomSeed});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::SetRandomSeed
// Il2CppName: SetRandomSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ParticleSystem*, uint)>(&UnityEngine::Timeline::ParticleControlPlayable::SetRandomSeed)> {
  static const MethodInfo* get() {
    static auto* particleSystem = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem")->byval_arg;
    static auto* randomSeed = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "SetRandomSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particleSystem, randomSeed});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::Simulate
// Il2CppName: Simulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ParticleControlPlayable::*)(float, bool)>(&UnityEngine::Timeline::ParticleControlPlayable::Simulate)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* restart = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "Simulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, restart});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ParticleControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ParticleControlPlayable::PrepareFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ParticleControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ParticleControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ParticleControlPlayable::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ParticleControlPlayable*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
