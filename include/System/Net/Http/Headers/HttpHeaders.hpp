// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Net.Http.Headers.HttpHeaderKind
#include "System/Net/Http/Headers/HttpHeaderKind.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HeaderInfo
  class HeaderInfo;
  // Forward declaring type: HttpHeaderValueCollection`1<T>
  template<typename T>
  class HttpHeaderValueCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
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
  // Forward declaring type: HttpHeaders
  class HttpHeaders;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Net::Http::Headers::HttpHeaders);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpHeaders*, "System.Net.Http.Headers", "HttpHeaders");
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpHeaders
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpHeaders : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*>>*/ {
    public:
    // Nested type: System::Net::Http::Headers::HttpHeaders::HeaderBucket
    class HeaderBucket;
    // Nested type: System::Net::Http::Headers::HttpHeaders::$GetEnumerator$d__19
    class $GetEnumerator$d__19;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket> headers
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::StringW, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>* headers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::StringW, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>*) == 0x8);
    // private readonly System.Net.Http.Headers.HttpHeaderKind HeaderKind
    // Size: 0x4
    // Offset: 0x18
    System::Net::Http::Headers::HttpHeaderKind HeaderKind;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::HttpHeaderKind) == 0x4);
    // System.Nullable`1<System.Boolean> connectionclose
    // Size: 0xFFFFFFFF
    // Offset: 0x1C
    System::Nullable_1<bool> connectionclose;
    // System.Nullable`1<System.Boolean> transferEncodingChunked
    // Size: 0xFFFFFFFF
    // Offset: 0x1E
    System::Nullable_1<bool> transferEncodingChunked;
    public:
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*>>
    operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*>>*>(this);
    }
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> known_headers
    static System::Collections::Generic::Dictionary_2<::StringW, System::Net::Http::Headers::HeaderInfo*>* _get_known_headers();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> known_headers
    static void _set_known_headers(System::Collections::Generic::Dictionary_2<::StringW, System::Net::Http::Headers::HeaderInfo*>* value);
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket> headers
    System::Collections::Generic::Dictionary_2<::StringW, System::Net::Http::Headers::HttpHeaders::HeaderBucket*>*& dyn_headers();
    // Get instance field reference: private readonly System.Net.Http.Headers.HttpHeaderKind HeaderKind
    System::Net::Http::Headers::HttpHeaderKind& dyn_HeaderKind();
    // Get instance field reference: System.Nullable`1<System.Boolean> connectionclose
    System::Nullable_1<bool>& dyn_connectionclose();
    // Get instance field reference: System.Nullable`1<System.Boolean> transferEncodingChunked
    System::Nullable_1<bool>& dyn_transferEncodingChunked();
    // static private System.Void .cctor()
    // Offset: 0x18F70C8
    static void _cctor();
    // System.Void .ctor(System.Net.Http.Headers.HttpHeaderKind headerKind)
    // Offset: 0x18F6EC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpHeaders* New_ctor(System::Net::Http::Headers::HttpHeaderKind headerKind) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpHeaders*, creationType>(headerKind)));
    }
    // private System.Boolean AddInternal(System.String name, System.Collections.Generic.IEnumerable`1<System.String> values, System.Net.Http.Headers.HeaderInfo headerInfo, System.Boolean ignoreInvalid)
    // Offset: 0x18F8C1C
    bool AddInternal(::StringW name, System::Collections::Generic::IEnumerable_1<::StringW>* values, System::Net::Http::Headers::HeaderInfo* headerInfo, bool ignoreInvalid);
    // public System.Boolean TryAddWithoutValidation(System.String name, System.Collections.Generic.IEnumerable`1<System.String> values)
    // Offset: 0x18F91C0
    bool TryAddWithoutValidation(::StringW name, System::Collections::Generic::IEnumerable_1<::StringW>* values);
    // private System.Net.Http.Headers.HeaderInfo CheckName(System.String name)
    // Offset: 0x18F9380
    System::Net::Http::Headers::HeaderInfo* CheckName(::StringW name);
    // private System.Boolean TryCheckName(System.String name, out System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0x18F9298
    bool TryCheckName(::StringW name, ByRef<System::Net::Http::Headers::HeaderInfo*> headerInfo);
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>> GetEnumerator()
    // Offset: 0x18F9648
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*>>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x18F96E4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.String name)
    // Offset: 0x18F96E8
    bool Remove(::StringW name);
    // static System.String GetSingleHeaderString(System.String key, System.Collections.Generic.IEnumerable`1<System.String> values)
    // Offset: 0x18F975C
    static ::StringW GetSingleHeaderString(::StringW key, System::Collections::Generic::IEnumerable_1<::StringW>* values);
    // System.Void AddOrRemove(System.String name, T value, System.Func`2<System.Object,System.String> converter)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddOrRemove(::StringW name, T value, System::Func_2<::Il2CppObject*, ::StringW>* converter) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::AddOrRemove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddOrRemove", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(converter)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, name, value, converter);
    }
    // private System.Collections.Generic.List`1<System.String> GetAllHeaderValues(System.Net.Http.Headers.HttpHeaders/System.Net.Http.Headers.HeaderBucket bucket, System.Net.Http.Headers.HeaderInfo headerInfo)
    // Offset: 0x18F9DD0
    System::Collections::Generic::List_1<::StringW>* GetAllHeaderValues(System::Net::Http::Headers::HttpHeaders::HeaderBucket* bucket, System::Net::Http::Headers::HeaderInfo* headerInfo);
    // static System.Net.Http.Headers.HttpHeaderKind GetKnownHeaderKind(System.String name)
    // Offset: 0x18FA030
    static System::Net::Http::Headers::HttpHeaderKind GetKnownHeaderKind(::StringW name);
    // T GetValue(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    T GetValue(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::GetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, name);
    }
    // System.Net.Http.Headers.HttpHeaderValueCollection`1<T> GetValues(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* GetValues(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::GetValues");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetValues", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*, false>(this, ___generic__method, name);
    }
    // System.Void SetValue(System.String name, T value, System.Func`2<System.Object,System.String> toStringConverter)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetValue(::StringW name, T value, System::Func_2<::Il2CppObject*, ::StringW>* toStringConverter) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::SetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(toStringConverter)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, name, value, toStringConverter);
    }
    // protected System.Void .ctor()
    // Offset: 0x18F8B34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpHeaders* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpHeaders*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x18F9B08
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Http.Headers.HttpHeaders
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Http::Headers::HttpHeaders::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::AddInternal
// Il2CppName: AddInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpHeaders::*)(::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*, System::Net::Http::Headers::HeaderInfo*, bool)>(&System::Net::Http::Headers::HttpHeaders::AddInternal)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* headerInfo = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HeaderInfo")->byval_arg;
    static auto* ignoreInvalid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "AddInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values, headerInfo, ignoreInvalid});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation
// Il2CppName: TryAddWithoutValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpHeaders::*)(::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*)>(&System::Net::Http::Headers::HttpHeaders::TryAddWithoutValidation)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "TryAddWithoutValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, values});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::CheckName
// Il2CppName: CheckName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::HeaderInfo* (System::Net::Http::Headers::HttpHeaders::*)(::StringW)>(&System::Net::Http::Headers::HttpHeaders::CheckName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "CheckName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::TryCheckName
// Il2CppName: TryCheckName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpHeaders::*)(::StringW, ByRef<System::Net::Http::Headers::HeaderInfo*>)>(&System::Net::Http::Headers::HttpHeaders::TryCheckName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* headerInfo = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HeaderInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "TryCheckName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, headerInfo});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*>>* (System::Net::Http::Headers::HttpHeaders::*)()>(&System::Net::Http::Headers::HttpHeaders::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Net::Http::Headers::HttpHeaders::*)()>(&System::Net::Http::Headers::HttpHeaders::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpHeaders::*)(::StringW)>(&System::Net::Http::Headers::HttpHeaders::Remove)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::GetSingleHeaderString
// Il2CppName: GetSingleHeaderString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, System::Collections::Generic::IEnumerable_1<::StringW>*)>(&System::Net::Http::Headers::HttpHeaders::GetSingleHeaderString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "GetSingleHeaderString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, values});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::AddOrRemove
// Il2CppName: AddOrRemove
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::GetAllHeaderValues
// Il2CppName: GetAllHeaderValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW>* (System::Net::Http::Headers::HttpHeaders::*)(System::Net::Http::Headers::HttpHeaders::HeaderBucket*, System::Net::Http::Headers::HeaderInfo*)>(&System::Net::Http::Headers::HttpHeaders::GetAllHeaderValues)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HttpHeaders/HeaderBucket")->byval_arg;
    static auto* headerInfo = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HeaderInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "GetAllHeaderValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, headerInfo});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::GetKnownHeaderKind
// Il2CppName: GetKnownHeaderKind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::HttpHeaderKind (*)(::StringW)>(&System::Net::Http::Headers::HttpHeaders::GetKnownHeaderKind)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "GetKnownHeaderKind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::GetValue
// Il2CppName: GetValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::GetValues
// Il2CppName: GetValues
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::SetValue
// Il2CppName: SetValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpHeaders::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::HttpHeaders::*)()>(&System::Net::Http::Headers::HttpHeaders::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpHeaders*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
