// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
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
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x86
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKConstraintBend
  // [TokenAttribute] Offset: FFFFFFFF
  class IKConstraintBend : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform bone1
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* bone1;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform bone2
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* bone2;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform bone3
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* bone3;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform bendGoal
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* bendGoal;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotationOffset
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [RangeAttribute] Offset: 0xE26850
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x4C
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 defaultLocalDirection
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 defaultLocalDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 defaultChildDirection
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 defaultChildDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single clampF
    // Size: 0x4
    // Offset: 0x68
    float clampF;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 chainIndex1
    // Size: 0x4
    // Offset: 0x6C
    int chainIndex1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex1
    // Size: 0x4
    // Offset: 0x70
    int nodeIndex1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chainIndex2
    // Size: 0x4
    // Offset: 0x74
    int chainIndex2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex2
    // Size: 0x4
    // Offset: 0x78
    int nodeIndex2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 chainIndex3
    // Size: 0x4
    // Offset: 0x7C
    int chainIndex3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nodeIndex3
    // Size: 0x4
    // Offset: 0x80
    int nodeIndex3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x84
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean limbOrientationsSet
    // Size: 0x1
    // Offset: 0x85
    bool limbOrientationsSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IKConstraintBend
    IKConstraintBend(UnityEngine::Transform* bone1_ = {}, UnityEngine::Transform* bone2_ = {}, UnityEngine::Transform* bone3_ = {}, UnityEngine::Transform* bendGoal_ = {}, UnityEngine::Vector3 direction_ = {}, UnityEngine::Quaternion rotationOffset_ = {}, float weight_ = {}, UnityEngine::Vector3 defaultLocalDirection_ = {}, UnityEngine::Vector3 defaultChildDirection_ = {}, float clampF_ = {}, int chainIndex1_ = {}, int nodeIndex1_ = {}, int chainIndex2_ = {}, int nodeIndex2_ = {}, int chainIndex3_ = {}, int nodeIndex3_ = {}, bool initiated_ = {}, bool limbOrientationsSet_ = {}) noexcept : bone1{bone1_}, bone2{bone2_}, bone3{bone3_}, bendGoal{bendGoal_}, direction{direction_}, rotationOffset{rotationOffset_}, weight{weight_}, defaultLocalDirection{defaultLocalDirection_}, defaultChildDirection{defaultChildDirection_}, clampF{clampF_}, chainIndex1{chainIndex1_}, nodeIndex1{nodeIndex1_}, chainIndex2{chainIndex2_}, nodeIndex2{nodeIndex2_}, chainIndex3{chainIndex3_}, nodeIndex3{nodeIndex3_}, initiated{initiated_}, limbOrientationsSet{limbOrientationsSet_} {}
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
    // Get instance field: public UnityEngine.Transform bendGoal
    UnityEngine::Transform* _get_bendGoal();
    // Set instance field: public UnityEngine.Transform bendGoal
    void _set_bendGoal(UnityEngine::Transform* value);
    // Get instance field: public UnityEngine.Vector3 direction
    UnityEngine::Vector3 _get_direction();
    // Set instance field: public UnityEngine.Vector3 direction
    void _set_direction(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Quaternion rotationOffset
    UnityEngine::Quaternion _get_rotationOffset();
    // Set instance field: public UnityEngine.Quaternion rotationOffset
    void _set_rotationOffset(UnityEngine::Quaternion value);
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: public UnityEngine.Vector3 defaultLocalDirection
    UnityEngine::Vector3 _get_defaultLocalDirection();
    // Set instance field: public UnityEngine.Vector3 defaultLocalDirection
    void _set_defaultLocalDirection(UnityEngine::Vector3 value);
    // Get instance field: public UnityEngine.Vector3 defaultChildDirection
    UnityEngine::Vector3 _get_defaultChildDirection();
    // Set instance field: public UnityEngine.Vector3 defaultChildDirection
    void _set_defaultChildDirection(UnityEngine::Vector3 value);
    // Get instance field: public System.Single clampF
    float _get_clampF();
    // Set instance field: public System.Single clampF
    void _set_clampF(float value);
    // Get instance field: private System.Int32 chainIndex1
    int _get_chainIndex1();
    // Set instance field: private System.Int32 chainIndex1
    void _set_chainIndex1(int value);
    // Get instance field: private System.Int32 nodeIndex1
    int _get_nodeIndex1();
    // Set instance field: private System.Int32 nodeIndex1
    void _set_nodeIndex1(int value);
    // Get instance field: private System.Int32 chainIndex2
    int _get_chainIndex2();
    // Set instance field: private System.Int32 chainIndex2
    void _set_chainIndex2(int value);
    // Get instance field: private System.Int32 nodeIndex2
    int _get_nodeIndex2();
    // Set instance field: private System.Int32 nodeIndex2
    void _set_nodeIndex2(int value);
    // Get instance field: private System.Int32 chainIndex3
    int _get_chainIndex3();
    // Set instance field: private System.Int32 chainIndex3
    void _set_chainIndex3(int value);
    // Get instance field: private System.Int32 nodeIndex3
    int _get_nodeIndex3();
    // Set instance field: private System.Int32 nodeIndex3
    void _set_nodeIndex3(int value);
    // Get instance field: private System.Boolean <initiated>k__BackingField
    bool _get_$initiated$k__BackingField();
    // Set instance field: private System.Boolean <initiated>k__BackingField
    void _set_$initiated$k__BackingField(bool value);
    // Get instance field: private System.Boolean limbOrientationsSet
    bool _get_limbOrientationsSet();
    // Set instance field: private System.Boolean limbOrientationsSet
    void _set_limbOrientationsSet(bool value);
    // public System.Boolean get_initiated()
    // Offset: 0x1CD0574
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1CD057C
    void set_initiated(bool value);
    // public System.Void .ctor(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3)
    // Offset: 0x1CD060C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKConstraintBend* New_ctor(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKConstraintBend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKConstraintBend*, creationType>(bone1, bone2, bone3)));
    }
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolverFullBody solver, RootMotion.Warning/RootMotion.Logger logger)
    // Offset: 0x1CD03AC
    bool IsValid(RootMotion::FinalIK::IKSolverFullBody* solver, RootMotion::Warning::Logger* logger);
    // public System.Void SetBones(UnityEngine.Transform bone1, UnityEngine.Transform bone2, UnityEngine.Transform bone3)
    // Offset: 0x1CD06B8
    void SetBones(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1CD06C4
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SetLimbOrientation(UnityEngine.Vector3 upper, UnityEngine.Vector3 lower, UnityEngine.Vector3 last)
    // Offset: 0x1CD0BB4
    void SetLimbOrientation(UnityEngine::Vector3 upper, UnityEngine::Vector3 lower, UnityEngine::Vector3 last);
    // public System.Void LimitBend(System.Single solverWeight, System.Single positionWeight)
    // Offset: 0x1CD0DEC
    void LimitBend(float solverWeight, float positionWeight);
    // public UnityEngine.Vector3 GetDir(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1CD1288
    UnityEngine::Vector3 GetDir(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 OrthoToLimb(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Vector3 tangent)
    // Offset: 0x1CD0974
    UnityEngine::Vector3 OrthoToLimb(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Vector3 tangent);
    // private UnityEngine.Vector3 OrthoToBone1(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Vector3 tangent)
    // Offset: 0x1CD0A94
    UnityEngine::Vector3 OrthoToBone1(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Vector3 tangent);
    // public System.Void .ctor()
    // Offset: 0x1CD0588
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKConstraintBend* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKConstraintBend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKConstraintBend*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKConstraintBend
  #pragma pack(pop)
  static check_size<sizeof(IKConstraintBend), 133 + sizeof(bool)> __RootMotion_FinalIK_IKConstraintBendSizeCheck;
  static_assert(sizeof(IKConstraintBend) == 0x86);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKConstraintBend*, "RootMotion.FinalIK", "IKConstraintBend");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::get_initiated
// Il2CppName: get_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKConstraintBend::*)()>(&RootMotion::FinalIK::IKConstraintBend::get_initiated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "get_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::set_initiated
// Il2CppName: set_initiated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(bool)>(&RootMotion::FinalIK::IKConstraintBend::set_initiated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "set_initiated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKConstraintBend::*)(RootMotion::FinalIK::IKSolverFullBody*, RootMotion::Warning::Logger*)>(&RootMotion::FinalIK::IKConstraintBend::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* logger = &::il2cpp_utils::GetClassFromName("RootMotion", "Warning/Logger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, logger});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::SetBones
// Il2CppName: SetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKConstraintBend::SetBones)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "SetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2, bone3});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKConstraintBend::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation
// Il2CppName: SetLimbOrientation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation)> {
  static const MethodInfo* get() {
    static auto* upper = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lower = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* last = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "SetLimbOrientation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{upper, lower, last});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::LimitBend
// Il2CppName: LimitBend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKConstraintBend::*)(float, float)>(&RootMotion::FinalIK::IKConstraintBend::LimitBend)> {
  static const MethodInfo* get() {
    static auto* solverWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* positionWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "LimitBend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solverWeight, positionWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::GetDir
// Il2CppName: GetDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKConstraintBend::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKConstraintBend::GetDir)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "GetDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::OrthoToLimb
// Il2CppName: OrthoToLimb
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKConstraintBend::*)(RootMotion::FinalIK::IKSolverFullBody*, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKConstraintBend::OrthoToLimb)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "OrthoToLimb", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, tangent});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::OrthoToBone1
// Il2CppName: OrthoToBone1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKConstraintBend::*)(RootMotion::FinalIK::IKSolverFullBody*, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKConstraintBend::OrthoToBone1)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKConstraintBend*), "OrthoToBone1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, tangent});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKConstraintBend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
