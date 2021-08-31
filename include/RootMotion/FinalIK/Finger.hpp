// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Finger
  // [TokenAttribute] Offset: FFFFFFFF
  class Finger : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Finger::DOF
    struct DOF;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF
    // [TokenAttribute] Offset: FFFFFFFF
    struct DOF/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: DOF
      constexpr DOF(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF One
      static constexpr const int One = 0;
      // Get static field: static public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF One
      static RootMotion::FinalIK::Finger::DOF _get_One();
      // Set static field: static public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF One
      static void _set_One(RootMotion::FinalIK::Finger::DOF value);
      // static field const value: static public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF Three
      static constexpr const int Three = 1;
      // Get static field: static public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF Three
      static RootMotion::FinalIK::Finger::DOF _get_Three();
      // Set static field: static public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF Three
      static void _set_Three(RootMotion::FinalIK::Finger::DOF value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF
    #pragma pack(pop)
    static check_size<sizeof(Finger::DOF), 0 + sizeof(int)> __RootMotion_FinalIK_Finger_DOFSizeCheck;
    static_assert(sizeof(Finger::DOF) == 0x4);
    // [TooltipAttribute] Offset: 0xE25274
    // [RangeAttribute] Offset: 0xE25274
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x10
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE252C8
    // [RangeAttribute] Offset: 0xE252C8
    // public System.Single rotationWeight
    // Size: 0x4
    // Offset: 0x14
    float rotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2531C
    // public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF rotationDOF
    // Size: 0x4
    // Offset: 0x18
    RootMotion::FinalIK::Finger::DOF rotationDOF;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Finger::DOF) == 0x4);
    // [TooltipAttribute] Offset: 0xE25354
    // public System.Boolean fixBone1Twist
    // Size: 0x1
    // Offset: 0x1C
    bool fixBone1Twist;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixBone1Twist and: bone1
    char __padding3[0x3] = {};
    // [TooltipAttribute] Offset: 0xE2538C
    // public UnityEngine.Transform bone1
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* bone1;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE253C4
    // public UnityEngine.Transform bone2
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* bone2;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE253FC
    // public UnityEngine.Transform bone3
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* bone3;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE25434
    // public UnityEngine.Transform tip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* tip;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2546C
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: solver
    char __padding9[0x7] = {};
    // private RootMotion.FinalIK.IKSolverLimb solver
    // Size: 0x8
    // Offset: 0x50
    RootMotion::FinalIK::IKSolverLimb* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLimb*) == 0x8);
    // private UnityEngine.Quaternion bone3RelativeToTarget
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Quaternion bone3RelativeToTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bone3DefaultLocalPosition
    // Size: 0xC
    // Offset: 0x68
    UnityEngine::Vector3 bone3DefaultLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion bone3DefaultLocalRotation
    // Size: 0x10
    // Offset: 0x74
    UnityEngine::Quaternion bone3DefaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 bone1Axis
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 bone1Axis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 tipAxis
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 tipAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bone1TwistAxis
    // Size: 0xC
    // Offset: 0x9C
    UnityEngine::Vector3 bone1TwistAxis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Finger
    Finger(float weight_ = {}, float rotationWeight_ = {}, RootMotion::FinalIK::Finger::DOF rotationDOF_ = {}, bool fixBone1Twist_ = {}, UnityEngine::Transform* bone1_ = {}, UnityEngine::Transform* bone2_ = {}, UnityEngine::Transform* bone3_ = {}, UnityEngine::Transform* tip_ = {}, UnityEngine::Transform* target_ = {}, bool initiated_ = {}, RootMotion::FinalIK::IKSolverLimb* solver_ = {}, UnityEngine::Quaternion bone3RelativeToTarget_ = {}, UnityEngine::Vector3 bone3DefaultLocalPosition_ = {}, UnityEngine::Quaternion bone3DefaultLocalRotation_ = {}, UnityEngine::Vector3 bone1Axis_ = {}, UnityEngine::Vector3 tipAxis_ = {}, UnityEngine::Vector3 bone1TwistAxis_ = {}) noexcept : weight{weight_}, rotationWeight{rotationWeight_}, rotationDOF{rotationDOF_}, fixBone1Twist{fixBone1Twist_}, bone1{bone1_}, bone2{bone2_}, bone3{bone3_}, tip{tip_}, target{target_}, initiated{initiated_}, solver{solver_}, bone3RelativeToTarget{bone3RelativeToTarget_}, bone3DefaultLocalPosition{bone3DefaultLocalPosition_}, bone3DefaultLocalRotation{bone3DefaultLocalRotation_}, bone1Axis{bone1Axis_}, tipAxis{tipAxis_}, bone1TwistAxis{bone1TwistAxis_} {}
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: public System.Single rotationWeight
    float _get_rotationWeight();
    // Set instance field: public System.Single rotationWeight
    void _set_rotationWeight(float value);
    // Get instance field: public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF rotationDOF
    RootMotion::FinalIK::Finger::DOF _get_rotationDOF();
    // Set instance field: public RootMotion.FinalIK.Finger/RootMotion.FinalIK.DOF rotationDOF
    void _set_rotationDOF(RootMotion::FinalIK::Finger::DOF value);
    // Get instance field: public System.Boolean fixBone1Twist
    bool _get_fixBone1Twist();
    // Set instance field: public System.Boolean fixBone1Twist
    void _set_fixBone1Twist(bool value);
    // Get instance field: public UnityEngine.Transform bone1
    UnityEngine::Transform* _get_bone1();
    // Set instance field: public UnityEngine.Transform bone1
    void _set_bone1(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform bone2
    UnityEngine::Transform* _get_bone2();
    // Set instance field: public UnityEngine.Transform bone2
    void _set_bone2(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform bone3
    UnityEngine::Transform* _get_bone3();
    // Set instance field: public UnityEngine.Transform bone3
    void _set_bone3(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform tip
    UnityEngine::Transform* _get_tip();
    // Set instance field: public UnityEngine.Transform tip
    void _set_tip(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Transform target
    UnityEngine::Transform* _get_target();
    // Set instance field: public UnityEngine.Transform target
    void _set_target(UnityEngine::Transform* value);
    // Get instance field: private System.Boolean <initiated>k__BackingField
    bool _get_$initiated$k__BackingField();
    // Set instance field: private System.Boolean <initiated>k__BackingField
    void _set_$initiated$k__BackingField(bool value);
    // Get instance field: private RootMotion.FinalIK.IKSolverLimb solver
    RootMotion::FinalIK::IKSolverLimb* _get_solver();
    // Set instance field: private RootMotion.FinalIK.IKSolverLimb solver
    void _set_solver(RootMotion::FinalIK::IKSolverLimb* value);
    // Get instance field: private UnityEngine.Quaternion bone3RelativeToTarget
    UnityEngine::Quaternion _get_bone3RelativeToTarget();
    // Set instance field: private UnityEngine.Quaternion bone3RelativeToTarget
    void _set_bone3RelativeToTarget(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 bone3DefaultLocalPosition
    UnityEngine::Vector3 _get_bone3DefaultLocalPosition();
    // Set instance field: private UnityEngine.Vector3 bone3DefaultLocalPosition
    void _set_bone3DefaultLocalPosition(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Quaternion bone3DefaultLocalRotation
    UnityEngine::Quaternion _get_bone3DefaultLocalRotation();
    // Set instance field: private UnityEngine.Quaternion bone3DefaultLocalRotation
    void _set_bone3DefaultLocalRotation(UnityEngine::Quaternion value);
    // Get instance field: private UnityEngine.Vector3 bone1Axis
    UnityEngine::Vector3 _get_bone1Axis();
    // Set instance field: private UnityEngine.Vector3 bone1Axis
    void _set_bone1Axis(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 tipAxis
    UnityEngine::Vector3 _get_tipAxis();
    // Set instance field: private UnityEngine.Vector3 tipAxis
    void _set_tipAxis(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 bone1TwistAxis
    UnityEngine::Vector3 _get_bone1TwistAxis();
    // Set instance field: private UnityEngine.Vector3 bone1TwistAxis
    void _set_bone1TwistAxis(UnityEngine::Vector3 value);
    // public System.Boolean get_initiated()
    // Offset: 0x1D39F30
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1D39F38
    void set_initiated(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x1D39F44
    UnityEngine::Vector3 get_IKPosition();
    // public System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x1D39F64
    void set_IKPosition(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_IKRotation()
    // Offset: 0x1D39F84
    UnityEngine::Quaternion get_IKRotation();
    // public System.Void set_IKRotation(UnityEngine.Quaternion value)
    // Offset: 0x1D39FA4
    void set_IKRotation(UnityEngine::Quaternion value);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x1D39FC4
    bool IsValid(ByRef<::Il2CppString*> errorMessage);
    // public System.Void Initiate(UnityEngine.Transform hand, System.Int32 index)
    // Offset: 0x1D3A0C4
    void Initiate(UnityEngine::Transform* hand, int index);
    // public System.Void FixTransforms()
    // Offset: 0x1D3A658
    void FixTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1D3A734
    void StoreDefaultLocalState();
    // public System.Void Update(System.Single masterWeight)
    // Offset: 0x1D3A7FC
    void Update(float masterWeight);
    // public System.Void .ctor()
    // Offset: 0x1D3AF40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Finger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Finger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Finger*, creationType>()));
    }
  }; // RootMotion.FinalIK.Finger
  #pragma pack(pop)
  static check_size<sizeof(Finger), 156 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_FingerSizeCheck;
  static_assert(sizeof(Finger) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger*, "RootMotion.FinalIK", "Finger");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger::DOF, "RootMotion.FinalIK", "Finger/DOF");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(bool)>(&RootMotion::FinalIK::Finger::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::get_IKPosition
// Il2CppName: get_IKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::get_IKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "get_IKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::set_IKPosition
// Il2CppName: set_IKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::Finger::set_IKPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "set_IKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::get_IKRotation
// Il2CppName: get_IKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::get_IKRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "get_IKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::set_IKRotation
// Il2CppName: set_IKRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::Finger::set_IKRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "set_IKRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::Finger::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::Finger::IsValid)> {
  static const MethodInfo* get() {
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(UnityEngine::Transform*, int)>(&RootMotion::FinalIK::Finger::Initiate)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)()>(&RootMotion::FinalIK::Finger::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Finger::*)(float)>(&RootMotion::FinalIK::Finger::Update)> {
  static const MethodInfo* get() {
    static auto* masterWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Finger*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{masterWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Finger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
