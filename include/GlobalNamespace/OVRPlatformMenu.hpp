// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlatformMenu
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlatformMenu : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRPlatformMenu::eHandler
    struct eHandler;
    // Nested type: GlobalNamespace::OVRPlatformMenu::eBackButtonAction
    struct eBackButtonAction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRPlatformMenu/eHandler
    // [TokenAttribute] Offset: FFFFFFFF
    struct eHandler/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: eHandler
      constexpr eHandler(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRPlatformMenu/eHandler ShowConfirmQuit
      static constexpr const int ShowConfirmQuit = 0;
      // Get static field: static public OVRPlatformMenu/eHandler ShowConfirmQuit
      static GlobalNamespace::OVRPlatformMenu::eHandler _get_ShowConfirmQuit();
      // Set static field: static public OVRPlatformMenu/eHandler ShowConfirmQuit
      static void _set_ShowConfirmQuit(GlobalNamespace::OVRPlatformMenu::eHandler value);
      // static field const value: static public OVRPlatformMenu/eHandler RetreatOneLevel
      static constexpr const int RetreatOneLevel = 1;
      // Get static field: static public OVRPlatformMenu/eHandler RetreatOneLevel
      static GlobalNamespace::OVRPlatformMenu::eHandler _get_RetreatOneLevel();
      // Set static field: static public OVRPlatformMenu/eHandler RetreatOneLevel
      static void _set_RetreatOneLevel(GlobalNamespace::OVRPlatformMenu::eHandler value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OVRPlatformMenu/eHandler
    #pragma pack(pop)
    static check_size<sizeof(OVRPlatformMenu::eHandler), 0 + sizeof(int)> __GlobalNamespace_OVRPlatformMenu_eHandlerSizeCheck;
    static_assert(sizeof(OVRPlatformMenu::eHandler) == 0x4);
    // private OVRInput/RawButton inputCode
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton inputCode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawButton) == 0x4);
    // public OVRPlatformMenu/eHandler shortPressHandler
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OVRPlatformMenu::eHandler shortPressHandler;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlatformMenu::eHandler) == 0x4);
    // public System.Func`1<System.Boolean> OnShortPress
    // Size: 0x8
    // Offset: 0x20
    System::Func_1<bool>* OnShortPress;
    // Field size check
    static_assert(sizeof(System::Func_1<bool>*) == 0x8);
    // Creating value type constructor for type: OVRPlatformMenu
    OVRPlatformMenu(GlobalNamespace::OVRInput::RawButton inputCode_ = {}, GlobalNamespace::OVRPlatformMenu::eHandler shortPressHandler_ = {}, System::Func_1<bool>* OnShortPress_ = {}) noexcept : inputCode{inputCode_}, shortPressHandler{shortPressHandler_}, OnShortPress{OnShortPress_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.Stack`1<System.String> sceneStack
    static System::Collections::Generic::Stack_1<::Il2CppString*>* _get_sceneStack();
    // Set static field: static private System.Collections.Generic.Stack`1<System.String> sceneStack
    static void _set_sceneStack(System::Collections::Generic::Stack_1<::Il2CppString*>* value);
    // Get instance field reference: private OVRInput/RawButton inputCode
    GlobalNamespace::OVRInput::RawButton& dyn_inputCode();
    // Get instance field reference: public OVRPlatformMenu/eHandler shortPressHandler
    GlobalNamespace::OVRPlatformMenu::eHandler& dyn_shortPressHandler();
    // Get instance field reference: public System.Func`1<System.Boolean> OnShortPress
    System::Func_1<bool>*& dyn_OnShortPress();
    // private OVRPlatformMenu/eBackButtonAction HandleBackButtonState()
    // Offset: 0x135B784
    GlobalNamespace::OVRPlatformMenu::eBackButtonAction HandleBackButtonState();
    // private System.Void Awake()
    // Offset: 0x135B7FC
    void Awake();
    // private System.Void ShowConfirmQuitMenu()
    // Offset: 0x135B95C
    void ShowConfirmQuitMenu();
    // static private System.Boolean RetreatOneLevel()
    // Offset: 0x135BA30
    static bool RetreatOneLevel();
    // private System.Void Update()
    // Offset: 0x135BB24
    void Update();
    // public System.Void .ctor()
    // Offset: 0x135BB9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlatformMenu* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRPlatformMenu::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlatformMenu*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x135BBAC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRPlatformMenu
  #pragma pack(pop)
  static check_size<sizeof(OVRPlatformMenu), 32 + sizeof(System::Func_1<bool>*)> __GlobalNamespace_OVRPlatformMenuSizeCheck;
  static_assert(sizeof(OVRPlatformMenu) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlatformMenu*, "", "OVRPlatformMenu");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlatformMenu::eHandler, "", "OVRPlatformMenu/eHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::HandleBackButtonState
// Il2CppName: HandleBackButtonState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlatformMenu::eBackButtonAction (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::HandleBackButtonState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlatformMenu*), "HandleBackButtonState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlatformMenu*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu
// Il2CppName: ShowConfirmQuitMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::ShowConfirmQuitMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlatformMenu*), "ShowConfirmQuitMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::RetreatOneLevel
// Il2CppName: RetreatOneLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OVRPlatformMenu::RetreatOneLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlatformMenu*), "RetreatOneLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPlatformMenu::*)()>(&GlobalNamespace::OVRPlatformMenu::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlatformMenu*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRPlatformMenu::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlatformMenu::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlatformMenu*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
