// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.ICancelHandler
#include "UnityEngine/EventSystems/ICancelHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IUpdateSelectedHandler
#include "UnityEngine/EventSystems/IUpdateSelectedHandler.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IEndDragHandler
#include "UnityEngine/EventSystems/IEndDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IScrollHandler
#include "UnityEngine/EventSystems/IScrollHandler.hpp"
// Including type: UnityEngine.EventSystems.IMoveHandler
#include "UnityEngine/EventSystems/IMoveHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.EventSystems.ISelectHandler
#include "UnityEngine/EventSystems/ISelectHandler.hpp"
// Including type: UnityEngine.EventSystems.IDeselectHandler
#include "UnityEngine/EventSystems/IDeselectHandler.hpp"
// Including type: UnityEngine.EventSystems.IDropHandler
#include "UnityEngine/EventSystems/IDropHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventTriggerType
  struct EventTriggerType;
  // Forward declaring type: BaseEventData
  class BaseEventData;
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.EventTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DE6470
  class EventTrigger : public UnityEngine::MonoBehaviour/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::ICancelHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IUpdateSelectedHandler, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IEndDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::EventSystems::IScrollHandler, public UnityEngine::EventSystems::IMoveHandler, public UnityEngine::EventSystems::IPointerDownHandler, public UnityEngine::EventSystems::IPointerUpHandler, public UnityEngine::EventSystems::IPointerExitHandler, public UnityEngine::EventSystems::ISelectHandler, public UnityEngine::EventSystems::IDeselectHandler, public UnityEngine::EventSystems::IDropHandler*/ {
    public:
    // Nested type: UnityEngine::EventSystems::EventTrigger::TriggerEvent
    class TriggerEvent;
    // Nested type: UnityEngine::EventSystems::EventTrigger::Entry
    class Entry;
    // [FormerlySerializedAsAttribute] Offset: 0xDE84D4
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> m_Delegates
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* m_Delegates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>*) == 0x8);
    // Creating value type constructor for type: EventTrigger
    EventTrigger(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* m_Delegates_ = {}) noexcept : m_Delegates{m_Delegates_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ICancelHandler
    operator UnityEngine::EventSystems::ICancelHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ICancelHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IUpdateSelectedHandler
    operator UnityEngine::EventSystems::IUpdateSelectedHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IUpdateSelectedHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IBeginDragHandler
    operator UnityEngine::EventSystems::IBeginDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IBeginDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IDragHandler
    operator UnityEngine::EventSystems::IDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IEndDragHandler
    operator UnityEngine::EventSystems::IEndDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IEndDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IInitializePotentialDragHandler
    operator UnityEngine::EventSystems::IInitializePotentialDragHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IScrollHandler
    operator UnityEngine::EventSystems::IScrollHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IScrollHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IMoveHandler
    operator UnityEngine::EventSystems::IMoveHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IMoveHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerDownHandler
    operator UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerUpHandler
    operator UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISelectHandler
    operator UnityEngine::EventSystems::ISelectHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISelectHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IDeselectHandler
    operator UnityEngine::EventSystems::IDeselectHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IDeselectHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IDropHandler
    operator UnityEngine::EventSystems::IDropHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IDropHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> m_Delegates
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* _get_m_Delegates();
    // Set instance field: private System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> m_Delegates
    void _set_m_Delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* value);
    // public System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> get_delegates()
    // Offset: 0x14687D8
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* get_delegates();
    // public System.Void set_delegates(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> value)
    // Offset: 0x1468850
    void set_delegates(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* value);
    // public System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> get_triggers()
    // Offset: 0x14687DC
    System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* get_triggers();
    // public System.Void set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry> value)
    // Offset: 0x1468860
    void set_triggers(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* value);
    // private System.Void Execute(UnityEngine.EventSystems.EventTriggerType id, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1468868
    void Execute(UnityEngine::EventSystems::EventTriggerType id, UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1468950
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x146895C
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1468968
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrop(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1468974
    void OnDrop(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1468980
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x146898C
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1468998
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSelect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x14689A4
    void OnSelect(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnDeselect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x14689B0
    void OnDeselect(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnScroll(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x14689BC
    void OnScroll(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0x14689C8
    void OnMove(UnityEngine::EventSystems::AxisEventData* eventData);
    // public System.Void OnUpdateSelected(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x14689D4
    void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x14689E0
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x14689EC
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x14689F8
    void OnEndDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1468A04
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1468A10
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
    // protected System.Void .ctor()
    // Offset: 0x1468858
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::EventTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventTrigger*, creationType>()));
    }
  }; // UnityEngine.EventSystems.EventTrigger
  #pragma pack(pop)
  static check_size<sizeof(EventTrigger), 24 + sizeof(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>*)> __UnityEngine_EventSystems_EventTriggerSizeCheck;
  static_assert(sizeof(EventTrigger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventTrigger*, "UnityEngine.EventSystems", "EventTrigger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::get_delegates
// Il2CppName: get_delegates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* (UnityEngine::EventSystems::EventTrigger::*)()>(&UnityEngine::EventSystems::EventTrigger::get_delegates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "get_delegates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::set_delegates
// Il2CppName: set_delegates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>*)>(&UnityEngine::EventSystems::EventTrigger::set_delegates)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "EventTrigger/Entry")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "set_delegates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::get_triggers
// Il2CppName: get_triggers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>* (UnityEngine::EventSystems::EventTrigger::*)()>(&UnityEngine::EventSystems::EventTrigger::get_triggers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "get_triggers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::set_triggers
// Il2CppName: set_triggers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(System::Collections::Generic::List_1<UnityEngine::EventSystems::EventTrigger::Entry*>*)>(&UnityEngine::EventSystems::EventTrigger::set_triggers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "EventTrigger/Entry")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "set_triggers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::EventTriggerType, UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventTrigger::Execute)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "EventTriggerType")->byval_arg;
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnDrag
// Il2CppName: OnDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnDrop
// Il2CppName: OnDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnDrop)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnSelect
// Il2CppName: OnSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnSelect)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnDeselect
// Il2CppName: OnDeselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnDeselect)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnDeselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnScroll
// Il2CppName: OnScroll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnScroll)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnScroll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnMove
// Il2CppName: OnMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::AxisEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnMove)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "AxisEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnUpdateSelected
// Il2CppName: OnUpdateSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnUpdateSelected)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnUpdateSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnInitializePotentialDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnInitializePotentialDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnBeginDrag
// Il2CppName: OnBeginDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnBeginDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnBeginDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnEndDrag
// Il2CppName: OnEndDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnEndDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnEndDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnSubmit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::OnCancel
// Il2CppName: OnCancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::EventTrigger::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::EventTrigger::OnCancel)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::EventTrigger*), "OnCancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
