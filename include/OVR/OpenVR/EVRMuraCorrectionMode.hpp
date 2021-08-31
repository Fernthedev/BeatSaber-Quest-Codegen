// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRMuraCorrectionMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRMuraCorrectionMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRMuraCorrectionMode
    constexpr EVRMuraCorrectionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRMuraCorrectionMode Default
    static constexpr const int Default = 0;
    // Get static field: static public OVR.OpenVR.EVRMuraCorrectionMode Default
    static OVR::OpenVR::EVRMuraCorrectionMode _get_Default();
    // Set static field: static public OVR.OpenVR.EVRMuraCorrectionMode Default
    static void _set_Default(OVR::OpenVR::EVRMuraCorrectionMode value);
    // static field const value: static public OVR.OpenVR.EVRMuraCorrectionMode NoCorrection
    static constexpr const int NoCorrection = 1;
    // Get static field: static public OVR.OpenVR.EVRMuraCorrectionMode NoCorrection
    static OVR::OpenVR::EVRMuraCorrectionMode _get_NoCorrection();
    // Set static field: static public OVR.OpenVR.EVRMuraCorrectionMode NoCorrection
    static void _set_NoCorrection(OVR::OpenVR::EVRMuraCorrectionMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRMuraCorrectionMode
  #pragma pack(pop)
  static check_size<sizeof(EVRMuraCorrectionMode), 0 + sizeof(int)> __OVR_OpenVR_EVRMuraCorrectionModeSizeCheck;
  static_assert(sizeof(EVRMuraCorrectionMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRMuraCorrectionMode, "OVR.OpenVR", "EVRMuraCorrectionMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
