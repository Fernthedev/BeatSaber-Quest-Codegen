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
  // Autogenerated type: System.Net.Http.Headers.ProductHeaderValue
  class ProductHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE5C90
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE5CA0
    // private System.String <Version>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ProductHeaderValue
    ProductHeaderValue(::Il2CppString* Name_ = {}, ::Il2CppString* Version_ = {}) noexcept : Name{Name_}, Version{Version_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.String get_Name()
    // Offset: 0x159878C
    ::Il2CppString* get_Name();
    // System.Void set_Name(System.String value)
    // Offset: 0x1598794
    void set_Name(::Il2CppString* value);
    // public System.String get_Version()
    // Offset: 0x159879C
    ::Il2CppString* get_Version();
    // System.Void set_Version(System.String value)
    // Offset: 0x15987A4
    void set_Version(::Il2CppString* value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x15987AC
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.ProductHeaderValue> result)
    // Offset: 0x15988F0
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::ProductHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.ProductHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x1598990
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::ProductHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // System.Void .ctor()
    // Offset: 0x1598784
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProductHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ProductHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProductHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15987B4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1598880
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1598B18
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.ProductHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ProductHeaderValue), 24 + sizeof(::Il2CppString*)> __System_Net_Http_Headers_ProductHeaderValueSizeCheck;
  static_assert(sizeof(ProductHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ProductHeaderValue*, "System.Net.Http.Headers", "ProductHeaderValue");
// Writing includes for template specializations
#include "System/Collections/Generic/List_1.hpp"
#include "System/Net/Http/Headers/Lexer.hpp"
#include "System/Net/Http/Headers/Token.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::get_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ProductHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::ProductHeaderValue::set_Name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::get_Version)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::set_Version
// Il2CppName: set_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ProductHeaderValue::*)(::Il2CppString*)>(&System::Net::Http::Headers::ProductHeaderValue::set_Version)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "set_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::System_ICloneable_Clone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*, int, System::Collections::Generic::List_1<System::Net::Http::Headers::ProductHeaderValue*>*&)>(&System::Net::Http::Headers::ProductHeaderValue::TryParse)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<System::Net::Http::Headers::ProductHeaderValue*>*&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer*, System::Net::Http::Headers::ProductHeaderValue*&, System::Net::Http::Headers::Token&)>(&System::Net::Http::Headers::ProductHeaderValue::TryParseElement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Lexer*>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::ProductHeaderValue*&>(), ::il2cpp_utils::ExtractIndependentType<System::Net::Http::Headers::Token&>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ProductHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ProductHeaderValue::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::ProductHeaderValue::*)()>(&System::Net::Http::Headers::ProductHeaderValue::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
