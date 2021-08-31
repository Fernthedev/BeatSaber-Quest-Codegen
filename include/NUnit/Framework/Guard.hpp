// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Guard
  // [TokenAttribute] Offset: FFFFFFFF
  class Guard : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Guard
    Guard() noexcept {}
    // static public System.Void ArgumentNotNull(System.Object value, System.String name)
    // Offset: 0x176FD18
    static void ArgumentNotNull(::Il2CppObject* value, ::Il2CppString* name);
    // static public System.Void ArgumentNotNullOrEmpty(System.String value, System.String name)
    // Offset: 0x176FDCC
    static void ArgumentNotNullOrEmpty(::Il2CppString* value, ::Il2CppString* name);
    // static public System.Void ArgumentValid(System.Boolean condition, System.String message, System.String paramName)
    // Offset: 0x176FEAC
    static void ArgumentValid(bool condition, ::Il2CppString* message, ::Il2CppString* paramName);
  }; // NUnit.Framework.Guard
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Guard*, "NUnit.Framework", "Guard");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentNotNull
// Il2CppName: ArgumentNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppString*)>(&NUnit::Framework::Guard::ArgumentNotNull)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentNotNullOrEmpty
// Il2CppName: ArgumentNotNullOrEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Guard::ArgumentNotNullOrEmpty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentNotNullOrEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentValid
// Il2CppName: ArgumentValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::Il2CppString*, ::Il2CppString*)>(&NUnit::Framework::Guard::ArgumentValid)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message, paramName});
  }
};
