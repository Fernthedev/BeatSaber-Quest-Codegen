// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DynamicBoneColliderBase
  class DynamicBoneColliderBase;
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
  // Forward declaring type: DynamicBone
  class DynamicBone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DynamicBone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBone*, "", "DynamicBone");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x108
  #pragma pack(push, 1)
  // Autogenerated type: DynamicBone
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 110A224
  class DynamicBone : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::DynamicBone::UpdateMode
    struct UpdateMode;
    // Nested type: ::GlobalNamespace::DynamicBone::FreezeAxis
    struct FreezeAxis;
    // Nested type: ::GlobalNamespace::DynamicBone::Particle
    class Particle;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DynamicBone/UpdateMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct UpdateMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: UpdateMode
      constexpr UpdateMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBone/UpdateMode Normal
      static constexpr const int Normal = 0;
      // Get static field: static public DynamicBone/UpdateMode Normal
      static ::GlobalNamespace::DynamicBone::UpdateMode _get_Normal();
      // Set static field: static public DynamicBone/UpdateMode Normal
      static void _set_Normal(::GlobalNamespace::DynamicBone::UpdateMode value);
      // static field const value: static public DynamicBone/UpdateMode AnimatePhysics
      static constexpr const int AnimatePhysics = 1;
      // Get static field: static public DynamicBone/UpdateMode AnimatePhysics
      static ::GlobalNamespace::DynamicBone::UpdateMode _get_AnimatePhysics();
      // Set static field: static public DynamicBone/UpdateMode AnimatePhysics
      static void _set_AnimatePhysics(::GlobalNamespace::DynamicBone::UpdateMode value);
      // static field const value: static public DynamicBone/UpdateMode UnscaledTime
      static constexpr const int UnscaledTime = 2;
      // Get static field: static public DynamicBone/UpdateMode UnscaledTime
      static ::GlobalNamespace::DynamicBone::UpdateMode _get_UnscaledTime();
      // Set static field: static public DynamicBone/UpdateMode UnscaledTime
      static void _set_UnscaledTime(::GlobalNamespace::DynamicBone::UpdateMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // DynamicBone/UpdateMode
    #pragma pack(pop)
    static check_size<sizeof(DynamicBone::UpdateMode), 0 + sizeof(int)> __GlobalNamespace_DynamicBone_UpdateModeSizeCheck;
    static_assert(sizeof(DynamicBone::UpdateMode) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: DynamicBone/FreezeAxis
    // [TokenAttribute] Offset: FFFFFFFF
    struct FreezeAxis/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FreezeAxis
      constexpr FreezeAxis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public DynamicBone/FreezeAxis None
      static constexpr const int None = 0;
      // Get static field: static public DynamicBone/FreezeAxis None
      static ::GlobalNamespace::DynamicBone::FreezeAxis _get_None();
      // Set static field: static public DynamicBone/FreezeAxis None
      static void _set_None(::GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis X
      static constexpr const int X = 1;
      // Get static field: static public DynamicBone/FreezeAxis X
      static ::GlobalNamespace::DynamicBone::FreezeAxis _get_X();
      // Set static field: static public DynamicBone/FreezeAxis X
      static void _set_X(::GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis Y
      static constexpr const int Y = 2;
      // Get static field: static public DynamicBone/FreezeAxis Y
      static ::GlobalNamespace::DynamicBone::FreezeAxis _get_Y();
      // Set static field: static public DynamicBone/FreezeAxis Y
      static void _set_Y(::GlobalNamespace::DynamicBone::FreezeAxis value);
      // static field const value: static public DynamicBone/FreezeAxis Z
      static constexpr const int Z = 3;
      // Get static field: static public DynamicBone/FreezeAxis Z
      static ::GlobalNamespace::DynamicBone::FreezeAxis _get_Z();
      // Set static field: static public DynamicBone/FreezeAxis Z
      static void _set_Z(::GlobalNamespace::DynamicBone::FreezeAxis value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // DynamicBone/FreezeAxis
    #pragma pack(pop)
    static check_size<sizeof(DynamicBone::FreezeAxis), 0 + sizeof(int)> __GlobalNamespace_DynamicBone_FreezeAxisSizeCheck;
    static_assert(sizeof(DynamicBone::FreezeAxis) == 0x4);
    public:
    // public UnityEngine.Transform m_Root
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* m_Root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single m_UpdateRate
    // Size: 0x4
    // Offset: 0x20
    float m_UpdateRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public DynamicBone/UpdateMode m_UpdateMode
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::DynamicBone::UpdateMode m_UpdateMode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DynamicBone::UpdateMode) == 0x4);
    // [RangeAttribute] Offset: 0x110A2CC
    // public System.Single m_Damping
    // Size: 0x4
    // Offset: 0x28
    float m_Damping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Damping and: m_DampingDistrib
    char __padding3[0x4] = {};
    // public UnityEngine.AnimationCurve m_DampingDistrib
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* m_DampingDistrib;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0x110A2E4
    // public System.Single m_Elasticity
    // Size: 0x4
    // Offset: 0x38
    float m_Elasticity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Elasticity and: m_ElasticityDistrib
    char __padding5[0x4] = {};
    // public UnityEngine.AnimationCurve m_ElasticityDistrib
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* m_ElasticityDistrib;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0x110A2FC
    // public System.Single m_Stiffness
    // Size: 0x4
    // Offset: 0x48
    float m_Stiffness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Stiffness and: m_StiffnessDistrib
    char __padding7[0x4] = {};
    // public UnityEngine.AnimationCurve m_StiffnessDistrib
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::AnimationCurve* m_StiffnessDistrib;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [RangeAttribute] Offset: 0x110A314
    // public System.Single m_Inert
    // Size: 0x4
    // Offset: 0x58
    float m_Inert;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Inert and: m_InertDistrib
    char __padding9[0x4] = {};
    // public UnityEngine.AnimationCurve m_InertDistrib
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::AnimationCurve* m_InertDistrib;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single m_Radius
    // Size: 0x4
    // Offset: 0x68
    float m_Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_Radius and: m_RadiusDistrib
    char __padding11[0x4] = {};
    // public UnityEngine.AnimationCurve m_RadiusDistrib
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::AnimationCurve* m_RadiusDistrib;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single m_EndLength
    // Size: 0x4
    // Offset: 0x78
    float m_EndLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 m_EndOffset
    // Size: 0xC
    // Offset: 0x7C
    ::UnityEngine::Vector3 m_EndOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_Gravity
    // Size: 0xC
    // Offset: 0x88
    ::UnityEngine::Vector3 m_Gravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 m_Force
    // Size: 0xC
    // Offset: 0x94
    ::UnityEngine::Vector3 m_Force;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Collections.Generic.List`1<DynamicBoneColliderBase> m_Colliders
    // Size: 0x8
    // Offset: 0xA0
    ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>* m_Colliders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Transform> m_Exclusions
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* m_Exclusions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // public DynamicBone/FreezeAxis m_FreezeAxis
    // Size: 0x4
    // Offset: 0xB0
    ::GlobalNamespace::DynamicBone::FreezeAxis m_FreezeAxis;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DynamicBone::FreezeAxis) == 0x4);
    // public System.Boolean m_DistantDisable
    // Size: 0x1
    // Offset: 0xB4
    bool m_DistantDisable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_DistantDisable and: m_ReferenceObject
    char __padding20[0x3] = {};
    // public UnityEngine.Transform m_ReferenceObject
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Transform* m_ReferenceObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single m_DistanceToObject
    // Size: 0x4
    // Offset: 0xC0
    float m_DistanceToObject;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 m_LocalGravity
    // Size: 0xC
    // Offset: 0xC4
    ::UnityEngine::Vector3 m_LocalGravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_ObjectMove
    // Size: 0xC
    // Offset: 0xD0
    ::UnityEngine::Vector3 m_ObjectMove;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_ObjectPrevPosition
    // Size: 0xC
    // Offset: 0xDC
    ::UnityEngine::Vector3 m_ObjectPrevPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_BoneTotalLength
    // Size: 0x4
    // Offset: 0xE8
    float m_BoneTotalLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_ObjectScale
    // Size: 0x4
    // Offset: 0xEC
    float m_ObjectScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Time
    // Size: 0x4
    // Offset: 0xF0
    float m_Time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Weight
    // Size: 0x4
    // Offset: 0xF4
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_DistantDisabled
    // Size: 0x1
    // Offset: 0xF8
    bool m_DistantDisabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_DistantDisabled and: m_Particles
    char __padding30[0x7] = {};
    // private System.Collections.Generic.List`1<DynamicBone/Particle> m_Particles
    // Size: 0x8
    // Offset: 0x100
    ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBone::Particle*>* m_Particles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBone::Particle*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform m_Root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Root();
    // Get instance field reference: public System.Single m_UpdateRate
    [[deprecated("Use field access instead!")]] float& dyn_m_UpdateRate();
    // Get instance field reference: public DynamicBone/UpdateMode m_UpdateMode
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DynamicBone::UpdateMode& dyn_m_UpdateMode();
    // Get instance field reference: public System.Single m_Damping
    [[deprecated("Use field access instead!")]] float& dyn_m_Damping();
    // Get instance field reference: public UnityEngine.AnimationCurve m_DampingDistrib
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_DampingDistrib();
    // Get instance field reference: public System.Single m_Elasticity
    [[deprecated("Use field access instead!")]] float& dyn_m_Elasticity();
    // Get instance field reference: public UnityEngine.AnimationCurve m_ElasticityDistrib
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_ElasticityDistrib();
    // Get instance field reference: public System.Single m_Stiffness
    [[deprecated("Use field access instead!")]] float& dyn_m_Stiffness();
    // Get instance field reference: public UnityEngine.AnimationCurve m_StiffnessDistrib
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_StiffnessDistrib();
    // Get instance field reference: public System.Single m_Inert
    [[deprecated("Use field access instead!")]] float& dyn_m_Inert();
    // Get instance field reference: public UnityEngine.AnimationCurve m_InertDistrib
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_InertDistrib();
    // Get instance field reference: public System.Single m_Radius
    [[deprecated("Use field access instead!")]] float& dyn_m_Radius();
    // Get instance field reference: public UnityEngine.AnimationCurve m_RadiusDistrib
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_m_RadiusDistrib();
    // Get instance field reference: public System.Single m_EndLength
    [[deprecated("Use field access instead!")]] float& dyn_m_EndLength();
    // Get instance field reference: public UnityEngine.Vector3 m_EndOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_EndOffset();
    // Get instance field reference: public UnityEngine.Vector3 m_Gravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Gravity();
    // Get instance field reference: public UnityEngine.Vector3 m_Force
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Force();
    // Get instance field reference: public System.Collections.Generic.List`1<DynamicBoneColliderBase> m_Colliders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*& dyn_m_Colliders();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Transform> m_Exclusions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn_m_Exclusions();
    // Get instance field reference: public DynamicBone/FreezeAxis m_FreezeAxis
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DynamicBone::FreezeAxis& dyn_m_FreezeAxis();
    // Get instance field reference: public System.Boolean m_DistantDisable
    [[deprecated("Use field access instead!")]] bool& dyn_m_DistantDisable();
    // Get instance field reference: public UnityEngine.Transform m_ReferenceObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_ReferenceObject();
    // Get instance field reference: public System.Single m_DistanceToObject
    [[deprecated("Use field access instead!")]] float& dyn_m_DistanceToObject();
    // Get instance field reference: private UnityEngine.Vector3 m_LocalGravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_LocalGravity();
    // Get instance field reference: private UnityEngine.Vector3 m_ObjectMove
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_ObjectMove();
    // Get instance field reference: private UnityEngine.Vector3 m_ObjectPrevPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_ObjectPrevPosition();
    // Get instance field reference: private System.Single m_BoneTotalLength
    [[deprecated("Use field access instead!")]] float& dyn_m_BoneTotalLength();
    // Get instance field reference: private System.Single m_ObjectScale
    [[deprecated("Use field access instead!")]] float& dyn_m_ObjectScale();
    // Get instance field reference: private System.Single m_Time
    [[deprecated("Use field access instead!")]] float& dyn_m_Time();
    // Get instance field reference: private System.Single m_Weight
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight();
    // Get instance field reference: private System.Boolean m_DistantDisabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_DistantDisabled();
    // Get instance field reference: private System.Collections.Generic.List`1<DynamicBone/Particle> m_Particles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBone::Particle*>*& dyn_m_Particles();
    // public System.Void .ctor()
    // Offset: 0x2AFA904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DynamicBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBone*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x2AF7E10
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x2AF7F90
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x2AF7FE4
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x2AF8014
    void LateUpdate();
    // private System.Void PreUpdate()
    // Offset: 0x2AF7FC0
    void PreUpdate();
    // private System.Void CheckDistance()
    // Offset: 0x2AF8074
    void CheckDistance();
    // private System.Void OnEnable()
    // Offset: 0x2AF8718
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x2AF871C
    void OnDisable();
    // private System.Void OnValidate()
    // Offset: 0x2AF8720
    void OnValidate();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x2AF883C
    void OnDrawGizmosSelected();
    // public System.Void SetWeight(System.Single w)
    // Offset: 0x2AF89E0
    void SetWeight(float w);
    // public System.Single GetWeight()
    // Offset: 0x2AF8A3C
    float GetWeight();
    // private System.Void UpdateDynamicBones(System.Single t)
    // Offset: 0x2AF8278
    void UpdateDynamicBones(float t);
    // private System.Void SetupParticles()
    // Offset: 0x2AF7E14
    void SetupParticles();
    // private System.Void AppendParticles(UnityEngine.Transform b, System.Int32 parentIndex, System.Single boneLength)
    // Offset: 0x2AF9DEC
    void AppendParticles(::UnityEngine::Transform* b, int parentIndex, float boneLength);
    // public System.Void UpdateParameters()
    // Offset: 0x2AFA464
    void UpdateParameters();
    // private System.Void InitTransforms()
    // Offset: 0x2AF84BC
    void InitTransforms();
    // private System.Void ResetParticlesPosition()
    // Offset: 0x2AF85BC
    void ResetParticlesPosition();
    // private System.Void UpdateParticles1()
    // Offset: 0x2AF8A44
    void UpdateParticles1();
    // private System.Void UpdateParticles2()
    // Offset: 0x2AF8D54
    void UpdateParticles2();
    // private System.Void SkipUpdateParticles()
    // Offset: 0x2AF94E0
    void SkipUpdateParticles();
    // static private UnityEngine.Vector3 MirrorVector(UnityEngine.Vector3 v, UnityEngine.Vector3 axis)
    // Offset: 0x2AFA824
    static ::UnityEngine::Vector3 MirrorVector(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 axis);
    // private System.Void ApplyParticlesToTransforms()
    // Offset: 0x2AF9B10
    void ApplyParticlesToTransforms();
  }; // DynamicBone
  #pragma pack(pop)
  static check_size<sizeof(DynamicBone), 256 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBone::Particle*>*)> __GlobalNamespace_DynamicBoneSizeCheck;
  static_assert(sizeof(DynamicBone) == 0x108);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBone::FreezeAxis, "", "DynamicBone/FreezeAxis");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBone::UpdateMode, "", "DynamicBone/UpdateMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::PreUpdate
// Il2CppName: PreUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::PreUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "PreUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::CheckDistance
// Il2CppName: CheckDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::CheckDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "CheckDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::SetWeight
// Il2CppName: SetWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)(float)>(&GlobalNamespace::DynamicBone::SetWeight)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "SetWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::GetWeight
// Il2CppName: GetWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::GetWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "GetWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::UpdateDynamicBones
// Il2CppName: UpdateDynamicBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)(float)>(&GlobalNamespace::DynamicBone::UpdateDynamicBones)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "UpdateDynamicBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::SetupParticles
// Il2CppName: SetupParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::SetupParticles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "SetupParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::AppendParticles
// Il2CppName: AppendParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)(::UnityEngine::Transform*, int, float)>(&GlobalNamespace::DynamicBone::AppendParticles)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* parentIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* boneLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "AppendParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b, parentIndex, boneLength});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::UpdateParameters
// Il2CppName: UpdateParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::UpdateParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "UpdateParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::InitTransforms
// Il2CppName: InitTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::InitTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "InitTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::ResetParticlesPosition
// Il2CppName: ResetParticlesPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::ResetParticlesPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "ResetParticlesPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::UpdateParticles1
// Il2CppName: UpdateParticles1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::UpdateParticles1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "UpdateParticles1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::UpdateParticles2
// Il2CppName: UpdateParticles2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::UpdateParticles2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "UpdateParticles2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::SkipUpdateParticles
// Il2CppName: SkipUpdateParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::SkipUpdateParticles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "SkipUpdateParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::MirrorVector
// Il2CppName: MirrorVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::DynamicBone::MirrorVector)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "MirrorVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v, axis});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBone::ApplyParticlesToTransforms
// Il2CppName: ApplyParticlesToTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBone::*)()>(&GlobalNamespace::DynamicBone::ApplyParticlesToTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBone*), "ApplyParticlesToTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
