// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalizedTextAsset
  class LocalizedTextAsset;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EulaViewController
  class EulaViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::EulaViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulaViewController*, "", "EulaViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: EulaViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class EulaViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::EulaViewController::ButtonType
    struct ButtonType;
    // Nested type: GlobalNamespace::EulaViewController::InitData
    class InitData;
    // Nested type: GlobalNamespace::EulaViewController::$EnableButtonsCoroutine$d__15
    class $EnableButtonsCoroutine$d__15;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EulaViewController/ButtonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonType/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ButtonType
      constexpr ButtonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EulaViewController/ButtonType Agree
      static constexpr const int Agree = 0;
      // Get static field: static public EulaViewController/ButtonType Agree
      static GlobalNamespace::EulaViewController::ButtonType _get_Agree();
      // Set static field: static public EulaViewController/ButtonType Agree
      static void _set_Agree(GlobalNamespace::EulaViewController::ButtonType value);
      // static field const value: static public EulaViewController/ButtonType DoNotAgree
      static constexpr const int DoNotAgree = 1;
      // Get static field: static public EulaViewController/ButtonType DoNotAgree
      static GlobalNamespace::EulaViewController::ButtonType _get_DoNotAgree();
      // Set static field: static public EulaViewController/ButtonType DoNotAgree
      static void _set_DoNotAgree(GlobalNamespace::EulaViewController::ButtonType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EulaViewController/ButtonType
    #pragma pack(pop)
    static check_size<sizeof(EulaViewController::ButtonType), 0 + sizeof(int)> __GlobalNamespace_EulaViewController_ButtonTypeSizeCheck;
    static_assert(sizeof(EulaViewController::ButtonType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0x124B960
    // private UnityEngine.UI.Button _agreeButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* agreeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _doNotAgreeButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* doNotAgreeButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Image _disableButtonsProgress
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Image* disableButtonsProgress;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private System.Single _disabledButtonDelay
    // Size: 0x4
    // Offset: 0x88
    float disabledButtonDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: disabledButtonDelay and: textPageScrollView
    char __padding3[0x4] = {};
    // [HeaderAttribute] Offset: 0x124B9DC
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x90
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private LocalizedTextAsset _eulaLocalizedTextAsset
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::LocalizedTextAsset* eulaLocalizedTextAsset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalizedTextAsset*) == 0x8);
    // [InjectAttribute] Offset: 0x124BA38
    // private readonly EulaViewController/InitData _initData
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::EulaViewController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EulaViewController::InitData*) == 0x8);
    // private System.Action`1<EulaViewController/ButtonType> didFinishEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::EulaViewController::ButtonType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::EulaViewController::ButtonType>*) == 0x8);
    // private UnityEngine.Coroutine _buttonsCoroutine
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Coroutine* buttonsCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _agreeButton
    UnityEngine::UI::Button*& dyn__agreeButton();
    // Get instance field reference: private UnityEngine.UI.Button _doNotAgreeButton
    UnityEngine::UI::Button*& dyn__doNotAgreeButton();
    // Get instance field reference: private UnityEngine.UI.Image _disableButtonsProgress
    UnityEngine::UI::Image*& dyn__disableButtonsProgress();
    // Get instance field reference: private System.Single _disabledButtonDelay
    float& dyn__disabledButtonDelay();
    // Get instance field reference: private HMUI.TextPageScrollView _textPageScrollView
    HMUI::TextPageScrollView*& dyn__textPageScrollView();
    // Get instance field reference: private LocalizedTextAsset _eulaLocalizedTextAsset
    GlobalNamespace::LocalizedTextAsset*& dyn__eulaLocalizedTextAsset();
    // Get instance field reference: private readonly EulaViewController/InitData _initData
    GlobalNamespace::EulaViewController::InitData*& dyn__initData();
    // Get instance field reference: private System.Action`1<EulaViewController/ButtonType> didFinishEvent
    System::Action_1<GlobalNamespace::EulaViewController::ButtonType>*& dyn_didFinishEvent();
    // Get instance field reference: private UnityEngine.Coroutine _buttonsCoroutine
    UnityEngine::Coroutine*& dyn__buttonsCoroutine();
    // public System.Void add_didFinishEvent(System.Action`1<EulaViewController/ButtonType> value)
    // Offset: 0x13FC02C
    void add_didFinishEvent(System::Action_1<GlobalNamespace::EulaViewController::ButtonType>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<EulaViewController/ButtonType> value)
    // Offset: 0x13FC0D0
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::EulaViewController::ButtonType>* value);
    // private System.Collections.IEnumerator EnableButtonsCoroutine(System.Single delay)
    // Offset: 0x13FC338
    System::Collections::IEnumerator* EnableButtonsCoroutine(float delay);
    // private System.Void <DidActivate>b__13_0()
    // Offset: 0x13FC4C0
    void $DidActivate$b__13_0();
    // private System.Void <DidActivate>b__13_1()
    // Offset: 0x13FC524
    void $DidActivate$b__13_1();
    // public System.Void .ctor()
    // Offset: 0x13FC4B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EulaViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EulaViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EulaViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13FC174
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13FC3B8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // EulaViewController
  #pragma pack(pop)
  static check_size<sizeof(EulaViewController), 176 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_EulaViewControllerSizeCheck;
  static_assert(sizeof(EulaViewController) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulaViewController::ButtonType, "", "EulaViewController/ButtonType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(System::Action_1<GlobalNamespace::EulaViewController::ButtonType>*)>(&GlobalNamespace::EulaViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EulaViewController/ButtonType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(System::Action_1<GlobalNamespace::EulaViewController::ButtonType>*)>(&GlobalNamespace::EulaViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "EulaViewController/ButtonType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::EnableButtonsCoroutine
// Il2CppName: EnableButtonsCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::EulaViewController::*)(float)>(&GlobalNamespace::EulaViewController::EnableButtonsCoroutine)> {
  static const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "EnableButtonsCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::$DidActivate$b__13_0
// Il2CppName: <DidActivate>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)()>(&GlobalNamespace::EulaViewController::$DidActivate$b__13_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "<DidActivate>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::$DidActivate$b__13_1
// Il2CppName: <DidActivate>b__13_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)()>(&GlobalNamespace::EulaViewController::$DidActivate$b__13_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "<DidActivate>b__13_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(bool, bool, bool)>(&GlobalNamespace::EulaViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EulaViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaViewController::*)(bool, bool)>(&GlobalNamespace::EulaViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
