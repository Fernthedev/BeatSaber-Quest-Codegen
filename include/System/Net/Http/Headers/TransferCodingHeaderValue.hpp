// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
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
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
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
  // Autogenerated type: System.Net.Http.Headers.TransferCodingHeaderValue
  class TransferCodingHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // System.String value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // Creating value type constructor for type: TransferCodingHeaderValue
    TransferCodingHeaderValue(::Il2CppString* value_ = {}, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters_ = {}) noexcept : value{value_}, parameters{parameters_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // protected System.Void .ctor(System.Net.Http.Headers.TransferCodingHeaderValue source)
    // Offset: 0x159B314
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferCodingHeaderValue* New_ctor(System::Net::Http::Headers::TransferCodingHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::TransferCodingHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferCodingHeaderValue*, creationType>(source)));
    }
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x159B4D4
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // public System.String get_Value()
    // Offset: 0x159B550
    ::Il2CppString* get_Value();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x159B558
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingHeaderValue> result)
    // Offset: 0x159B774
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::TransferCodingHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.TransferCodingHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x159B814
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::TransferCodingHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // System.Void .ctor()
    // Offset: 0x159B548
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferCodingHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::TransferCodingHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferCodingHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x159B5B8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x159B688
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x159B714
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.TransferCodingHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(TransferCodingHeaderValue), 24 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_TransferCodingHeaderValueSizeCheck;
  static_assert(sizeof(TransferCodingHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::TransferCodingHeaderValue*, "System.Net.Http.Headers", "TransferCodingHeaderValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* (System::Net::Http::Headers::TransferCodingHeaderValue::*)()>(&System::Net::Http::Headers::TransferCodingHeaderValue::get_Parameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::TransferCodingHeaderValue::*)()>(&System::Net::Http::Headers::TransferCodingHeaderValue::get_Value)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::TransferCodingHeaderValue::*)()>(&System::Net::Http::Headers::TransferCodingHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, System::Collections::Generic::List_1<System::Net::Http::Headers::TransferCodingHeaderValue*>*&)>(&System::Net::Http::Headers::TransferCodingHeaderValue::TryParse)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "TransferCodingHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, System::Net::Http::Headers::TransferCodingHeaderValue*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::TransferCodingHeaderValue::TryParseElement)> {
  const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "TransferCodingHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::TransferCodingHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::TransferCodingHeaderValue::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::TransferCodingHeaderValue::*)()>(&System::Net::Http::Headers::TransferCodingHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::TransferCodingHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::TransferCodingHeaderValue::*)()>(&System::Net::Http::Headers::TransferCodingHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::TransferCodingHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
