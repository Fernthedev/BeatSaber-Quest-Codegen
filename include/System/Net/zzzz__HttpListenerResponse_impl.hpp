#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerResponse_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__ResponseStream_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListenerResponse::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29c95f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_ForceCloseChunked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_ForceCloseChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_ForceCloseChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_ContentEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_ContentEncoding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29c7698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_ContentEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_ContentLength64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(int64_t)>(&::System::Net::HttpListenerResponse::set_ContentLength64)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29ca568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_ContentLength64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(::StringW)>(&::System::Net::HttpListenerResponse::set_ContentType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29c75c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_OutputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_OutputStream)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29ca6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_OutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.get_SendChunked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_SendChunked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool)>(&::System::Net::HttpListenerResponse::set_SendChunked)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29c5434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.set_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(int32_t)>(&::System::Net::HttpListenerResponse::set_StatusCode)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x29c748c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool)>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x29ca6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)()>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29ca710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, bool)>(&::System::Net::HttpListenerResponse::Close)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29c76b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.SendHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerResponse::*)(bool, ::System::IO::MemoryStream*)>(&::System::Net::HttpListenerResponse::SendHeaders)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x29ca724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "SendHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.FormatHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebHeaderCollection*)>(&::System::Net::HttpListenerResponse::FormatHeaders)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x29cb364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "FormatHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.CookieToClientString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::Cookie*)>(&::System::Net::HttpListenerResponse::CookieToClientString)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x29cb0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "CookieToClientString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.QuotedString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::Cookie*, ::StringW)>(&::System::Net::HttpListenerResponse::QuotedString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29cb5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "QuotedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerResponse.IsToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerResponse::IsToken)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x29cb688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "IsToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::HttpListenerResponse::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Net::HttpListenerResponse::__set_disposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerResponse::__get_disposed()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Net::HttpListenerResponse::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_content_encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding*, 0x18>(this, std::forward<::System::Text::Encoding*>(value));
}
constexpr ::System::Text::Encoding* System::Net::HttpListenerResponse::__get_content_encoding()  {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> System::Net::HttpListenerResponse::__get_content_encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x18>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_content_length(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Net::HttpListenerResponse::__get_content_length()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& System::Net::HttpListenerResponse::__get_content_length() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_cl_set(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerResponse::__get_cl_set()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::Net::HttpListenerResponse::__get_cl_set() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_content_type(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerResponse::__get_content_type()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__get_content_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_cookies(::System::Net::CookieCollection*  value)  {
::cordl_internals::setInstanceField<::System::Net::CookieCollection*, 0x38>(this, std::forward<::System::Net::CookieCollection*>(value));
}
constexpr ::System::Net::CookieCollection* System::Net::HttpListenerResponse::__get_cookies()  {
return ::cordl_internals::getInstanceField<::System::Net::CookieCollection*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> System::Net::HttpListenerResponse::__get_cookies() const {
return ::cordl_internals::getInstanceField<::System::Net::CookieCollection*, 0x38>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_headers(::System::Net::WebHeaderCollection*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection*, 0x40>(this, std::forward<::System::Net::WebHeaderCollection*>(value));
}
constexpr ::System::Net::WebHeaderCollection* System::Net::HttpListenerResponse::__get_headers()  {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> System::Net::HttpListenerResponse::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x40>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_keep_alive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerResponse::__get_keep_alive()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& System::Net::HttpListenerResponse::__get_keep_alive() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_output_stream(::System::Net::ResponseStream*  value)  {
::cordl_internals::setInstanceField<::System::Net::ResponseStream*, 0x50>(this, std::forward<::System::Net::ResponseStream*>(value));
}
constexpr ::System::Net::ResponseStream* System::Net::HttpListenerResponse::__get_output_stream()  {
return ::cordl_internals::getInstanceField<::System::Net::ResponseStream*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseStream*> System::Net::HttpListenerResponse::__get_output_stream() const {
return ::cordl_internals::getInstanceField<::System::Net::ResponseStream*, 0x50>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_version(::System::Version*  value)  {
::cordl_internals::setInstanceField<::System::Version*, 0x58>(this, std::forward<::System::Version*>(value));
}
constexpr ::System::Version* System::Net::HttpListenerResponse::__get_version()  {
return ::cordl_internals::getInstanceField<::System::Version*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> System::Net::HttpListenerResponse::__get_version() const {
return ::cordl_internals::getInstanceField<::System::Version*, 0x58>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_location(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerResponse::__get_location()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__get_location() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_status_code(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::HttpListenerResponse::__get_status_code()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr int32_t const& System::Net::HttpListenerResponse::__get_status_code() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_status_description(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerResponse::__get_status_description()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& System::Net::HttpListenerResponse::__get_status_description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_chunked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerResponse::__get_chunked()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& System::Net::HttpListenerResponse::__get_chunked() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_context(::System::Net::HttpListenerContext*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListenerContext*, 0x80>(this, std::forward<::System::Net::HttpListenerContext*>(value));
}
constexpr ::System::Net::HttpListenerContext* System::Net::HttpListenerResponse::__get_context()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> System::Net::HttpListenerResponse::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x80>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_HeadersSent(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerResponse::__get_HeadersSent()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& System::Net::HttpListenerResponse::__get_HeadersSent() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_headers_lock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x90>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Net::HttpListenerResponse::__get_headers_lock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Net::HttpListenerResponse::__get_headers_lock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x90>(this);
}
constexpr void System::Net::HttpListenerResponse::__set_force_close_chunked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerResponse::__get_force_close_chunked()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& System::Net::HttpListenerResponse::__get_force_close_chunked() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
inline void System::Net::HttpListenerResponse::setStaticF_tspecials(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "tspecials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Net::HttpListenerResponse::getStaticF_tspecials()  {
return ::cordl_internals::getStaticField<::StringW, "tspecials", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get>();
}
inline ::System::Net::HttpListenerResponse* System::Net::HttpListenerResponse::New_ctor(::System::Net::HttpListenerContext*  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpListenerResponse*>(context));
}
inline void System::Net::HttpListenerResponse::_ctor(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline bool System::Net::HttpListenerResponse::get_ForceCloseChunked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_ForceCloseChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::HttpListenerResponse::get_ContentEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_ContentEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(*this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::set_ContentLength64(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_ContentLength64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::set_ContentType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpListenerResponse::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(*this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpListenerResponse::get_OutputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_OutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline bool System::Net::HttpListenerResponse::get_SendChunked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "get_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::set_SendChunked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::set_StatusCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::HttpListenerResponse::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::Close(bool  force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, force);
}
inline void System::Net::HttpListenerResponse::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::HttpListenerResponse::Close(::ArrayW<uint8_t,::Array<uint8_t>*>  responseEntity, bool  willBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, responseEntity, willBlock);
}
inline void System::Net::HttpListenerResponse::SendHeaders(bool  closing, ::System::IO::MemoryStream*  ms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "SendHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, closing, ms);
}
inline ::StringW System::Net::HttpListenerResponse::FormatHeaders(::System::Net::WebHeaderCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "FormatHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, headers);
}
inline ::StringW System::Net::HttpListenerResponse::CookieToClientString(::System::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "CookieToClientString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cookie);
}
inline ::StringW System::Net::HttpListenerResponse::QuotedString(::System::Net::Cookie*  cookie, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "QuotedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cookie, value);
}
inline bool System::Net::HttpListenerResponse::IsToken(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerResponse*>::get(),
                            "IsToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
