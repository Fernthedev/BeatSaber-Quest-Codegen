// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
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
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIKCalibrator::CalibrationData : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target
    class Target;
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x10
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: scale and: head
    char __padding0[0x4] = {};
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target head
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* head;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target leftHand
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftHand;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target rightHand
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightHand;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target pelvis
    // Size: 0x8
    // Offset: 0x30
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* pelvis;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target leftFoot
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftFoot;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target rightFoot
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightFoot;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target leftLegGoal
    // Size: 0x8
    // Offset: 0x48
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftLegGoal;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target rightLegGoal
    // Size: 0x8
    // Offset: 0x50
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightLegGoal;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*) == 0x8);
    // public UnityEngine.Vector3 pelvisTargetRight
    // Size: 0xC
    // Offset: 0x58
    UnityEngine::Vector3 pelvisTargetRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single pelvisPositionWeight
    // Size: 0x4
    // Offset: 0x64
    float pelvisPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single pelvisRotationWeight
    // Size: 0x4
    // Offset: 0x68
    float pelvisRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: CalibrationData
    CalibrationData(float scale_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* head_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftHand_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightHand_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* pelvis_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftFoot_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightFoot_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* leftLegGoal_ = {}, RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target* rightLegGoal_ = {}, UnityEngine::Vector3 pelvisTargetRight_ = {}, float pelvisPositionWeight_ = {}, float pelvisRotationWeight_ = {}) noexcept : scale{scale_}, head{head_}, leftHand{leftHand_}, rightHand{rightHand_}, pelvis{pelvis_}, leftFoot{leftFoot_}, rightFoot{rightFoot_}, leftLegGoal{leftLegGoal_}, rightLegGoal{rightLegGoal_}, pelvisTargetRight{pelvisTargetRight_}, pelvisPositionWeight{pelvisPositionWeight_}, pelvisRotationWeight{pelvisRotationWeight_} {}
    // Get instance field reference: public System.Single scale
    float& dyn_scale();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target head
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_head();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target leftHand
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_leftHand();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target rightHand
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_rightHand();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target pelvis
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_pelvis();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target leftFoot
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_leftFoot();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target rightFoot
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_rightFoot();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target leftLegGoal
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_leftLegGoal();
    // Get instance field reference: public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target rightLegGoal
    RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*& dyn_rightLegGoal();
    // Get instance field reference: public UnityEngine.Vector3 pelvisTargetRight
    UnityEngine::Vector3& dyn_pelvisTargetRight();
    // Get instance field reference: public System.Single pelvisPositionWeight
    float& dyn_pelvisPositionWeight();
    // Get instance field reference: public System.Single pelvisRotationWeight
    float& dyn_pelvisRotationWeight();
    // public System.Void .ctor()
    // Offset: 0x1AE7544
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKCalibrator::CalibrationData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIKCalibrator::CalibrationData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKCalibrator::CalibrationData*, creationType>()));
    }
  }; // RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData
  #pragma pack(pop)
  static check_size<sizeof(VRIKCalibrator::CalibrationData), 104 + sizeof(float)> __RootMotion_FinalIK_VRIKCalibrator_CalibrationDataSizeCheck;
  static_assert(sizeof(VRIKCalibrator::CalibrationData) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKCalibrator::CalibrationData*, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::CalibrationData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
