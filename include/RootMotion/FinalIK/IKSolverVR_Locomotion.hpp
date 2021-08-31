// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: RootMotion.InterpolationMode
#include "RootMotion/InterpolationMode.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Locomotion
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::Locomotion : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xE29304
    // [RangeAttribute] Offset: 0xE29304
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x10
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29358
    // public System.Single footDistance
    // Size: 0x4
    // Offset: 0x14
    float footDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29390
    // public System.Single stepThreshold
    // Size: 0x4
    // Offset: 0x18
    float stepThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE293C8
    // public System.Single angleThreshold
    // Size: 0x4
    // Offset: 0x1C
    float angleThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29400
    // public System.Single comAngleMlp
    // Size: 0x4
    // Offset: 0x20
    float comAngleMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29438
    // public System.Single maxVelocity
    // Size: 0x4
    // Offset: 0x24
    float maxVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29470
    // public System.Single velocityFactor
    // Size: 0x4
    // Offset: 0x28
    float velocityFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE294A8
    // [RangeAttribute] Offset: 0xE294A8
    // public System.Single maxLegStretch
    // Size: 0x4
    // Offset: 0x2C
    float maxLegStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29500
    // public System.Single rootSpeed
    // Size: 0x4
    // Offset: 0x30
    float rootSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29538
    // public System.Single stepSpeed
    // Size: 0x4
    // Offset: 0x34
    float stepSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29570
    // public UnityEngine.AnimationCurve stepHeight
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* stepHeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE295A8
    // public UnityEngine.AnimationCurve heelHeight
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* heelHeight;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE295E0
    // [RangeAttribute] Offset: 0xE295E0
    // public System.Single relaxLegTwistMinAngle
    // Size: 0x4
    // Offset: 0x48
    float relaxLegTwistMinAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29638
    // public System.Single relaxLegTwistSpeed
    // Size: 0x4
    // Offset: 0x4C
    float relaxLegTwistSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29670
    // public RootMotion.InterpolationMode stepInterpolation
    // Size: 0x4
    // Offset: 0x50
    RootMotion::InterpolationMode stepInterpolation;
    // Field size check
    static_assert(sizeof(RootMotion::InterpolationMode) == 0x4);
    // [TooltipAttribute] Offset: 0xE296A8
    // public UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Boolean blockingEnabled
    // Size: 0x1
    // Offset: 0x60
    bool blockingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: blockingEnabled and: blockingLayers
    char __padding16[0x3] = {};
    // public UnityEngine.LayerMask blockingLayers
    // Size: 0x4
    // Offset: 0x64
    UnityEngine::LayerMask blockingLayers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // public System.Single raycastRadius
    // Size: 0x4
    // Offset: 0x68
    float raycastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single raycastHeight
    // Size: 0x4
    // Offset: 0x6C
    float raycastHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE29720
    // public UnityEngine.Events.UnityEvent onLeftFootstep
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::Events::UnityEvent* onLeftFootstep;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // [TooltipAttribute] Offset: 0xE29758
    // public UnityEngine.Events.UnityEvent onRightFootstep
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Events::UnityEvent* onRightFootstep;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Vector3 <centerOfMass>k__BackingField
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 centerOfMass;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: centerOfMass and: footsteps
    char __padding22[0x4] = {};
    // private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep[] footsteps
    // Size: 0x8
    // Offset: 0x90
    ::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>* footsteps;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>*) == 0x8);
    // private UnityEngine.Vector3 lastComPosition
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 lastComPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 comVelocity
    // Size: 0xC
    // Offset: 0xA4
    UnityEngine::Vector3 comVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 leftFootIndex
    // Size: 0x4
    // Offset: 0xB0
    int leftFootIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 rightFootIndex
    // Size: 0x4
    // Offset: 0xB4
    int rightFootIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Locomotion
    Locomotion(float weight_ = {}, float footDistance_ = {}, float stepThreshold_ = {}, float angleThreshold_ = {}, float comAngleMlp_ = {}, float maxVelocity_ = {}, float velocityFactor_ = {}, float maxLegStretch_ = {}, float rootSpeed_ = {}, float stepSpeed_ = {}, UnityEngine::AnimationCurve* stepHeight_ = {}, UnityEngine::AnimationCurve* heelHeight_ = {}, float relaxLegTwistMinAngle_ = {}, float relaxLegTwistSpeed_ = {}, RootMotion::InterpolationMode stepInterpolation_ = {}, UnityEngine::Vector3 offset_ = {}, bool blockingEnabled_ = {}, UnityEngine::LayerMask blockingLayers_ = {}, float raycastRadius_ = {}, float raycastHeight_ = {}, UnityEngine::Events::UnityEvent* onLeftFootstep_ = {}, UnityEngine::Events::UnityEvent* onRightFootstep_ = {}, UnityEngine::Vector3 centerOfMass_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>* footsteps_ = {}, UnityEngine::Vector3 lastComPosition_ = {}, UnityEngine::Vector3 comVelocity_ = {}, int leftFootIndex_ = {}, int rightFootIndex_ = {}) noexcept : weight{weight_}, footDistance{footDistance_}, stepThreshold{stepThreshold_}, angleThreshold{angleThreshold_}, comAngleMlp{comAngleMlp_}, maxVelocity{maxVelocity_}, velocityFactor{velocityFactor_}, maxLegStretch{maxLegStretch_}, rootSpeed{rootSpeed_}, stepSpeed{stepSpeed_}, stepHeight{stepHeight_}, heelHeight{heelHeight_}, relaxLegTwistMinAngle{relaxLegTwistMinAngle_}, relaxLegTwistSpeed{relaxLegTwistSpeed_}, stepInterpolation{stepInterpolation_}, offset{offset_}, blockingEnabled{blockingEnabled_}, blockingLayers{blockingLayers_}, raycastRadius{raycastRadius_}, raycastHeight{raycastHeight_}, onLeftFootstep{onLeftFootstep_}, onRightFootstep{onRightFootstep_}, centerOfMass{centerOfMass_}, footsteps{footsteps_}, lastComPosition{lastComPosition_}, comVelocity{comVelocity_}, leftFootIndex{leftFootIndex_}, rightFootIndex{rightFootIndex_} {}
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: public System.Single footDistance
    float _get_footDistance();
    // Set instance field: public System.Single footDistance
    void _set_footDistance(float value);
    // Get instance field: public System.Single stepThreshold
    float _get_stepThreshold();
    // Set instance field: public System.Single stepThreshold
    void _set_stepThreshold(float value);
    // Get instance field: public System.Single angleThreshold
    float _get_angleThreshold();
    // Set instance field: public System.Single angleThreshold
    void _set_angleThreshold(float value);
    // Get instance field: public System.Single comAngleMlp
    float _get_comAngleMlp();
    // Set instance field: public System.Single comAngleMlp
    void _set_comAngleMlp(float value);
    // Get instance field: public System.Single maxVelocity
    float _get_maxVelocity();
    // Set instance field: public System.Single maxVelocity
    void _set_maxVelocity(float value);
    // Get instance field: public System.Single velocityFactor
    float _get_velocityFactor();
    // Set instance field: public System.Single velocityFactor
    void _set_velocityFactor(float value);
    // Get instance field: public System.Single maxLegStretch
    float _get_maxLegStretch();
    // Set instance field: public System.Single maxLegStretch
    void _set_maxLegStretch(float value);
    // Get instance field: public System.Single rootSpeed
    float _get_rootSpeed();
    // Set instance field: public System.Single rootSpeed
    void _set_rootSpeed(float value);
    // Get instance field: public System.Single stepSpeed
    float _get_stepSpeed();
    // Set instance field: public System.Single stepSpeed
    void _set_stepSpeed(float value);
    // Get instance field: public UnityEngine.AnimationCurve stepHeight
    UnityEngine::AnimationCurve* _get_stepHeight();
    // Set instance field: public UnityEngine.AnimationCurve stepHeight
    void _set_stepHeight(UnityEngine::AnimationCurve* value);
    // Get instance field: public UnityEngine.AnimationCurve heelHeight
    UnityEngine::AnimationCurve* _get_heelHeight();
    // Set instance field: public UnityEngine.AnimationCurve heelHeight
    void _set_heelHeight(UnityEngine::AnimationCurve* value);
    // Get instance field: public System.Single relaxLegTwistMinAngle
    float _get_relaxLegTwistMinAngle();
    // Set instance field: public System.Single relaxLegTwistMinAngle
    void _set_relaxLegTwistMinAngle(float value);
    // Get instance field: public System.Single relaxLegTwistSpeed
    float _get_relaxLegTwistSpeed();
    // Set instance field: public System.Single relaxLegTwistSpeed
    void _set_relaxLegTwistSpeed(float value);
    // Get instance field: public RootMotion.InterpolationMode stepInterpolation
    RootMotion::InterpolationMode _get_stepInterpolation();
    // Set instance field: public RootMotion.InterpolationMode stepInterpolation
    void _set_stepInterpolation(RootMotion::InterpolationMode value);
    // Get instance field: public UnityEngine.Vector3 offset
    UnityEngine::Vector3 _get_offset();
    // Set instance field: public UnityEngine.Vector3 offset
    void _set_offset(UnityEngine::Vector3 value);
    // Get instance field: public System.Boolean blockingEnabled
    bool _get_blockingEnabled();
    // Set instance field: public System.Boolean blockingEnabled
    void _set_blockingEnabled(bool value);
    // Get instance field: public UnityEngine.LayerMask blockingLayers
    UnityEngine::LayerMask _get_blockingLayers();
    // Set instance field: public UnityEngine.LayerMask blockingLayers
    void _set_blockingLayers(UnityEngine::LayerMask value);
    // Get instance field: public System.Single raycastRadius
    float _get_raycastRadius();
    // Set instance field: public System.Single raycastRadius
    void _set_raycastRadius(float value);
    // Get instance field: public System.Single raycastHeight
    float _get_raycastHeight();
    // Set instance field: public System.Single raycastHeight
    void _set_raycastHeight(float value);
    // Get instance field: public UnityEngine.Events.UnityEvent onLeftFootstep
    UnityEngine::Events::UnityEvent* _get_onLeftFootstep();
    // Set instance field: public UnityEngine.Events.UnityEvent onLeftFootstep
    void _set_onLeftFootstep(UnityEngine::Events::UnityEvent* value);
    // Get instance field: public UnityEngine.Events.UnityEvent onRightFootstep
    UnityEngine::Events::UnityEvent* _get_onRightFootstep();
    // Set instance field: public UnityEngine.Events.UnityEvent onRightFootstep
    void _set_onRightFootstep(UnityEngine::Events::UnityEvent* value);
    // Get instance field: private UnityEngine.Vector3 <centerOfMass>k__BackingField
    UnityEngine::Vector3 _get_$centerOfMass$k__BackingField();
    // Set instance field: private UnityEngine.Vector3 <centerOfMass>k__BackingField
    void _set_$centerOfMass$k__BackingField(UnityEngine::Vector3 value);
    // Get instance field: private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep[] footsteps
    ::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>* _get_footsteps();
    // Set instance field: private RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep[] footsteps
    void _set_footsteps(::Array<RootMotion::FinalIK::IKSolverVR::Footstep*>* value);
    // Get instance field: private UnityEngine.Vector3 lastComPosition
    UnityEngine::Vector3 _get_lastComPosition();
    // Set instance field: private UnityEngine.Vector3 lastComPosition
    void _set_lastComPosition(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 comVelocity
    UnityEngine::Vector3 _get_comVelocity();
    // Set instance field: private UnityEngine.Vector3 comVelocity
    void _set_comVelocity(UnityEngine::Vector3 value);
    // Get instance field: private System.Int32 leftFootIndex
    int _get_leftFootIndex();
    // Set instance field: private System.Int32 leftFootIndex
    void _set_leftFootIndex(int value);
    // Get instance field: private System.Int32 rightFootIndex
    int _get_rightFootIndex();
    // Set instance field: private System.Int32 rightFootIndex
    void _set_rightFootIndex(int value);
    // public UnityEngine.Vector3 get_centerOfMass()
    // Offset: 0x1E83374
    UnityEngine::Vector3 get_centerOfMass();
    // private System.Void set_centerOfMass(UnityEngine.Vector3 value)
    // Offset: 0x1E83380
    void set_centerOfMass(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_leftFootstepPosition()
    // Offset: 0x1E8585C
    UnityEngine::Vector3 get_leftFootstepPosition();
    // public UnityEngine.Vector3 get_rightFootstepPosition()
    // Offset: 0x1E8589C
    UnityEngine::Vector3 get_rightFootstepPosition();
    // public UnityEngine.Quaternion get_leftFootstepRotation()
    // Offset: 0x1E858E0
    UnityEngine::Quaternion get_leftFootstepRotation();
    // public UnityEngine.Quaternion get_rightFootstepRotation()
    // Offset: 0x1E85920
    UnityEngine::Quaternion get_rightFootstepRotation();
    // public System.Void Initiate(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasToes)
    // Offset: 0x1E8338C
    void Initiate(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasToes);
    // public System.Void Reset(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations)
    // Offset: 0x1E83684
    void Reset(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations);
    // public System.Void AddDeltaRotation(UnityEngine.Quaternion delta, UnityEngine.Vector3 pivot)
    // Offset: 0x1E838F8
    void AddDeltaRotation(UnityEngine::Quaternion delta, UnityEngine::Vector3 pivot);
    // public System.Void AddDeltaPosition(UnityEngine.Vector3 delta)
    // Offset: 0x1E83CD0
    void AddDeltaPosition(UnityEngine::Vector3 delta);
    // public System.Void Solve(RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.VirtualBone rootBone, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Spine spine, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg leftLeg, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg rightLeg, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm leftArm, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Arm rightArm, System.Int32 supportLegIndex, out UnityEngine.Vector3 leftFootPosition, out UnityEngine.Vector3 rightFootPosition, out UnityEngine.Quaternion leftFootRotation, out UnityEngine.Quaternion rightFootRotation, out System.Single leftFootOffset, out System.Single rightFootOffset, out System.Single leftHeelOffset, out System.Single rightHeelOffset)
    // Offset: 0x1E83E80
    void Solve(RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone, RootMotion::FinalIK::IKSolverVR::Spine* spine, RootMotion::FinalIK::IKSolverVR::Leg* leftLeg, RootMotion::FinalIK::IKSolverVR::Leg* rightLeg, RootMotion::FinalIK::IKSolverVR::Arm* leftArm, RootMotion::FinalIK::IKSolverVR::Arm* rightArm, int supportLegIndex, ByRef<UnityEngine::Vector3> leftFootPosition, ByRef<UnityEngine::Vector3> rightFootPosition, ByRef<UnityEngine::Quaternion> leftFootRotation, ByRef<UnityEngine::Quaternion> rightFootRotation, ByRef<float> leftFootOffset, ByRef<float> rightFootOffset, ByRef<float> leftHeelOffset, ByRef<float> rightHeelOffset);
    // private System.Boolean StepBlocked(UnityEngine.Vector3 fromPosition, UnityEngine.Vector3 toPosition, UnityEngine.Vector3 rootPosition)
    // Offset: 0x1E85468
    bool StepBlocked(UnityEngine::Vector3 fromPosition, UnityEngine::Vector3 toPosition, UnityEngine::Vector3 rootPosition);
    // private System.Boolean CanStep()
    // Offset: 0x1E8560C
    bool CanStep();
    // static private System.Boolean GetLineSphereCollision(UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x1E85690
    static bool GetLineSphereCollision(UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // public System.Void .ctor()
    // Offset: 0x1E85964
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Locomotion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Locomotion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Locomotion*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Locomotion
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Locomotion), 180 + sizeof(int)> __RootMotion_FinalIK_IKSolverVR_LocomotionSizeCheck;
  static_assert(sizeof(IKSolverVR::Locomotion) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Locomotion*, "RootMotion.FinalIK", "IKSolverVR/Locomotion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_centerOfMass
// Il2CppName: get_centerOfMass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_centerOfMass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_centerOfMass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::set_centerOfMass
// Il2CppName: set_centerOfMass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::set_centerOfMass)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "set_centerOfMass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepPosition
// Il2CppName: get_leftFootstepPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_leftFootstepPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepPosition
// Il2CppName: get_rightFootstepPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_rightFootstepPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepRotation
// Il2CppName: get_leftFootstepRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_leftFootstepRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_leftFootstepRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepRotation
// Il2CppName: get_rightFootstepRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::get_rightFootstepRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "get_rightFootstepRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Quaternion>*, bool)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::Initiate)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasToes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Quaternion>*)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::Reset)> {
  static const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaRotation
// Il2CppName: AddDeltaRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaRotation)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* pivot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "AddDeltaRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta, pivot});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaPosition
// Il2CppName: AddDeltaPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::AddDeltaPosition)> {
  static const MethodInfo* get() {
    static auto* delta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "AddDeltaPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delta});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(RootMotion::FinalIK::IKSolverVR::VirtualBone*, RootMotion::FinalIK::IKSolverVR::Spine*, RootMotion::FinalIK::IKSolverVR::Leg*, RootMotion::FinalIK::IKSolverVR::Leg*, RootMotion::FinalIK::IKSolverVR::Arm*, RootMotion::FinalIK::IKSolverVR::Arm*, int, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>, ByRef<UnityEngine::Quaternion>, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::Solve)> {
  static const MethodInfo* get() {
    static auto* rootBone = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    static auto* spine = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Spine")->byval_arg;
    static auto* leftLeg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Leg")->byval_arg;
    static auto* rightLeg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Leg")->byval_arg;
    static auto* leftArm = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Arm")->byval_arg;
    static auto* rightArm = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Arm")->byval_arg;
    static auto* supportLegIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* leftFootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rightFootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* leftFootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* rightFootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* leftFootOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* rightFootOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* leftHeelOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* rightHeelOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootBone, spine, leftLeg, rightLeg, leftArm, rightArm, supportLegIndex, leftFootPosition, rightFootPosition, leftFootRotation, rightFootRotation, leftFootOffset, rightFootOffset, leftHeelOffset, rightHeelOffset});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::StepBlocked
// Il2CppName: StepBlocked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Locomotion::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::StepBlocked)> {
  static const MethodInfo* get() {
    static auto* fromPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "StepBlocked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPosition, toPosition, rootPosition});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::CanStep
// Il2CppName: CanStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Locomotion::*)()>(&RootMotion::FinalIK::IKSolverVR::Locomotion::CanStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "CanStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::GetLineSphereCollision
// Il2CppName: GetLineSphereCollision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKSolverVR::Locomotion::GetLineSphereCollision)> {
  static const MethodInfo* get() {
    static auto* lineStart = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* lineEnd = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Locomotion*), "GetLineSphereCollision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineStart, lineEnd, sphereCenter, sphereRadius});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Locomotion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
