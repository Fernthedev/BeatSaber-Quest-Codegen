// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntryData
  class LeaderboardEntryData;
  // Forward declaring type: GetLeaderboardEntriesResult
  struct GetLeaderboardEntriesResult;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OnlineServices::LeaderboardEntriesResult);
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::LeaderboardEntriesResult*, "OnlineServices", "LeaderboardEntriesResult");
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.LeaderboardEntriesResult
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntriesResult : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean isError
    // Size: 0x1
    // Offset: 0x10
    bool isError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isError and: localizedErrorMessage
    char __padding0[0x7] = {};
    // public readonly System.String localizedErrorMessage
    // Size: 0x8
    // Offset: 0x18
    ::StringW localizedErrorMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly OnlineServices.LeaderboardEntryData[] leaderboardEntries
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::OnlineServices::LeaderboardEntryData*> leaderboardEntries;
    // Field size check
    static_assert(sizeof(::ArrayW<::OnlineServices::LeaderboardEntryData*>) == 0x8);
    // public readonly System.Int32 referencePlayerScoreIndex
    // Size: 0x4
    // Offset: 0x28
    int referencePlayerScoreIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly System.Boolean isError
    [[deprecated("Use field access instead!")]] bool& dyn_isError();
    // Get instance field reference: public readonly System.String localizedErrorMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_localizedErrorMessage();
    // Get instance field reference: public readonly OnlineServices.LeaderboardEntryData[] leaderboardEntries
    [[deprecated("Use field access instead!")]] ::ArrayW<::OnlineServices::LeaderboardEntryData*>& dyn_leaderboardEntries();
    // Get instance field reference: public readonly System.Int32 referencePlayerScoreIndex
    [[deprecated("Use field access instead!")]] int& dyn_referencePlayerScoreIndex();
    // static public OnlineServices.LeaderboardEntriesResult get_notInicializedError()
    // Offset: 0x133D300
    static ::OnlineServices::LeaderboardEntriesResult* get_notInicializedError();
    // static public OnlineServices.LeaderboardEntriesResult get_somethingWentWrongError()
    // Offset: 0x133D350
    static ::OnlineServices::LeaderboardEntriesResult* get_somethingWentWrongError();
    // static public OnlineServices.LeaderboardEntriesResult get_onlineServicesUnavailableError()
    // Offset: 0x133D3A0
    static ::OnlineServices::LeaderboardEntriesResult* get_onlineServicesUnavailableError();
    // private System.Void .ctor(OnlineServices.LeaderboardEntryData[] leaderboardEntries, System.Int32 referencePlayerScoreIndex, System.Boolean isError, System.String localizedErrorMessage)
    // Offset: 0x133D238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntriesResult* New_ctor(::ArrayW<::OnlineServices::LeaderboardEntryData*> leaderboardEntries, int referencePlayerScoreIndex, bool isError, ::StringW localizedErrorMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OnlineServices::LeaderboardEntriesResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntriesResult*, creationType>(leaderboardEntries, referencePlayerScoreIndex, isError, localizedErrorMessage)));
    }
    // static private OnlineServices.LeaderboardEntriesResult ErrorResult(System.String localizedErrorMessage)
    // Offset: 0x133D28C
    static ::OnlineServices::LeaderboardEntriesResult* ErrorResult(::StringW localizedErrorMessage);
    // static public OnlineServices.LeaderboardEntriesResult FromGetLeaderboardEntriesResult(OnlineServices.GetLeaderboardEntriesResult getLeaderboardEntriesResult)
    // Offset: 0x133D3F0
    static ::OnlineServices::LeaderboardEntriesResult* FromGetLeaderboardEntriesResult(::OnlineServices::GetLeaderboardEntriesResult getLeaderboardEntriesResult);
  }; // OnlineServices.LeaderboardEntriesResult
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntriesResult), 40 + sizeof(int)> __OnlineServices_LeaderboardEntriesResultSizeCheck;
  static_assert(sizeof(LeaderboardEntriesResult) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntriesResult::get_notInicializedError
// Il2CppName: get_notInicializedError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OnlineServices::LeaderboardEntriesResult* (*)()>(&OnlineServices::LeaderboardEntriesResult::get_notInicializedError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LeaderboardEntriesResult*), "get_notInicializedError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntriesResult::get_somethingWentWrongError
// Il2CppName: get_somethingWentWrongError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OnlineServices::LeaderboardEntriesResult* (*)()>(&OnlineServices::LeaderboardEntriesResult::get_somethingWentWrongError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LeaderboardEntriesResult*), "get_somethingWentWrongError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntriesResult::get_onlineServicesUnavailableError
// Il2CppName: get_onlineServicesUnavailableError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OnlineServices::LeaderboardEntriesResult* (*)()>(&OnlineServices::LeaderboardEntriesResult::get_onlineServicesUnavailableError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LeaderboardEntriesResult*), "get_onlineServicesUnavailableError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntriesResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntriesResult::ErrorResult
// Il2CppName: ErrorResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OnlineServices::LeaderboardEntriesResult* (*)(::StringW)>(&OnlineServices::LeaderboardEntriesResult::ErrorResult)> {
  static const MethodInfo* get() {
    static auto* localizedErrorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LeaderboardEntriesResult*), "ErrorResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localizedErrorMessage});
  }
};
// Writing MetadataGetter for method: OnlineServices::LeaderboardEntriesResult::FromGetLeaderboardEntriesResult
// Il2CppName: FromGetLeaderboardEntriesResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OnlineServices::LeaderboardEntriesResult* (*)(::OnlineServices::GetLeaderboardEntriesResult)>(&OnlineServices::LeaderboardEntriesResult::FromGetLeaderboardEntriesResult)> {
  static const MethodInfo* get() {
    static auto* getLeaderboardEntriesResult = &::il2cpp_utils::GetClassFromName("OnlineServices", "GetLeaderboardEntriesResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::LeaderboardEntriesResult*), "FromGetLeaderboardEntriesResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getLeaderboardEntriesResult});
  }
};
