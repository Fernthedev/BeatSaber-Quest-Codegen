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
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
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
  // Forward declaring type: InputFieldViewChangeBinder
  class InputFieldViewChangeBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::InputFieldViewChangeBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldViewChangeBinder*, "HMUI", "InputFieldViewChangeBinder");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.InputFieldViewChangeBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldViewChangeBinder : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<HMUI.InputFieldView,UnityEngine.Events.UnityAction`1<HMUI.InputFieldView>>> _bindings
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>* bindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>*) == 0x8);
    // private System.Boolean _enabled
    // Size: 0x1
    // Offset: 0x18
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<System.Tuple`2<HMUI.InputFieldView,UnityEngine.Events.UnityAction`1<HMUI.InputFieldView>>> _bindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>*& dyn__bindings();
    // Get instance field reference: private System.Boolean _enabled
    [[deprecated("Use field access instead!")]] bool& dyn__enabled();
    // public System.Void .ctor()
    // Offset: 0x16D42C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldViewChangeBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::InputFieldViewChangeBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldViewChangeBinder*, creationType>()));
    }
    // private System.Void Init()
    // Offset: 0x16D42F8
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<HMUI.InputFieldView,System.Action`1<HMUI.InputFieldView>>> bindings)
    // Offset: 0x16D4360
    void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::System::Action_1<::HMUI::InputFieldView*>*>*>* bindings);
    // public System.Void AddBinding(HMUI.InputFieldView inputField, System.Action`1<HMUI.InputFieldView> action)
    // Offset: 0x16D4468
    void AddBinding(::HMUI::InputFieldView* inputField, ::System::Action_1<::HMUI::InputFieldView*>* action);
    // public System.Void ClearBindings()
    // Offset: 0x16D4528
    void ClearBindings();
    // public System.Void Disable()
    // Offset: 0x16D46C0
    void Disable();
    // public System.Void Enable()
    // Offset: 0x16D4848
    void Enable();
  }; // HMUI.InputFieldViewChangeBinder
  #pragma pack(pop)
  static check_size<sizeof(InputFieldViewChangeBinder), 24 + sizeof(bool)> __HMUI_InputFieldViewChangeBinderSizeCheck;
  static_assert(sizeof(InputFieldViewChangeBinder) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewChangeBinder::*)()>(&HMUI::InputFieldViewChangeBinder::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewChangeBinder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::AddBindings
// Il2CppName: AddBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewChangeBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::System::Action_1<::HMUI::InputFieldView*>*>*>*)>(&HMUI::InputFieldViewChangeBinder::AddBindings)> {
  static const MethodInfo* get() {
    static auto* bindings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")})})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewChangeBinder*), "AddBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindings});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::AddBinding
// Il2CppName: AddBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewChangeBinder::*)(::HMUI::InputFieldView*, ::System::Action_1<::HMUI::InputFieldView*>*)>(&HMUI::InputFieldViewChangeBinder::AddBinding)> {
  static const MethodInfo* get() {
    static auto* inputField = &::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")->byval_arg;
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "InputFieldView")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewChangeBinder*), "AddBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputField, action});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewChangeBinder::*)()>(&HMUI::InputFieldViewChangeBinder::ClearBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewChangeBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewChangeBinder::*)()>(&HMUI::InputFieldViewChangeBinder::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewChangeBinder*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldViewChangeBinder::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldViewChangeBinder::*)()>(&HMUI::InputFieldViewChangeBinder::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldViewChangeBinder*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
