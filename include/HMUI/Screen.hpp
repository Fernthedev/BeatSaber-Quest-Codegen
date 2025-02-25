// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Screen
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E1AB7C
  class Screen : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::Screen::$TransitionCoroutine$d__5
    class $TransitionCoroutine$d__5;
    // private HMUI.ViewController _rootViewController
    // Size: 0x8
    // Offset: 0x18
    HMUI::ViewController* rootViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private System.Boolean _isBeingDestroyed
    // Size: 0x1
    // Offset: 0x20
    bool isBeingDestroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Screen
    Screen(HMUI::ViewController* rootViewController_ = {}, bool isBeingDestroyed_ = {}) noexcept : rootViewController{rootViewController_}, isBeingDestroyed{isBeingDestroyed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.ViewController _rootViewController
    HMUI::ViewController*& dyn__rootViewController();
    // Get instance field reference: private System.Boolean _isBeingDestroyed
    bool& dyn__isBeingDestroyed();
    // public System.Boolean get_isBeingDestroyed()
    // Offset: 0x13128C8
    bool get_isBeingDestroyed();
    // public System.Void SetRootViewController(HMUI.ViewController newRootViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    // Offset: 0x13128D0
    void SetRootViewController(HMUI::ViewController* newRootViewController, HMUI::ViewController::AnimationType animationType);
    // private System.Collections.IEnumerator TransitionCoroutine(HMUI.ViewController newRootViewController, HMUI.ViewController/HMUI.AnimationType animationType)
    // Offset: 0x13129B0
    System::Collections::IEnumerator* TransitionCoroutine(HMUI::ViewController* newRootViewController, HMUI::ViewController::AnimationType animationType);
    // protected System.Void OnDestroy()
    // Offset: 0x1312A60
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1312A6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Screen* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Screen::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Screen*, creationType>()));
    }
  }; // HMUI.Screen
  #pragma pack(pop)
  static check_size<sizeof(Screen), 32 + sizeof(bool)> __HMUI_ScreenSizeCheck;
  static_assert(sizeof(Screen) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::Screen*, "HMUI", "Screen");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Screen::get_isBeingDestroyed
// Il2CppName: get_isBeingDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::Screen::*)()>(&HMUI::Screen::get_isBeingDestroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen*), "get_isBeingDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::SetRootViewController
// Il2CppName: SetRootViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Screen::*)(HMUI::ViewController*, HMUI::ViewController::AnimationType)>(&HMUI::Screen::SetRootViewController)> {
  static const MethodInfo* get() {
    static auto* newRootViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationType = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen*), "SetRootViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newRootViewController, animationType});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::TransitionCoroutine
// Il2CppName: TransitionCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::Screen::*)(HMUI::ViewController*, HMUI::ViewController::AnimationType)>(&HMUI::Screen::TransitionCoroutine)> {
  static const MethodInfo* get() {
    static auto* newRootViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* animationType = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController/AnimationType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen*), "TransitionCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newRootViewController, animationType});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Screen::*)()>(&HMUI::Screen::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Screen*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Screen::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
