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
  // Autogenerated type: System.Net.Http.Headers.AuthenticationHeaderValue
  class AuthenticationHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE5B10
    // private System.String <Parameter>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Parameter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5B20
    // private System.String <Scheme>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Scheme;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AuthenticationHeaderValue
    AuthenticationHeaderValue(::Il2CppString* Parameter_ = {}, ::Il2CppString* Scheme_ = {}) noexcept : Parameter{Parameter_}, Scheme{Scheme_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.String get_Parameter()
    // Offset: 0x158DFDC
    ::Il2CppString* get_Parameter();
    // private System.Void set_Parameter(System.String value)
    // Offset: 0x158DFE4
    void set_Parameter(::Il2CppString* value);
    // public System.String get_Scheme()
    // Offset: 0x158DFEC
    ::Il2CppString* get_Scheme();
    // private System.Void set_Scheme(System.String value)
    // Offset: 0x158DFF4
    void set_Scheme(::Il2CppString* value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x158DFFC
    ::Il2CppObject* System_ICloneable_Clone();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.AuthenticationHeaderValue parsedValue)
    // Offset: 0x158E14C
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::AuthenticationHeaderValue*& parsedValue);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.AuthenticationHeaderValue> result)
    // Offset: 0x158E38C
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::AuthenticationHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.AuthenticationHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x158E244
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::AuthenticationHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x158DFD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::AuthenticationHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x158E004
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x158E0CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x158E7A8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.AuthenticationHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationHeaderValue), 24 + sizeof(::Il2CppString*)> __System_Net_Http_Headers_AuthenticationHeaderValueSizeCheck;
  static_assert(sizeof(AuthenticationHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::AuthenticationHeaderValue*, "System.Net.Http.Headers", "AuthenticationHeaderValue");
// Writing includes for template specializations
#include "System/Collections/Generic/List_1.hpp"
#include "System/Net/Http/Headers/Lexer.hpp"
#include "System/Net/Http/Headers/Token.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::get_Parameter
// Il2CppName: get_Parameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::get_Parameter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "get_Parameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::set_Parameter
// Il2CppName: set_Parameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::AuthenticationHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::AuthenticationHeaderValue::set_Parameter)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "set_Parameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::get_Scheme
// Il2CppName: get_Scheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::get_Scheme)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "get_Scheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::set_Scheme
// Il2CppName: set_Scheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::AuthenticationHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::AuthenticationHeaderValue::set_Scheme)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "set_Scheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, System::Net::Http::Headers::AuthenticationHeaderValue*&)>(&System::Net::Http::Headers::AuthenticationHeaderValue::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::AuthenticationHeaderValue*&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, System::Collections::Generic::List_1<System::Net::Http::Headers::AuthenticationHeaderValue*>*&)>(&System::Net::Http::Headers::AuthenticationHeaderValue::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<System::Net::Http::Headers::AuthenticationHeaderValue*>*&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, System::Net::Http::Headers::AuthenticationHeaderValue*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::AuthenticationHeaderValue::TryParseElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Lexer*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::AuthenticationHeaderValue*&>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Token&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::AuthenticationHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::AuthenticationHeaderValue::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::AuthenticationHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::AuthenticationHeaderValue::*)()>(&System::Net::Http::Headers::AuthenticationHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::AuthenticationHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
