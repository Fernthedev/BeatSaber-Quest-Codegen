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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRScreenshotPropertyFilenames
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRScreenshotPropertyFilenames/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRScreenshotPropertyFilenames
    constexpr EVRScreenshotPropertyFilenames(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static constexpr const int Preview = 0;
    // Get static field: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static Valve::VR::EVRScreenshotPropertyFilenames _get_Preview();
    // Set static field: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static void _set_Preview(Valve::VR::EVRScreenshotPropertyFilenames value);
    // static field const value: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static constexpr const int VR = 1;
    // Get static field: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static Valve::VR::EVRScreenshotPropertyFilenames _get_VR();
    // Set static field: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static void _set_VR(Valve::VR::EVRScreenshotPropertyFilenames value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRScreenshotPropertyFilenames
  #pragma pack(pop)
  static check_size<sizeof(EVRScreenshotPropertyFilenames), 0 + sizeof(int)> __Valve_VR_EVRScreenshotPropertyFilenamesSizeCheck;
  static_assert(sizeof(EVRScreenshotPropertyFilenames) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRScreenshotPropertyFilenames, "Valve.VR", "EVRScreenshotPropertyFilenames");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
