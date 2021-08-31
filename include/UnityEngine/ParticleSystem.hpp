// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystemStopBehavior
  struct ParticleSystemStopBehavior;
  // Skipping declaration: Particle because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  // [RequireComponent] Offset: DE01E4
  // [UsedByNativeCodeAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  // [NativeHeaderAttribute] Offset: DE01E4
  class ParticleSystem : public UnityEngine::Component {
    public:
    // Nested type: UnityEngine::ParticleSystem::MainModule
    struct MainModule;
    // Nested type: UnityEngine::ParticleSystem::EmissionModule
    struct EmissionModule;
    // Nested type: UnityEngine::ParticleSystem::ShapeModule
    struct ShapeModule;
    // Nested type: UnityEngine::ParticleSystem::SubEmittersModule
    struct SubEmittersModule;
    // Nested type: UnityEngine::ParticleSystem::Particle
    struct Particle;
    // Nested type: UnityEngine::ParticleSystem::MinMaxCurve
    struct MinMaxCurve;
    // Nested type: UnityEngine::ParticleSystem::MinMaxGradient
    struct MinMaxGradient;
    // Nested type: UnityEngine::ParticleSystem::EmitParams
    struct EmitParams;
    // Size: 0x84
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.Particle
    // [TokenAttribute] Offset: FFFFFFFF
    // [RequiredByNativeCodeAttribute] Offset: DE0380
    struct Particle/*, public System::ValueType*/ {
      public:
      // private UnityEngine.Vector3 m_Position
      // Size: 0xC
      // Offset: 0x0
      UnityEngine::Vector3 m_Position;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_Velocity
      // Size: 0xC
      // Offset: 0xC
      UnityEngine::Vector3 m_Velocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AnimatedVelocity
      // Size: 0xC
      // Offset: 0x18
      UnityEngine::Vector3 m_AnimatedVelocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_InitialVelocity
      // Size: 0xC
      // Offset: 0x24
      UnityEngine::Vector3 m_InitialVelocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AxisOfRotation
      // Size: 0xC
      // Offset: 0x30
      UnityEngine::Vector3 m_AxisOfRotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_Rotation
      // Size: 0xC
      // Offset: 0x3C
      UnityEngine::Vector3 m_Rotation;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AngularVelocity
      // Size: 0xC
      // Offset: 0x48
      UnityEngine::Vector3 m_AngularVelocity;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_StartSize
      // Size: 0xC
      // Offset: 0x54
      UnityEngine::Vector3 m_StartSize;
      // Field size check
      static_assert(sizeof(UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Color32 m_StartColor
      // Size: 0x4
      // Offset: 0x60
      UnityEngine::Color32 m_StartColor;
      // Field size check
      static_assert(sizeof(UnityEngine::Color32) == 0x4);
      // private System.UInt32 m_RandomSeed
      // Size: 0x4
      // Offset: 0x64
      uint m_RandomSeed;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // private System.UInt32 m_ParentRandomSeed
      // Size: 0x4
      // Offset: 0x68
      uint m_ParentRandomSeed;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // private System.Single m_Lifetime
      // Size: 0x4
      // Offset: 0x6C
      float m_Lifetime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_StartLifetime
      // Size: 0x4
      // Offset: 0x70
      float m_StartLifetime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Int32 m_MeshIndex
      // Size: 0x4
      // Offset: 0x74
      int m_MeshIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Single m_EmitAccumulator0
      // Size: 0x4
      // Offset: 0x78
      float m_EmitAccumulator0;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_EmitAccumulator1
      // Size: 0x4
      // Offset: 0x7C
      float m_EmitAccumulator1;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.UInt32 m_Flags
      // Size: 0x4
      // Offset: 0x80
      uint m_Flags;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // Creating value type constructor for type: Particle
      constexpr Particle(UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Vector3 m_Velocity_ = {}, UnityEngine::Vector3 m_AnimatedVelocity_ = {}, UnityEngine::Vector3 m_InitialVelocity_ = {}, UnityEngine::Vector3 m_AxisOfRotation_ = {}, UnityEngine::Vector3 m_Rotation_ = {}, UnityEngine::Vector3 m_AngularVelocity_ = {}, UnityEngine::Vector3 m_StartSize_ = {}, UnityEngine::Color32 m_StartColor_ = {}, uint m_RandomSeed_ = {}, uint m_ParentRandomSeed_ = {}, float m_Lifetime_ = {}, float m_StartLifetime_ = {}, int m_MeshIndex_ = {}, float m_EmitAccumulator0_ = {}, float m_EmitAccumulator1_ = {}, uint m_Flags_ = {}) noexcept : m_Position{m_Position_}, m_Velocity{m_Velocity_}, m_AnimatedVelocity{m_AnimatedVelocity_}, m_InitialVelocity{m_InitialVelocity_}, m_AxisOfRotation{m_AxisOfRotation_}, m_Rotation{m_Rotation_}, m_AngularVelocity{m_AngularVelocity_}, m_StartSize{m_StartSize_}, m_StartColor{m_StartColor_}, m_RandomSeed{m_RandomSeed_}, m_ParentRandomSeed{m_ParentRandomSeed_}, m_Lifetime{m_Lifetime_}, m_StartLifetime{m_StartLifetime_}, m_MeshIndex{m_MeshIndex_}, m_EmitAccumulator0{m_EmitAccumulator0_}, m_EmitAccumulator1{m_EmitAccumulator1_}, m_Flags{m_Flags_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: private UnityEngine.Vector3 m_Position
      UnityEngine::Vector3& dyn_m_Position();
      // Get instance field reference: private UnityEngine.Vector3 m_Velocity
      UnityEngine::Vector3& dyn_m_Velocity();
      // Get instance field reference: private UnityEngine.Vector3 m_AnimatedVelocity
      UnityEngine::Vector3& dyn_m_AnimatedVelocity();
      // Get instance field reference: private UnityEngine.Vector3 m_InitialVelocity
      UnityEngine::Vector3& dyn_m_InitialVelocity();
      // Get instance field reference: private UnityEngine.Vector3 m_AxisOfRotation
      UnityEngine::Vector3& dyn_m_AxisOfRotation();
      // Get instance field reference: private UnityEngine.Vector3 m_Rotation
      UnityEngine::Vector3& dyn_m_Rotation();
      // Get instance field reference: private UnityEngine.Vector3 m_AngularVelocity
      UnityEngine::Vector3& dyn_m_AngularVelocity();
      // Get instance field reference: private UnityEngine.Vector3 m_StartSize
      UnityEngine::Vector3& dyn_m_StartSize();
      // Get instance field reference: private UnityEngine.Color32 m_StartColor
      UnityEngine::Color32& dyn_m_StartColor();
      // Get instance field reference: private System.UInt32 m_RandomSeed
      uint& dyn_m_RandomSeed();
      // Get instance field reference: private System.UInt32 m_ParentRandomSeed
      uint& dyn_m_ParentRandomSeed();
      // Get instance field reference: private System.Single m_Lifetime
      float& dyn_m_Lifetime();
      // Get instance field reference: private System.Single m_StartLifetime
      float& dyn_m_StartLifetime();
      // Get instance field reference: private System.Int32 m_MeshIndex
      int& dyn_m_MeshIndex();
      // Get instance field reference: private System.Single m_EmitAccumulator0
      float& dyn_m_EmitAccumulator0();
      // Get instance field reference: private System.Single m_EmitAccumulator1
      float& dyn_m_EmitAccumulator1();
      // Get instance field reference: private System.UInt32 m_Flags
      uint& dyn_m_Flags();
      // public System.Void set_lifetime(System.Single value)
      // Offset: 0x2414DCC
      void set_lifetime(float value);
      // public System.Void set_position(UnityEngine.Vector3 value)
      // Offset: 0x2414DB4
      void set_position(UnityEngine::Vector3 value);
      // public System.Void set_velocity(UnityEngine.Vector3 value)
      // Offset: 0x2414DC0
      void set_velocity(UnityEngine::Vector3 value);
      // public System.Void set_remainingLifetime(System.Single value)
      // Offset: 0x24160B4
      void set_remainingLifetime(float value);
      // public System.Void set_startLifetime(System.Single value)
      // Offset: 0x2414DD4
      void set_startLifetime(float value);
      // public System.Void set_startColor(UnityEngine.Color32 value)
      // Offset: 0x2414F84
      void set_startColor(UnityEngine::Color32 value);
      // public System.Void set_randomSeed(System.UInt32 value)
      // Offset: 0x2414F8C
      void set_randomSeed(uint value);
      // public System.Void set_startSize(System.Single value)
      // Offset: 0x2414DDC
      void set_startSize(float value);
      // public System.Void set_rotation3D(UnityEngine.Vector3 value)
      // Offset: 0x2414E2C
      void set_rotation3D(UnityEngine::Vector3 value);
      // public System.Void set_angularVelocity3D(UnityEngine.Vector3 value)
      // Offset: 0x2414ED8
      void set_angularVelocity3D(UnityEngine::Vector3 value);
    }; // UnityEngine.ParticleSystem/UnityEngine.Particle
    #pragma pack(pop)
    static check_size<sizeof(ParticleSystem::Particle), 128 + sizeof(uint)> __UnityEngine_ParticleSystem_ParticleSizeCheck;
    static_assert(sizeof(ParticleSystem::Particle) == 0x84);
    // Creating value type constructor for type: ParticleSystem
    ParticleSystem() noexcept {}
    // public System.Int32 get_particleCount()
    // Offset: 0x2415034
    int get_particleCount();
    // public System.Single get_time()
    // Offset: 0x2415074
    float get_time();
    // public System.Void set_randomSeed(System.UInt32 value)
    // Offset: 0x24150B4
    void set_randomSeed(uint value);
    // public System.Boolean get_useAutoRandomSeed()
    // Offset: 0x2415104
    bool get_useAutoRandomSeed();
    // public System.Void set_useAutoRandomSeed(System.Boolean value)
    // Offset: 0x2415144
    void set_useAutoRandomSeed(bool value);
    // public UnityEngine.ParticleSystem/UnityEngine.MainModule get_main()
    // Offset: 0x2415678
    UnityEngine::ParticleSystem::MainModule get_main();
    // public UnityEngine.ParticleSystem/UnityEngine.EmissionModule get_emission()
    // Offset: 0x2415684
    UnityEngine::ParticleSystem::EmissionModule get_emission();
    // public UnityEngine.ParticleSystem/UnityEngine.ShapeModule get_shape()
    // Offset: 0x2415690
    UnityEngine::ParticleSystem::ShapeModule get_shape();
    // public UnityEngine.ParticleSystem/UnityEngine.SubEmittersModule get_subEmitters()
    // Offset: 0x241569C
    UnityEngine::ParticleSystem::SubEmittersModule get_subEmitters();
    // public System.Void Emit(UnityEngine.Vector3 position, UnityEngine.Vector3 velocity, System.Single size, System.Single lifetime, UnityEngine.Color32 color)
    // Offset: 0x2414C58
    void Emit(UnityEngine::Vector3 position, UnityEngine::Vector3 velocity, float size, float lifetime, UnityEngine::Color32 color);
    // public System.Void Emit(UnityEngine.ParticleSystem/UnityEngine.Particle particle)
    // Offset: 0x2414FE4
    void Emit(UnityEngine::ParticleSystem::Particle particle);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x2415194
    void SetParticles(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*> particles, int size, int offset);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles, System.Int32 size)
    // Offset: 0x24151FC
    void SetParticles(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*> particles, int size);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x2415258
    int GetParticles(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*> particles, int size, int offset);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles, System.Int32 size)
    // Offset: 0x24152C0
    int GetParticles(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*> particles, int size);
    // public System.Int32 GetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles)
    // Offset: 0x241531C
    int GetParticles(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*> particles);
    // public System.Void Simulate(System.Single t, System.Boolean withChildren, System.Boolean restart, System.Boolean fixedTimeStep)
    // Offset: 0x2415374
    void Simulate(float t, bool withChildren, bool restart, bool fixedTimeStep);
    // public System.Void Play(System.Boolean withChildren)
    // Offset: 0x24153EC
    void Play(bool withChildren);
    // public System.Void Stop(System.Boolean withChildren, UnityEngine.ParticleSystemStopBehavior stopBehavior)
    // Offset: 0x241543C
    void Stop(bool withChildren, UnityEngine::ParticleSystemStopBehavior stopBehavior);
    // public System.Void Clear(System.Boolean withChildren)
    // Offset: 0x2415494
    void Clear(bool withChildren);
    // public System.Void Clear()
    // Offset: 0x24154E4
    void Clear();
    // public System.Void Emit(System.Int32 count)
    // Offset: 0x2415528
    void Emit(int count);
    // private System.Void Emit_Internal(System.Int32 count)
    // Offset: 0x2415578
    void Emit_Internal(int count);
    // public System.Void Emit(UnityEngine.ParticleSystem/UnityEngine.EmitParams emitParams, System.Int32 count)
    // Offset: 0x24155C8
    void Emit(UnityEngine::ParticleSystem::EmitParams emitParams, int count);
    // private System.Void EmitOld_Internal(ref UnityEngine.ParticleSystem/UnityEngine.Particle particle)
    // Offset: 0x2414F94
    void EmitOld_Internal(ByRef<UnityEngine::ParticleSystem::Particle> particle);
    // private System.Void Emit_Injected(ref UnityEngine.ParticleSystem/UnityEngine.EmitParams emitParams, System.Int32 count)
    // Offset: 0x2415620
    void Emit_Injected(ByRef<UnityEngine::ParticleSystem::EmitParams> emitParams, int count);
    // public System.Void .ctor()
    // Offset: 0x24156A8
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ParticleSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystem*, creationType>()));
    }
  }; // UnityEngine.ParticleSystem
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::Particle, "UnityEngine", "ParticleSystem/Particle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_particleCount
// Il2CppName: get_particleCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_particleCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_particleCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::set_randomSeed
// Il2CppName: set_randomSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(uint)>(&UnityEngine::ParticleSystem::set_randomSeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "set_randomSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_useAutoRandomSeed
// Il2CppName: get_useAutoRandomSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_useAutoRandomSeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_useAutoRandomSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::set_useAutoRandomSeed
// Il2CppName: set_useAutoRandomSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(bool)>(&UnityEngine::ParticleSystem::set_useAutoRandomSeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "set_useAutoRandomSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_main
// Il2CppName: get_main
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::MainModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_main)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_main", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_emission
// Il2CppName: get_emission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::EmissionModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_emission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_emission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_shape
// Il2CppName: get_shape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::ShapeModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_shape)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_shape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_subEmitters
// Il2CppName: get_subEmitters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::SubEmittersModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_subEmitters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_subEmitters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(UnityEngine::Vector3, UnityEngine::Vector3, float, float, UnityEngine::Color32)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lifetime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, velocity, size, lifetime, color});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(UnityEngine::ParticleSystem::Particle)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* particle = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SetParticles
// Il2CppName: SetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*>, int, int)>(&UnityEngine::ParticleSystem::SetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "SetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles, size, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SetParticles
// Il2CppName: SetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*>, int)>(&UnityEngine::ParticleSystem::SetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "SetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::GetParticles
// Il2CppName: GetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::*)(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*>, int, int)>(&UnityEngine::ParticleSystem::GetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "GetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles, size, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::GetParticles
// Il2CppName: GetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::*)(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*>, int)>(&UnityEngine::ParticleSystem::GetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "GetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::GetParticles
// Il2CppName: GetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::*)(ByRef<::Array<UnityEngine::ParticleSystem::Particle>*>)>(&UnityEngine::ParticleSystem::GetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "GetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Simulate
// Il2CppName: Simulate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(float, bool, bool, bool)>(&UnityEngine::ParticleSystem::Simulate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* withChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* restart = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* fixedTimeStep = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Simulate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, withChildren, restart, fixedTimeStep});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Play
// Il2CppName: Play
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(bool)>(&UnityEngine::ParticleSystem::Play)> {
  static const MethodInfo* get() {
    static auto* withChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Play", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{withChildren});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(bool, UnityEngine::ParticleSystemStopBehavior)>(&UnityEngine::ParticleSystem::Stop)> {
  static const MethodInfo* get() {
    static auto* withChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* stopBehavior = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystemStopBehavior")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{withChildren, stopBehavior});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(bool)>(&UnityEngine::ParticleSystem::Clear)> {
  static const MethodInfo* get() {
    static auto* withChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{withChildren});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(int)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit_Internal
// Il2CppName: Emit_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(int)>(&UnityEngine::ParticleSystem::Emit_Internal)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(UnityEngine::ParticleSystem::EmitParams, int)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* emitParams = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmitParams")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitParams, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmitOld_Internal
// Il2CppName: EmitOld_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<UnityEngine::ParticleSystem::Particle>)>(&UnityEngine::ParticleSystem::EmitOld_Internal)> {
  static const MethodInfo* get() {
    static auto* particle = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "EmitOld_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit_Injected
// Il2CppName: Emit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<UnityEngine::ParticleSystem::EmitParams>, int)>(&UnityEngine::ParticleSystem::Emit_Injected)> {
  static const MethodInfo* get() {
    static auto* emitParams = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmitParams")->this_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitParams, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
