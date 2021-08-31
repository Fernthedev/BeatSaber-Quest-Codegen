// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.EventSystems.RaycastResult
#include "UnityEngine/EventSystems/RaycastResult.hpp"
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
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseInputModule
  class BaseInputModule;
  // Forward declaring type: BaseEventData
  class BaseEventData;
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.EventSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DE6438
  class EventSystem : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> m_SystemInputModules
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule*>* m_SystemInputModules;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule*>*) == 0x8);
    // private UnityEngine.EventSystems.BaseInputModule m_CurrentInputModule
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseInputModule*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xDE8468
    // private UnityEngine.GameObject m_FirstSelected
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* m_FirstSelected;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean m_sendNavigationEvents
    // Size: 0x1
    // Offset: 0x30
    bool m_sendNavigationEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_sendNavigationEvents and: m_DragThreshold
    char __padding3[0x3] = {};
    // private System.Int32 m_DragThreshold
    // Size: 0x4
    // Offset: 0x34
    int m_DragThreshold;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.GameObject m_CurrentSelected
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* m_CurrentSelected;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean m_HasFocus
    // Size: 0x1
    // Offset: 0x40
    bool m_HasFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_SelectionGuard
    // Size: 0x1
    // Offset: 0x41
    bool m_SelectionGuard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_SelectionGuard and: m_DummyData
    char __padding7[0x6] = {};
    // private UnityEngine.EventSystems.BaseEventData m_DummyData
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::EventSystems::BaseEventData* m_DummyData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseEventData*) == 0x8);
    // Creating value type constructor for type: EventSystem
    EventSystem(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule*>* m_SystemInputModules_ = {}, UnityEngine::EventSystems::BaseInputModule* m_CurrentInputModule_ = {}, UnityEngine::GameObject* m_FirstSelected_ = {}, bool m_sendNavigationEvents_ = {}, int m_DragThreshold_ = {}, UnityEngine::GameObject* m_CurrentSelected_ = {}, bool m_HasFocus_ = {}, bool m_SelectionGuard_ = {}, UnityEngine::EventSystems::BaseEventData* m_DummyData_ = {}) noexcept : m_SystemInputModules{m_SystemInputModules_}, m_CurrentInputModule{m_CurrentInputModule_}, m_FirstSelected{m_FirstSelected_}, m_sendNavigationEvents{m_sendNavigationEvents_}, m_DragThreshold{m_DragThreshold_}, m_CurrentSelected{m_CurrentSelected_}, m_HasFocus{m_HasFocus_}, m_SelectionGuard{m_SelectionGuard_}, m_DummyData{m_DummyData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> m_EventSystems
    static System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem*>* _get_m_EventSystems();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> m_EventSystems
    static void _set_m_EventSystems(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventSystem*>* value);
    // Get static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> s_RaycastComparer
    static System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* _get_s_RaycastComparer();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.EventSystems.RaycastResult> s_RaycastComparer
    static void _set_s_RaycastComparer(System::Comparison_1<UnityEngine::EventSystems::RaycastResult>* value);
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> m_SystemInputModules
    System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule*>* _get_m_SystemInputModules();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> m_SystemInputModules
    void _set_m_SystemInputModules(System::Collections::Generic::List_1<UnityEngine::EventSystems::BaseInputModule*>* value);
    // Get instance field: private UnityEngine.EventSystems.BaseInputModule m_CurrentInputModule
    UnityEngine::EventSystems::BaseInputModule* _get_m_CurrentInputModule();
    // Set instance field: private UnityEngine.EventSystems.BaseInputModule m_CurrentInputModule
    void _set_m_CurrentInputModule(UnityEngine::EventSystems::BaseInputModule* value);
    // Get instance field: private UnityEngine.GameObject m_FirstSelected
    UnityEngine::GameObject* _get_m_FirstSelected();
    // Set instance field: private UnityEngine.GameObject m_FirstSelected
    void _set_m_FirstSelected(UnityEngine::GameObject* value);
    // Get instance field: private System.Boolean m_sendNavigationEvents
    bool _get_m_sendNavigationEvents();
    // Set instance field: private System.Boolean m_sendNavigationEvents
    void _set_m_sendNavigationEvents(bool value);
    // Get instance field: private System.Int32 m_DragThreshold
    int _get_m_DragThreshold();
    // Set instance field: private System.Int32 m_DragThreshold
    void _set_m_DragThreshold(int value);
    // Get instance field: private UnityEngine.GameObject m_CurrentSelected
    UnityEngine::GameObject* _get_m_CurrentSelected();
    // Set instance field: private UnityEngine.GameObject m_CurrentSelected
    void _set_m_CurrentSelected(UnityEngine::GameObject* value);
    // Get instance field: private System.Boolean m_HasFocus
    bool _get_m_HasFocus();
    // Set instance field: private System.Boolean m_HasFocus
    void _set_m_HasFocus(bool value);
    // Get instance field: private System.Boolean m_SelectionGuard
    bool _get_m_SelectionGuard();
    // Set instance field: private System.Boolean m_SelectionGuard
    void _set_m_SelectionGuard(bool value);
    // Get instance field: private UnityEngine.EventSystems.BaseEventData m_DummyData
    UnityEngine::EventSystems::BaseEventData* _get_m_DummyData();
    // Set instance field: private UnityEngine.EventSystems.BaseEventData m_DummyData
    void _set_m_DummyData(UnityEngine::EventSystems::BaseEventData* value);
    // static public UnityEngine.EventSystems.EventSystem get_current()
    // Offset: 0x146768C
    static UnityEngine::EventSystems::EventSystem* get_current();
    // static public System.Void set_current(UnityEngine.EventSystems.EventSystem value)
    // Offset: 0x146774C
    static void set_current(UnityEngine::EventSystems::EventSystem* value);
    // public System.Boolean get_sendNavigationEvents()
    // Offset: 0x1467854
    bool get_sendNavigationEvents();
    // public System.Void set_sendNavigationEvents(System.Boolean value)
    // Offset: 0x146785C
    void set_sendNavigationEvents(bool value);
    // public System.Int32 get_pixelDragThreshold()
    // Offset: 0x1467868
    int get_pixelDragThreshold();
    // public System.Void set_pixelDragThreshold(System.Int32 value)
    // Offset: 0x1467870
    void set_pixelDragThreshold(int value);
    // public UnityEngine.EventSystems.BaseInputModule get_currentInputModule()
    // Offset: 0x1467878
    UnityEngine::EventSystems::BaseInputModule* get_currentInputModule();
    // public UnityEngine.GameObject get_firstSelectedGameObject()
    // Offset: 0x1467880
    UnityEngine::GameObject* get_firstSelectedGameObject();
    // public System.Void set_firstSelectedGameObject(UnityEngine.GameObject value)
    // Offset: 0x1467888
    void set_firstSelectedGameObject(UnityEngine::GameObject* value);
    // public UnityEngine.GameObject get_currentSelectedGameObject()
    // Offset: 0x1467890
    UnityEngine::GameObject* get_currentSelectedGameObject();
    // public UnityEngine.GameObject get_lastSelectedGameObject()
    // Offset: 0x1467898
    UnityEngine::GameObject* get_lastSelectedGameObject();
    // public System.Boolean get_isFocused()
    // Offset: 0x14678A0
    bool get_isFocused();
    // public System.Boolean get_alreadySelecting()
    // Offset: 0x146792C
    bool get_alreadySelecting();
    // private UnityEngine.EventSystems.BaseEventData get_baseEventDataCache()
    // Offset: 0x1467934
    UnityEngine::EventSystems::BaseEventData* get_baseEventDataCache();
    // public System.Void UpdateModules()
    // Offset: 0x146636C
    void UpdateModules();
    // public System.Void SetSelectedGameObject(UnityEngine.GameObject selected, UnityEngine.EventSystems.BaseEventData pointer)
    // Offset: 0x1465E30
    void SetSelectedGameObject(UnityEngine::GameObject* selected, UnityEngine::EventSystems::BaseEventData* pointer);
    // public System.Void SetSelectedGameObject(UnityEngine.GameObject selected)
    // Offset: 0x14679A4
    void SetSelectedGameObject(UnityEngine::GameObject* selected);
    // static private System.Int32 RaycastComparer(UnityEngine.EventSystems.RaycastResult lhs, UnityEngine.EventSystems.RaycastResult rhs)
    // Offset: 0x14679D4
    static int RaycastComparer(UnityEngine::EventSystems::RaycastResult lhs, UnityEngine::EventSystems::RaycastResult rhs);
    // public System.Void RaycastAll(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> raycastResults)
    // Offset: 0x1467D70
    void RaycastAll(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* raycastResults);
    // public System.Boolean IsPointerOverGameObject()
    // Offset: 0x1467F2C
    bool IsPointerOverGameObject();
    // public System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x1467F34
    bool IsPointerOverGameObject(int pointerId);
    // private System.Void TickModules()
    // Offset: 0x1468144
    void TickModules();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x1468248
    void OnApplicationFocus(bool hasFocus);
    // protected System.Void Update()
    // Offset: 0x1468254
    void Update();
    // private System.Void ChangeEventModule(UnityEngine.EventSystems.BaseInputModule module)
    // Offset: 0x14684E8
    void ChangeEventModule(UnityEngine::EventSystems::BaseInputModule* module);
    // protected System.Void .ctor()
    // Offset: 0x14678A8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::EventSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSystem*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1468724
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override System.Void OnEnable()
    // Offset: 0x1467FE8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x146806C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // public override System.String ToString()
    // Offset: 0x1468600
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.EventSystems.EventSystem
  #pragma pack(pop)
  static check_size<sizeof(EventSystem), 72 + sizeof(UnityEngine::EventSystems::BaseEventData*)> __UnityEngine_EventSystems_EventSystemSizeCheck;
  static_assert(sizeof(EventSystem) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventSystem*, "UnityEngine.EventSystems", "EventSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_current
// Il2CppName: get_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::EventSystem* (*)()>(&UnityEngine::EventSystems::EventSystem::get_current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::set_current
// Il2CppName: set_current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::EventSystems::EventSystem*)>(&UnityEngine::EventSystems::EventSystem::set_current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "EventSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "set_current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents
// Il2CppName: get_sendNavigationEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_sendNavigationEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_sendNavigationEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents
// Il2CppName: set_sendNavigationEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(bool)>(&UnityEngine::EventSystems::EventSystem::set_sendNavigationEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "set_sendNavigationEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold
// Il2CppName: get_pixelDragThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_pixelDragThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_pixelDragThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold
// Il2CppName: set_pixelDragThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(int)>(&UnityEngine::EventSystems::EventSystem::set_pixelDragThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "set_pixelDragThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_currentInputModule
// Il2CppName: get_currentInputModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::BaseInputModule* (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_currentInputModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_currentInputModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject
// Il2CppName: get_firstSelectedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_firstSelectedGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_firstSelectedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject
// Il2CppName: set_firstSelectedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::GameObject*)>(&UnityEngine::EventSystems::EventSystem::set_firstSelectedGameObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "set_firstSelectedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject
// Il2CppName: get_currentSelectedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_currentSelectedGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_currentSelectedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject
// Il2CppName: get_lastSelectedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_lastSelectedGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_lastSelectedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_isFocused
// Il2CppName: get_isFocused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_isFocused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_isFocused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_alreadySelecting
// Il2CppName: get_alreadySelecting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_alreadySelecting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_alreadySelecting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::get_baseEventDataCache
// Il2CppName: get_baseEventDataCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::BaseEventData* (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::get_baseEventDataCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "get_baseEventDataCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::UpdateModules
// Il2CppName: UpdateModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::UpdateModules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "UpdateModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::SetSelectedGameObject
// Il2CppName: SetSelectedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::GameObject*, UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* pointer = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "SetSelectedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected, pointer});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::SetSelectedGameObject
// Il2CppName: SetSelectedGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::GameObject*)>(&UnityEngine::EventSystems::EventSystem::SetSelectedGameObject)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "SetSelectedGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::RaycastComparer
// Il2CppName: RaycastComparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::EventSystems::RaycastResult, UnityEngine::EventSystems::RaycastResult)>(&UnityEngine::EventSystems::EventSystem::RaycastComparer)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "RaycastComparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::RaycastAll
// Il2CppName: RaycastAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::EventSystems::PointerEventData*, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>*)>(&UnityEngine::EventSystems::EventSystem::RaycastAll)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* raycastResults = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "RaycastResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "RaycastAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData, raycastResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject
// Il2CppName: IsPointerOverGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "IsPointerOverGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject
// Il2CppName: IsPointerOverGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::EventSystem::*)(int)>(&UnityEngine::EventSystems::EventSystem::IsPointerOverGameObject)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "IsPointerOverGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::TickModules
// Il2CppName: TickModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::TickModules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "TickModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(bool)>(&UnityEngine::EventSystems::EventSystem::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::ChangeEventModule
// Il2CppName: ChangeEventModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)(UnityEngine::EventSystems::BaseInputModule*)>(&UnityEngine::EventSystems::EventSystem::ChangeEventModule)> {
  static const MethodInfo* get() {
    static auto* module = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseInputModule")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "ChangeEventModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{module});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EventSystems::EventSystem::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventSystem::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::EventSystem::*)()>(&UnityEngine::EventSystems::EventSystem::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventSystem*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
