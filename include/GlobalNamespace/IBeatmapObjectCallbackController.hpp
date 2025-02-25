// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapObjectCallbackData
  class BeatmapObjectCallbackData;
  // Forward declaring type: BeatmapObjectCallback
  class BeatmapObjectCallback;
  // Forward declaring type: BeatmapEventCallbackData
  class BeatmapEventCallbackData;
  // Forward declaring type: BeatmapEventCallback
  class BeatmapEventCallback;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IBeatmapObjectCallbackController
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeatmapObjectCallbackController {
    public:
    // Creating value type constructor for type: IBeatmapObjectCallbackController
    IBeatmapObjectCallbackController() noexcept {}
    // public System.Boolean get_isPaused()
    // Offset: 0xFFFFFFFF
    bool get_isPaused();
    // public System.Void add_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0xFFFFFFFF
    void add_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void remove_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0xFFFFFFFF
    void remove_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void add_callbacksForThisFrameWereProcessedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_callbacksForThisFrameWereProcessedEvent(System::Action* value);
    // public System.Void remove_callbacksForThisFrameWereProcessedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_callbacksForThisFrameWereProcessedEvent(System::Action* value);
    // public BeatmapObjectCallbackData AddBeatmapObjectCallback(BeatmapObjectCallback callback, System.Single aheadTime)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapObjectCallbackData* AddBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapObjectCallback(BeatmapObjectCallbackData callbackData)
    // Offset: 0xFFFFFFFF
    void RemoveBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackData* callbackData);
    // public BeatmapEventCallbackData AddBeatmapEventCallback(BeatmapEventCallback callback, System.Single aheadTime)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapEventCallbackData* AddBeatmapEventCallback(GlobalNamespace::BeatmapEventCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapEventCallback(BeatmapEventCallbackData callbackData)
    // Offset: 0xFFFFFFFF
    void RemoveBeatmapEventCallback(GlobalNamespace::BeatmapEventCallbackData* callbackData);
    // public System.Void SendBeatmapEventDidTriggerEvent(BeatmapEventData beatmapEventData)
    // Offset: 0xFFFFFFFF
    void SendBeatmapEventDidTriggerEvent(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void SetNewBeatmapData(IReadonlyBeatmapData beatmapData)
    // Offset: 0xFFFFFFFF
    void SetNewBeatmapData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // public System.Void Pause()
    // Offset: 0xFFFFFFFF
    void Pause();
    // public System.Void Resume()
    // Offset: 0xFFFFFFFF
    void Resume();
  }; // IBeatmapObjectCallbackController
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapObjectCallbackController*, "", "IBeatmapObjectCallbackController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::get_isPaused
// Il2CppName: get_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IBeatmapObjectCallbackController::*)()>(&GlobalNamespace::IBeatmapObjectCallbackController::get_isPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "get_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::add_beatmapEventDidTriggerEvent
// Il2CppName: add_beatmapEventDidTriggerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(System::Action_1<GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::IBeatmapObjectCallbackController::add_beatmapEventDidTriggerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "add_beatmapEventDidTriggerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::remove_beatmapEventDidTriggerEvent
// Il2CppName: remove_beatmapEventDidTriggerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(System::Action_1<GlobalNamespace::BeatmapEventData*>*)>(&GlobalNamespace::IBeatmapObjectCallbackController::remove_beatmapEventDidTriggerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "remove_beatmapEventDidTriggerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::add_callbacksForThisFrameWereProcessedEvent
// Il2CppName: add_callbacksForThisFrameWereProcessedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(System::Action*)>(&GlobalNamespace::IBeatmapObjectCallbackController::add_callbacksForThisFrameWereProcessedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "add_callbacksForThisFrameWereProcessedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::remove_callbacksForThisFrameWereProcessedEvent
// Il2CppName: remove_callbacksForThisFrameWereProcessedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(System::Action*)>(&GlobalNamespace::IBeatmapObjectCallbackController::remove_callbacksForThisFrameWereProcessedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "remove_callbacksForThisFrameWereProcessedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::AddBeatmapObjectCallback
// Il2CppName: AddBeatmapObjectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectCallbackData* (GlobalNamespace::IBeatmapObjectCallbackController::*)(GlobalNamespace::BeatmapObjectCallback*, float)>(&GlobalNamespace::IBeatmapObjectCallbackController::AddBeatmapObjectCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectCallback")->byval_arg;
    static auto* aheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "AddBeatmapObjectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, aheadTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::RemoveBeatmapObjectCallback
// Il2CppName: RemoveBeatmapObjectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(GlobalNamespace::BeatmapObjectCallbackData*)>(&GlobalNamespace::IBeatmapObjectCallbackController::RemoveBeatmapObjectCallback)> {
  static const MethodInfo* get() {
    static auto* callbackData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectCallbackData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "RemoveBeatmapObjectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::AddBeatmapEventCallback
// Il2CppName: AddBeatmapEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventCallbackData* (GlobalNamespace::IBeatmapObjectCallbackController::*)(GlobalNamespace::BeatmapEventCallback*, float)>(&GlobalNamespace::IBeatmapObjectCallbackController::AddBeatmapEventCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("", "BeatmapEventCallback")->byval_arg;
    static auto* aheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "AddBeatmapEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, aheadTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::RemoveBeatmapEventCallback
// Il2CppName: RemoveBeatmapEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(GlobalNamespace::BeatmapEventCallbackData*)>(&GlobalNamespace::IBeatmapObjectCallbackController::RemoveBeatmapEventCallback)> {
  static const MethodInfo* get() {
    static auto* callbackData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventCallbackData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "RemoveBeatmapEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::SendBeatmapEventDidTriggerEvent
// Il2CppName: SendBeatmapEventDidTriggerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::IBeatmapObjectCallbackController::SendBeatmapEventDidTriggerEvent)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "SendBeatmapEventDidTriggerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::SetNewBeatmapData
// Il2CppName: SetNewBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)(GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::IBeatmapObjectCallbackController::SetNewBeatmapData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "SetNewBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)()>(&GlobalNamespace::IBeatmapObjectCallbackController::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectCallbackController::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectCallbackController::*)()>(&GlobalNamespace::IBeatmapObjectCallbackController::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectCallbackController*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
