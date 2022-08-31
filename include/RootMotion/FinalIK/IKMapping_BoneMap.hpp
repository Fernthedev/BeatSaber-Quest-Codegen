// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKMapping
#include "RootMotion/FinalIK/IKMapping.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKMapping::BoneMap);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMapping::BoneMap*, "RootMotion.FinalIK", "IKMapping/BoneMap");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap
  // [TokenAttribute] Offset: FFFFFFFF
  class IKMapping::BoneMap : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 chainIndex
    // Size: 0x4
    // Offset: 0x18
    int chainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 nodeIndex
    // Size: 0x4
    // Offset: 0x1C
    int nodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector3 defaultLocalPosition
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 defaultLocalPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 localSwingAxis
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 localSwingAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 localTwistAxis
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 localTwistAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 planePosition
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 planePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 ikPosition
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 ikPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion defaultLocalTargetRotation
    // Size: 0x10
    // Offset: 0x6C
    ::UnityEngine::Quaternion defaultLocalTargetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion maintainRotation
    // Size: 0x10
    // Offset: 0x7C
    ::UnityEngine::Quaternion maintainRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x8C
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion animatedRotation
    // Size: 0x10
    // Offset: 0x90
    ::UnityEngine::Quaternion animatedRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform planeBone1
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Transform* planeBone1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform planeBone2
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Transform* planeBone2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform planeBone3
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Transform* planeBone3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Int32 plane1ChainIndex
    // Size: 0x4
    // Offset: 0xB8
    int plane1ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane1NodeIndex
    // Size: 0x4
    // Offset: 0xBC
    int plane1NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane2ChainIndex
    // Size: 0x4
    // Offset: 0xC0
    int plane2ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane2NodeIndex
    // Size: 0x4
    // Offset: 0xC4
    int plane2NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane3ChainIndex
    // Size: 0x4
    // Offset: 0xC8
    int plane3ChainIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 plane3NodeIndex
    // Size: 0x4
    // Offset: 0xCC
    int plane3NodeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public System.Int32 chainIndex
    [[deprecated("Use field access instead!")]] int& dyn_chainIndex();
    // Get instance field reference: public System.Int32 nodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_nodeIndex();
    // Get instance field reference: public UnityEngine.Vector3 defaultLocalPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_defaultLocalPosition();
    // Get instance field reference: public UnityEngine.Quaternion defaultLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultLocalRotation();
    // Get instance field reference: public UnityEngine.Vector3 localSwingAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localSwingAxis();
    // Get instance field reference: public UnityEngine.Vector3 localTwistAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localTwistAxis();
    // Get instance field reference: public UnityEngine.Vector3 planePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_planePosition();
    // Get instance field reference: public UnityEngine.Vector3 ikPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_ikPosition();
    // Get instance field reference: public UnityEngine.Quaternion defaultLocalTargetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultLocalTargetRotation();
    // Get instance field reference: private UnityEngine.Quaternion maintainRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_maintainRotation();
    // Get instance field reference: public System.Single length
    [[deprecated("Use field access instead!")]] float& dyn_length();
    // Get instance field reference: public UnityEngine.Quaternion animatedRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_animatedRotation();
    // Get instance field reference: private UnityEngine.Transform planeBone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_planeBone1();
    // Get instance field reference: private UnityEngine.Transform planeBone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_planeBone2();
    // Get instance field reference: private UnityEngine.Transform planeBone3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_planeBone3();
    // Get instance field reference: private System.Int32 plane1ChainIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane1ChainIndex();
    // Get instance field reference: private System.Int32 plane1NodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane1NodeIndex();
    // Get instance field reference: private System.Int32 plane2ChainIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane2ChainIndex();
    // Get instance field reference: private System.Int32 plane2NodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane2NodeIndex();
    // Get instance field reference: private System.Int32 plane3ChainIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane3ChainIndex();
    // Get instance field reference: private System.Int32 plane3NodeIndex
    [[deprecated("Use field access instead!")]] int& dyn_plane3NodeIndex();
    // public UnityEngine.Vector3 get_swingDirection()
    // Offset: 0x220E2A0
    ::UnityEngine::Vector3 get_swingDirection();
    // public System.Boolean get_isNodeBone()
    // Offset: 0x220E40C
    bool get_isNodeBone();
    // private UnityEngine.Quaternion get_lastAnimatedTargetRotation()
    // Offset: 0x220E9F0
    ::UnityEngine::Quaternion get_lastAnimatedTargetRotation();
    // public System.Void .ctor()
    // Offset: 0x220FA78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMapping::BoneMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKMapping::BoneMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMapping::BoneMap*, creationType>()));
    }
    // public System.Void Initiate(UnityEngine.Transform transform, RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x220E274
    void Initiate(::UnityEngine::Transform* transform, ::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x220E36C
    void StoreDefaultLocalState();
    // public System.Void FixTransform(System.Boolean position)
    // Offset: 0x220E3BC
    void FixTransform(bool position);
    // public System.Void SetLength(RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap nextBone)
    // Offset: 0x220E41C
    void SetLength(::RootMotion::FinalIK::IKMapping::BoneMap* nextBone);
    // public System.Void SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap swingTarget)
    // Offset: 0x220E504
    void SetLocalSwingAxis(::RootMotion::FinalIK::IKMapping::BoneMap* swingTarget);
    // public System.Void SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap bone1, RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap bone2)
    // Offset: 0x220E50C
    void SetLocalSwingAxis(::RootMotion::FinalIK::IKMapping::BoneMap* bone1, ::RootMotion::FinalIK::IKMapping::BoneMap* bone2);
    // public System.Void SetLocalTwistAxis(UnityEngine.Vector3 twistDirection, UnityEngine.Vector3 normalDirection)
    // Offset: 0x220E69C
    void SetLocalTwistAxis(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection);
    // public System.Void SetPlane(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Transform planeBone1, UnityEngine.Transform planeBone2, UnityEngine.Transform planeBone3)
    // Offset: 0x220E7A8
    void SetPlane(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Transform* planeBone1, ::UnityEngine::Transform* planeBone2, ::UnityEngine::Transform* planeBone3);
    // public System.Void UpdatePlane(System.Boolean rotation, System.Boolean position)
    // Offset: 0x220E840
    void UpdatePlane(bool rotation, bool position);
    // public System.Void SetIKPosition()
    // Offset: 0x220EC14
    void SetIKPosition();
    // public System.Void MaintainRotation()
    // Offset: 0x220EC4C
    void MaintainRotation();
    // public System.Void SetToIKPosition()
    // Offset: 0x220EC84
    void SetToIKPosition();
    // public System.Void FixToNode(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight, RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node fixNode)
    // Offset: 0x220ECAC
    void FixToNode(::RootMotion::FinalIK::IKSolverFullBody* solver, float weight, ::RootMotion::FinalIK::IKSolver::Node* fixNode);
    // public UnityEngine.Vector3 GetPlanePosition(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x220EDD8
    ::UnityEngine::Vector3 GetPlanePosition(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void PositionToPlane(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x220F120
    void PositionToPlane(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void RotateToPlane(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight)
    // Offset: 0x220F150
    void RotateToPlane(::RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
    // public System.Void Swing(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x220F2E8
    void Swing(::UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void Swing(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single weight)
    // Offset: 0x220F358
    void Swing(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float weight);
    // public System.Void Twist(UnityEngine.Vector3 twistDirection, UnityEngine.Vector3 normalDirection, System.Single weight)
    // Offset: 0x220F59C
    void Twist(::UnityEngine::Vector3 twistDirection, ::UnityEngine::Vector3 normalDirection, float weight);
    // public System.Void RotateToMaintain(System.Single weight)
    // Offset: 0x220F7C4
    void RotateToMaintain(float weight);
    // public System.Void RotateToEffector(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight)
    // Offset: 0x220F8DC
    void RotateToEffector(::RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
    // private UnityEngine.Quaternion GetTargetRotation(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x220EF1C
    ::UnityEngine::Quaternion GetTargetRotation(::RootMotion::FinalIK::IKSolverFullBody* solver);
  }; // RootMotion.FinalIK.IKMapping/RootMotion.FinalIK.BoneMap
  #pragma pack(pop)
  static check_size<sizeof(IKMapping::BoneMap), 204 + sizeof(int)> __RootMotion_FinalIK_IKMapping_BoneMapSizeCheck;
  static_assert(sizeof(IKMapping::BoneMap) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::get_swingDirection
// Il2CppName: get_swingDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::get_swingDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "get_swingDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::get_isNodeBone
// Il2CppName: get_isNodeBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::get_isNodeBone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "get_isNodeBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::get_lastAnimatedTargetRotation
// Il2CppName: get_lastAnimatedTargetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::get_lastAnimatedTargetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "get_lastAnimatedTargetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMapping::BoneMap::Initiate)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::FixTransform
// Il2CppName: FixTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(bool)>(&RootMotion::FinalIK::IKMapping::BoneMap::FixTransform)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "FixTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKMapping::BoneMap*)>(&RootMotion::FinalIK::IKMapping::BoneMap::SetLength)> {
  static const MethodInfo* get() {
    static auto* nextBone = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKMapping/BoneMap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextBone});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetLocalSwingAxis
// Il2CppName: SetLocalSwingAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKMapping::BoneMap*)>(&RootMotion::FinalIK::IKMapping::BoneMap::SetLocalSwingAxis)> {
  static const MethodInfo* get() {
    static auto* swingTarget = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKMapping/BoneMap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetLocalSwingAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingTarget});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetLocalSwingAxis
// Il2CppName: SetLocalSwingAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKMapping::BoneMap*, ::RootMotion::FinalIK::IKMapping::BoneMap*)>(&RootMotion::FinalIK::IKMapping::BoneMap::SetLocalSwingAxis)> {
  static const MethodInfo* get() {
    static auto* bone1 = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKMapping/BoneMap")->byval_arg;
    static auto* bone2 = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKMapping/BoneMap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetLocalSwingAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone1, bone2});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetLocalTwistAxis
// Il2CppName: SetLocalTwistAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKMapping::BoneMap::SetLocalTwistAxis)> {
  static const MethodInfo* get() {
    static auto* twistDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normalDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetLocalTwistAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{twistDirection, normalDirection});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetPlane
// Il2CppName: SetPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKMapping::BoneMap::SetPlane)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* planeBone1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* planeBone2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* planeBone3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, planeBone1, planeBone2, planeBone3});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::UpdatePlane
// Il2CppName: UpdatePlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(bool, bool)>(&RootMotion::FinalIK::IKMapping::BoneMap::UpdatePlane)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "UpdatePlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, position});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetIKPosition
// Il2CppName: SetIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::SetIKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::MaintainRotation
// Il2CppName: MaintainRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::MaintainRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "MaintainRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::SetToIKPosition
// Il2CppName: SetToIKPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)()>(&RootMotion::FinalIK::IKMapping::BoneMap::SetToIKPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "SetToIKPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::FixToNode
// Il2CppName: FixToNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*, float, ::RootMotion::FinalIK::IKSolver::Node*)>(&RootMotion::FinalIK::IKMapping::BoneMap::FixToNode)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fixNode = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "FixToNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight, fixNode});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::GetPlanePosition
// Il2CppName: GetPlanePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMapping::BoneMap::GetPlanePosition)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "GetPlanePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::PositionToPlane
// Il2CppName: PositionToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMapping::BoneMap::PositionToPlane)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "PositionToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::RotateToPlane
// Il2CppName: RotateToPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*, float)>(&RootMotion::FinalIK::IKMapping::BoneMap::RotateToPlane)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "RotateToPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::Swing
// Il2CppName: Swing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKMapping::BoneMap::Swing)> {
  static const MethodInfo* get() {
    static auto* swingTarget = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "Swing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingTarget, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::Swing
// Il2CppName: Swing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKMapping::BoneMap::Swing)> {
  static const MethodInfo* get() {
    static auto* pos1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pos2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "Swing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos1, pos2, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::Twist
// Il2CppName: Twist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKMapping::BoneMap::Twist)> {
  static const MethodInfo* get() {
    static auto* twistDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normalDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "Twist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{twistDirection, normalDirection, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::RotateToMaintain
// Il2CppName: RotateToMaintain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(float)>(&RootMotion::FinalIK::IKMapping::BoneMap::RotateToMaintain)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "RotateToMaintain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::RotateToEffector
// Il2CppName: RotateToEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*, float)>(&RootMotion::FinalIK::IKMapping::BoneMap::RotateToEffector)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "RotateToEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneMap::GetTargetRotation
// Il2CppName: GetTargetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKMapping::BoneMap::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMapping::BoneMap::GetTargetRotation)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping::BoneMap*), "GetTargetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
