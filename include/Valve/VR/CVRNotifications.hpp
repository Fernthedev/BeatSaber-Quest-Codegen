// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRNotifications
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRNotifications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRNotifications FnTable
    // Size: 0x10
    // Offset: 0x10
    Valve::VR::IVRNotifications FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRNotifications) == 0x10);
    // Creating value type constructor for type: CVRNotifications
    CVRNotifications(Valve::VR::IVRNotifications FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRNotifications
    constexpr operator Valve::VR::IVRNotifications() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRNotifications FnTable
    Valve::VR::IVRNotifications& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x171235C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRNotifications* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRNotifications::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRNotifications*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRNotificationError CreateNotification(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x171245C
    Valve::VR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, ByRef<Valve::VR::NotificationBitmap_t> pImage, ByRef<uint> pNotificationId);
    // public Valve.VR.EVRNotificationError RemoveNotification(System.UInt32 notificationId)
    // Offset: 0x1712480
    Valve::VR::EVRNotificationError RemoveNotification(uint notificationId);
  }; // Valve.VR.CVRNotifications
  #pragma pack(pop)
  static check_size<sizeof(CVRNotifications), 16 + sizeof(Valve::VR::IVRNotifications)> __Valve_VR_CVRNotificationsSizeCheck;
  static_assert(sizeof(CVRNotifications) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRNotifications*, "Valve.VR", "CVRNotifications");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRNotifications::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRNotifications::CreateNotification
// Il2CppName: CreateNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::CVRNotifications::*)(uint64_t, uint64_t, Valve::VR::EVRNotificationType, ::Il2CppString*, Valve::VR::EVRNotificationStyle, ByRef<Valve::VR::NotificationBitmap_t>, ByRef<uint>)>(&Valve::VR::CVRNotifications::CreateNotification)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRNotificationType")->byval_arg;
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRNotificationStyle")->byval_arg;
    static auto* pImage = &::il2cpp_utils::GetClassFromName("Valve.VR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRNotifications*), "CreateNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRNotifications::RemoveNotification
// Il2CppName: RemoveNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::CVRNotifications::*)(uint)>(&Valve::VR::CVRNotifications::RemoveNotification)> {
  static const MethodInfo* get() {
    static auto* notificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRNotifications*), "RemoveNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notificationId});
  }
};
