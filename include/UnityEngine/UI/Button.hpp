// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x100
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Button
  // [AddComponentMenu] Offset: DC4DFC
  class Button : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler*/ {
    public:
    // Nested type: UnityEngine::UI::Button::ButtonClickedEvent
    class ButtonClickedEvent;
    // Nested type: UnityEngine::UI::Button::$OnFinishSubmit$d__9
    class $OnFinishSubmit$d__9;
    // [FormerlySerializedAsAttribute] Offset: 0xDC60A4
    // private UnityEngine.UI.Button/ButtonClickedEvent m_OnClick
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button::ButtonClickedEvent*) == 0x8);
    // Creating value type constructor for type: Button
    Button(UnityEngine::UI::Button::ButtonClickedEvent* m_OnClick_ = {}) noexcept : m_OnClick{m_OnClick_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // public UnityEngine.UI.Button/ButtonClickedEvent get_onClick()
    // Offset: 0x1438AE8
    UnityEngine::UI::Button::ButtonClickedEvent* get_onClick();
    // public System.Void set_onClick(UnityEngine.UI.Button/ButtonClickedEvent value)
    // Offset: 0x1438AF0
    void set_onClick(UnityEngine::UI::Button::ButtonClickedEvent* value);
    // private System.Void Press()
    // Offset: 0x1438AF8
    void Press();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1438B98
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1438BB8
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // private System.Collections.IEnumerator OnFinishSubmit()
    // Offset: 0x1438C40
    System::Collections::IEnumerator* OnFinishSubmit();
    // protected System.Void .ctor()
    // Offset: 0x1438A58
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Button* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Button::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Button*, creationType>()));
    }
  }; // UnityEngine.UI.Button
  #pragma pack(pop)
  static check_size<sizeof(Button), 248 + sizeof(UnityEngine::UI::Button::ButtonClickedEvent*)> __UnityEngine_UI_ButtonSizeCheck;
  static_assert(sizeof(Button) == 0x100);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Button*, "UnityEngine.UI", "Button");
// Writing includes for template specializations
#include "UnityEngine/UI/Button_ButtonClickedEvent.hpp"
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "UnityEngine/EventSystems/BaseEventData.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Button::get_onClick
// Il2CppName: get_onClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button::ButtonClickedEvent* (UnityEngine::UI::Button::*)()>(&UnityEngine::UI::Button::get_onClick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "get_onClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::set_onClick
// Il2CppName: set_onClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)(UnityEngine::UI::Button::ButtonClickedEvent*)>(&UnityEngine::UI::Button::set_onClick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "set_onClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Button::ButtonClickedEvent*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::Press
// Il2CppName: Press
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)()>(&UnityEngine::UI::Button::Press)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "Press", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::UI::Button::OnPointerClick)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::OnSubmit
// Il2CppName: OnSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Button::*)(UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::UI::Button::OnSubmit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "OnSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::BaseEventData*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::OnFinishSubmit
// Il2CppName: OnFinishSubmit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::UI::Button::*)()>(&UnityEngine::UI::Button::OnFinishSubmit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Button*), "OnFinishSubmit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Button::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
