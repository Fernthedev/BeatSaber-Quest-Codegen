// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRNotifications
#include "OVR/OpenVR/IVRNotifications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRNotifications::_CreateNotification);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRNotifications::_CreateNotification*, "OVR.OpenVR", "IVRNotifications/_CreateNotification");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRNotifications/OVR.OpenVR._CreateNotification
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 109B314
  class IVRNotifications::_CreateNotification : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x254B750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_CreateNotification* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRNotifications::_CreateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_CreateNotification*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRNotificationError Invoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, OVR.OpenVR.EVRNotificationType type, System.String pchText, OVR.OpenVR.EVRNotificationStyle style, ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x254B760
    ::OVR::OpenVR::EVRNotificationError Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style, ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint> pNotificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, OVR.OpenVR.EVRNotificationType type, System.String pchText, OVR.OpenVR.EVRNotificationStyle style, ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x254BA84
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, ::OVR::OpenVR::EVRNotificationType type, ::StringW pchText, ::OVR::OpenVR::EVRNotificationStyle style, ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint> pNotificationId, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRNotificationError EndInvoke(ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.IAsyncResult result)
    // Offset: 0x254BBB4
    ::OVR::OpenVR::EVRNotificationError EndInvoke(ByRef<::OVR::OpenVR::NotificationBitmap_t> pImage, ByRef<uint> pNotificationId, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRNotifications/OVR.OpenVR._CreateNotification
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_CreateNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_CreateNotification::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (OVR::OpenVR::IVRNotifications::_CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint>)>(&OVR::OpenVR::IVRNotifications::_CreateNotification::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRNotificationType")->byval_arg;
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRNotificationStyle")->byval_arg;
    static auto* pImage = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRNotifications::_CreateNotification*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_CreateNotification::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRNotifications::_CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRNotifications::_CreateNotification::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulUserValue = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRNotificationType")->byval_arg;
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRNotificationStyle")->byval_arg;
    static auto* pImage = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRNotifications::_CreateNotification*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRNotifications::_CreateNotification::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (OVR::OpenVR::IVRNotifications::_CreateNotification::*)(ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRNotifications::_CreateNotification::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pImage = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "NotificationBitmap_t")->this_arg;
    static auto* pNotificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRNotifications::_CreateNotification*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pImage, pNotificationId, result});
  }
};
