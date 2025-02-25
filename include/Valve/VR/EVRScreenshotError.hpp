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
  // Autogenerated type: Valve.VR.EVRScreenshotError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRScreenshotError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRScreenshotError
    constexpr EVRScreenshotError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRScreenshotError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRScreenshotError None
    static Valve::VR::EVRScreenshotError _get_None();
    // Set static field: static public Valve.VR.EVRScreenshotError None
    static void _set_None(Valve::VR::EVRScreenshotError value);
    // static field const value: static public Valve.VR.EVRScreenshotError RequestFailed
    static constexpr const int RequestFailed = 1;
    // Get static field: static public Valve.VR.EVRScreenshotError RequestFailed
    static Valve::VR::EVRScreenshotError _get_RequestFailed();
    // Set static field: static public Valve.VR.EVRScreenshotError RequestFailed
    static void _set_RequestFailed(Valve::VR::EVRScreenshotError value);
    // static field const value: static public Valve.VR.EVRScreenshotError IncompatibleVersion
    static constexpr const int IncompatibleVersion = 100;
    // Get static field: static public Valve.VR.EVRScreenshotError IncompatibleVersion
    static Valve::VR::EVRScreenshotError _get_IncompatibleVersion();
    // Set static field: static public Valve.VR.EVRScreenshotError IncompatibleVersion
    static void _set_IncompatibleVersion(Valve::VR::EVRScreenshotError value);
    // static field const value: static public Valve.VR.EVRScreenshotError NotFound
    static constexpr const int NotFound = 101;
    // Get static field: static public Valve.VR.EVRScreenshotError NotFound
    static Valve::VR::EVRScreenshotError _get_NotFound();
    // Set static field: static public Valve.VR.EVRScreenshotError NotFound
    static void _set_NotFound(Valve::VR::EVRScreenshotError value);
    // static field const value: static public Valve.VR.EVRScreenshotError BufferTooSmall
    static constexpr const int BufferTooSmall = 102;
    // Get static field: static public Valve.VR.EVRScreenshotError BufferTooSmall
    static Valve::VR::EVRScreenshotError _get_BufferTooSmall();
    // Set static field: static public Valve.VR.EVRScreenshotError BufferTooSmall
    static void _set_BufferTooSmall(Valve::VR::EVRScreenshotError value);
    // static field const value: static public Valve.VR.EVRScreenshotError ScreenshotAlreadyInProgress
    static constexpr const int ScreenshotAlreadyInProgress = 108;
    // Get static field: static public Valve.VR.EVRScreenshotError ScreenshotAlreadyInProgress
    static Valve::VR::EVRScreenshotError _get_ScreenshotAlreadyInProgress();
    // Set static field: static public Valve.VR.EVRScreenshotError ScreenshotAlreadyInProgress
    static void _set_ScreenshotAlreadyInProgress(Valve::VR::EVRScreenshotError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRScreenshotError
  #pragma pack(pop)
  static check_size<sizeof(EVRScreenshotError), 0 + sizeof(int)> __Valve_VR_EVRScreenshotErrorSizeCheck;
  static_assert(sizeof(EVRScreenshotError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRScreenshotError, "Valve.VR", "EVRScreenshotError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
