// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
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
  // Autogenerated type: BeatmapCallbackItemDataList/ProcessBeatmapEventCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCallbackItemDataList::ProcessBeatmapEventCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ProcessBeatmapEventCallback
    ProcessBeatmapEventCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11E136C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList::ProcessBeatmapEventCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(BeatmapEventData beatmapEventData)
    // Offset: 0x11DFEE4
    void Invoke(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.IAsyncResult BeginInvoke(BeatmapEventData beatmapEventData, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11E137C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::BeatmapEventData* beatmapEventData, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x11E13A0
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/ProcessBeatmapEventCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*, "", "BeatmapCallbackItemDataList/ProcessBeatmapEventCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::*)(GlobalNamespace::BeatmapEventData*, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::*)(System::IAsyncResult*)>(&GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::ProcessBeatmapEventCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
