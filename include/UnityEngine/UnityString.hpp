// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnityString
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: DAA9DC
  class UnityString : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnityString
    UnityString() noexcept {}
    // static public System.String Format(System.String fmt, params System.Object[] args)
    // Offset: 0x24187B0
    static ::Il2CppString* Format(::Il2CppString* fmt, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.String Format(System.String fmt, params System.Object[] args)
    static ::Il2CppString* Format(::Il2CppString* fmt, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.String Format(System.String fmt, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppString* Format(::Il2CppString* fmt, TParams&&... args) {
      return Format(fmt, {args...});
    }
  }; // UnityEngine.UnityString
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityString*, "UnityEngine", "UnityString");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnityString::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&UnityEngine::UnityString::Format)> {
  static const MethodInfo* get() {
    static auto* fmt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnityString*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fmt, args});
  }
};
