// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TransitionType because it is already included!
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SelectableCell
  // [RequireComponent] Offset: DF7AB0
  class SelectableCell : public HMUI::Interactable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    // Nested type: HMUI::SelectableCell::TransitionType
    struct TransitionType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.SelectableCell/TransitionType
    struct TransitionType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: TransitionType
      constexpr TransitionType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.SelectableCell/TransitionType Instant
      static constexpr const int Instant = 0;
      // Get static field: static public HMUI.SelectableCell/TransitionType Instant
      static HMUI::SelectableCell::TransitionType _get_Instant();
      // Set static field: static public HMUI.SelectableCell/TransitionType Instant
      static void _set_Instant(HMUI::SelectableCell::TransitionType value);
      // static field const value: static public HMUI.SelectableCell/TransitionType Animated
      static constexpr const int Animated = 1;
      // Get static field: static public HMUI.SelectableCell/TransitionType Animated
      static HMUI::SelectableCell::TransitionType _get_Animated();
      // Set static field: static public HMUI.SelectableCell/TransitionType Animated
      static void _set_Animated(HMUI::SelectableCell::TransitionType value);
    }; // HMUI.SelectableCell/TransitionType
    #pragma pack(pop)
    static check_size<sizeof(SelectableCell::TransitionType), 0 + sizeof(int)> __HMUI_SelectableCell_TransitionTypeSizeCheck;
    static_assert(sizeof(SelectableCell::TransitionType) == 0x4);
    // [SignalSenderAttribute] Offset: 0xDF9778
    // private Signal _wasPressedSignal
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::Signal* wasPressedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF97B0
    // private System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType,System.Object> selectionDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* selectionDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF97C0
    // private System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType> highlightDidChangeEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* highlightDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF97D0
    // private System.Boolean <highlighted>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDF97E0
    // private System.Boolean <selected>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SelectableCell
    SelectableCell(GlobalNamespace::Signal* wasPressedSignal_ = {}, System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* selectionDidChangeEvent_ = {}, System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* highlightDidChangeEvent_ = {}, bool highlighted_ = {}, bool selected_ = {}) noexcept : wasPressedSignal{wasPressedSignal_}, selectionDidChangeEvent{selectionDidChangeEvent_}, highlightDidChangeEvent{highlightDidChangeEvent_}, highlighted{highlighted_}, selected{selected_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // public System.Void add_selectionDidChangeEvent(System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType,System.Object> value)
    // Offset: 0x12BAA94
    void add_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* value);
    // public System.Void remove_selectionDidChangeEvent(System.Action`3<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType,System.Object> value)
    // Offset: 0x12BA9F0
    void remove_selectionDidChangeEvent(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>* value);
    // public System.Void add_highlightDidChangeEvent(System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType> value)
    // Offset: 0x12BAFAC
    void add_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* value);
    // public System.Void remove_highlightDidChangeEvent(System.Action`2<HMUI.SelectableCell,HMUI.SelectableCell/TransitionType> value)
    // Offset: 0x12BB050
    void remove_highlightDidChangeEvent(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>* value);
    // public System.Boolean get_highlighted()
    // Offset: 0x12BB0F4
    bool get_highlighted();
    // private System.Void set_highlighted(System.Boolean value)
    // Offset: 0x12BB0FC
    void set_highlighted(bool value);
    // public System.Boolean get_selected()
    // Offset: 0x12BB108
    bool get_selected();
    // private System.Void set_selected(System.Boolean value)
    // Offset: 0x12BB110
    void set_selected(bool value);
    // protected System.Void Start()
    // Offset: 0x12BB11C
    void Start();
    // public System.Void SetSelected(System.Boolean value, HMUI.SelectableCell/TransitionType transitionType, System.Object changeOwner, System.Boolean ignoreCurrentValue)
    // Offset: 0x12BAB38
    void SetSelected(bool value, HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* changeOwner, bool ignoreCurrentValue);
    // public System.Void ClearHighlight(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x12BAC00
    void ClearHighlight(HMUI::SelectableCell::TransitionType transitionType);
    // private System.Void SetHighlight(System.Boolean value, HMUI.SelectableCell/TransitionType transitionType, System.Boolean ignoreCurrentValue)
    // Offset: 0x12BB158
    void SetHighlight(bool value, HMUI::SelectableCell::TransitionType transitionType, bool ignoreCurrentValue);
    // protected System.Void InternalToggle()
    // Offset: 0xFFFFFFFF
    void InternalToggle();
    // protected System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x12BB218
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x12BB21C
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12BB220
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12BB2EC
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12BB39C
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12BB3AC
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.Void .ctor()
    // Offset: 0x12BAF9C
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::SelectableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableCell*, creationType>()));
    }
  }; // HMUI.SelectableCell
  #pragma pack(pop)
  static check_size<sizeof(SelectableCell), 57 + sizeof(bool)> __HMUI_SelectableCellSizeCheck;
  static_assert(sizeof(SelectableCell) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCell*, "HMUI", "SelectableCell");
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCell::TransitionType, "HMUI", "SelectableCell/TransitionType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SelectableCell::add_selectionDidChangeEvent
// Il2CppName: add_selectionDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*)>(&HMUI::SelectableCell::add_selectionDidChangeEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "add_selectionDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::remove_selectionDidChangeEvent
// Il2CppName: remove_selectionDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_3<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType, ::Il2CppObject*>*)>(&HMUI::SelectableCell::remove_selectionDidChangeEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "remove_selectionDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::add_highlightDidChangeEvent
// Il2CppName: add_highlightDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>*)>(&HMUI::SelectableCell::add_highlightDidChangeEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "add_highlightDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::remove_highlightDidChangeEvent
// Il2CppName: remove_highlightDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(System::Action_2<HMUI::SelectableCell*, HMUI::SelectableCell::TransitionType>*)>(&HMUI::SelectableCell::remove_highlightDidChangeEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell"), ::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "remove_highlightDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::get_highlighted
// Il2CppName: get_highlighted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::get_highlighted)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "get_highlighted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::set_highlighted
// Il2CppName: set_highlighted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool)>(&HMUI::SelectableCell::set_highlighted)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "set_highlighted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::get_selected
// Il2CppName: get_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::get_selected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "get_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::set_selected
// Il2CppName: set_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool)>(&HMUI::SelectableCell::set_selected)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "set_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::SetSelected
// Il2CppName: SetSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool, HMUI::SelectableCell::TransitionType, ::Il2CppObject*, bool)>(&HMUI::SelectableCell::SetSelected)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* changeOwner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* ignoreCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "SetSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, transitionType, changeOwner, ignoreCurrentValue});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::ClearHighlight
// Il2CppName: ClearHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCell::ClearHighlight)> {
  const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "ClearHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::SetHighlight
// Il2CppName: SetHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(bool, HMUI::SelectableCell::TransitionType, bool)>(&HMUI::SelectableCell::SetHighlight)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* ignoreCurrentValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "SetHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, transitionType, ignoreCurrentValue});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::InternalToggle
// Il2CppName: InternalToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)()>(&HMUI::SelectableCell::InternalToggle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "InternalToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCell::SelectionDidChange)> {
  const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(HMUI::SelectableCell::TransitionType)>(&HMUI::SelectableCell::HighlightDidChange)> {
  const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::SelectableCell::OnPointerClick)> {
  const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::BaseEventData*)>(&HMUI::SelectableCell::OnSubmit)> {
  const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::SelectableCell::OnPointerEnter)> {
  const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SelectableCell::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::SelectableCell::OnPointerExit)> {
  const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SelectableCell*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::SelectableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
