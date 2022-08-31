// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.ChallengeCreationType
#include "Oculus/Platform/ChallengeCreationType.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: Oculus.Platform.ChallengeVisibility
#include "Oculus/Platform/ChallengeVisibility.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: Leaderboard
  class Leaderboard;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Challenge
  class Challenge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Challenge);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Challenge*, "Oculus.Platform.Models", "Challenge");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Challenge
  // [TokenAttribute] Offset: FFFFFFFF
  class Challenge : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.ChallengeCreationType CreationType
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Platform::ChallengeCreationType CreationType;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::ChallengeCreationType) == 0x4);
    // Padding between fields: CreationType and: Description
    char __padding0[0x4] = {};
    // public readonly System.String Description
    // Size: 0x8
    // Offset: 0x18
    ::StringW Description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.DateTime EndDate
    // Size: 0x8
    // Offset: 0x20
    ::System::DateTime EndDate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x28
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Platform::Models::UserList* InvitedUsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x10D8570
    // public readonly Oculus.Platform.Models.UserList InvitedUsers
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Models::UserList* InvitedUsers;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly Oculus.Platform.Models.Leaderboard Leaderboard
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Platform::Models::Leaderboard* Leaderboard;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::Leaderboard*) == 0x8);
    // public readonly Oculus.Platform.Models.UserList ParticipantsOptional
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Platform::Models::UserList* ParticipantsOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x10D85A8
    // public readonly Oculus.Platform.Models.UserList Participants
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Platform::Models::UserList* Participants;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // public readonly System.DateTime StartDate
    // Size: 0x8
    // Offset: 0x58
    ::System::DateTime StartDate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public readonly System.String Title
    // Size: 0x8
    // Offset: 0x60
    ::StringW Title;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.ChallengeVisibility Visibility
    // Size: 0x4
    // Offset: 0x68
    ::Oculus::Platform::ChallengeVisibility Visibility;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::ChallengeVisibility) == 0x4);
    public:
    // Get instance field reference: public readonly Oculus.Platform.ChallengeCreationType CreationType
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::ChallengeCreationType& dyn_CreationType();
    // Get instance field reference: public readonly System.String Description
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Description();
    // Get instance field reference: public readonly System.DateTime EndDate
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_EndDate();
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsersOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_InvitedUsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList InvitedUsers
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_InvitedUsers();
    // Get instance field reference: public readonly Oculus.Platform.Models.Leaderboard Leaderboard
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::Leaderboard*& dyn_Leaderboard();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList ParticipantsOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_ParticipantsOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList Participants
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::UserList*& dyn_Participants();
    // Get instance field reference: public readonly System.DateTime StartDate
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_StartDate();
    // Get instance field reference: public readonly System.String Title
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Title();
    // Get instance field reference: public readonly Oculus.Platform.ChallengeVisibility Visibility
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::ChallengeVisibility& dyn_Visibility();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x19EEB08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Challenge* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Challenge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Challenge*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.Challenge
  #pragma pack(pop)
  static check_size<sizeof(Challenge), 104 + sizeof(::Oculus::Platform::ChallengeVisibility)> __Oculus_Platform_Models_ChallengeSizeCheck;
  static_assert(sizeof(Challenge) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Challenge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
