// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRNotifications/_CreateNotification
  // [UnmanagedFunctionPointerAttribute] Offset: DD46A8
  class IVRNotifications::_CreateNotification : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateNotification
    _CreateNotification() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC30A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_CreateNotification* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRNotifications::_CreateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_CreateNotification*, creationType>(object, method)));
    }
    // public Valve.VR.EVRNotificationError Invoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x1FC30B8
    Valve::VR::EVRNotificationError Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC33DC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRNotificationError EndInvoke(ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.IAsyncResult result)
    // Offset: 0x1FC350C
    Valve::VR::EVRNotificationError EndInvoke(Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId, System::IAsyncResult* result);
  }; // Valve.VR.IVRNotifications/_CreateNotification
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRNotifications::_CreateNotification*, "Valve.VR", "IVRNotifications/_CreateNotification");
// Writing includes for template specializations
#include "Valve/VR/EVRNotificationType.hpp"
#include "Valve/VR/EVRNotificationStyle.hpp"
#include "Valve/VR/NotificationBitmap_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::IVRNotifications::_CreateNotification::*)(uint64_t, uint64_t, Valve::VR::EVRNotificationType, ::Il2CppString*, Valve::VR::EVRNotificationStyle, Valve::VR::NotificationBitmap_t&, uint&)>(&Valve::VR::IVRNotifications::_CreateNotification::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_CreateNotification*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRNotificationType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRNotificationStyle>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::NotificationBitmap_t&>(), ::il2cpp_utils::ExtractIndependentType<uint&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRNotifications::_CreateNotification::*)(uint64_t, uint64_t, Valve::VR::EVRNotificationType, ::Il2CppString*, Valve::VR::EVRNotificationStyle, Valve::VR::NotificationBitmap_t&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRNotifications::_CreateNotification::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_CreateNotification*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRNotificationType>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRNotificationStyle>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::NotificationBitmap_t&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_CreateNotification::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::IVRNotifications::_CreateNotification::*)(Valve::VR::NotificationBitmap_t&, uint&, System::IAsyncResult*)>(&Valve::VR::IVRNotifications::_CreateNotification::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_CreateNotification*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::NotificationBitmap_t&>(), ::il2cpp_utils::ExtractIndependentType<uint&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
