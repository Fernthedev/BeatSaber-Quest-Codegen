// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.IVRNotifications
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRNotifications/*, public System::ValueType*/ {
    public:
    // Nested type: OVR::OpenVR::IVRNotifications::_CreateNotification
    class _CreateNotification;
    // Nested type: OVR::OpenVR::IVRNotifications::_RemoveNotification
    class _RemoveNotification;
    // OVR.OpenVR.IVRNotifications/OVR.OpenVR._CreateNotification CreateNotification
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRNotifications::_CreateNotification* CreateNotification;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRNotifications::_CreateNotification*) == 0x8);
    // OVR.OpenVR.IVRNotifications/OVR.OpenVR._RemoveNotification RemoveNotification
    // Size: 0x8
    // Offset: 0x8
    OVR::OpenVR::IVRNotifications::_RemoveNotification* RemoveNotification;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRNotifications::_RemoveNotification*) == 0x8);
    // Creating value type constructor for type: IVRNotifications
    constexpr IVRNotifications(OVR::OpenVR::IVRNotifications::_CreateNotification* CreateNotification_ = {}, OVR::OpenVR::IVRNotifications::_RemoveNotification* RemoveNotification_ = {}) noexcept : CreateNotification{CreateNotification_}, RemoveNotification{RemoveNotification_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: OVR.OpenVR.IVRNotifications/OVR.OpenVR._CreateNotification CreateNotification
    OVR::OpenVR::IVRNotifications::_CreateNotification*& dyn_CreateNotification();
    // Get instance field reference: OVR.OpenVR.IVRNotifications/OVR.OpenVR._RemoveNotification RemoveNotification
    OVR::OpenVR::IVRNotifications::_RemoveNotification*& dyn_RemoveNotification();
  }; // OVR.OpenVR.IVRNotifications
  #pragma pack(pop)
  static check_size<sizeof(IVRNotifications), 8 + sizeof(OVR::OpenVR::IVRNotifications::_RemoveNotification*)> __OVR_OpenVR_IVRNotificationsSizeCheck;
  static_assert(sizeof(IVRNotifications) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRNotifications, "OVR.OpenVR", "IVRNotifications");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
