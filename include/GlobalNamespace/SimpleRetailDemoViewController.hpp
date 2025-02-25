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
  // Skipping declaration: MenuButton because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: SimpleRetailDemoViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleRetailDemoViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::SimpleRetailDemoViewController::MenuButton
    struct MenuButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SimpleRetailDemoViewController/MenuButton
    // [TokenAttribute] Offset: FFFFFFFF
    struct MenuButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SimpleRetailDemoViewController/MenuButton PlayTutorial
      static constexpr const int PlayTutorial = 0;
      // Get static field: static public SimpleRetailDemoViewController/MenuButton PlayTutorial
      static GlobalNamespace::SimpleRetailDemoViewController::MenuButton _get_PlayTutorial();
      // Set static field: static public SimpleRetailDemoViewController/MenuButton PlayTutorial
      static void _set_PlayTutorial(GlobalNamespace::SimpleRetailDemoViewController::MenuButton value);
      // static field const value: static public SimpleRetailDemoViewController/MenuButton PlayLevel1
      static constexpr const int PlayLevel1 = 1;
      // Get static field: static public SimpleRetailDemoViewController/MenuButton PlayLevel1
      static GlobalNamespace::SimpleRetailDemoViewController::MenuButton _get_PlayLevel1();
      // Set static field: static public SimpleRetailDemoViewController/MenuButton PlayLevel1
      static void _set_PlayLevel1(GlobalNamespace::SimpleRetailDemoViewController::MenuButton value);
      // static field const value: static public SimpleRetailDemoViewController/MenuButton PlayLevel2
      static constexpr const int PlayLevel2 = 2;
      // Get static field: static public SimpleRetailDemoViewController/MenuButton PlayLevel2
      static GlobalNamespace::SimpleRetailDemoViewController::MenuButton _get_PlayLevel2();
      // Set static field: static public SimpleRetailDemoViewController/MenuButton PlayLevel2
      static void _set_PlayLevel2(GlobalNamespace::SimpleRetailDemoViewController::MenuButton value);
      // static field const value: static public SimpleRetailDemoViewController/MenuButton Exit
      static constexpr const int Exit = 3;
      // Get static field: static public SimpleRetailDemoViewController/MenuButton Exit
      static GlobalNamespace::SimpleRetailDemoViewController::MenuButton _get_Exit();
      // Set static field: static public SimpleRetailDemoViewController/MenuButton Exit
      static void _set_Exit(GlobalNamespace::SimpleRetailDemoViewController::MenuButton value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // SimpleRetailDemoViewController/MenuButton
    #pragma pack(pop)
    static check_size<sizeof(SimpleRetailDemoViewController::MenuButton), 0 + sizeof(int)> __GlobalNamespace_SimpleRetailDemoViewController_MenuButtonSizeCheck;
    static_assert(sizeof(SimpleRetailDemoViewController::MenuButton) == 0x4);
    // private UnityEngine.UI.Button _tutorialButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* tutorialButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _playLevel1Button
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* playLevel1Button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _playLevel2Button
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* playLevel2Button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _exitButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* exitButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action`2<SimpleRetailDemoViewController,SimpleRetailDemoViewController/MenuButton> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>*) == 0x8);
    // Creating value type constructor for type: SimpleRetailDemoViewController
    SimpleRetailDemoViewController(UnityEngine::UI::Button* tutorialButton_ = {}, UnityEngine::UI::Button* playLevel1Button_ = {}, UnityEngine::UI::Button* playLevel2Button_ = {}, UnityEngine::UI::Button* exitButton_ = {}, System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>* didFinishEvent_ = {}) noexcept : tutorialButton{tutorialButton_}, playLevel1Button{playLevel1Button_}, playLevel2Button{playLevel2Button_}, exitButton{exitButton_}, didFinishEvent{didFinishEvent_} {}
    // Get instance field reference: private UnityEngine.UI.Button _tutorialButton
    UnityEngine::UI::Button*& dyn__tutorialButton();
    // Get instance field reference: private UnityEngine.UI.Button _playLevel1Button
    UnityEngine::UI::Button*& dyn__playLevel1Button();
    // Get instance field reference: private UnityEngine.UI.Button _playLevel2Button
    UnityEngine::UI::Button*& dyn__playLevel2Button();
    // Get instance field reference: private UnityEngine.UI.Button _exitButton
    UnityEngine::UI::Button*& dyn__exitButton();
    // Get instance field reference: private System.Action`2<SimpleRetailDemoViewController,SimpleRetailDemoViewController/MenuButton> didFinishEvent
    System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<SimpleRetailDemoViewController,SimpleRetailDemoViewController/MenuButton> value)
    // Offset: 0x1097788
    void add_didFinishEvent(System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<SimpleRetailDemoViewController,SimpleRetailDemoViewController/MenuButton> value)
    // Offset: 0x109794C
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>* value);
    // private System.Void HandleMenuButton(SimpleRetailDemoViewController/MenuButton menuButton)
    // Offset: 0x10981AC
    void HandleMenuButton(GlobalNamespace::SimpleRetailDemoViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0x109822C
    void $DidActivate$b__8_0();
    // private System.Void <DidActivate>b__8_1()
    // Offset: 0x1098234
    void $DidActivate$b__8_1();
    // private System.Void <DidActivate>b__8_2()
    // Offset: 0x109823C
    void $DidActivate$b__8_2();
    // private System.Void <DidActivate>b__8_3()
    // Offset: 0x1098244
    void $DidActivate$b__8_3();
    // public System.Void .ctor()
    // Offset: 0x1098224
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleRetailDemoViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SimpleRetailDemoViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleRetailDemoViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1098028
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // SimpleRetailDemoViewController
  #pragma pack(pop)
  static check_size<sizeof(SimpleRetailDemoViewController), 144 + sizeof(System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>*)> __GlobalNamespace_SimpleRetailDemoViewControllerSizeCheck;
  static_assert(sizeof(SimpleRetailDemoViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleRetailDemoViewController*, "", "SimpleRetailDemoViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleRetailDemoViewController::MenuButton, "", "SimpleRetailDemoViewController/MenuButton");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)(System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>*)>(&GlobalNamespace::SimpleRetailDemoViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController"), ::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController/MenuButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)(System::Action_2<GlobalNamespace::SimpleRetailDemoViewController*, GlobalNamespace::SimpleRetailDemoViewController::MenuButton>*)>(&GlobalNamespace::SimpleRetailDemoViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController"), ::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController/MenuButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::HandleMenuButton
// Il2CppName: HandleMenuButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)(GlobalNamespace::SimpleRetailDemoViewController::MenuButton)>(&GlobalNamespace::SimpleRetailDemoViewController::HandleMenuButton)> {
  static const MethodInfo* get() {
    static auto* menuButton = &::il2cpp_utils::GetClassFromName("", "SimpleRetailDemoViewController/MenuButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "HandleMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{menuButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_0
// Il2CppName: <DidActivate>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)()>(&GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "<DidActivate>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_1
// Il2CppName: <DidActivate>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)()>(&GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "<DidActivate>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_2
// Il2CppName: <DidActivate>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)()>(&GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "<DidActivate>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_3
// Il2CppName: <DidActivate>b__8_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)()>(&GlobalNamespace::SimpleRetailDemoViewController::$DidActivate$b__8_3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "<DidActivate>b__8_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SimpleRetailDemoViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleRetailDemoViewController::*)(bool, bool, bool)>(&GlobalNamespace::SimpleRetailDemoViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleRetailDemoViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
