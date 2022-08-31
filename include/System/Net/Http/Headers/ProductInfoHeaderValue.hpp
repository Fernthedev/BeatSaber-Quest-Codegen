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
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: ProductHeaderValue
  class ProductHeaderValue;
  // Forward declaring type: Lexer
  class Lexer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: ProductInfoHeaderValue
  class ProductInfoHeaderValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Http::Headers::ProductInfoHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ProductInfoHeaderValue*, "System.Net.Http.Headers", "ProductInfoHeaderValue");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.ProductInfoHeaderValue
  // [TokenAttribute] Offset: FFFFFFFF
  class ProductInfoHeaderValue : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // private System.String <Comment>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Comment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Net.Http.Headers.ProductHeaderValue <Product>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Http::Headers::ProductHeaderValue* Product;
    // Field size check
    static_assert(sizeof(::System::Net::Http::Headers::ProductHeaderValue*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: private System.String <Comment>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Comment$k__BackingField();
    // Get instance field reference: private System.Net.Http.Headers.ProductHeaderValue <Product>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Net::Http::Headers::ProductHeaderValue*& dyn_$Product$k__BackingField();
    // public System.String get_Comment()
    // Offset: 0x19A1AA8
    ::StringW get_Comment();
    // private System.Void set_Comment(System.String value)
    // Offset: 0x19A1AB0
    void set_Comment(::StringW value);
    // public System.Net.Http.Headers.ProductHeaderValue get_Product()
    // Offset: 0x19A1AB8
    ::System::Net::Http::Headers::ProductHeaderValue* get_Product();
    // private System.Void set_Product(System.Net.Http.Headers.ProductHeaderValue value)
    // Offset: 0x19A1AC0
    void set_Product(::System::Net::Http::Headers::ProductHeaderValue* value);
    // public System.Void .ctor(System.Net.Http.Headers.ProductHeaderValue product)
    // Offset: 0x19A1A10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProductInfoHeaderValue* New_ctor(::System::Net::Http::Headers::ProductHeaderValue* product) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::ProductInfoHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProductInfoHeaderValue*, creationType>(product)));
    }
    // private System.Void .ctor()
    // Offset: 0x19A1AA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProductInfoHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Http::Headers::ProductInfoHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProductInfoHeaderValue*, creationType>()));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x19A1AC8
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.ProductInfoHeaderValue> result)
    // Offset: 0x19A1BD4
    static bool TryParse(::StringW input, int minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*> result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.ProductInfoHeaderValue parsedValue)
    // Offset: 0x19A1D14
    static bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::ProductInfoHeaderValue*> parsedValue);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19A1AD0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19A1BA8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x19A1F14
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.ProductInfoHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(ProductInfoHeaderValue), 24 + sizeof(::System::Net::Http::Headers::ProductHeaderValue*)> __System_Net_Http_Headers_ProductInfoHeaderValueSizeCheck;
  static_assert(sizeof(ProductInfoHeaderValue) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::get_Comment
// Il2CppName: get_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&System::Net::Http::Headers::ProductInfoHeaderValue::get_Comment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "get_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::set_Comment
// Il2CppName: set_Comment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ProductInfoHeaderValue::*)(::StringW)>(&System::Net::Http::Headers::ProductInfoHeaderValue::set_Comment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "set_Comment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::get_Product
// Il2CppName: get_Product
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::ProductHeaderValue* (System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&System::Net::Http::Headers::ProductInfoHeaderValue::get_Product)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "get_Product", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::set_Product
// Il2CppName: set_Product
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::ProductInfoHeaderValue::*)(::System::Net::Http::Headers::ProductHeaderValue*)>(&System::Net::Http::Headers::ProductInfoHeaderValue::set_Product)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ProductHeaderValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "set_Product", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::System_ICloneable_Clone
// Il2CppName: System.ICloneable.Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&System::Net::Http::Headers::ProductInfoHeaderValue::System_ICloneable_Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "System.ICloneable.Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ProductInfoHeaderValue*>*>)>(&System::Net::Http::Headers::ProductInfoHeaderValue::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minimalCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ProductInfoHeaderValue")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, minimalCount, result});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::TryParseElement
// Il2CppName: TryParseElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ByRef<::System::Net::Http::Headers::ProductInfoHeaderValue*>)>(&System::Net::Http::Headers::ProductInfoHeaderValue::TryParseElement)> {
  static const MethodInfo* get() {
    static auto* lexer = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "Lexer")->byval_arg;
    static auto* parsedValue = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "ProductInfoHeaderValue")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "TryParseElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexer, parsedValue});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::ProductInfoHeaderValue::*)(::Il2CppObject*)>(&System::Net::Http::Headers::ProductInfoHeaderValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&System::Net::Http::Headers::ProductInfoHeaderValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::ProductInfoHeaderValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::ProductInfoHeaderValue::*)()>(&System::Net::Http::Headers::ProductInfoHeaderValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::ProductInfoHeaderValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
