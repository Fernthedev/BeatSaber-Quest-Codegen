// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VRControllerAxis_t
#include "OVR/OpenVR/VRControllerAxis_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRControllerState_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRControllerState_t/*, public System::ValueType*/ {
    public:
    // public System.UInt32 unPacketNum
    // Size: 0x4
    // Offset: 0x0
    uint unPacketNum;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: unPacketNum and: ulButtonPressed
    char __padding0[0x4] = {};
    // public System.UInt64 ulButtonPressed
    // Size: 0x8
    // Offset: 0x8
    uint64_t ulButtonPressed;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 ulButtonTouched
    // Size: 0x8
    // Offset: 0x10
    uint64_t ulButtonTouched;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis0
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::VRControllerAxis_t rAxis0;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis1
    // Size: 0x8
    // Offset: 0x20
    OVR::OpenVR::VRControllerAxis_t rAxis1;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis2
    // Size: 0x8
    // Offset: 0x28
    OVR::OpenVR::VRControllerAxis_t rAxis2;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis3
    // Size: 0x8
    // Offset: 0x30
    OVR::OpenVR::VRControllerAxis_t rAxis3;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // public OVR.OpenVR.VRControllerAxis_t rAxis4
    // Size: 0x8
    // Offset: 0x38
    OVR::OpenVR::VRControllerAxis_t rAxis4;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::VRControllerAxis_t) == 0x8);
    // Creating value type constructor for type: VRControllerState_t
    constexpr VRControllerState_t(uint unPacketNum_ = {}, uint64_t ulButtonPressed_ = {}, uint64_t ulButtonTouched_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis0_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis1_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis2_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis3_ = {}, OVR::OpenVR::VRControllerAxis_t rAxis4_ = {}) noexcept : unPacketNum{unPacketNum_}, ulButtonPressed{ulButtonPressed_}, ulButtonTouched{ulButtonTouched_}, rAxis0{rAxis0_}, rAxis1{rAxis1_}, rAxis2{rAxis2_}, rAxis3{rAxis3_}, rAxis4{rAxis4_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 unPacketNum
    uint& dyn_unPacketNum();
    // Get instance field reference: public System.UInt64 ulButtonPressed
    uint64_t& dyn_ulButtonPressed();
    // Get instance field reference: public System.UInt64 ulButtonTouched
    uint64_t& dyn_ulButtonTouched();
    // Get instance field reference: public OVR.OpenVR.VRControllerAxis_t rAxis0
    OVR::OpenVR::VRControllerAxis_t& dyn_rAxis0();
    // Get instance field reference: public OVR.OpenVR.VRControllerAxis_t rAxis1
    OVR::OpenVR::VRControllerAxis_t& dyn_rAxis1();
    // Get instance field reference: public OVR.OpenVR.VRControllerAxis_t rAxis2
    OVR::OpenVR::VRControllerAxis_t& dyn_rAxis2();
    // Get instance field reference: public OVR.OpenVR.VRControllerAxis_t rAxis3
    OVR::OpenVR::VRControllerAxis_t& dyn_rAxis3();
    // Get instance field reference: public OVR.OpenVR.VRControllerAxis_t rAxis4
    OVR::OpenVR::VRControllerAxis_t& dyn_rAxis4();
  }; // OVR.OpenVR.VRControllerState_t
  #pragma pack(pop)
  static check_size<sizeof(VRControllerState_t), 56 + sizeof(OVR::OpenVR::VRControllerAxis_t)> __OVR_OpenVR_VRControllerState_tSizeCheck;
  static_assert(sizeof(VRControllerState_t) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRControllerState_t, "OVR.OpenVR", "VRControllerState_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
