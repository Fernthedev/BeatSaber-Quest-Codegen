// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: RoomInviteNotificationList
  class RoomInviteNotificationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Notifications
  class Notifications;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Notifications);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Notifications
  // [TokenAttribute] Offset: FFFFFFFF
  class Notifications : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetRoomInviteNotifications()
    // Offset: 0x2AA7D94
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList*>* GetRoomInviteNotifications();
    // static public Oculus.Platform.Request MarkAsRead(System.UInt64 notificationID)
    // Offset: 0x2AA7EA0
    static ::Oculus::Platform::Request* MarkAsRead(uint64_t notificationID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetNextRoomInviteNotificationListPage(Oculus.Platform.Models.RoomInviteNotificationList list)
    // Offset: 0x2AA7FE0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList*>* GetNextRoomInviteNotificationListPage(::Oculus::Platform::Models::RoomInviteNotificationList* list);
  }; // Oculus.Platform.Notifications
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Notifications::GetRoomInviteNotifications
// Il2CppName: GetRoomInviteNotifications
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList*>* (*)()>(&Oculus::Platform::Notifications::GetRoomInviteNotifications)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Notifications*), "GetRoomInviteNotifications", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Notifications::MarkAsRead
// Il2CppName: MarkAsRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&Oculus::Platform::Notifications::MarkAsRead)> {
  static const MethodInfo* get() {
    static auto* notificationID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Notifications*), "MarkAsRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notificationID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage
// Il2CppName: GetNextRoomInviteNotificationListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomInviteNotificationList*>* (*)(::Oculus::Platform::Models::RoomInviteNotificationList*)>(&Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "RoomInviteNotificationList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Notifications*), "GetNextRoomInviteNotificationListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
