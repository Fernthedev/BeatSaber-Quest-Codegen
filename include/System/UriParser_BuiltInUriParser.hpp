// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.UriParser
#include "System/UriParser.hpp"
// Including type: System.UriSyntaxFlags
#include "System/UriSyntaxFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::UriParser::BuiltInUriParser);
DEFINE_IL2CPP_ARG_TYPE(::System::UriParser::BuiltInUriParser*, "System", "UriParser/BuiltInUriParser");
// Type namespace: System
namespace System {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.UriParser/System.BuiltInUriParser
  // [TokenAttribute] Offset: FFFFFFFF
  class UriParser::BuiltInUriParser : public ::System::UriParser {
    public:
    // System.Void .ctor(System.String lwrCaseScheme, System.Int32 defaultPort, System.UriSyntaxFlags syntaxFlags)
    // Offset: 0x2AEB854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriParser::BuiltInUriParser* New_ctor(::StringW lwrCaseScheme, int defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::UriParser::BuiltInUriParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriParser::BuiltInUriParser*, creationType>(lwrCaseScheme, defaultPort, syntaxFlags)));
    }
  }; // System.UriParser/System.BuiltInUriParser
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UriParser::BuiltInUriParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
