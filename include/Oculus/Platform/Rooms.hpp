// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: RoomJoinPolicy
  struct RoomJoinPolicy;
  // Forward declaring type: RoomOptions
  class RoomOptions;
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: RoomMembershipLockStatus
  struct RoomMembershipLockStatus;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: RoomList
  class RoomList;
  // Forward declaring type: RoomInviteNotification
  class RoomInviteNotification;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Rooms
  class Rooms;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Rooms);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Rooms*, "Oculus.Platform", "Rooms");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Rooms
  // [TokenAttribute] Offset: FFFFFFFF
  class Rooms : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> UpdateDataStore(System.UInt64 roomID, System.Collections.Generic.Dictionary`2<System.String,System.String> data)
    // Offset: 0x2AAAA7C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdateDataStore(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* data);
    // static public System.Void SetRoomInviteNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<System.String> callback)
    // Offset: 0x2AAACFC
    static void SetRoomInviteNotificationCallback(typename ::Oculus::Platform::Message_1<::StringW>::Callback* callback);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> CreateAndJoinPrivate(Oculus.Platform.RoomJoinPolicy joinPolicy, System.UInt32 maxUsers, System.Boolean subscribeToUpdates)
    // Offset: 0x2AAAD78
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateAndJoinPrivate(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint maxUsers, bool subscribeToUpdates);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> CreateAndJoinPrivate2(Oculus.Platform.RoomJoinPolicy joinPolicy, System.UInt32 maxUsers, Oculus.Platform.RoomOptions roomOptions)
    // Offset: 0x2AAAEAC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateAndJoinPrivate2(::Oculus::Platform::RoomJoinPolicy joinPolicy, uint maxUsers, ::Oculus::Platform::RoomOptions* roomOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Get(System.UInt64 roomID)
    // Offset: 0x2AAB00C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Get(uint64_t roomID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> GetCurrent()
    // Offset: 0x2AAB128
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* GetCurrent();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> GetCurrentForUser(System.UInt64 userID)
    // Offset: 0x2AAB234
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* GetCurrentForUser(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetInvitableUsers()
    // Offset: 0x2AAB350
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetInvitableUsers2(Oculus.Platform.RoomOptions roomOptions)
    // Offset: 0x2AAB45C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetInvitableUsers2(::Oculus::Platform::RoomOptions* roomOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList> GetModeratedRooms()
    // Offset: 0x2AAB5A4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* GetModeratedRooms();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> InviteUser(System.UInt64 roomID, System.String inviteToken)
    // Offset: 0x2AAB6B0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* InviteUser(uint64_t roomID, ::StringW inviteToken);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Join(System.UInt64 roomID, System.Boolean subscribeToUpdates)
    // Offset: 0x2AAB7D4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Join(uint64_t roomID, bool subscribeToUpdates);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Join2(System.UInt64 roomID, Oculus.Platform.RoomOptions roomOptions)
    // Offset: 0x2AAB8F8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Join2(uint64_t roomID, ::Oculus::Platform::RoomOptions* roomOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> KickUser(System.UInt64 roomID, System.UInt64 userID, System.Int32 kickDurationSeconds)
    // Offset: 0x2AABA48
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* KickUser(uint64_t roomID, uint64_t userID, int kickDurationSeconds);
    // static public Oculus.Platform.Request LaunchInvitableUserFlow(System.UInt64 roomID)
    // Offset: 0x2AABB7C
    static ::Oculus::Platform::Request* LaunchInvitableUserFlow(uint64_t roomID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Leave(System.UInt64 roomID)
    // Offset: 0x2AABC90
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* Leave(uint64_t roomID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> SetDescription(System.UInt64 roomID, System.String description)
    // Offset: 0x2AABDAC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* SetDescription(uint64_t roomID, ::StringW description);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> UpdateMembershipLockStatus(System.UInt64 roomID, Oculus.Platform.RoomMembershipLockStatus membershipLockStatus)
    // Offset: 0x2AABED0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdateMembershipLockStatus(uint64_t roomID, ::Oculus::Platform::RoomMembershipLockStatus membershipLockStatus);
    // static public Oculus.Platform.Request UpdateOwner(System.UInt64 roomID, System.UInt64 userID)
    // Offset: 0x2AABFF4
    static ::Oculus::Platform::Request* UpdateOwner(uint64_t roomID, uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> UpdatePrivateRoomJoinPolicy(System.UInt64 roomID, Oculus.Platform.RoomJoinPolicy newJoinPolicy)
    // Offset: 0x2AAC110
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* UpdatePrivateRoomJoinPolicy(uint64_t roomID, ::Oculus::Platform::RoomJoinPolicy newJoinPolicy);
    // static public System.Void SetRoomInviteAcceptedNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<System.String> callback)
    // Offset: 0x2AAAD00
    static void SetRoomInviteAcceptedNotificationCallback(typename ::Oculus::Platform::Message_1<::StringW>::Callback* callback);
    // static public System.Void SetRoomInviteReceivedNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.RoomInviteNotification> callback)
    // Offset: 0x2AAC234
    static void SetRoomInviteReceivedNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotification*>::Callback* callback);
    // static public System.Void SetUpdateNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.Room> callback)
    // Offset: 0x2AAC2AC
    static void SetUpdateNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>::Callback* callback);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList> GetNextRoomListPage(Oculus.Platform.Models.RoomList list)
    // Offset: 0x2AAC324
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* GetNextRoomListPage(::Oculus::Platform::Models::RoomList* list);
  }; // Oculus.Platform.Rooms
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Rooms::UpdateDataStore
// Il2CppName: UpdateDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&Oculus::Platform::Rooms::UpdateDataStore)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "UpdateDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, data});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::SetRoomInviteNotificationCallback
// Il2CppName: SetRoomInviteNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Rooms::CreateAndJoinPrivate
// Il2CppName: CreateAndJoinPrivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::Oculus::Platform::RoomJoinPolicy, uint, bool)>(&Oculus::Platform::Rooms::CreateAndJoinPrivate)> {
  static const MethodInfo* get() {
    static auto* joinPolicy = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomJoinPolicy")->byval_arg;
    static auto* maxUsers = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* subscribeToUpdates = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "CreateAndJoinPrivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joinPolicy, maxUsers, subscribeToUpdates});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::CreateAndJoinPrivate2
// Il2CppName: CreateAndJoinPrivate2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::Oculus::Platform::RoomJoinPolicy, uint, ::Oculus::Platform::RoomOptions*)>(&Oculus::Platform::Rooms::CreateAndJoinPrivate2)> {
  static const MethodInfo* get() {
    static auto* joinPolicy = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomJoinPolicy")->byval_arg;
    static auto* maxUsers = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* roomOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "CreateAndJoinPrivate2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joinPolicy, maxUsers, roomOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t)>(&Oculus::Platform::Rooms::Get)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::GetCurrent
// Il2CppName: GetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)()>(&Oculus::Platform::Rooms::GetCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "GetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::GetCurrentForUser
// Il2CppName: GetCurrentForUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t)>(&Oculus::Platform::Rooms::GetCurrentForUser)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "GetCurrentForUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::GetInvitableUsers
// Il2CppName: GetInvitableUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)()>(&Oculus::Platform::Rooms::GetInvitableUsers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "GetInvitableUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::GetInvitableUsers2
// Il2CppName: GetInvitableUsers2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)(::Oculus::Platform::RoomOptions*)>(&Oculus::Platform::Rooms::GetInvitableUsers2)> {
  static const MethodInfo* get() {
    static auto* roomOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "GetInvitableUsers2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::GetModeratedRooms
// Il2CppName: GetModeratedRooms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* (*)()>(&Oculus::Platform::Rooms::GetModeratedRooms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "GetModeratedRooms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::InviteUser
// Il2CppName: InviteUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::Rooms::InviteUser)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* inviteToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "InviteUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, inviteToken});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, bool)>(&Oculus::Platform::Rooms::Join)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* subscribeToUpdates = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, subscribeToUpdates});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::Join2
// Il2CppName: Join2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::Oculus::Platform::RoomOptions*)>(&Oculus::Platform::Rooms::Join2)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* roomOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "Join2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, roomOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::KickUser
// Il2CppName: KickUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, uint64_t, int)>(&Oculus::Platform::Rooms::KickUser)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* kickDurationSeconds = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "KickUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, userID, kickDurationSeconds});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::LaunchInvitableUserFlow
// Il2CppName: LaunchInvitableUserFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&Oculus::Platform::Rooms::LaunchInvitableUserFlow)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "LaunchInvitableUserFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t)>(&Oculus::Platform::Rooms::Leave)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::SetDescription
// Il2CppName: SetDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::Rooms::SetDescription)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* description = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "SetDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, description});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::UpdateMembershipLockStatus
// Il2CppName: UpdateMembershipLockStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::Oculus::Platform::RoomMembershipLockStatus)>(&Oculus::Platform::Rooms::UpdateMembershipLockStatus)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* membershipLockStatus = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomMembershipLockStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "UpdateMembershipLockStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, membershipLockStatus});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::UpdateOwner
// Il2CppName: UpdateOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t, uint64_t)>(&Oculus::Platform::Rooms::UpdateOwner)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "UpdateOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy
// Il2CppName: UpdatePrivateRoomJoinPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, ::Oculus::Platform::RoomJoinPolicy)>(&Oculus::Platform::Rooms::UpdatePrivateRoomJoinPolicy)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* newJoinPolicy = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomJoinPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "UpdatePrivateRoomJoinPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, newJoinPolicy});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Rooms::SetRoomInviteAcceptedNotificationCallback
// Il2CppName: SetRoomInviteAcceptedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Rooms::SetRoomInviteReceivedNotificationCallback
// Il2CppName: SetRoomInviteReceivedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Rooms::SetUpdateNotificationCallback
// Il2CppName: SetUpdateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Rooms::GetNextRoomListPage
// Il2CppName: GetNextRoomListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::RoomList*>* (*)(::Oculus::Platform::Models::RoomList*)>(&Oculus::Platform::Rooms::GetNextRoomListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "RoomList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Rooms*), "GetNextRoomListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
