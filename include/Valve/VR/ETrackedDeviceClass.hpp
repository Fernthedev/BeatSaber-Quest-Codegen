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
  // Autogenerated type: Valve.VR.ETrackedDeviceClass
  // [TokenAttribute] Offset: FFFFFFFF
  struct ETrackedDeviceClass/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ETrackedDeviceClass
    constexpr ETrackedDeviceClass(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.ETrackedDeviceClass Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public Valve.VR.ETrackedDeviceClass Invalid
    static Valve::VR::ETrackedDeviceClass _get_Invalid();
    // Set static field: static public Valve.VR.ETrackedDeviceClass Invalid
    static void _set_Invalid(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass HMD
    static constexpr const int HMD = 1;
    // Get static field: static public Valve.VR.ETrackedDeviceClass HMD
    static Valve::VR::ETrackedDeviceClass _get_HMD();
    // Set static field: static public Valve.VR.ETrackedDeviceClass HMD
    static void _set_HMD(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass Controller
    static constexpr const int Controller = 2;
    // Get static field: static public Valve.VR.ETrackedDeviceClass Controller
    static Valve::VR::ETrackedDeviceClass _get_Controller();
    // Set static field: static public Valve.VR.ETrackedDeviceClass Controller
    static void _set_Controller(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass GenericTracker
    static constexpr const int GenericTracker = 3;
    // Get static field: static public Valve.VR.ETrackedDeviceClass GenericTracker
    static Valve::VR::ETrackedDeviceClass _get_GenericTracker();
    // Set static field: static public Valve.VR.ETrackedDeviceClass GenericTracker
    static void _set_GenericTracker(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass TrackingReference
    static constexpr const int TrackingReference = 4;
    // Get static field: static public Valve.VR.ETrackedDeviceClass TrackingReference
    static Valve::VR::ETrackedDeviceClass _get_TrackingReference();
    // Set static field: static public Valve.VR.ETrackedDeviceClass TrackingReference
    static void _set_TrackingReference(Valve::VR::ETrackedDeviceClass value);
    // static field const value: static public Valve.VR.ETrackedDeviceClass DisplayRedirect
    static constexpr const int DisplayRedirect = 5;
    // Get static field: static public Valve.VR.ETrackedDeviceClass DisplayRedirect
    static Valve::VR::ETrackedDeviceClass _get_DisplayRedirect();
    // Set static field: static public Valve.VR.ETrackedDeviceClass DisplayRedirect
    static void _set_DisplayRedirect(Valve::VR::ETrackedDeviceClass value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.ETrackedDeviceClass
  #pragma pack(pop)
  static check_size<sizeof(ETrackedDeviceClass), 0 + sizeof(int)> __Valve_VR_ETrackedDeviceClassSizeCheck;
  static_assert(sizeof(ETrackedDeviceClass) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ETrackedDeviceClass, "Valve.VR", "ETrackedDeviceClass");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
