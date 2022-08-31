// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IMarker
  class IMarker;
  // Forward declaring type: TimelineAsset
  class TimelineAsset;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: MarkerList
  struct MarkerList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MarkerList, "UnityEngine.Timeline", "MarkerList");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x12
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Timeline.MarkerList
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 10A34BC
  struct MarkerList/*, public ::System::ValueType, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    public:
    // private System.Collections.Generic.List`1<UnityEngine.ScriptableObject> m_Objects
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Objects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> m_Cache
    // Size: 0x8
    // Offset: 0x8
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* m_Cache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*) == 0x8);
    // private System.Boolean m_CacheDirty
    // Size: 0x1
    // Offset: 0x10
    bool m_CacheDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_HasNotifications
    // Size: 0x1
    // Offset: 0x11
    bool m_HasNotifications;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: MarkerList
    constexpr MarkerList(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Objects_ = {}, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* m_Cache_ = {}, bool m_CacheDirty_ = {}, bool m_HasNotifications_ = {}) noexcept : m_Objects{m_Objects_}, m_Cache{m_Cache_}, m_CacheDirty{m_CacheDirty_}, m_HasNotifications{m_HasNotifications_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Creating interface conversion operator: i_ISerializationCallbackReceiver
    inline ::UnityEngine::ISerializationCallbackReceiver* i_ISerializationCallbackReceiver() noexcept {
      return reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ScriptableObject> m_Objects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*& dyn_m_Objects();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> m_Cache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*& dyn_m_Cache();
    // Get instance field reference: private System.Boolean m_CacheDirty
    [[deprecated("Use field access instead!")]] bool& dyn_m_CacheDirty();
    // Get instance field reference: private System.Boolean m_HasNotifications
    [[deprecated("Use field access instead!")]] bool& dyn_m_HasNotifications();
    // public System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> get_markers()
    // Offset: 0x1DAF674
    ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* get_markers();
    // public System.Int32 get_Count()
    // Offset: 0x1DAFD6C
    int get_Count();
    // public UnityEngine.Timeline.IMarker get_Item(System.Int32 idx)
    // Offset: 0x1DAFDC4
    ::UnityEngine::Timeline::IMarker* get_Item(int idx);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x1DAF880
    MarkerList(int capacity);
    // public System.Void Add(UnityEngine.ScriptableObject item)
    // Offset: 0x1DAF92C
    void Add(::UnityEngine::ScriptableObject* item);
    // public System.Boolean Remove(UnityEngine.Timeline.IMarker item)
    // Offset: 0x1DAF9D4
    bool Remove(::UnityEngine::Timeline::IMarker* item);
    // public System.Boolean Remove(UnityEngine.ScriptableObject item, UnityEngine.Timeline.TimelineAsset timelineAsset, UnityEngine.Playables.PlayableAsset thingToDirty)
    // Offset: 0x1DAFBB8
    bool Remove(::UnityEngine::ScriptableObject* item, ::UnityEngine::Timeline::TimelineAsset* timelineAsset, ::UnityEngine::Playables::PlayableAsset* thingToDirty);
    // public System.Void Clear()
    // Offset: 0x1DAFC7C
    void Clear();
    // public System.Boolean Contains(UnityEngine.ScriptableObject item)
    // Offset: 0x1DAFCE0
    bool Contains(::UnityEngine::ScriptableObject* item);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.IMarker> GetMarkers()
    // Offset: 0x1DAFD48
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers();
    // public System.Collections.Generic.List`1<UnityEngine.ScriptableObject> GetRawMarkerList()
    // Offset: 0x1DAFE44
    ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* GetRawMarkerList();
    // public UnityEngine.Timeline.IMarker CreateMarker(System.Type type, System.Double time, UnityEngine.Timeline.TrackAsset owner)
    // Offset: 0x1DAFE4C
    ::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type* type, double time, ::UnityEngine::Timeline::TrackAsset* owner);
    // public System.Boolean HasNotifications()
    // Offset: 0x1DB0138
    bool HasNotifications();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x1DB015C
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x1DB0160
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // private System.Void BuildCache()
    // Offset: 0x1DAF698
    void BuildCache();
  }; // UnityEngine.Timeline.MarkerList
  #pragma pack(pop)
  static check_size<sizeof(MarkerList), 17 + sizeof(bool)> __UnityEngine_Timeline_MarkerListSizeCheck;
  static_assert(sizeof(MarkerList) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::get_markers
// Il2CppName: get_markers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::get_markers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "get_markers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::IMarker* (UnityEngine::Timeline::MarkerList::*)(int)>(&UnityEngine::Timeline::MarkerList::get_Item)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::MarkerList
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::MarkerList::*)(::UnityEngine::ScriptableObject*)>(&UnityEngine::Timeline::MarkerList::Add)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::MarkerList::*)(::UnityEngine::Timeline::IMarker*)>(&UnityEngine::Timeline::MarkerList::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "IMarker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::MarkerList::*)(::UnityEngine::ScriptableObject*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableAsset*)>(&UnityEngine::Timeline::MarkerList::Remove)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    static auto* timelineAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineAsset")->byval_arg;
    static auto* thingToDirty = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item, timelineAsset, thingToDirty});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::MarkerList::*)(::UnityEngine::ScriptableObject*)>(&UnityEngine::Timeline::MarkerList::Contains)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::GetMarkers
// Il2CppName: GetMarkers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::GetMarkers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "GetMarkers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::GetRawMarkerList
// Il2CppName: GetRawMarkerList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::GetRawMarkerList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "GetRawMarkerList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::CreateMarker
// Il2CppName: CreateMarker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::IMarker* (UnityEngine::Timeline::MarkerList::*)(::System::Type*, double, ::UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::MarkerList::CreateMarker)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "CreateMarker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, time, owner});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::HasNotifications
// Il2CppName: HasNotifications
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::HasNotifications)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "HasNotifications", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::MarkerList::BuildCache
// Il2CppName: BuildCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::MarkerList::*)()>(&UnityEngine::Timeline::MarkerList::BuildCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::MarkerList), "BuildCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
