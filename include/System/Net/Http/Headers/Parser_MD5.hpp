// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/MD5
  class Parser::MD5 : public ::Il2CppObject {
    public:
    // Nested type: System::Net::Http::Headers::Parser::MD5::$$c
    class $$c;
    // Creating value type constructor for type: MD5
    MD5() noexcept {}
    // Get static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static System::Func_2<::Il2CppObject*, ::Il2CppString*>* _get_ToString();
    // Set static field: static public readonly System.Func`2<System.Object,System.String> ToString
    static void _set_ToString(System::Func_2<::Il2CppObject*, ::Il2CppString*>* value);
    // static public System.Boolean TryParse(System.String input, out System.Byte[] result)
    // Offset: 0x1598288
    static bool TryParse(::Il2CppString* input, ::Array<uint8_t>*& result);
    // static private System.Void .cctor()
    // Offset: 0x1598388
    static void _cctor();
  }; // System.Net.Http.Headers.Parser/MD5
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::MD5*, "System.Net.Http.Headers", "Parser/MD5");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, ::Array<uint8_t>*&)>(&System::Net::Http::Headers::Parser::MD5::TryParse)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::MD5*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::MD5::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::Parser::MD5::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::MD5*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
