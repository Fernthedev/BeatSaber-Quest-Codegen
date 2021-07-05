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
  // Autogenerated type: Valve.VR.IVRNotifications/_RemoveNotification
  // [UnmanagedFunctionPointerAttribute] Offset: DD46BC
  class IVRNotifications::_RemoveNotification : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _RemoveNotification
    _RemoveNotification() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FC3544
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_RemoveNotification* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRNotifications::_RemoveNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_RemoveNotification*, creationType>(object, method)));
    }
    // public Valve.VR.EVRNotificationError Invoke(System.UInt32 notificationId)
    // Offset: 0x1FC3554
    Valve::VR::EVRNotificationError Invoke(uint notificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 notificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FC37BC
    System::IAsyncResult* BeginInvoke(uint notificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRNotificationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FC3848
    Valve::VR::EVRNotificationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRNotifications/_RemoveNotification
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRNotifications::_RemoveNotification*, "Valve.VR", "IVRNotifications/_RemoveNotification");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_RemoveNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_RemoveNotification::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::IVRNotifications::_RemoveNotification::*)(uint)>(&Valve::VR::IVRNotifications::_RemoveNotification::Invoke)> {
  const MethodInfo* get() {
    static auto* notificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_RemoveNotification*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notificationId});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_RemoveNotification::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRNotifications::_RemoveNotification::*)(uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRNotifications::_RemoveNotification::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* notificationId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_RemoveNotification*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notificationId, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRNotifications::_RemoveNotification::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRNotificationError (Valve::VR::IVRNotifications::_RemoveNotification::*)(System::IAsyncResult*)>(&Valve::VR::IVRNotifications::_RemoveNotification::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRNotifications::_RemoveNotification*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
