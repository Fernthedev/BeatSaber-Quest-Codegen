// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Playables.INotificationReceiver
#include "UnityEngine/Playables/INotificationReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalAsset
  class SignalAsset;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: INotification
  class INotification;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.SignalReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalReceiver : public UnityEngine::MonoBehaviour/*, public UnityEngine::Playables::INotificationReceiver*/ {
    public:
    // Nested type: UnityEngine::Timeline::SignalReceiver::EventKeyValue
    class EventKeyValue;
    // private UnityEngine.Timeline.SignalReceiver/UnityEngine.Timeline.EventKeyValue m_Events
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Timeline::SignalReceiver::EventKeyValue* m_Events;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*) == 0x8);
    // Creating value type constructor for type: SignalReceiver
    SignalReceiver(UnityEngine::Timeline::SignalReceiver::EventKeyValue* m_Events_ = {}) noexcept : m_Events{m_Events_} {}
    // Creating interface conversion operator: operator UnityEngine::Playables::INotificationReceiver
    operator UnityEngine::Playables::INotificationReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::INotificationReceiver*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Timeline.SignalReceiver/UnityEngine.Timeline.EventKeyValue m_Events
    UnityEngine::Timeline::SignalReceiver::EventKeyValue* _get_m_Events();
    // Set instance field: private UnityEngine.Timeline.SignalReceiver/UnityEngine.Timeline.EventKeyValue m_Events
    void _set_m_Events(UnityEngine::Timeline::SignalReceiver::EventKeyValue* value);
    // public System.Void OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x1825370
    void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // public System.Void AddReaction(UnityEngine.Timeline.SignalAsset asset, UnityEngine.Events.UnityEvent reaction)
    // Offset: 0x182554C
    void AddReaction(UnityEngine::Timeline::SignalAsset* asset, UnityEngine::Events::UnityEvent* reaction);
    // public System.Int32 AddEmptyReaction(UnityEngine.Events.UnityEvent reaction)
    // Offset: 0x18256FC
    int AddEmptyReaction(UnityEngine::Events::UnityEvent* reaction);
    // public System.Void Remove(UnityEngine.Timeline.SignalAsset asset)
    // Offset: 0x1825778
    void Remove(UnityEngine::Timeline::SignalAsset* asset);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.SignalAsset> GetRegisteredSignals()
    // Offset: 0x18258F4
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::SignalAsset*>* GetRegisteredSignals();
    // public UnityEngine.Events.UnityEvent GetReaction(UnityEngine.Timeline.SignalAsset key)
    // Offset: 0x1825910
    UnityEngine::Events::UnityEvent* GetReaction(UnityEngine::Timeline::SignalAsset* key);
    // public System.Int32 Count()
    // Offset: 0x182594C
    int Count();
    // public System.Void ChangeSignalAtIndex(System.Int32 idx, UnityEngine.Timeline.SignalAsset newKey)
    // Offset: 0x18259A4
    void ChangeSignalAtIndex(int idx, UnityEngine::Timeline::SignalAsset* newKey);
    // public System.Void RemoveAtIndex(System.Int32 idx)
    // Offset: 0x1825BF4
    void RemoveAtIndex(int idx);
    // public System.Void ChangeReactionAtIndex(System.Int32 idx, UnityEngine.Events.UnityEvent reaction)
    // Offset: 0x1825D38
    void ChangeReactionAtIndex(int idx, UnityEngine::Events::UnityEvent* reaction);
    // public UnityEngine.Events.UnityEvent GetReactionAtIndex(System.Int32 idx)
    // Offset: 0x1825DF4
    UnityEngine::Events::UnityEvent* GetReactionAtIndex(int idx);
    // public UnityEngine.Timeline.SignalAsset GetSignalAssetAtIndex(System.Int32 idx)
    // Offset: 0x1825EB4
    UnityEngine::Timeline::SignalAsset* GetSignalAssetAtIndex(int idx);
    // private System.Void OnEnable()
    // Offset: 0x1825F74
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1825F78
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SignalReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalReceiver*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalReceiver
  #pragma pack(pop)
  static check_size<sizeof(SignalReceiver), 24 + sizeof(UnityEngine::Timeline::SignalReceiver::EventKeyValue*)> __UnityEngine_Timeline_SignalReceiverSizeCheck;
  static_assert(sizeof(SignalReceiver) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalReceiver*, "UnityEngine.Timeline", "SignalReceiver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::OnNotify
// Il2CppName: OnNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::INotification*, ::Il2CppObject*)>(&UnityEngine::Timeline::SignalReceiver::OnNotify)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* notification = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "OnNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, notification, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::AddReaction
// Il2CppName: AddReaction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)(UnityEngine::Timeline::SignalAsset*, UnityEngine::Events::UnityEvent*)>(&UnityEngine::Timeline::SignalReceiver::AddReaction)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")->byval_arg;
    static auto* reaction = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "AddReaction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, reaction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::AddEmptyReaction
// Il2CppName: AddEmptyReaction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::SignalReceiver::*)(UnityEngine::Events::UnityEvent*)>(&UnityEngine::Timeline::SignalReceiver::AddEmptyReaction)> {
  static const MethodInfo* get() {
    static auto* reaction = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "AddEmptyReaction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reaction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)(UnityEngine::Timeline::SignalAsset*)>(&UnityEngine::Timeline::SignalReceiver::Remove)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals
// Il2CppName: GetRegisteredSignals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::SignalAsset*>* (UnityEngine::Timeline::SignalReceiver::*)()>(&UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "GetRegisteredSignals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::GetReaction
// Il2CppName: GetReaction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::UnityEvent* (UnityEngine::Timeline::SignalReceiver::*)(UnityEngine::Timeline::SignalAsset*)>(&UnityEngine::Timeline::SignalReceiver::GetReaction)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "GetReaction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::Count
// Il2CppName: Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::SignalReceiver::*)()>(&UnityEngine::Timeline::SignalReceiver::Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex
// Il2CppName: ChangeSignalAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)(int, UnityEngine::Timeline::SignalAsset*)>(&UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newKey = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "SignalAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "ChangeSignalAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, newKey});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::RemoveAtIndex
// Il2CppName: RemoveAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)(int)>(&UnityEngine::Timeline::SignalReceiver::RemoveAtIndex)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "RemoveAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex
// Il2CppName: ChangeReactionAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)(int, UnityEngine::Events::UnityEvent*)>(&UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reaction = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "ChangeReactionAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, reaction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex
// Il2CppName: GetReactionAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Events::UnityEvent* (UnityEngine::Timeline::SignalReceiver::*)(int)>(&UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "GetReactionAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex
// Il2CppName: GetSignalAssetAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::SignalAsset* (UnityEngine::Timeline::SignalReceiver::*)(int)>(&UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "GetSignalAssetAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::SignalReceiver::*)()>(&UnityEngine::Timeline::SignalReceiver::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::SignalReceiver*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalReceiver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
