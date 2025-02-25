// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.TransferCodingHeaderValue
#include "System/Net/Http/Headers/TransferCodingHeaderValue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class TransferCodingWithQualityHeaderValue : public System::Net::Http::Headers::TransferCodingHeaderValue {
    public:
    // Creating value type constructor for type: TransferCodingWithQualityHeaderValue
    TransferCodingWithQualityHeaderValue() noexcept {}
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingWithQualityHeaderValue> result)
    // Offset: 0x15B3EE0
    static bool TryParse(::Il2CppString* input, int minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*> result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.TransferCodingWithQualityHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x15B3F80
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, ByRef<System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*> parsedValue, ByRef<System::Net::Http::Headers::Token> t);
    // private System.Void .ctor()
    // Offset: 0x15B3ED8
    // Implemented from: System.Net.Http.Headers.TransferCodingHeaderValue
    // Base method: System.Void TransferCodingHeaderValue::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferCodingWithQualityHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferCodingWithQualityHeaderValue*, creationType>()));
    }
  }; // System.Net.Http.Headers.TransferCodingWithQualityHeaderValue
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*, "System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>)>(&System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, ByRef<System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>, ByRef<System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "TransferCodingWithQualityHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
