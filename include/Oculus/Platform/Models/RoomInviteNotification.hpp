// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.RoomInviteNotification
  // [TokenAttribute] Offset: FFFFFFFF
  class RoomInviteNotification : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 RoomID
    // Size: 0x8
    // Offset: 0x18
    uint64_t RoomID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 SenderID
    // Size: 0x8
    // Offset: 0x20
    uint64_t SenderID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.DateTime SentTime
    // Size: 0x8
    // Offset: 0x28
    System::DateTime SentTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: RoomInviteNotification
    RoomInviteNotification(uint64_t _ID_ = {}, uint64_t RoomID_ = {}, uint64_t SenderID_ = {}, System::DateTime SentTime_ = {}) noexcept : _ID{_ID_}, RoomID{RoomID_}, SenderID{SenderID_}, SentTime{SentTime_} {}
    // Get instance field reference: public readonly System.UInt64 ID
    uint64_t& dyn_ID();
    // Get instance field reference: public readonly System.UInt64 RoomID
    uint64_t& dyn_RoomID();
    // Get instance field reference: public readonly System.UInt64 SenderID
    uint64_t& dyn_SenderID();
    // Get instance field reference: public readonly System.DateTime SentTime
    System::DateTime& dyn_SentTime();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1534418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoomInviteNotification* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::RoomInviteNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoomInviteNotification*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.RoomInviteNotification
  #pragma pack(pop)
  static check_size<sizeof(RoomInviteNotification), 40 + sizeof(System::DateTime)> __Oculus_Platform_Models_RoomInviteNotificationSizeCheck;
  static_assert(sizeof(RoomInviteNotification) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::RoomInviteNotification*, "Oculus.Platform.Models", "RoomInviteNotification");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::RoomInviteNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
