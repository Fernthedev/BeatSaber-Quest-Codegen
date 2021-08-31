// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpHeaderValueCollection`1<T>
  template<typename T>
  class HttpHeaderValueCollection_1;
  // Forward declaring type: TransferCodingHeaderValue
  class TransferCodingHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpRequestHeaders
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpRequestHeaders : public System::Net::Http::Headers::HttpHeaders {
    public:
    // Nested type: System::Net::Http::Headers::HttpRequestHeaders::$$c
    class $$c;
    // private System.Nullable`1<System.Boolean> expectContinue
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<bool> expectContinue;
    // Creating value type constructor for type: HttpRequestHeaders
    HttpRequestHeaders(System::Nullable_1<bool> expectContinue_ = {}) noexcept : expectContinue{expectContinue_} {}
    // Creating conversion operator: operator System::Nullable_1<bool>
    constexpr operator System::Nullable_1<bool>() const noexcept {
      return expectContinue;
    }
    // Get instance field: private System.Nullable`1<System.Boolean> expectContinue
    System::Nullable_1<bool> _get_expectContinue();
    // Set instance field: private System.Nullable`1<System.Boolean> expectContinue
    void _set_expectContinue(System::Nullable_1<bool> value);
    // public System.Net.Http.Headers.HttpHeaderValueCollection`1<System.String> get_Connection()
    // Offset: 0x15A310C
    System::Net::Http::Headers::HttpHeaderValueCollection_1<::Il2CppString*>* get_Connection();
    // public System.Nullable`1<System.Boolean> get_ConnectionClose()
    // Offset: 0x15A3168
    System::Nullable_1<bool> get_ConnectionClose();
    // System.Boolean get_ConnectionKeepAlive()
    // Offset: 0x15A32C0
    bool get_ConnectionKeepAlive();
    // public System.Nullable`1<System.Boolean> get_ExpectContinue()
    // Offset: 0x15A33D4
    System::Nullable_1<bool> get_ExpectContinue();
    // public System.String get_Host()
    // Offset: 0x15A357C
    ::Il2CppString* get_Host();
    // public System.Net.Http.Headers.HttpHeaderValueCollection`1<System.Net.Http.Headers.TransferCodingHeaderValue> get_TransferEncoding()
    // Offset: 0x15A3520
    System::Net::Http::Headers::HttpHeaderValueCollection_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* get_TransferEncoding();
    // public System.Nullable`1<System.Boolean> get_TransferEncodingChunked()
    // Offset: 0x15A35D8
    System::Nullable_1<bool> get_TransferEncodingChunked();
    // System.Void AddHeaders(System.Net.Http.Headers.HttpRequestHeaders headers)
    // Offset: 0x15A3724
    void AddHeaders(System::Net::Http::Headers::HttpRequestHeaders* headers);
    // System.Void .ctor()
    // Offset: 0x15A309C
    // Implemented from: System.Net.Http.Headers.HttpHeaders
    // Base method: System.Void HttpHeaders::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestHeaders* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpRequestHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestHeaders*, creationType>()));
    }
  }; // System.Net.Http.Headers.HttpRequestHeaders
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpRequestHeaders*, "System.Net.Http.Headers", "HttpRequestHeaders");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_Connection
// Il2CppName: get_Connection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::HttpHeaderValueCollection_1<::Il2CppString*>* (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_Connection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_Connection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_ConnectionClose
// Il2CppName: get_ConnectionClose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_ConnectionClose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_ConnectionClose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_ConnectionKeepAlive
// Il2CppName: get_ConnectionKeepAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_ConnectionKeepAlive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_ConnectionKeepAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_ExpectContinue
// Il2CppName: get_ExpectContinue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_ExpectContinue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_ExpectContinue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_Host
// Il2CppName: get_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_Host)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncoding
// Il2CppName: get_TransferEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::HttpHeaderValueCollection_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_TransferEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncodingChunked
// Il2CppName: get_TransferEncodingChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (System::Net::Http::Headers::HttpRequestHeaders::*)()>(&System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncodingChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "get_TransferEncodingChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::AddHeaders
// Il2CppName: AddHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::HttpRequestHeaders::*)(System::Net::Http::Headers::HttpRequestHeaders*)>(&System::Net::Http::Headers::HttpRequestHeaders::AddHeaders)> {
  static const MethodInfo* get() {
    static auto* headers = &::il2cpp_utils::GetClassFromName("System.Net.Http.Headers", "HttpRequestHeaders")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::Headers::HttpRequestHeaders*), "AddHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers});
  }
};
// Writing MetadataGetter for method: System::Net::Http::Headers::HttpRequestHeaders::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
