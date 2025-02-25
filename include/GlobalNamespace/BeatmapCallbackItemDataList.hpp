// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCallbackItemDataList
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCallbackItemDataList : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback
    class SpawnBasicNoteCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback
    class SpawnLongNoteCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback
    class SpawnBombNoteCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback
    class SpawnObstacleCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback
    class ProcessBeatmapEventCallback;
    // Nested type: GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback
    class GetRelativeNoteOffsetCallback;
    // private readonly BeatmapCallbackItemDataList/SpawnBasicNoteCallback _spawnBasicNoteCallback
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback* spawnBasicNoteCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback*) == 0x8);
    // private readonly BeatmapCallbackItemDataList/SpawnBombNoteCallback _spawnBombNoteCallback
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback* spawnBombNoteCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback*) == 0x8);
    // private readonly BeatmapCallbackItemDataList/SpawnObstacleCallback _spawnObstacleCallback
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback* spawnObstacleCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback*) == 0x8);
    // private readonly BeatmapCallbackItemDataList/ProcessBeatmapEventCallback _processEarlyBeatmapEventCallback
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processEarlyBeatmapEventCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*) == 0x8);
    // private readonly BeatmapCallbackItemDataList/ProcessBeatmapEventCallback _processLateBeatmapEventCallback
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processLateBeatmapEventCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*) == 0x8);
    // private readonly System.Action _earlyEventsWereProcessedCallback
    // Size: 0x8
    // Offset: 0x38
    System::Action* earlyEventsWereProcessedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private readonly BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback _getRelativeNoteOffsetCallback
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback* getRelativeNoteOffsetCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectDataList
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectDataList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventDataList
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventDataList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<ColorType,System.Collections.Generic.List`1<NoteData>> _notesByColorType
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ColorType, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>* notesByColorType;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::ColorType, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<NoteData> _bombNotes
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* bombNotes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<ObstacleData> _obstacles
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleData*>* obstacles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::ObstacleData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEarlyEvents
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEarlyEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapLateEvents
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapLateEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // private System.Single _maxNotesAlignmentAngle
    // Size: 0x4
    // Offset: 0x80
    float maxNotesAlignmentAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatmapCallbackItemDataList
    BeatmapCallbackItemDataList(GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback* spawnBasicNoteCallback_ = {}, GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback* spawnBombNoteCallback_ = {}, GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback* spawnObstacleCallback_ = {}, GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processEarlyBeatmapEventCallback_ = {}, GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processLateBeatmapEventCallback_ = {}, System::Action* earlyEventsWereProcessedCallback_ = {}, GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback* getRelativeNoteOffsetCallback_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectDataList_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEventDataList_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::ColorType, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>* notesByColorType_ = {}, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* bombNotes_ = {}, System::Collections::Generic::List_1<GlobalNamespace::ObstacleData*>* obstacles_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapEarlyEvents_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>* beatmapLateEvents_ = {}, float maxNotesAlignmentAngle_ = {}) noexcept : spawnBasicNoteCallback{spawnBasicNoteCallback_}, spawnBombNoteCallback{spawnBombNoteCallback_}, spawnObstacleCallback{spawnObstacleCallback_}, processEarlyBeatmapEventCallback{processEarlyBeatmapEventCallback_}, processLateBeatmapEventCallback{processLateBeatmapEventCallback_}, earlyEventsWereProcessedCallback{earlyEventsWereProcessedCallback_}, getRelativeNoteOffsetCallback{getRelativeNoteOffsetCallback_}, beatmapObjectDataList{beatmapObjectDataList_}, beatmapEventDataList{beatmapEventDataList_}, notesByColorType{notesByColorType_}, bombNotes{bombNotes_}, obstacles{obstacles_}, beatmapEarlyEvents{beatmapEarlyEvents_}, beatmapLateEvents{beatmapLateEvents_}, maxNotesAlignmentAngle{maxNotesAlignmentAngle_} {}
    // Get instance field reference: private readonly BeatmapCallbackItemDataList/SpawnBasicNoteCallback _spawnBasicNoteCallback
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback*& dyn__spawnBasicNoteCallback();
    // Get instance field reference: private readonly BeatmapCallbackItemDataList/SpawnBombNoteCallback _spawnBombNoteCallback
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback*& dyn__spawnBombNoteCallback();
    // Get instance field reference: private readonly BeatmapCallbackItemDataList/SpawnObstacleCallback _spawnObstacleCallback
    GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback*& dyn__spawnObstacleCallback();
    // Get instance field reference: private readonly BeatmapCallbackItemDataList/ProcessBeatmapEventCallback _processEarlyBeatmapEventCallback
    GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*& dyn__processEarlyBeatmapEventCallback();
    // Get instance field reference: private readonly BeatmapCallbackItemDataList/ProcessBeatmapEventCallback _processLateBeatmapEventCallback
    GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*& dyn__processLateBeatmapEventCallback();
    // Get instance field reference: private readonly System.Action _earlyEventsWereProcessedCallback
    System::Action*& dyn__earlyEventsWereProcessedCallback();
    // Get instance field reference: private readonly BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback _getRelativeNoteOffsetCallback
    GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*& dyn__getRelativeNoteOffsetCallback();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectDataList
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*& dyn__beatmapObjectDataList();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEventDataList
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*& dyn__beatmapEventDataList();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<ColorType,System.Collections.Generic.List`1<NoteData>> _notesByColorType
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ColorType, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>*& dyn__notesByColorType();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<NoteData> _bombNotes
    System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*& dyn__bombNotes();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<ObstacleData> _obstacles
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleData*>*& dyn__obstacles();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapEarlyEvents
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*& dyn__beatmapEarlyEvents();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapEventData> _beatmapLateEvents
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData*>*& dyn__beatmapLateEvents();
    // Get instance field reference: private System.Single _maxNotesAlignmentAngle
    float& dyn__maxNotesAlignmentAngle();
    // public System.Void .ctor(BeatmapCallbackItemDataList/SpawnBasicNoteCallback spawnBasicNoteCallback, BeatmapCallbackItemDataList/SpawnBombNoteCallback spawnBombNoteCallback, BeatmapCallbackItemDataList/SpawnObstacleCallback spawnObstacleCallback, BeatmapCallbackItemDataList/ProcessBeatmapEventCallback processEarlyBeatmapEventCallback, BeatmapCallbackItemDataList/ProcessBeatmapEventCallback processLateBeatmapEventCallback, System.Action earlyEventsWereProcessedCallback, BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback getRelativeNoteOffsetCallback)
    // Offset: 0x11DF000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList* New_ctor(GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback* spawnBasicNoteCallback, GlobalNamespace::BeatmapCallbackItemDataList::SpawnBombNoteCallback* spawnBombNoteCallback, GlobalNamespace::BeatmapCallbackItemDataList::SpawnObstacleCallback* spawnObstacleCallback, GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processEarlyBeatmapEventCallback, GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* processLateBeatmapEventCallback, System::Action* earlyEventsWereProcessedCallback, GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback* getRelativeNoteOffsetCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList*, creationType>(spawnBasicNoteCallback, spawnBombNoteCallback, spawnObstacleCallback, processEarlyBeatmapEventCallback, processLateBeatmapEventCallback, earlyEventsWereProcessedCallback, getRelativeNoteOffsetCallback)));
    }
    // public System.Void InsertBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x11DF2E0
    void InsertBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Void InsertBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0x11DF3E4
    void InsertBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void ProcessData()
    // Offset: 0x11DF4E8
    void ProcessData();
    // private System.Boolean ProcessNotesByColorType(System.Collections.Generic.List`1<NoteData> notesWithTheSameColorTypeList)
    // Offset: 0x11E0278
    bool ProcessNotesByColorType(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* notesWithTheSameColorTypeList);
    // private System.Void SpawnNoteOrLongNote(NoteData noteData, System.Single cutDirectionAngleOffset)
    // Offset: 0x11E04A4
    void SpawnNoteOrLongNote(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset);
  }; // BeatmapCallbackItemDataList
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCallbackItemDataList), 128 + sizeof(float)> __GlobalNamespace_BeatmapCallbackItemDataListSizeCheck;
  static_assert(sizeof(BeatmapCallbackItemDataList) == 0x84);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList*, "", "BeatmapCallbackItemDataList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::InsertBeatmapObjectData
// Il2CppName: InsertBeatmapObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::*)(GlobalNamespace::BeatmapObjectData*)>(&GlobalNamespace::BeatmapCallbackItemDataList::InsertBeatmapObjectData)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList*), "InsertBeatmapObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::InsertBeatmapEventData
// Il2CppName: InsertBeatmapEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapCallbackItemDataList::InsertBeatmapEventData)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList*), "InsertBeatmapEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::ProcessData
// Il2CppName: ProcessData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::*)()>(&GlobalNamespace::BeatmapCallbackItemDataList::ProcessData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList*), "ProcessData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::ProcessNotesByColorType
// Il2CppName: ProcessNotesByColorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapCallbackItemDataList::*)(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*)>(&GlobalNamespace::BeatmapCallbackItemDataList::ProcessNotesByColorType)> {
  static const MethodInfo* get() {
    static auto* notesWithTheSameColorTypeList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList*), "ProcessNotesByColorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notesWithTheSameColorTypeList});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnNoteOrLongNote
// Il2CppName: SpawnNoteOrLongNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::*)(GlobalNamespace::NoteData*, float)>(&GlobalNamespace::BeatmapCallbackItemDataList::SpawnNoteOrLongNote)> {
  static const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* cutDirectionAngleOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList*), "SpawnNoteOrLongNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData, cutDirectionAngleOffset});
  }
};
