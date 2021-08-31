// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.OffsetPose
#include "RootMotion/FinalIK/OffsetPose.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.OffsetPose/RootMotion.FinalIK.EffectorLink
  // [TokenAttribute] Offset: FFFFFFFF
  class OffsetPose::EffectorLink : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 pin
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 pin;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 pinWeight
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 pinWeight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: EffectorLink
    EffectorLink(RootMotion::FinalIK::FullBodyBipedEffector effector_ = {}, UnityEngine::Vector3 offset_ = {}, UnityEngine::Vector3 pin_ = {}, UnityEngine::Vector3 pinWeight_ = {}) noexcept : effector{effector_}, offset{offset_}, pin{pin_}, pinWeight{pinWeight_} {}
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedEffector effector
    RootMotion::FinalIK::FullBodyBipedEffector& dyn_effector();
    // Get instance field reference: public UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: public UnityEngine.Vector3 pin
    UnityEngine::Vector3& dyn_pin();
    // Get instance field reference: public UnityEngine.Vector3 pinWeight
    UnityEngine::Vector3& dyn_pinWeight();
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, UnityEngine.Quaternion rotation)
    // Offset: 0x1AD8D90
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1AD91E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OffsetPose::EffectorLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::OffsetPose::EffectorLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OffsetPose::EffectorLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.OffsetPose/RootMotion.FinalIK.EffectorLink
  #pragma pack(pop)
  static check_size<sizeof(OffsetPose::EffectorLink), 44 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_OffsetPose_EffectorLinkSizeCheck;
  static_assert(sizeof(OffsetPose::EffectorLink) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetPose::EffectorLink*, "RootMotion.FinalIK", "OffsetPose/EffectorLink");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetPose::EffectorLink::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetPose::EffectorLink::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float, UnityEngine::Quaternion)>(&RootMotion::FinalIK::OffsetPose::EffectorLink::Apply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::OffsetPose::EffectorLink*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::OffsetPose::EffectorLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
