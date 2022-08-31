// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone
#include "RootMotion/FinalIK/HitReaction_HitPointBone.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*, "RootMotion.FinalIK", "HitReaction/HitPointBone/BoneLink");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone/RootMotion.FinalIK.BoneLink
  // [TokenAttribute] Offset: FFFFFFFF
  class HitReaction::HitPointBone::BoneLink : public ::Il2CppObject {
    public:
    public:
    // [TooltipAttribute] Offset: 0x11119F0
    // public UnityEngine.Transform bone
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* bone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x1111A28
    // [RangeAttribute] Offset: 0x1111A28
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion lastValue
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Quaternion lastValue;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion current
    // Size: 0x10
    // Offset: 0x2C
    ::UnityEngine::Quaternion current;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform bone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone();
    // Get instance field reference: public System.Single weight
    [[deprecated("Use field access instead!")]] float& dyn_weight();
    // Get instance field reference: private UnityEngine.Quaternion lastValue
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_lastValue();
    // Get instance field reference: private UnityEngine.Quaternion current
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_current();
    // public System.Void .ctor()
    // Offset: 0x2209384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointBone::BoneLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointBone::BoneLink*, creationType>()));
    }
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Quaternion offset, System.Single crossFader)
    // Offset: 0x2209214
    void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Quaternion offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x2208FAC
    void CrossFadeStart();
  }; // RootMotion.FinalIK.HitReaction/RootMotion.FinalIK.HitPointBone/RootMotion.FinalIK.BoneLink
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointBone::BoneLink), 44 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_HitReaction_HitPointBone_BoneLinkSizeCheck;
  static_assert(sizeof(HitReaction::HitPointBone::BoneLink) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::Apply)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* crossFader = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, offset, crossFader});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::CrossFadeStart
// Il2CppName: CrossFadeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::*)()>(&RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::CrossFadeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*), "CrossFadeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
