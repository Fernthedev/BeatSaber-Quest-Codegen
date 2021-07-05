// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: NotesInTimeRowProcessor
  class NotesInTimeRowProcessor;
  // Forward declaring type: IReadonlyBeatmapLineData
  class IReadonlyBeatmapLineData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapData
  class BeatmapData : public ::Il2CppObject/*, public GlobalNamespace::IReadonlyBeatmapData*/ {
    public:
    // Nested type: GlobalNamespace::BeatmapData::$get_beatmapObjectsData$d__31
    class $get_beatmapObjectsData$d__31;
    // [CompilerGeneratedAttribute] Offset: 0xE166C8
    // private System.Int32 <cuttableNotesType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int cuttableNotesType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE166D8
    // private System.Int32 <obstaclesCount>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int obstaclesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE166E8
    // private System.Int32 <bombsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int bombsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE166F8
    // private System.Int32 <spawnRotationEventsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int spawnRotationEventsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly BeatmapLineData[] _beatmapLinesData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BeatmapLineData*>* beatmapLinesData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BeatmapLineData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventsData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.HashSet`1<BeatmapEventType>> _availableSpecialEventsPerKeywordDictionary
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* availableSpecialEventsPerKeywordDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>*) == 0x8);
    // private readonly NotesInTimeRowProcessor _notesInTimeRowProcessor
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::NotesInTimeRowProcessor* notesInTimeRowProcessor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NotesInTimeRowProcessor*) == 0x8);
    // private System.Single _prevAddedBeatmapObjectDataTime
    // Size: 0x4
    // Offset: 0x40
    float prevAddedBeatmapObjectDataTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevAddedBeatmapEventDataTime
    // Size: 0x4
    // Offset: 0x44
    float prevAddedBeatmapEventDataTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatmapData
    BeatmapData(int cuttableNotesType_ = {}, int obstaclesCount_ = {}, int bombsCount_ = {}, int spawnRotationEventsCount_ = {}, ::Array<GlobalNamespace::BeatmapLineData*>* beatmapLinesData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventsData_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* availableSpecialEventsPerKeywordDictionary_ = {}, GlobalNamespace::NotesInTimeRowProcessor* notesInTimeRowProcessor_ = {}, float prevAddedBeatmapObjectDataTime_ = {}, float prevAddedBeatmapEventDataTime_ = {}) noexcept : cuttableNotesType{cuttableNotesType_}, obstaclesCount{obstaclesCount_}, bombsCount{bombsCount_}, spawnRotationEventsCount{spawnRotationEventsCount_}, beatmapLinesData{beatmapLinesData_}, beatmapEventsData{beatmapEventsData_}, availableSpecialEventsPerKeywordDictionary{availableSpecialEventsPerKeywordDictionary_}, notesInTimeRowProcessor{notesInTimeRowProcessor_}, prevAddedBeatmapObjectDataTime{prevAddedBeatmapObjectDataTime_}, prevAddedBeatmapEventDataTime{prevAddedBeatmapEventDataTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IReadonlyBeatmapData
    operator GlobalNamespace::IReadonlyBeatmapData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IReadonlyBeatmapData*>(this);
    }
    // public System.Collections.Generic.IReadOnlyList`1<IReadonlyBeatmapLineData> get_beatmapLinesData()
    // Offset: 0x11C14C8
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>* get_beatmapLinesData();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapEventData> get_beatmapEventsData()
    // Offset: 0x11C14D0
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* get_beatmapEventsData();
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Collections.Generic.HashSet`1<BeatmapEventType>> get_availableSpecialEventsPerKeywordDictionary()
    // Offset: 0x11C14D8
    System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* get_availableSpecialEventsPerKeywordDictionary();
    // public System.Int32 get_numberOfLines()
    // Offset: 0x11C14E0
    int get_numberOfLines();
    // public System.Int32 get_cuttableNotesType()
    // Offset: 0x11C14FC
    int get_cuttableNotesType();
    // private System.Void set_cuttableNotesType(System.Int32 value)
    // Offset: 0x11C1504
    void set_cuttableNotesType(int value);
    // public System.Int32 get_obstaclesCount()
    // Offset: 0x11C150C
    int get_obstaclesCount();
    // private System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0x11C1514
    void set_obstaclesCount(int value);
    // public System.Int32 get_bombsCount()
    // Offset: 0x11C151C
    int get_bombsCount();
    // private System.Void set_bombsCount(System.Int32 value)
    // Offset: 0x11C1524
    void set_bombsCount(int value);
    // public System.Int32 get_spawnRotationEventsCount()
    // Offset: 0x11C152C
    int get_spawnRotationEventsCount();
    // private System.Void set_spawnRotationEventsCount(System.Int32 value)
    // Offset: 0x11C1534
    void set_spawnRotationEventsCount(int value);
    // public System.Collections.Generic.IEnumerable`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0x11C153C
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
    // public System.Void .ctor(System.Int32 numberOfLines)
    // Offset: 0x11C15F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapData* New_ctor(int numberOfLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapData*, creationType>(numberOfLines)));
    }
    // public System.Void AddBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x11C1770
    void AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void AddBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x11C1974
    void AddBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void InsertBeatmapEventData(System.Int32 index, BeatmapEventData beatmapEventData)
    // Offset: 0x11C1AC0
    void InsertBeatmapEventData(int index, GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void AddAvailableSpecialEventsPerKeyword(System.String keyword, System.Collections.Generic.HashSet`1<BeatmapEventType> availableSpecialEvents)
    // Offset: 0x11C1D4C
    void AddAvailableSpecialEventsPerKeyword(::Il2CppString* keyword, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>* availableSpecialEvents);
    // public System.Void ProcessRemainingData()
    // Offset: 0x11C1DBC
    void ProcessRemainingData();
    // public BeatmapData GetCopy()
    // Offset: 0x11C1DD8
    GlobalNamespace::BeatmapData* GetCopy();
    // public BeatmapData GetCopyWithoutEvents()
    // Offset: 0x11C2990
    GlobalNamespace::BeatmapData* GetCopyWithoutEvents();
    // public BeatmapData GetCopyWithoutBeatmapObjects()
    // Offset: 0x11C2A14
    GlobalNamespace::BeatmapData* GetCopyWithoutBeatmapObjects();
    // static private System.Void CopyBeatmapEvents(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x11C23D4
    static void CopyBeatmapEvents(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // static private System.Void CopyBeatmapObjects(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x11C1E68
    static void CopyBeatmapObjects(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // static public System.Void CopyBeatmapObjectsWaypointsOnly(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x11C2A98
    static void CopyBeatmapObjectsWaypointsOnly(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
    // static private System.Void CopyAvailableSpecialEventsPerKeywordDictionary(IReadonlyBeatmapData src, BeatmapData dst)
    // Offset: 0x11C26AC
    static void CopyAvailableSpecialEventsPerKeywordDictionary(GlobalNamespace::IReadonlyBeatmapData* src, GlobalNamespace::BeatmapData* dst);
  }; // BeatmapData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapData), 68 + sizeof(float)> __GlobalNamespace_BeatmapDataSizeCheck;
  static_assert(sizeof(BeatmapData) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData*, "", "BeatmapData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_beatmapLinesData
// Il2CppName: get_beatmapLinesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_beatmapLinesData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_beatmapLinesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_beatmapEventsData
// Il2CppName: get_beatmapEventsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_beatmapEventsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_beatmapEventsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_availableSpecialEventsPerKeywordDictionary
// Il2CppName: get_availableSpecialEventsPerKeywordDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_availableSpecialEventsPerKeywordDictionary)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_availableSpecialEventsPerKeywordDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_numberOfLines
// Il2CppName: get_numberOfLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_numberOfLines)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_numberOfLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_cuttableNotesType
// Il2CppName: get_cuttableNotesType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_cuttableNotesType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_cuttableNotesType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_cuttableNotesType
// Il2CppName: set_cuttableNotesType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_cuttableNotesType)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_cuttableNotesType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_obstaclesCount
// Il2CppName: get_obstaclesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_obstaclesCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_obstaclesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_obstaclesCount
// Il2CppName: set_obstaclesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_obstaclesCount)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_obstaclesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_bombsCount
// Il2CppName: get_bombsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_bombsCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_bombsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_bombsCount
// Il2CppName: set_bombsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_bombsCount)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_bombsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_spawnRotationEventsCount
// Il2CppName: get_spawnRotationEventsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_spawnRotationEventsCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_spawnRotationEventsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::set_spawnRotationEventsCount
// Il2CppName: set_spawnRotationEventsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int)>(&GlobalNamespace::BeatmapData::set_spawnRotationEventsCount)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "set_spawnRotationEventsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::get_beatmapObjectsData
// Il2CppName: get_beatmapObjectsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::get_beatmapObjectsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "get_beatmapObjectsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddBeatmapObjectData
// Il2CppName: AddBeatmapObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::BeatmapData::AddBeatmapObjectData)> {
  const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddBeatmapObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddBeatmapEventData
// Il2CppName: AddBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapData::AddBeatmapEventData)> {
  const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::InsertBeatmapEventData
// Il2CppName: InsertBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(int, GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapData::InsertBeatmapEventData)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "InsertBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::AddAvailableSpecialEventsPerKeyword
// Il2CppName: AddAvailableSpecialEventsPerKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)(::Il2CppString*, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*)>(&GlobalNamespace::BeatmapData::AddAvailableSpecialEventsPerKeyword)> {
  const MethodInfo* get() {
    static auto* keyword = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* availableSpecialEvents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "AddAvailableSpecialEventsPerKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyword, availableSpecialEvents});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::ProcessRemainingData
// Il2CppName: ProcessRemainingData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::ProcessRemainingData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "ProcessRemainingData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetCopyWithoutEvents
// Il2CppName: GetCopyWithoutEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopyWithoutEvents)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopyWithoutEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::GetCopyWithoutBeatmapObjects
// Il2CppName: GetCopyWithoutBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapData::*)()>(&GlobalNamespace::BeatmapData::GetCopyWithoutBeatmapObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "GetCopyWithoutBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyBeatmapEvents
// Il2CppName: CopyBeatmapEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyBeatmapEvents)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyBeatmapEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyBeatmapObjects
// Il2CppName: CopyBeatmapObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyBeatmapObjects)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyBeatmapObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyBeatmapObjectsWaypointsOnly
// Il2CppName: CopyBeatmapObjectsWaypointsOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyBeatmapObjectsWaypointsOnly)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyBeatmapObjectsWaypointsOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapData::CopyAvailableSpecialEventsPerKeywordDictionary
// Il2CppName: CopyAvailableSpecialEventsPerKeywordDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::BeatmapData*)>(&GlobalNamespace::BeatmapData::CopyAvailableSpecialEventsPerKeywordDictionary)> {
  const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapData*), "CopyAvailableSpecialEventsPerKeywordDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
