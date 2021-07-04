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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/TimeSpanSeconds
  class Parser::TimeSpanSeconds : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TimeSpanSeconds
    TimeSpanSeconds() noexcept {}
    // static public System.Boolean TryParse(System.String input, out System.TimeSpan result)
    // Offset: 0x159853C
    static bool TryParse(::Il2CppString* input, System::TimeSpan& result);
  }; // System.Net.Http.Headers.Parser/TimeSpanSeconds
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::TimeSpanSeconds*, "System.Net.Http.Headers", "Parser/TimeSpanSeconds");
// Writing includes for template specializations
#include "System/TimeSpan.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::Parser::TimeSpanSeconds::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::TimeSpan&)>(&System::Net::Http::Headers::Parser::TimeSpanSeconds::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::Parser::TimeSpanSeconds*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::TimeSpan&>()});
  }
};
