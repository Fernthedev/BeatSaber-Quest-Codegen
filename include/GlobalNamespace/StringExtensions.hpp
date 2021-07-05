// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StringExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StringExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StringExtensions
    StringExtensions() noexcept {}
    // static public System.String Truncate(System.String s, System.Int32 length, System.Boolean appendEllipsis)
    // Offset: 0x238AB34
    static ::Il2CppString* Truncate(::Il2CppString* s, int length, bool appendEllipsis);
  }; // StringExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringExtensions*, "", "StringExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StringExtensions::Truncate
// Il2CppName: Truncate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, int, bool)>(&GlobalNamespace::StringExtensions::Truncate)> {
  const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* appendEllipsis = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringExtensions*), "Truncate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, length, appendEllipsis});
  }
};
