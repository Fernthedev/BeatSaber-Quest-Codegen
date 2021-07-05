// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: StepValuePicker
  class StepValuePicker : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Button _decButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* decButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _incButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* incButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0x28
    TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE21BE8
    // private System.Action decButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* decButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE21BF8
    // private System.Action incButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* incButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: StepValuePicker
    StepValuePicker(UnityEngine::UI::Button* decButton_ = {}, UnityEngine::UI::Button* incButton_ = {}, TMPro::TextMeshProUGUI* valueText_ = {}, System::Action* decButtonWasPressedEvent_ = {}, System::Action* incButtonWasPressedEvent_ = {}) noexcept : decButton{decButton_}, incButton{incButton_}, valueText{valueText_}, decButtonWasPressedEvent{decButtonWasPressedEvent_}, incButtonWasPressedEvent{incButtonWasPressedEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_decButtonWasPressedEvent(System.Action value)
    // Offset: 0x11644B0
    void add_decButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_decButtonWasPressedEvent(System.Action value)
    // Offset: 0x1164554
    void remove_decButtonWasPressedEvent(System::Action* value);
    // public System.Void add_incButtonWasPressedEvent(System.Action value)
    // Offset: 0x11645F8
    void add_incButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_incButtonWasPressedEvent(System.Action value)
    // Offset: 0x116469C
    void remove_incButtonWasPressedEvent(System::Action* value);
    // public System.String get_text()
    // Offset: 0x1164740
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x116475C
    void set_text(::Il2CppString* value);
    // public System.Void set_decButtonInteractable(System.Boolean value)
    // Offset: 0x1164778
    void set_decButtonInteractable(bool value);
    // public System.Void set_incButtonInteractable(System.Boolean value)
    // Offset: 0x1164798
    void set_incButtonInteractable(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x11647B8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1164890
    void OnDisable();
    // private System.Void IncButtonPressed()
    // Offset: 0x1164968
    void IncButtonPressed();
    // private System.Void DecButtonPressed()
    // Offset: 0x116497C
    void DecButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x1164990
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StepValuePicker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StepValuePicker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StepValuePicker*, creationType>()));
    }
  }; // StepValuePicker
  #pragma pack(pop)
  static check_size<sizeof(StepValuePicker), 56 + sizeof(System::Action*)> __GlobalNamespace_StepValuePickerSizeCheck;
  static_assert(sizeof(StepValuePicker) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StepValuePicker*, "", "StepValuePicker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::add_decButtonWasPressedEvent
// Il2CppName: add_decButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(System::Action*)>(&GlobalNamespace::StepValuePicker::add_decButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "add_decButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::remove_decButtonWasPressedEvent
// Il2CppName: remove_decButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(System::Action*)>(&GlobalNamespace::StepValuePicker::remove_decButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "remove_decButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::add_incButtonWasPressedEvent
// Il2CppName: add_incButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(System::Action*)>(&GlobalNamespace::StepValuePicker::add_incButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "add_incButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::remove_incButtonWasPressedEvent
// Il2CppName: remove_incButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(System::Action*)>(&GlobalNamespace::StepValuePicker::remove_incButtonWasPressedEvent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "remove_incButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::StepValuePicker::*)()>(&GlobalNamespace::StepValuePicker::get_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(::Il2CppString*)>(&GlobalNamespace::StepValuePicker::set_text)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::set_decButtonInteractable
// Il2CppName: set_decButtonInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(bool)>(&GlobalNamespace::StepValuePicker::set_decButtonInteractable)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "set_decButtonInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::set_incButtonInteractable
// Il2CppName: set_incButtonInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)(bool)>(&GlobalNamespace::StepValuePicker::set_incButtonInteractable)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "set_incButtonInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)()>(&GlobalNamespace::StepValuePicker::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)()>(&GlobalNamespace::StepValuePicker::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::IncButtonPressed
// Il2CppName: IncButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)()>(&GlobalNamespace::StepValuePicker::IncButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "IncButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::DecButtonPressed
// Il2CppName: DecButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StepValuePicker::*)()>(&GlobalNamespace::StepValuePicker::DecButtonPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StepValuePicker*), "DecButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StepValuePicker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
