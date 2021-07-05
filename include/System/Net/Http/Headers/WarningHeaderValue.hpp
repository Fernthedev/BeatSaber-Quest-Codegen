// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.WarningHeaderValue
  class WarningHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE5D90
    // private System.String <Agent>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Agent;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5DA0
    // private System.Int32 <Code>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDE5DB0
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<System::DateTimeOffset> Date;
    // [CompilerGeneratedAttribute] Offset: 0xDE5DC0
    // private System.String <Text>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: WarningHeaderValue
    WarningHeaderValue(::Il2CppString* Agent_ = {}, int Code_ = {}, System::Nullable_1<System::DateTimeOffset> Date_ = {}, ::Il2CppString* Text_ = {}) noexcept : Agent{Agent_}, Code{Code_}, Date{Date_}, Text{Text_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.String get_Agent()
    // Offset: 0x159C270
    ::Il2CppString* get_Agent();
    // private System.Void set_Agent(System.String value)
    // Offset: 0x159C278
    void set_Agent(::Il2CppString* value);
    // public System.Int32 get_Code()
    // Offset: 0x159C280
    int get_Code();
    // private System.Void set_Code(System.Int32 value)
    // Offset: 0x159C288
    void set_Code(int value);
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x159C290
    System::Nullable_1<System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x159C2A4
    void set_Date(System::Nullable_1<System::DateTimeOffset> value);
    // public System.String get_Text()
    // Offset: 0x159C2B8
    ::Il2CppString* get_Text();
    // private System.Void set_Text(System.String value)
    // Offset: 0x159C2C0
    void set_Text(::Il2CppString* value);
    // static private System.Boolean IsCodeValid(System.Int32 code)
    // Offset: 0x159C2C8
    static bool IsCodeValid(int code);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x159C2D4
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.WarningHeaderValue> result)
    // Offset: 0x159C508
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::WarningHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.WarningHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x159C5A8
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::WarningHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x159C268
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WarningHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::WarningHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WarningHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x159C2DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x159C420
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x159C854
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.WarningHeaderValue
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::WarningHeaderValue*, "System.Net.Http.Headers", "WarningHeaderValue");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Agent
// Il2CppName: get_Agent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Agent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Agent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Agent
// Il2CppName: set_Agent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::WarningHeaderValue::set_Agent)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Agent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Code
// Il2CppName: get_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Code)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Code
// Il2CppName: set_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(int)>(&System::Net::Http::Headers::WarningHeaderValue::set_Code)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Date
// Il2CppName: get_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTimeOffset> (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Date)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Date
// Il2CppName: set_Date
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(System::Nullable_1<System::DateTimeOffset>)>(&System::Net::Http::Headers::WarningHeaderValue::set_Date)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Date", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::get_Text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::WarningHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::WarningHeaderValue::set_Text)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::IsCodeValid
// Il2CppName: IsCodeValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Net::Http::Headers::WarningHeaderValue::IsCodeValid)> {
  const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "IsCodeValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, System::Collections::Generic::List_1<System::Net::Http::Headers::WarningHeaderValue*>*&)>(&System::Net::Http::Headers::WarningHeaderValue::TryParse)> {
  const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "WarningHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, System::Net::Http::Headers::WarningHeaderValue*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::WarningHeaderValue::TryParseElement)> {
  const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "WarningHeaderValue")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Token")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue, t});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::WarningHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::WarningHeaderValue::Equals)> {
  const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::WarningHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::WarningHeaderValue::*)()>(&System::Net::Http::Headers::WarningHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::WarningHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
