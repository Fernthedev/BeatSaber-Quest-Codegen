// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: NotesInTimeRowProcessor
  class NotesInTimeRowProcessor : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<NoteData>[] _notesInColumns
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>* notesInColumns;
    // Field size check
    static_assert(sizeof(::Array<System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<NoteData> _currentTimeRowColorNotes
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* currentTimeRowColorNotes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<NoteData> _currentTimeRowAllNotes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* currentTimeRowAllNotes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*) == 0x8);
    // private System.Single _prevBasicNotesTimeRowTime
    // Size: 0x4
    // Offset: 0x28
    float prevBasicNotesTimeRowTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NotesInTimeRowProcessor
    NotesInTimeRowProcessor(::Array<System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*>* notesInColumns_ = {}, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* currentTimeRowColorNotes_ = {}, System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* currentTimeRowAllNotes_ = {}, float prevBasicNotesTimeRowTime_ = {}) noexcept : notesInColumns{notesInColumns_}, currentTimeRowColorNotes{currentTimeRowColorNotes_}, currentTimeRowAllNotes{currentTimeRowAllNotes_}, prevBasicNotesTimeRowTime{prevBasicNotesTimeRowTime_} {}
    // public System.Void .ctor(System.Int32 numberOfLines)
    // Offset: 0x23E0480
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotesInTimeRowProcessor* New_ctor(int numberOfLines) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NotesInTimeRowProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotesInTimeRowProcessor*, creationType>(numberOfLines)));
    }
    // public System.Void ProcessNote(NoteData noteData)
    // Offset: 0x23E05F4
    void ProcessNote(GlobalNamespace::NoteData* noteData);
    // public System.Void ProcessAllRemainingData()
    // Offset: 0x23E0AD0
    void ProcessAllRemainingData();
    // private System.Void ProcessColorNotesInTimeRow(System.Collections.Generic.List`1<NoteData> colorNotesData, System.Single nextBasicNoteTimeRowTime)
    // Offset: 0x23E09B4
    void ProcessColorNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* colorNotesData, float nextBasicNoteTimeRowTime);
    // private System.Void ProcessAllNotesInTimeRow(System.Collections.Generic.List`1<NoteData> notes)
    // Offset: 0x23E0794
    void ProcessAllNotesInTimeRow(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>* notes);
  }; // NotesInTimeRowProcessor
  #pragma pack(pop)
  static check_size<sizeof(NotesInTimeRowProcessor), 40 + sizeof(float)> __GlobalNamespace_NotesInTimeRowProcessorSizeCheck;
  static_assert(sizeof(NotesInTimeRowProcessor) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NotesInTimeRowProcessor*, "", "NotesInTimeRowProcessor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NotesInTimeRowProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NotesInTimeRowProcessor::ProcessNote
// Il2CppName: ProcessNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NotesInTimeRowProcessor::*)(GlobalNamespace::NoteData*)>(&GlobalNamespace::NotesInTimeRowProcessor::ProcessNote)> {
  const MethodInfo* get() {
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NotesInTimeRowProcessor*), "ProcessNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NotesInTimeRowProcessor::ProcessAllRemainingData
// Il2CppName: ProcessAllRemainingData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NotesInTimeRowProcessor::*)()>(&GlobalNamespace::NotesInTimeRowProcessor::ProcessAllRemainingData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NotesInTimeRowProcessor*), "ProcessAllRemainingData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NotesInTimeRowProcessor::ProcessColorNotesInTimeRow
// Il2CppName: ProcessColorNotesInTimeRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NotesInTimeRowProcessor::*)(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*, float)>(&GlobalNamespace::NotesInTimeRowProcessor::ProcessColorNotesInTimeRow)> {
  const MethodInfo* get() {
    static auto* colorNotesData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData")})->byval_arg;
    static auto* nextBasicNoteTimeRowTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NotesInTimeRowProcessor*), "ProcessColorNotesInTimeRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorNotesData, nextBasicNoteTimeRowTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NotesInTimeRowProcessor::ProcessAllNotesInTimeRow
// Il2CppName: ProcessAllNotesInTimeRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NotesInTimeRowProcessor::*)(System::Collections::Generic::List_1<GlobalNamespace::NoteData*>*)>(&GlobalNamespace::NotesInTimeRowProcessor::ProcessAllNotesInTimeRow)> {
  const MethodInfo* get() {
    static auto* notes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NotesInTimeRowProcessor*), "ProcessAllNotesInTimeRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{notes});
  }
};
