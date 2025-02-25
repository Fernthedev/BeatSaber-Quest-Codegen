// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/System.Net.Http.Headers.Long
  // [TokenAttribute] Offset: FFFFFFFF
  class Parser::Long : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Long
    Long() noexcept {}
    // static public System.Boolean TryParse(System.String input, out System.Int64 result)
    // Offset: 0x15B076C
    static bool TryParse(::Il2CppString* input, ByRef<int64_t> result);
  }; // System.Net.Http.Headers.Parser/System.Net.Http.Headers.Long
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Long*, "System.Net.Http.Headers", "Parser/Long");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::Long::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ByRef<int64_t>)>(&System::Net::Http::Headers::Parser::Long::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::Long*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
