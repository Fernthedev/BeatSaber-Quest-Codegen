// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ToggleBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleBinder*, "HMUI", "ToggleBinder");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ToggleBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class ToggleBinder : public ::Il2CppObject {
    public:
    // Nested type: ::HMUI::ToggleBinder::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,UnityEngine.Events.UnityAction`1<System.Boolean>>> _bindings
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>* bindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>*) == 0x8);
    // private System.Boolean _enabled
    // Size: 0x1
    // Offset: 0x18
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,UnityEngine.Events.UnityAction`1<System.Boolean>>> _bindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>*& dyn__bindings();
    // Get instance field reference: private System.Boolean _enabled
    [[deprecated("Use field access instead!")]] bool& dyn__enabled();
    // public System.Void .ctor()
    // Offset: 0x16E5D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ToggleBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleBinder*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,System.Action`1<System.Boolean>>> bindingData)
    // Offset: 0x16E5E00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*>*>* bindingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ToggleBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleBinder*, creationType>(bindingData)));
    }
    // private System.Void Init()
    // Offset: 0x16E5D98
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Toggle,System.Action`1<System.Boolean>>> bindingData)
    // Offset: 0x16E5E40
    void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*>*>* bindingData);
    // public System.Void AddBinding(UnityEngine.UI.Toggle toggle, System.Action`1<System.Boolean> action)
    // Offset: 0x16E5F48
    void AddBinding(::UnityEngine::UI::Toggle* toggle, ::System::Action_1<bool>* action);
    // public System.Void AddBinding(UnityEngine.UI.Toggle toggle, System.Boolean enabled, System.Action action)
    // Offset: 0x16E6008
    void AddBinding(::UnityEngine::UI::Toggle* toggle, bool enabled, ::System::Action* action);
    // public System.Void ClearBindings()
    // Offset: 0x16E6100
    void ClearBindings();
    // public System.Void Disable()
    // Offset: 0x16E6298
    void Disable();
    // public System.Void Enable()
    // Offset: 0x16E6420
    void Enable();
  }; // HMUI.ToggleBinder
  #pragma pack(pop)
  static check_size<sizeof(ToggleBinder), 24 + sizeof(bool)> __HMUI_ToggleBinderSizeCheck;
  static_assert(sizeof(ToggleBinder) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ToggleBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ToggleBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ToggleBinder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)()>(&HMUI::ToggleBinder::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleBinder::AddBindings
// Il2CppName: AddBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*>*>*)>(&HMUI::ToggleBinder::AddBindings)> {
  static const MethodInfo* get() {
    static auto* bindingData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "AddBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingData});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleBinder::AddBinding
// Il2CppName: AddBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)(::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*)>(&HMUI::ToggleBinder::AddBinding)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "AddBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle, action});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleBinder::AddBinding
// Il2CppName: AddBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)(::UnityEngine::UI::Toggle*, bool, ::System::Action*)>(&HMUI::ToggleBinder::AddBinding)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "AddBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle, enabled, action});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)()>(&HMUI::ToggleBinder::ClearBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleBinder::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)()>(&HMUI::ToggleBinder::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleBinder::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::*)()>(&HMUI::ToggleBinder::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
