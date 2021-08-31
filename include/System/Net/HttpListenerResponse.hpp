// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: ResponseStream
  class ResponseStream;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: Cookie
  class Cookie;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x99
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListenerResponse : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: content_encoding
    char __padding0[0x7] = {};
    // private System.Text.Encoding content_encoding
    // Size: 0x8
    // Offset: 0x18
    System::Text::Encoding* content_encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Int64 content_length
    // Size: 0x8
    // Offset: 0x20
    int64_t content_length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean cl_set
    // Size: 0x1
    // Offset: 0x28
    bool cl_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cl_set and: content_type
    char __padding3[0x7] = {};
    // private System.String content_type
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* content_type;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Net.CookieCollection cookies
    // Size: 0x8
    // Offset: 0x38
    System::Net::CookieCollection* cookies;
    // Field size check
    static_assert(sizeof(System::Net::CookieCollection*) == 0x8);
    // private System.Net.WebHeaderCollection headers
    // Size: 0x8
    // Offset: 0x40
    System::Net::WebHeaderCollection* headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.Boolean keep_alive
    // Size: 0x1
    // Offset: 0x48
    bool keep_alive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keep_alive and: output_stream
    char __padding7[0x7] = {};
    // private System.Net.ResponseStream output_stream
    // Size: 0x8
    // Offset: 0x50
    System::Net::ResponseStream* output_stream;
    // Field size check
    static_assert(sizeof(System::Net::ResponseStream*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x58
    System::Version* version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // private System.String location
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* location;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 status_code
    // Size: 0x4
    // Offset: 0x68
    int status_code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: status_code and: status_description
    char __padding11[0x4] = {};
    // private System.String status_description
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* status_description;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean chunked
    // Size: 0x1
    // Offset: 0x78
    bool chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: chunked and: context
    char __padding13[0x7] = {};
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x80
    System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerContext*) == 0x8);
    // System.Boolean HeadersSent
    // Size: 0x1
    // Offset: 0x88
    bool HeadersSent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HeadersSent and: headers_lock
    char __padding15[0x7] = {};
    // System.Object headers_lock
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppObject* headers_lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean force_close_chunked
    // Size: 0x1
    // Offset: 0x98
    bool force_close_chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HttpListenerResponse
    HttpListenerResponse(bool disposed_ = {}, System::Text::Encoding* content_encoding_ = {}, int64_t content_length_ = {}, bool cl_set_ = {}, ::Il2CppString* content_type_ = {}, System::Net::CookieCollection* cookies_ = {}, System::Net::WebHeaderCollection* headers_ = {}, bool keep_alive_ = {}, System::Net::ResponseStream* output_stream_ = {}, System::Version* version_ = {}, ::Il2CppString* location_ = {}, int status_code_ = {}, ::Il2CppString* status_description_ = {}, bool chunked_ = {}, System::Net::HttpListenerContext* context_ = {}, bool HeadersSent_ = {}, ::Il2CppObject* headers_lock_ = {}, bool force_close_chunked_ = {}) noexcept : disposed{disposed_}, content_encoding{content_encoding_}, content_length{content_length_}, cl_set{cl_set_}, content_type{content_type_}, cookies{cookies_}, headers{headers_}, keep_alive{keep_alive_}, output_stream{output_stream_}, version{version_}, location{location_}, status_code{status_code_}, status_description{status_description_}, chunked{chunked_}, context{context_}, HeadersSent{HeadersSent_}, headers_lock{headers_lock_}, force_close_chunked{force_close_chunked_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.String tspecials
    static ::Il2CppString* _get_tspecials();
    // Set static field: static private System.String tspecials
    static void _set_tspecials(::Il2CppString* value);
    // Get instance field: private System.Boolean disposed
    bool _get_disposed();
    // Set instance field: private System.Boolean disposed
    void _set_disposed(bool value);
    // Get instance field: private System.Text.Encoding content_encoding
    System::Text::Encoding* _get_content_encoding();
    // Set instance field: private System.Text.Encoding content_encoding
    void _set_content_encoding(System::Text::Encoding* value);
    // Get instance field: private System.Int64 content_length
    int64_t _get_content_length();
    // Set instance field: private System.Int64 content_length
    void _set_content_length(int64_t value);
    // Get instance field: private System.Boolean cl_set
    bool _get_cl_set();
    // Set instance field: private System.Boolean cl_set
    void _set_cl_set(bool value);
    // Get instance field: private System.String content_type
    ::Il2CppString* _get_content_type();
    // Set instance field: private System.String content_type
    void _set_content_type(::Il2CppString* value);
    // Get instance field: private System.Net.CookieCollection cookies
    System::Net::CookieCollection* _get_cookies();
    // Set instance field: private System.Net.CookieCollection cookies
    void _set_cookies(System::Net::CookieCollection* value);
    // Get instance field: private System.Net.WebHeaderCollection headers
    System::Net::WebHeaderCollection* _get_headers();
    // Set instance field: private System.Net.WebHeaderCollection headers
    void _set_headers(System::Net::WebHeaderCollection* value);
    // Get instance field: private System.Boolean keep_alive
    bool _get_keep_alive();
    // Set instance field: private System.Boolean keep_alive
    void _set_keep_alive(bool value);
    // Get instance field: private System.Net.ResponseStream output_stream
    System::Net::ResponseStream* _get_output_stream();
    // Set instance field: private System.Net.ResponseStream output_stream
    void _set_output_stream(System::Net::ResponseStream* value);
    // Get instance field: private System.Version version
    System::Version* _get_version();
    // Set instance field: private System.Version version
    void _set_version(System::Version* value);
    // Get instance field: private System.String location
    ::Il2CppString* _get_location();
    // Set instance field: private System.String location
    void _set_location(::Il2CppString* value);
    // Get instance field: private System.Int32 status_code
    int _get_status_code();
    // Set instance field: private System.Int32 status_code
    void _set_status_code(int value);
    // Get instance field: private System.String status_description
    ::Il2CppString* _get_status_description();
    // Set instance field: private System.String status_description
    void _set_status_description(::Il2CppString* value);
    // Get instance field: private System.Boolean chunked
    bool _get_chunked();
    // Set instance field: private System.Boolean chunked
    void _set_chunked(bool value);
    // Get instance field: private System.Net.HttpListenerContext context
    System::Net::HttpListenerContext* _get_context();
    // Set instance field: private System.Net.HttpListenerContext context
    void _set_context(System::Net::HttpListenerContext* value);
    // Get instance field: System.Boolean HeadersSent
    bool _get_HeadersSent();
    // Set instance field: System.Boolean HeadersSent
    void _set_HeadersSent(bool value);
    // Get instance field: System.Object headers_lock
    ::Il2CppObject* _get_headers_lock();
    // Set instance field: System.Object headers_lock
    void _set_headers_lock(::Il2CppObject* value);
    // Get instance field: private System.Boolean force_close_chunked
    bool _get_force_close_chunked();
    // Set instance field: private System.Boolean force_close_chunked
    void _set_force_close_chunked(bool value);
    // System.Boolean get_ForceCloseChunked()
    // Offset: 0x16734EC
    bool get_ForceCloseChunked();
    // public System.Text.Encoding get_ContentEncoding()
    // Offset: 0x166D330
    System::Text::Encoding* get_ContentEncoding();
    // public System.Void set_ContentLength64(System.Int64 value)
    // Offset: 0x16734F4
    void set_ContentLength64(int64_t value);
    // public System.Void set_ContentType(System.String value)
    // Offset: 0x166CF10
    void set_ContentType(::Il2CppString* value);
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x1673634
    System::Net::WebHeaderCollection* get_Headers();
    // public System.IO.Stream get_OutputStream()
    // Offset: 0x167363C
    System::IO::Stream* get_OutputStream();
    // public System.Boolean get_SendChunked()
    // Offset: 0x167367C
    bool get_SendChunked();
    // public System.Void set_SendChunked(System.Boolean value)
    // Offset: 0x166AA44
    void set_SendChunked(bool value);
    // public System.Void set_StatusCode(System.Int32 value)
    // Offset: 0x166CDD0
    void set_StatusCode(int value);
    // System.Void .ctor(System.Net.HttpListenerContext context)
    // Offset: 0x167035C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerResponse* New_ctor(System::Net::HttpListenerContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerResponse*, creationType>(context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x16745DC
    static void _cctor();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1673684
    void System_IDisposable_Dispose();
    // private System.Void Close(System.Boolean force)
    // Offset: 0x167368C
    void Close(bool force);
    // public System.Void Close()
    // Offset: 0x16736BC
    void Close();
    // public System.Void Close(System.Byte[] responseEntity, System.Boolean willBlock)
    // Offset: 0x166D35C
    void Close(::Array<uint8_t>* responseEntity, bool willBlock);
    // System.Void SendHeaders(System.Boolean closing, System.IO.MemoryStream ms)
    // Offset: 0x16736D0
    void SendHeaders(bool closing, System::IO::MemoryStream* ms);
    // static private System.String FormatHeaders(System.Net.WebHeaderCollection headers)
    // Offset: 0x16741D0
    static ::Il2CppString* FormatHeaders(System::Net::WebHeaderCollection* headers);
    // static private System.String CookieToClientString(System.Net.Cookie cookie)
    // Offset: 0x1673F70
    static ::Il2CppString* CookieToClientString(System::Net::Cookie* cookie);
    // static private System.String QuotedString(System.Net.Cookie cookie, System.String value)
    // Offset: 0x1674420
    static ::Il2CppString* QuotedString(System::Net::Cookie* cookie, ::Il2CppString* value);
    // static private System.Boolean IsToken(System.String value)
    // Offset: 0x16744F4
    static bool IsToken(::Il2CppString* value);
  }; // System.Net.HttpListenerResponse
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerResponse), 152 + sizeof(bool)> __System_Net_HttpListenerResponseSizeCheck;
  static_assert(sizeof(HttpListenerResponse) == 0x99);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerResponse*, "System.Net", "HttpListenerResponse");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_ForceCloseChunked
// Il2CppName: get_ForceCloseChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_ForceCloseChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_ForceCloseChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_ContentEncoding
// Il2CppName: get_ContentEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_ContentEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_ContentEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_ContentLength64
// Il2CppName: set_ContentLength64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(int64_t)>(&System::Net::HttpListenerResponse::set_ContentLength64)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_ContentLength64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(::Il2CppString*)>(&System::Net::HttpListenerResponse::set_ContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebHeaderCollection* (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_OutputStream
// Il2CppName: get_OutputStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream* (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_OutputStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_OutputStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::get_SendChunked
// Il2CppName: get_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::get_SendChunked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "get_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_SendChunked
// Il2CppName: set_SendChunked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(bool)>(&System::Net::HttpListenerResponse::set_SendChunked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_SendChunked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(int)>(&System::Net::HttpListenerResponse::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpListenerResponse::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(bool)>(&System::Net::HttpListenerResponse::Close)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)()>(&System::Net::HttpListenerResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(::Array<uint8_t>*, bool)>(&System::Net::HttpListenerResponse::Close)> {
  static const MethodInfo* get() {
    static auto* responseEntity = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* willBlock = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{responseEntity, willBlock});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::SendHeaders
// Il2CppName: SendHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListenerResponse::*)(bool, System::IO::MemoryStream*)>(&System::Net::HttpListenerResponse::SendHeaders)> {
  static const MethodInfo* get() {
    static auto* closing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System.IO", "MemoryStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "SendHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closing, ms});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::FormatHeaders
// Il2CppName: FormatHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Net::WebHeaderCollection*)>(&System::Net::HttpListenerResponse::FormatHeaders)> {
  static const MethodInfo* get() {
    static auto* headers = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "FormatHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headers});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::CookieToClientString
// Il2CppName: CookieToClientString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Net::Cookie*)>(&System::Net::HttpListenerResponse::CookieToClientString)> {
  static const MethodInfo* get() {
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System.Net", "Cookie")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "CookieToClientString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::QuotedString
// Il2CppName: QuotedString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Net::Cookie*, ::Il2CppString*)>(&System::Net::HttpListenerResponse::QuotedString)> {
  static const MethodInfo* get() {
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System.Net", "Cookie")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "QuotedString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cookie, value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListenerResponse::IsToken
// Il2CppName: IsToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Net::HttpListenerResponse::IsToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListenerResponse*), "IsToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
