// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ToggleGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: DE624C
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class ToggleGroup : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // Nested type: UnityEngine::UI::ToggleGroup::$$c
    class $$c;
    // private System.Boolean m_AllowSwitchOff
    // Size: 0x1
    // Offset: 0x18
    bool m_AllowSwitchOff;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_AllowSwitchOff and: m_Toggles
    char __padding0[0x7] = {};
    // protected System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* m_Toggles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>*) == 0x8);
    // Creating value type constructor for type: ToggleGroup
    ToggleGroup(bool m_AllowSwitchOff_ = {}, System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* m_Toggles_ = {}) noexcept : m_AllowSwitchOff{m_AllowSwitchOff_}, m_Toggles{m_Toggles_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private System.Boolean m_AllowSwitchOff
    bool _get_m_AllowSwitchOff();
    // Set instance field: private System.Boolean m_AllowSwitchOff
    void _set_m_AllowSwitchOff(bool value);
    // Get instance field: protected System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* _get_m_Toggles();
    // Set instance field: protected System.Collections.Generic.List`1<UnityEngine.UI.Toggle> m_Toggles
    void _set_m_Toggles(System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>* value);
    // public System.Boolean get_allowSwitchOff()
    // Offset: 0x23C80EC
    bool get_allowSwitchOff();
    // public System.Void set_allowSwitchOff(System.Boolean value)
    // Offset: 0x23C80F4
    void set_allowSwitchOff(bool value);
    // private System.Void ValidateToggleIsInGroup(UnityEngine.UI.Toggle toggle)
    // Offset: 0x23C8198
    void ValidateToggleIsInGroup(UnityEngine::UI::Toggle* toggle);
    // public System.Void NotifyToggleOn(UnityEngine.UI.Toggle toggle, System.Boolean sendCallback)
    // Offset: 0x23C7DD8
    void NotifyToggleOn(UnityEngine::UI::Toggle* toggle, bool sendCallback);
    // public System.Void UnregisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x23C7CA8
    void UnregisterToggle(UnityEngine::UI::Toggle* toggle);
    // public System.Void RegisterToggle(UnityEngine.UI.Toggle toggle)
    // Offset: 0x23C7D40
    void RegisterToggle(UnityEngine::UI::Toggle* toggle);
    // public System.Void EnsureValidState()
    // Offset: 0x23C7918
    void EnsureValidState();
    // public System.Boolean AnyTogglesOn()
    // Offset: 0x23C7F24
    bool AnyTogglesOn();
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> ActiveToggles()
    // Offset: 0x23C82EC
    System::Collections::Generic::IEnumerable_1<UnityEngine::UI::Toggle*>* ActiveToggles();
    // public System.Void SetAllTogglesOff(System.Boolean sendCallback)
    // Offset: 0x23C83DC
    void SetAllTogglesOff(bool sendCallback);
    // protected System.Void .ctor()
    // Offset: 0x23C8100
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ToggleGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleGroup*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x23C8170
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
  }; // UnityEngine.UI.ToggleGroup
  #pragma pack(pop)
  static check_size<sizeof(ToggleGroup), 32 + sizeof(System::Collections::Generic::List_1<UnityEngine::UI::Toggle*>*)> __UnityEngine_UI_ToggleGroupSizeCheck;
  static_assert(sizeof(ToggleGroup) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ToggleGroup*, "UnityEngine.UI", "ToggleGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::get_allowSwitchOff
// Il2CppName: get_allowSwitchOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::get_allowSwitchOff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "get_allowSwitchOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::set_allowSwitchOff
// Il2CppName: set_allowSwitchOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(bool)>(&UnityEngine::UI::ToggleGroup::set_allowSwitchOff)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "set_allowSwitchOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup
// Il2CppName: ValidateToggleIsInGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "ValidateToggleIsInGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::NotifyToggleOn
// Il2CppName: NotifyToggleOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(UnityEngine::UI::Toggle*, bool)>(&UnityEngine::UI::ToggleGroup::NotifyToggleOn)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "NotifyToggleOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle, sendCallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::UnregisterToggle
// Il2CppName: UnregisterToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::UnregisterToggle)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "UnregisterToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::RegisterToggle
// Il2CppName: RegisterToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(UnityEngine::UI::Toggle*)>(&UnityEngine::UI::ToggleGroup::RegisterToggle)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "RegisterToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::EnsureValidState
// Il2CppName: EnsureValidState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::EnsureValidState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "EnsureValidState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::AnyTogglesOn
// Il2CppName: AnyTogglesOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::AnyTogglesOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "AnyTogglesOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::ActiveToggles
// Il2CppName: ActiveToggles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::UI::Toggle*>* (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::ActiveToggles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "ActiveToggles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::SetAllTogglesOff
// Il2CppName: SetAllTogglesOff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)(bool)>(&UnityEngine::UI::ToggleGroup::SetAllTogglesOff)> {
  static const MethodInfo* get() {
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "SetAllTogglesOff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sendCallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ToggleGroup::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ToggleGroup::*)()>(&UnityEngine::UI::ToggleGroup::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ToggleGroup*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
