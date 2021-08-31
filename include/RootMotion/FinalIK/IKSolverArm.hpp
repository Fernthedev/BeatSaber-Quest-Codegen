// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
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
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverArm
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverArm : public RootMotion::FinalIK::IKSolver {
    public:
    // [RangeAttribute] Offset: 0xE26A3C
    // public System.Single IKRotationWeight
    // Size: 0x4
    // Offset: 0x58
    float IKRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x5C
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Padding between fields: IKRotation and: chest
    char __padding1[0x4] = {};
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point chest
    // Size: 0x8
    // Offset: 0x70
    RootMotion::FinalIK::IKSolver::Point* chest;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point shoulder
    // Size: 0x8
    // Offset: 0x78
    RootMotion::FinalIK::IKSolver::Point* shoulder;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point upperArm
    // Size: 0x8
    // Offset: 0x80
    RootMotion::FinalIK::IKSolver::Point* upperArm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point forearm
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolver::Point* forearm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point hand
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolver::Point* hand;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public System.Boolean isLeft
    // Size: 0x1
    // Offset: 0x98
    bool isLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLeft and: arm
    char __padding7[0x7] = {};
    // public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm arm
    // Size: 0x8
    // Offset: 0xA0
    RootMotion::FinalIK::IKSolverVR::Arm* arm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm*) == 0x8);
    // private UnityEngine.Vector3[] positions
    // Size: 0x8
    // Offset: 0xA8
    ::Array<UnityEngine::Vector3>* positions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] rotations
    // Size: 0x8
    // Offset: 0xB0
    ::Array<UnityEngine::Quaternion>* rotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // Creating value type constructor for type: IKSolverArm
    IKSolverArm(float IKRotationWeight_ = {}, UnityEngine::Quaternion IKRotation_ = {}, RootMotion::FinalIK::IKSolver::Point* chest_ = {}, RootMotion::FinalIK::IKSolver::Point* shoulder_ = {}, RootMotion::FinalIK::IKSolver::Point* upperArm_ = {}, RootMotion::FinalIK::IKSolver::Point* forearm_ = {}, RootMotion::FinalIK::IKSolver::Point* hand_ = {}, bool isLeft_ = {}, RootMotion::FinalIK::IKSolverVR::Arm* arm_ = {}, ::Array<UnityEngine::Vector3>* positions_ = {}, ::Array<UnityEngine::Quaternion>* rotations_ = {}) noexcept : IKRotationWeight{IKRotationWeight_}, IKRotation{IKRotation_}, chest{chest_}, shoulder{shoulder_}, upperArm{upperArm_}, forearm{forearm_}, hand{hand_}, isLeft{isLeft_}, arm{arm_}, positions{positions_}, rotations{rotations_} {}
    // Get instance field: public System.Single IKRotationWeight
    float _get_IKRotationWeight();
    // Set instance field: public System.Single IKRotationWeight
    void _set_IKRotationWeight(float value);
    // Get instance field: public UnityEngine.Quaternion IKRotation
    UnityEngine::Quaternion _get_IKRotation();
    // Set instance field: public UnityEngine.Quaternion IKRotation
    void _set_IKRotation(UnityEngine::Quaternion value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point chest
    RootMotion::FinalIK::IKSolver::Point* _get_chest();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point chest
    void _set_chest(RootMotion::FinalIK::IKSolver::Point* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point shoulder
    RootMotion::FinalIK::IKSolver::Point* _get_shoulder();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point shoulder
    void _set_shoulder(RootMotion::FinalIK::IKSolver::Point* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point upperArm
    RootMotion::FinalIK::IKSolver::Point* _get_upperArm();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point upperArm
    void _set_upperArm(RootMotion::FinalIK::IKSolver::Point* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point forearm
    RootMotion::FinalIK::IKSolver::Point* _get_forearm();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point forearm
    void _set_forearm(RootMotion::FinalIK::IKSolver::Point* value);
    // Get instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point hand
    RootMotion::FinalIK::IKSolver::Point* _get_hand();
    // Set instance field: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point hand
    void _set_hand(RootMotion::FinalIK::IKSolver::Point* value);
    // Get instance field: public System.Boolean isLeft
    bool _get_isLeft();
    // Set instance field: public System.Boolean isLeft
    void _set_isLeft(bool value);
    // Get instance field: public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm arm
    RootMotion::FinalIK::IKSolverVR::Arm* _get_arm();
    // Set instance field: public RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm arm
    void _set_arm(RootMotion::FinalIK::IKSolverVR::Arm* value);
    // Get instance field: private UnityEngine.Vector3[] positions
    ::Array<UnityEngine::Vector3>* _get_positions();
    // Set instance field: private UnityEngine.Vector3[] positions
    void _set_positions(::Array<UnityEngine::Vector3>* value);
    // Get instance field: private UnityEngine.Quaternion[] rotations
    ::Array<UnityEngine::Quaternion>* _get_rotations();
    // Set instance field: private UnityEngine.Quaternion[] rotations
    void _set_rotations(::Array<UnityEngine::Quaternion>* value);
    // public System.Boolean SetChain(UnityEngine.Transform chest, UnityEngine.Transform shoulder, UnityEngine.Transform upperArm, UnityEngine.Transform forearm, UnityEngine.Transform hand, UnityEngine.Transform root)
    // Offset: 0x1CAA54C
    bool SetChain(UnityEngine::Transform* chest, UnityEngine::Transform* shoulder, UnityEngine::Transform* upperArm, UnityEngine::Transform* forearm, UnityEngine::Transform* hand, UnityEngine::Transform* root);
    // private System.Void Solve()
    // Offset: 0x1CAAD18
    void Solve();
    // private System.Void Read()
    // Offset: 0x1CAA9E0
    void Read();
    // private System.Void Write()
    // Offset: 0x1CAAD84
    void Write();
    // public System.Void .ctor()
    // Offset: 0x1CAAF10
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverArm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverArm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverArm*, creationType>()));
    }
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1CAA1D8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::Il2CppString*> message);
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x1CAA5BC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1CAA718
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1CAA8B0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1CAA90C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x1CAA97C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1CAACEC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverArm
  #pragma pack(pop)
  static check_size<sizeof(IKSolverArm), 176 + sizeof(::Array<UnityEngine::Quaternion>*)> __RootMotion_FinalIK_IKSolverArmSizeCheck;
  static_assert(sizeof(IKSolverArm) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverArm*, "RootMotion.FinalIK", "IKSolverArm");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverArm::*)(UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverArm::SetChain)> {
  static const MethodInfo* get() {
    static auto* chest = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* shoulder = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* upperArm = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* forearm = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chest, shoulder, upperArm, forearm, hand, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::Solve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::Write)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverArm::*)(ByRef<::Il2CppString*>)>(&RootMotion::FinalIK::IKSolverArm::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverArm::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverArm::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverArm::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverArm::*)()>(&RootMotion::FinalIK::IKSolverArm::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverArm*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
