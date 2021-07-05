// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRNotificationError
  struct EVRNotificationError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRNotificationError
    constexpr EVRNotificationError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRNotificationError OK
    static constexpr const int OK = 0;
    // Get static field: static public OVR.OpenVR.EVRNotificationError OK
    static OVR::OpenVR::EVRNotificationError _get_OK();
    // Set static field: static public OVR.OpenVR.EVRNotificationError OK
    static void _set_OK(OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError InvalidNotificationId
    static constexpr const int InvalidNotificationId = 100;
    // Get static field: static public OVR.OpenVR.EVRNotificationError InvalidNotificationId
    static OVR::OpenVR::EVRNotificationError _get_InvalidNotificationId();
    // Set static field: static public OVR.OpenVR.EVRNotificationError InvalidNotificationId
    static void _set_InvalidNotificationId(OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError NotificationQueueFull
    static constexpr const int NotificationQueueFull = 101;
    // Get static field: static public OVR.OpenVR.EVRNotificationError NotificationQueueFull
    static OVR::OpenVR::EVRNotificationError _get_NotificationQueueFull();
    // Set static field: static public OVR.OpenVR.EVRNotificationError NotificationQueueFull
    static void _set_NotificationQueueFull(OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError InvalidOverlayHandle
    static constexpr const int InvalidOverlayHandle = 102;
    // Get static field: static public OVR.OpenVR.EVRNotificationError InvalidOverlayHandle
    static OVR::OpenVR::EVRNotificationError _get_InvalidOverlayHandle();
    // Set static field: static public OVR.OpenVR.EVRNotificationError InvalidOverlayHandle
    static void _set_InvalidOverlayHandle(OVR::OpenVR::EVRNotificationError value);
    // static field const value: static public OVR.OpenVR.EVRNotificationError SystemWithUserValueAlreadyExists
    static constexpr const int SystemWithUserValueAlreadyExists = 103;
    // Get static field: static public OVR.OpenVR.EVRNotificationError SystemWithUserValueAlreadyExists
    static OVR::OpenVR::EVRNotificationError _get_SystemWithUserValueAlreadyExists();
    // Set static field: static public OVR.OpenVR.EVRNotificationError SystemWithUserValueAlreadyExists
    static void _set_SystemWithUserValueAlreadyExists(OVR::OpenVR::EVRNotificationError value);
  }; // OVR.OpenVR.EVRNotificationError
  #pragma pack(pop)
  static check_size<sizeof(EVRNotificationError), 0 + sizeof(int)> __OVR_OpenVR_EVRNotificationErrorSizeCheck;
  static_assert(sizeof(EVRNotificationError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRNotificationError, "OVR.OpenVR", "EVRNotificationError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
