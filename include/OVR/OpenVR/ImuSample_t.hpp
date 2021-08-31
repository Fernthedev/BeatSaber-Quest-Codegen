// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3d_t
#include "OVR/OpenVR/HmdVector3d_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x3C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.ImuSample_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ImuSample_t/*, public System::ValueType*/ {
    public:
    // public System.Double fSampleTime
    // Size: 0x8
    // Offset: 0x0
    double fSampleTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public OVR.OpenVR.HmdVector3d_t vAccel
    // Size: 0x18
    // Offset: 0x8
    OVR::OpenVR::HmdVector3d_t vAccel;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3d_t) == 0x18);
    // public OVR.OpenVR.HmdVector3d_t vGyro
    // Size: 0x18
    // Offset: 0x20
    OVR::OpenVR::HmdVector3d_t vGyro;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3d_t) == 0x18);
    // public System.UInt32 unOffScaleFlags
    // Size: 0x4
    // Offset: 0x38
    uint unOffScaleFlags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: ImuSample_t
    constexpr ImuSample_t(double fSampleTime_ = {}, OVR::OpenVR::HmdVector3d_t vAccel_ = {}, OVR::OpenVR::HmdVector3d_t vGyro_ = {}, uint unOffScaleFlags_ = {}) noexcept : fSampleTime{fSampleTime_}, vAccel{vAccel_}, vGyro{vGyro_}, unOffScaleFlags{unOffScaleFlags_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double fSampleTime
    double& dyn_fSampleTime();
    // Get instance field reference: public OVR.OpenVR.HmdVector3d_t vAccel
    OVR::OpenVR::HmdVector3d_t& dyn_vAccel();
    // Get instance field reference: public OVR.OpenVR.HmdVector3d_t vGyro
    OVR::OpenVR::HmdVector3d_t& dyn_vGyro();
    // Get instance field reference: public System.UInt32 unOffScaleFlags
    uint& dyn_unOffScaleFlags();
  }; // OVR.OpenVR.ImuSample_t
  #pragma pack(pop)
  static check_size<sizeof(ImuSample_t), 56 + sizeof(uint)> __OVR_OpenVR_ImuSample_tSizeCheck;
  static_assert(sizeof(ImuSample_t) == 0x3C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ImuSample_t, "OVR.OpenVR", "ImuSample_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
