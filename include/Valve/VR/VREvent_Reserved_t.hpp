// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Reserved_t
  // [TokenAttribute] Offset: FFFFFFFF
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
    // Creating value type constructor for type: VREvent_Reserved_t
    constexpr VREvent_Reserved_t(uint64_t reserved0_ = {}, uint64_t reserved1_ = {}) noexcept : reserved0{reserved0_}, reserved1{reserved1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 reserved0
    uint64_t& dyn_reserved0();
    // Get instance field reference: public System.UInt64 reserved1
    uint64_t& dyn_reserved1();
  }; // Valve.VR.VREvent_Reserved_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Reserved_t), 8 + sizeof(uint64_t)> __Valve_VR_VREvent_Reserved_tSizeCheck;
  static_assert(sizeof(VREvent_Reserved_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Reserved_t, "Valve.VR", "VREvent_Reserved_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
