// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.UserPresenceStatus
#include "Oculus/Platform/UserPresenceStatus.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.User
  class User : public ::Il2CppObject {
    public:
    // public readonly System.String DisplayName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x18
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String ImageURL
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* ImageURL;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String InviteToken
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* InviteToken;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String OculusID
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* OculusID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String Presence
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* Presence;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String PresenceDeeplinkMessage
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* PresenceDeeplinkMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String PresenceDestinationApiName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* PresenceDestinationApiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Oculus.Platform.UserPresenceStatus PresenceStatus
    // Size: 0x4
    // Offset: 0x50
    Oculus::Platform::UserPresenceStatus PresenceStatus;
    // Field size check
    static_assert(sizeof(Oculus::Platform::UserPresenceStatus) == 0x4);
    // Padding between fields: PresenceStatus and: SmallImageUrl
    char __padding8[0x4] = {};
    // public readonly System.String SmallImageUrl
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* SmallImageUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: User
    User(::Il2CppString* DisplayName_ = {}, uint64_t _ID_ = {}, ::Il2CppString* ImageURL_ = {}, ::Il2CppString* InviteToken_ = {}, ::Il2CppString* OculusID_ = {}, ::Il2CppString* Presence_ = {}, ::Il2CppString* PresenceDeeplinkMessage_ = {}, ::Il2CppString* PresenceDestinationApiName_ = {}, Oculus::Platform::UserPresenceStatus PresenceStatus_ = {}, ::Il2CppString* SmallImageUrl_ = {}) noexcept : DisplayName{DisplayName_}, _ID{_ID_}, ImageURL{ImageURL_}, InviteToken{InviteToken_}, OculusID{OculusID_}, Presence{Presence_}, PresenceDeeplinkMessage{PresenceDeeplinkMessage_}, PresenceDestinationApiName{PresenceDestinationApiName_}, PresenceStatus{PresenceStatus_}, SmallImageUrl{SmallImageUrl_} {}
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x14D542C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static User* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::User::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<User*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.User
  #pragma pack(pop)
  static check_size<sizeof(User), 88 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_UserSizeCheck;
  static_assert(sizeof(User) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::User*, "Oculus.Platform.Models", "User");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::User::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
