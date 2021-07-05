// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Reserved_t
  struct VREvent_Reserved_t/*, public System::ValueType*/ {
    public:
    // public System.UInt64 reserved0
    // Size: 0x8
    // Offset: 0x0
    uint64_t reserved0;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 reserved1
    // Size: 0x8
    // Offset: 0x8
    uint64_t reserved1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 reserved2
    // Size: 0x8
    // Offset: 0x10
    uint64_t reserved2;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 reserved3
    // Size: 0x8
    // Offset: 0x18
    uint64_t reserved3;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: VREvent_Reserved_t
    constexpr VREvent_Reserved_t(uint64_t reserved0_ = {}, uint64_t reserved1_ = {}, uint64_t reserved2_ = {}, uint64_t reserved3_ = {}) noexcept : reserved0{reserved0_}, reserved1{reserved1_}, reserved2{reserved2_}, reserved3{reserved3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.VREvent_Reserved_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Reserved_t), 24 + sizeof(uint64_t)> __OVR_OpenVR_VREvent_Reserved_tSizeCheck;
  static_assert(sizeof(VREvent_Reserved_t) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Reserved_t, "OVR.OpenVR", "VREvent_Reserved_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
