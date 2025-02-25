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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRNotifications
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRNotifications/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRNotifications::_CreateNotification
    class _CreateNotification;
    // Nested type: Valve::VR::IVRNotifications::_RemoveNotification
    class _RemoveNotification;
    // Valve.VR.IVRNotifications/Valve.VR._CreateNotification CreateNotification
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRNotifications::_CreateNotification* CreateNotification;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRNotifications::_CreateNotification*) == 0x8);
    // Valve.VR.IVRNotifications/Valve.VR._RemoveNotification RemoveNotification
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRNotifications::_RemoveNotification* RemoveNotification;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRNotifications::_RemoveNotification*) == 0x8);
    // Creating value type constructor for type: IVRNotifications
    constexpr IVRNotifications(Valve::VR::IVRNotifications::_CreateNotification* CreateNotification_ = {}, Valve::VR::IVRNotifications::_RemoveNotification* RemoveNotification_ = {}) noexcept : CreateNotification{CreateNotification_}, RemoveNotification{RemoveNotification_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: Valve.VR.IVRNotifications/Valve.VR._CreateNotification CreateNotification
    Valve::VR::IVRNotifications::_CreateNotification*& dyn_CreateNotification();
    // Get instance field reference: Valve.VR.IVRNotifications/Valve.VR._RemoveNotification RemoveNotification
    Valve::VR::IVRNotifications::_RemoveNotification*& dyn_RemoveNotification();
  }; // Valve.VR.IVRNotifications
  #pragma pack(pop)
  static check_size<sizeof(IVRNotifications), 8 + sizeof(Valve::VR::IVRNotifications::_RemoveNotification*)> __Valve_VR_IVRNotificationsSizeCheck;
  static_assert(sizeof(IVRNotifications) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRNotifications, "Valve.VR", "IVRNotifications");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
