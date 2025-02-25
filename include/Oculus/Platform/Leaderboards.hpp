// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: LeaderboardFilterType
  struct LeaderboardFilterType;
  // Forward declaring type: LeaderboardStartAt
  struct LeaderboardStartAt;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntryList
  class LeaderboardEntryList;
  // Forward declaring type: LeaderboardList
  class LeaderboardList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Leaderboards
  // [TokenAttribute] Offset: FFFFFFFF
  class Leaderboards : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Leaderboards
    Leaderboards() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetNextEntries(Oculus.Platform.Models.LeaderboardEntryList list)
    // Offset: 0x1524C60
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetNextEntries(Oculus::Platform::Models::LeaderboardEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetPreviousEntries(Oculus.Platform.Models.LeaderboardEntryList list)
    // Offset: 0x1524D90
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetPreviousEntries(Oculus::Platform::Models::LeaderboardEntryList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardList> Get(System.String leaderboardName)
    // Offset: 0x1524EC0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardList*>* Get(::Il2CppString* leaderboardName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetEntries(System.String leaderboardName, System.Int32 limit, Oculus.Platform.LeaderboardFilterType filter, Oculus.Platform.LeaderboardStartAt startAt)
    // Offset: 0x1524FDC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetEntries(::Il2CppString* leaderboardName, int limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetEntriesAfterRank(System.String leaderboardName, System.Int32 limit, System.UInt64 afterRank)
    // Offset: 0x1525118
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesAfterRank(::Il2CppString* leaderboardName, int limit, uint64_t afterRank);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardEntryList> GetEntriesByIds(System.String leaderboardName, System.Int32 limit, Oculus.Platform.LeaderboardStartAt startAt, System.UInt64[] userIDs)
    // Offset: 0x152524C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesByIds(::Il2CppString* leaderboardName, int limit, Oculus::Platform::LeaderboardStartAt startAt, ::Array<uint64_t>* userIDs);
    // static public Oculus.Platform.Request`1<System.Boolean> WriteEntry(System.String leaderboardName, System.Int64 score, System.Byte[] extraData, System.Boolean forceUpdate)
    // Offset: 0x152539C
    static Oculus::Platform::Request_1<bool>* WriteEntry(::Il2CppString* leaderboardName, int64_t score, ::Array<uint8_t>* extraData, bool forceUpdate);
    // static public Oculus.Platform.Request`1<System.Boolean> WriteEntryWithSupplementaryMetric(System.String leaderboardName, System.Int64 score, System.Int64 supplementaryMetric, System.Byte[] extraData, System.Boolean forceUpdate)
    // Offset: 0x15254EC
    static Oculus::Platform::Request_1<bool>* WriteEntryWithSupplementaryMetric(::Il2CppString* leaderboardName, int64_t score, int64_t supplementaryMetric, ::Array<uint8_t>* extraData, bool forceUpdate);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LeaderboardList> GetNextLeaderboardListPage(Oculus.Platform.Models.LeaderboardList list)
    // Offset: 0x152564C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardList*>* GetNextLeaderboardListPage(Oculus::Platform::Models::LeaderboardList* list);
  }; // Oculus.Platform.Leaderboards
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Leaderboards*, "Oculus.Platform", "Leaderboards");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::GetNextEntries
// Il2CppName: GetNextEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* (*)(Oculus::Platform::Models::LeaderboardEntryList*)>(&Oculus::Platform::Leaderboards::GetNextEntries)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntryList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "GetNextEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::GetPreviousEntries
// Il2CppName: GetPreviousEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* (*)(Oculus::Platform::Models::LeaderboardEntryList*)>(&Oculus::Platform::Leaderboards::GetPreviousEntries)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardEntryList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "GetPreviousEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardList*>* (*)(::Il2CppString*)>(&Oculus::Platform::Leaderboards::Get)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::GetEntries
// Il2CppName: GetEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::Il2CppString*, int, Oculus::Platform::LeaderboardFilterType, Oculus::Platform::LeaderboardStartAt)>(&Oculus::Platform::Leaderboards::GetEntries)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* filter = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LeaderboardFilterType")->byval_arg;
    static auto* startAt = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LeaderboardStartAt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "GetEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName, limit, filter, startAt});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::GetEntriesAfterRank
// Il2CppName: GetEntriesAfterRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::Il2CppString*, int, uint64_t)>(&Oculus::Platform::Leaderboards::GetEntriesAfterRank)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* afterRank = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "GetEntriesAfterRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName, limit, afterRank});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::GetEntriesByIds
// Il2CppName: GetEntriesByIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardEntryList*>* (*)(::Il2CppString*, int, Oculus::Platform::LeaderboardStartAt, ::Array<uint64_t>*)>(&Oculus::Platform::Leaderboards::GetEntriesByIds)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* startAt = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "LeaderboardStartAt")->byval_arg;
    static auto* userIDs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "GetEntriesByIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName, limit, startAt, userIDs});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::WriteEntry
// Il2CppName: WriteEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<bool>* (*)(::Il2CppString*, int64_t, ::Array<uint8_t>*, bool)>(&Oculus::Platform::Leaderboards::WriteEntry)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* extraData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "WriteEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName, score, extraData, forceUpdate});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::WriteEntryWithSupplementaryMetric
// Il2CppName: WriteEntryWithSupplementaryMetric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<bool>* (*)(::Il2CppString*, int64_t, int64_t, ::Array<uint8_t>*, bool)>(&Oculus::Platform::Leaderboards::WriteEntryWithSupplementaryMetric)> {
  static const MethodInfo* get() {
    static auto* leaderboardName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* supplementaryMetric = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* extraData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "WriteEntryWithSupplementaryMetric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaderboardName, score, supplementaryMetric, extraData, forceUpdate});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Leaderboards::GetNextLeaderboardListPage
// Il2CppName: GetNextLeaderboardListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::LeaderboardList*>* (*)(Oculus::Platform::Models::LeaderboardList*)>(&Oculus::Platform::Leaderboards::GetNextLeaderboardListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LeaderboardList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Leaderboards*), "GetNextLeaderboardListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
