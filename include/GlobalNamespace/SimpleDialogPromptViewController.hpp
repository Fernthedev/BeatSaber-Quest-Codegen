// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: SimpleDialogPromptViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleDialogPromptViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::SimpleDialogPromptViewController::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // private TMPro.TextMeshProUGUI _titleText
    // Size: 0x8
    // Offset: 0x70
    TMPro::TextMeshProUGUI* titleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _messageText
    // Size: 0x8
    // Offset: 0x78
    TMPro::TextMeshProUGUI* messageText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button[] _buttons
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::UI::Button*>* buttons;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::UI::Button*>*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _buttonTexts
    // Size: 0x8
    // Offset: 0x88
    ::Array<TMPro::TextMeshProUGUI*>* buttonTexts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private System.Action`1<System.Int32> _didFinishAction
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<int>* didFinishAction;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // Creating value type constructor for type: SimpleDialogPromptViewController
    SimpleDialogPromptViewController(TMPro::TextMeshProUGUI* titleText_ = {}, TMPro::TextMeshProUGUI* messageText_ = {}, ::Array<UnityEngine::UI::Button*>* buttons_ = {}, ::Array<TMPro::TextMeshProUGUI*>* buttonTexts_ = {}, System::Action_1<int>* didFinishAction_ = {}) noexcept : titleText{titleText_}, messageText{messageText_}, buttons{buttons_}, buttonTexts{buttonTexts_}, didFinishAction{didFinishAction_} {}
    // Get instance field reference: private TMPro.TextMeshProUGUI _titleText
    TMPro::TextMeshProUGUI*& dyn__titleText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _messageText
    TMPro::TextMeshProUGUI*& dyn__messageText();
    // Get instance field reference: private UnityEngine.UI.Button[] _buttons
    ::Array<UnityEngine::UI::Button*>*& dyn__buttons();
    // Get instance field reference: private TMPro.TextMeshProUGUI[] _buttonTexts
    ::Array<TMPro::TextMeshProUGUI*>*& dyn__buttonTexts();
    // Get instance field reference: private System.Action`1<System.Int32> _didFinishAction
    System::Action_1<int>*& dyn__didFinishAction();
    // public System.Void Init(System.String title, System.String message, System.String buttonText, System.Action`1<System.Int32> didFinishAction)
    // Offset: 0x1096D70
    void Init(::Il2CppString* title, ::Il2CppString* message, ::Il2CppString* buttonText, System::Action_1<int>* didFinishAction);
    // public System.Void Init(System.String title, System.String message, System.String firstButtonText, System.String secondButtonText, System.Action`1<System.Int32> didFinishAction)
    // Offset: 0x1096F44
    void Init(::Il2CppString* title, ::Il2CppString* message, ::Il2CppString* firstButtonText, ::Il2CppString* secondButtonText, System::Action_1<int>* didFinishAction);
    // public System.Void Init(System.String title, System.String message, System.String firstButtonText, System.String secondButtonText, System.String thirdButtonText, System.Action`1<System.Int32> didFinishAction)
    // Offset: 0x1096D80
    void Init(::Il2CppString* title, ::Il2CppString* message, ::Il2CppString* firstButtonText, ::Il2CppString* secondButtonText, ::Il2CppString* thirdButtonText, System::Action_1<int>* didFinishAction);
    // public System.Void .ctor()
    // Offset: 0x1096F50
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleDialogPromptViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleDialogPromptViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleDialogPromptViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1096C34
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x1096D64
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // SimpleDialogPromptViewController
  #pragma pack(pop)
  static check_size<sizeof(SimpleDialogPromptViewController), 144 + sizeof(System::Action_1<int>*)> __GlobalNamespace_SimpleDialogPromptViewControllerSizeCheck;
  static_assert(sizeof(SimpleDialogPromptViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleDialogPromptViewController*, "", "SimpleDialogPromptViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, System::Action_1<int>*)>(&GlobalNamespace::SimpleDialogPromptViewController::Init)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* buttonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* didFinishAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, message, buttonText, didFinishAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, System::Action_1<int>*)>(&GlobalNamespace::SimpleDialogPromptViewController::Init)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* firstButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secondButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* didFinishAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, message, firstButtonText, secondButtonText, didFinishAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*, System::Action_1<int>*)>(&GlobalNamespace::SimpleDialogPromptViewController::Init)> {
  static const MethodInfo* get() {
    static auto* title = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* firstButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secondButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* thirdButtonText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* didFinishAction = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{title, message, firstButtonText, secondButtonText, thirdButtonText, didFinishAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::*)(bool, bool, bool)>(&GlobalNamespace::SimpleDialogPromptViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleDialogPromptViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleDialogPromptViewController::*)(bool, bool)>(&GlobalNamespace::SimpleDialogPromptViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleDialogPromptViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
