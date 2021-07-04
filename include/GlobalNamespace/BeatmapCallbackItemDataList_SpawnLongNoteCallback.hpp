// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCallbackItemDataList
#include "GlobalNamespace/BeatmapCallbackItemDataList.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCallbackItemDataList/SpawnLongNoteCallback
  class BeatmapCallbackItemDataList::SpawnLongNoteCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SpawnLongNoteCallback
    SpawnLongNoteCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11BED3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList::SpawnLongNoteCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList::SpawnLongNoteCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(NoteData noteData, System.Single cutDirectionAngleOffset)
    // Offset: 0x11BED4C
    void Invoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset);
    // public System.IAsyncResult BeginInvoke(NoteData noteData, System.Single cutDirectionAngleOffset, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11BF14C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x11BF1E8
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/SpawnLongNoteCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback*, "", "BeatmapCallbackItemDataList/SpawnLongNoteCallback");
// Writing includes for template specializations
#include "GlobalNamespace/NoteData.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::*)(GlobalNamespace::NoteData*, float)>(&GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteData*>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::*)(GlobalNamespace::NoteData*, float, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteData*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::*)(System::IAsyncResult*)>(&GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
