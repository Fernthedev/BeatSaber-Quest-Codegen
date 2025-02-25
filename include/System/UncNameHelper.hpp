// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.UncNameHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UncNameHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UncNameHelper
    UncNameHelper() noexcept {}
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, System.Int32 end, ref System.Boolean loopback)
    // Offset: 0x19A7FD8
    static ::Il2CppString* ParseCanonicalName(::Il2CppString* str, int start, int end, ByRef<bool> loopback);
    // static System.Boolean IsValid(System.Char* name, System.UInt16 start, ref System.Int32 returnedEnd, System.Boolean notImplicitFile)
    // Offset: 0x19A7FE0
    static bool IsValid(::Il2CppChar* name, uint16_t start, ByRef<int> returnedEnd, bool notImplicitFile);
  }; // System.UncNameHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UncNameHelper*, "System", "UncNameHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UncNameHelper::ParseCanonicalName
// Il2CppName: ParseCanonicalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, int, int, ByRef<bool>)>(&System::UncNameHelper::ParseCanonicalName)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* loopback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UncNameHelper*), "ParseCanonicalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, start, end, loopback});
  }
};
// Writing MetadataGetter for method: System::UncNameHelper::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, uint16_t, ByRef<int>, bool)>(&System::UncNameHelper::IsValid)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* returnedEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* notImplicitFile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UncNameHelper*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, returnedEnd, notImplicitFile});
  }
};
