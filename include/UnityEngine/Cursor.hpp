// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CursorLockMode
  struct CursorLockMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cursor
  class Cursor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Cursor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cursor*, "UnityEngine", "Cursor");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Cursor
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1057550
  class Cursor : public ::Il2CppObject {
    public:
    // static public System.Boolean get_visible()
    // Offset: 0x1FAFC30
    static bool get_visible();
    // static public System.Void set_visible(System.Boolean value)
    // Offset: 0x1FAFC64
    static void set_visible(bool value);
    // static public UnityEngine.CursorLockMode get_lockState()
    // Offset: 0x1FAFCA4
    static ::UnityEngine::CursorLockMode get_lockState();
    // static public System.Void set_lockState(UnityEngine.CursorLockMode value)
    // Offset: 0x1FAFCD8
    static void set_lockState(::UnityEngine::CursorLockMode value);
  }; // UnityEngine.Cursor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Cursor::get_visible
// Il2CppName: get_visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Cursor::get_visible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cursor*), "get_visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cursor::set_visible
// Il2CppName: set_visible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::Cursor::set_visible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cursor*), "set_visible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cursor::get_lockState
// Il2CppName: get_lockState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::CursorLockMode (*)()>(&UnityEngine::Cursor::get_lockState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cursor*), "get_lockState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cursor::set_lockState
// Il2CppName: set_lockState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::CursorLockMode)>(&UnityEngine::Cursor::set_lockState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "CursorLockMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cursor*), "set_lockState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
