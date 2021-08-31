// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextMeshProButton
  class TextMeshProButton;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: UIKeyboard
  // [TokenAttribute] Offset: FFFFFFFF
  class UIKeyboard : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::UIKeyboard::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // private TextMeshProButton _keyButtonPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::TextMeshProButton* keyButtonPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextMeshProButton*) == 0x8);
    // private System.Action`1<System.Char> textKeyWasPressedEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<::Il2CppChar>* textKeyWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppChar>*) == 0x8);
    // private System.Action deleteButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* deleteButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action okButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* okButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action cancelButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* cancelButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Boolean _okButtonInteractivity
    // Size: 0x1
    // Offset: 0x50
    bool okButtonInteractivity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hideCancelButton
    // Size: 0x1
    // Offset: 0x51
    bool hideCancelButton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UIKeyboard
    UIKeyboard(GlobalNamespace::TextMeshProButton* keyButtonPrefab_ = {}, System::Action_1<::Il2CppChar>* textKeyWasPressedEvent_ = {}, System::Action* deleteButtonWasPressedEvent_ = {}, System::Action* okButtonWasPressedEvent_ = {}, System::Action* cancelButtonWasPressedEvent_ = {}, UnityEngine::UI::Button* okButton_ = {}, UnityEngine::UI::Button* cancelButton_ = {}, bool okButtonInteractivity_ = {}, bool hideCancelButton_ = {}) noexcept : keyButtonPrefab{keyButtonPrefab_}, textKeyWasPressedEvent{textKeyWasPressedEvent_}, deleteButtonWasPressedEvent{deleteButtonWasPressedEvent_}, okButtonWasPressedEvent{okButtonWasPressedEvent_}, cancelButtonWasPressedEvent{cancelButtonWasPressedEvent_}, okButton{okButton_}, cancelButton{cancelButton_}, okButtonInteractivity{okButtonInteractivity_}, hideCancelButton{hideCancelButton_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TextMeshProButton _keyButtonPrefab
    GlobalNamespace::TextMeshProButton*& dyn__keyButtonPrefab();
    // Get instance field reference: private System.Action`1<System.Char> textKeyWasPressedEvent
    System::Action_1<::Il2CppChar>*& dyn_textKeyWasPressedEvent();
    // Get instance field reference: private System.Action deleteButtonWasPressedEvent
    System::Action*& dyn_deleteButtonWasPressedEvent();
    // Get instance field reference: private System.Action okButtonWasPressedEvent
    System::Action*& dyn_okButtonWasPressedEvent();
    // Get instance field reference: private System.Action cancelButtonWasPressedEvent
    System::Action*& dyn_cancelButtonWasPressedEvent();
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelButton
    UnityEngine::UI::Button*& dyn__cancelButton();
    // Get instance field reference: private System.Boolean _okButtonInteractivity
    bool& dyn__okButtonInteractivity();
    // Get instance field reference: private System.Boolean _hideCancelButton
    bool& dyn__hideCancelButton();
    // public System.Void set_enableOkButtonInteractivity(System.Boolean value)
    // Offset: 0x135209C
    void set_enableOkButtonInteractivity(bool value);
    // public System.Void set_hideCancelButton(System.Boolean value)
    // Offset: 0x135214C
    void set_hideCancelButton(bool value);
    // public System.Void add_textKeyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0x1351B7C
    void add_textKeyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void remove_textKeyWasPressedEvent(System.Action`1<System.Char> value)
    // Offset: 0x1351C20
    void remove_textKeyWasPressedEvent(System::Action_1<::Il2CppChar>* value);
    // public System.Void add_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0x1351CC4
    void add_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_deleteButtonWasPressedEvent(System.Action value)
    // Offset: 0x1351D68
    void remove_deleteButtonWasPressedEvent(System::Action* value);
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x1351E0C
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0x1351EB0
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0x1351F54
    void add_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0x1351FF8
    void remove_cancelButtonWasPressedEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x135220C
    void Awake();
    // private System.Void <Awake>b__21_0()
    // Offset: 0x1352CDC
    void $Awake$b__21_0();
    // private System.Void <Awake>b__21_1()
    // Offset: 0x1352CF0
    void $Awake$b__21_1();
    // private System.Void <Awake>b__21_2()
    // Offset: 0x1352D0C
    void $Awake$b__21_2();
    // private System.Void <Awake>b__21_3()
    // Offset: 0x1352D28
    void $Awake$b__21_3();
    // public System.Void .ctor()
    // Offset: 0x1352CD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UIKeyboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboard*, creationType>()));
    }
  }; // UIKeyboard
  #pragma pack(pop)
  static check_size<sizeof(UIKeyboard), 81 + sizeof(bool)> __GlobalNamespace_UIKeyboardSizeCheck;
  static_assert(sizeof(UIKeyboard) == 0x52);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboard*, "", "UIKeyboard");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::set_enableOkButtonInteractivity
// Il2CppName: set_enableOkButtonInteractivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(bool)>(&GlobalNamespace::UIKeyboard::set_enableOkButtonInteractivity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "set_enableOkButtonInteractivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::set_hideCancelButton
// Il2CppName: set_hideCancelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(bool)>(&GlobalNamespace::UIKeyboard::set_hideCancelButton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "set_hideCancelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::add_textKeyWasPressedEvent
// Il2CppName: add_textKeyWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action_1<::Il2CppChar>*)>(&GlobalNamespace::UIKeyboard::add_textKeyWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "add_textKeyWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::remove_textKeyWasPressedEvent
// Il2CppName: remove_textKeyWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action_1<::Il2CppChar>*)>(&GlobalNamespace::UIKeyboard::remove_textKeyWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "remove_textKeyWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::add_deleteButtonWasPressedEvent
// Il2CppName: add_deleteButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action*)>(&GlobalNamespace::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "add_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::remove_deleteButtonWasPressedEvent
// Il2CppName: remove_deleteButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action*)>(&GlobalNamespace::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "remove_deleteButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::add_okButtonWasPressedEvent
// Il2CppName: add_okButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action*)>(&GlobalNamespace::UIKeyboard::add_okButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "add_okButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::remove_okButtonWasPressedEvent
// Il2CppName: remove_okButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action*)>(&GlobalNamespace::UIKeyboard::remove_okButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "remove_okButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::add_cancelButtonWasPressedEvent
// Il2CppName: add_cancelButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action*)>(&GlobalNamespace::UIKeyboard::add_cancelButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "add_cancelButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::remove_cancelButtonWasPressedEvent
// Il2CppName: remove_cancelButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)(System::Action*)>(&GlobalNamespace::UIKeyboard::remove_cancelButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "remove_cancelButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)()>(&GlobalNamespace::UIKeyboard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::$Awake$b__21_0
// Il2CppName: <Awake>b__21_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)()>(&GlobalNamespace::UIKeyboard::$Awake$b__21_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "<Awake>b__21_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::$Awake$b__21_1
// Il2CppName: <Awake>b__21_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)()>(&GlobalNamespace::UIKeyboard::$Awake$b__21_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "<Awake>b__21_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::$Awake$b__21_2
// Il2CppName: <Awake>b__21_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)()>(&GlobalNamespace::UIKeyboard::$Awake$b__21_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "<Awake>b__21_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::$Awake$b__21_3
// Il2CppName: <Awake>b__21_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UIKeyboard::*)()>(&GlobalNamespace::UIKeyboard::$Awake$b__21_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UIKeyboard*), "<Awake>b__21_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UIKeyboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
