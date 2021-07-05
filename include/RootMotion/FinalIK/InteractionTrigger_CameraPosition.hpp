// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/CameraPosition
  class InteractionTrigger::CameraPosition : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xE0D058
    // public UnityEngine.Collider lookAtTarget
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Collider* lookAtTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0D090
    // public UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xE0D0C8
    // public System.Single maxDistance
    // Size: 0x4
    // Offset: 0x24
    float maxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D100
    // [RangeAttribute] Offset: 0xE0D100
    // public System.Single maxAngle
    // Size: 0x4
    // Offset: 0x28
    float maxAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D158
    // public System.Boolean fixYAxis
    // Size: 0x1
    // Offset: 0x2C
    bool fixYAxis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CameraPosition
    CameraPosition(UnityEngine::Collider* lookAtTarget_ = {}, UnityEngine::Vector3 direction_ = {}, float maxDistance_ = {}, float maxAngle_ = {}, bool fixYAxis_ = {}) noexcept : lookAtTarget{lookAtTarget_}, direction{direction_}, maxDistance{maxDistance_}, maxAngle{maxAngle_}, fixYAxis{fixYAxis_} {}
    // public UnityEngine.Quaternion GetRotation()
    // Offset: 0x1A9EDB4
    UnityEngine::Quaternion GetRotation();
    // public System.Boolean IsInRange(UnityEngine.Transform raycastFrom, UnityEngine.RaycastHit hit, UnityEngine.Transform trigger, out System.Single error)
    // Offset: 0x1A9EF5C
    bool IsInRange(UnityEngine::Transform* raycastFrom, UnityEngine::RaycastHit hit, UnityEngine::Transform* trigger, float& error);
    // public System.Void .ctor()
    // Offset: 0x1A9F23C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger::CameraPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTrigger::CameraPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger::CameraPosition*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTrigger/CameraPosition
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger::CameraPosition), 44 + sizeof(bool)> __RootMotion_FinalIK_InteractionTrigger_CameraPositionSizeCheck;
  static_assert(sizeof(InteractionTrigger::CameraPosition) == 0x2D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::CameraPosition*, "RootMotion.FinalIK", "InteractionTrigger/CameraPosition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CameraPosition::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::InteractionTrigger::CameraPosition::*)()>(&RootMotion::FinalIK::InteractionTrigger::CameraPosition::GetRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger::CameraPosition*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CameraPosition::IsInRange
// Il2CppName: IsInRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::InteractionTrigger::CameraPosition::*)(UnityEngine::Transform*, UnityEngine::RaycastHit, UnityEngine::Transform*, float&)>(&RootMotion::FinalIK::InteractionTrigger::CameraPosition::IsInRange)> {
  const MethodInfo* get() {
    static auto* raycastFrom = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionTrigger::CameraPosition*), "IsInRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raycastFrom, hit, trigger, error});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionTrigger::CameraPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
