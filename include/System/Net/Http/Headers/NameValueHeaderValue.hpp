// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::NameValueHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::NameValueHeaderValue*, "System.Net.Http.Headers", "NameValueHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.NameValueHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class NameValueHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // System.String value
    // Size: 0x8
    // Offset: 0x10
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x19A0184
    ::StringW get_Name();
    // System.Void set_Name(System.String value)
    // Offset: 0x19A018C
    void set_Name(::StringW value);
    // public System.String get_Value()
    // Offset: 0x19A0194
    ::StringW get_Value();
    // public System.Void set_Value(System.String value)
    // Offset: 0x1998E04
    void set_Value(::StringW value);
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x1998F68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueHeaderValue* New_ctor(::StringW name, ::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::NameValueHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueHeaderValue*, creationType>(name, value)));
    }
    // protected internal System.Void .ctor(System.Net.Http.Headers.NameValueHeaderValue source)
    // Offset: 0x19993A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueHeaderValue* New_ctor(::System::Net::Http::Headers::NameValueHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::NameValueHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueHeaderValue*, creationType>(source)));
    }
    // System.Void .ctor()
    // Offset: 0x19A017C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::NameValueHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueHeaderValue*, creationType>()));
    }
    // static System.Net.Http.Headers.NameValueHeaderValue Create(System.String name, System.String value)
    // Offset: 0x1998570
    static ::System::Net::Http::Headers::NameValueHeaderValue* Create(::StringW name, ::StringW value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x19A019C
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParsePragma(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> result)
    // Offset: 0x19A0374
    static bool TryParsePragma(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result);
    // static System.Boolean TryParseParameters(System.Net.Http.Headers.Lexer lexer, out System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> result, out System.Net.Http.Headers.Token t)
    // Offset: 0x199975C
    static bool TryParseParameters(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> result, ByRef<::System::Net::Http::Headers::Token> t);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.NameValueHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x19A0490
    static bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::NameValueHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19A01FC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19A027C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x19A0414
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.NameValueHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(NameValueHeaderValue), 24 + sizeof(::StringW)> __System_Net_Http_Headers_NameValueHeaderValueSizeCheck;
  static_assert(sizeof(NameValueHeaderValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::NameValueHeaderValue::*)()>(&System::Net::Http::Headers::NameValueHeaderValue::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::NameValueHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::NameValueHeaderValue::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::NameValueHeaderValue::*)()>(&System::Net::Http::Headers::NameValueHeaderValue::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::NameValueHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::NameValueHeaderValue::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::NameValueHeaderValue* (*)(::StringW, ::StringW)>(&System::Net::Http::Headers::NameValueHeaderValue::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::NameValueHeaderValue::*)()>(&System::Net::Http::Headers::NameValueHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::TryParsePragma
// Il2CppName: TryParsePragma
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>)>(&System::Net::Http::Headers::NameValueHeaderValue::TryParsePragma)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "TryParsePragma", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::TryParseParameters
// Il2CppName: TryParseParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::NameValueHeaderValue::TryParseParameters)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueHeaderValue")})->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "TryParseParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, result, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::NameValueHeaderValue*>, ByRef<::System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::NameValueHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "NameValueHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::NameValueHeaderValue::*)()>(&System::Net::Http::Headers::NameValueHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::NameValueHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::NameValueHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::NameValueHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::NameValueHeaderValue::*)()>(&System::Net::Http::Headers::NameValueHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::NameValueHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
