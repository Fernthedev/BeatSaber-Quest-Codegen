#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::System::Net::HttpListenerContext*)>(&::System::Net::HttpListenerRequest::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29c9540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.SetRequestLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::SetRequestLine)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x29c685c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "SetRequestLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.CreateQueryString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::CreateQueryString)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x29c9de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "CreateQueryString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.MaybeUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerRequest::MaybeUri)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29ca000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "MaybeUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.IsPredefinedScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::HttpListenerRequest::IsPredefinedScheme)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x29ca0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "IsPredefinedScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.FinishInitialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::FinishInitialization)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x29c5cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "FinishInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.Unquote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequest::Unquote)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29ca350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "Unquote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.AddHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequest::*)(::StringW)>(&::System::Net::HttpListenerRequest::AddHeader)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x29c6ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "AddHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.FlushInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::FlushInput)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x29c78d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "FlushInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_HasEntityBody
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_HasEntityBody)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_HasEntityBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_InputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_InputStream)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x29ca3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_InputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_IsSecureConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_IsSecureConnection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29ca30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_IsSecureConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_KeepAlive)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x29c7774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_LocalEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ca330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_LocalEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_ProtocolVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_ProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_Url
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ca494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_Url",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserHostAddress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserHostAddress)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29ca2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_UserHostAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequest.get_UserHostName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpListenerRequest::*)()>(&::System::Net::HttpListenerRequest::get_UserHostName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29ca298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_UserHostName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::HttpListenerRequest::__set_accept_types(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Net::HttpListenerRequest::__get_accept_types()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Net::HttpListenerRequest::__get_accept_types() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_content_length(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Net::HttpListenerRequest::__get_content_length()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& System::Net::HttpListenerRequest::__get_content_length() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_cl_set(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerRequest::__get_cl_set()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Net::HttpListenerRequest::__get_cl_set() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_cookies(::System::Net::CookieCollection*  value)  {
::cordl_internals::setInstanceField<::System::Net::CookieCollection*, 0x28>(this, std::forward<::System::Net::CookieCollection*>(value));
}
constexpr ::System::Net::CookieCollection* System::Net::HttpListenerRequest::__get_cookies()  {
return ::cordl_internals::getInstanceField<::System::Net::CookieCollection*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> System::Net::HttpListenerRequest::__get_cookies() const {
return ::cordl_internals::getInstanceField<::System::Net::CookieCollection*, 0x28>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_headers(::System::Net::WebHeaderCollection*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection*, 0x30>(this, std::forward<::System::Net::WebHeaderCollection*>(value));
}
constexpr ::System::Net::WebHeaderCollection* System::Net::HttpListenerRequest::__get_headers()  {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> System::Net::HttpListenerRequest::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x30>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_method(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequest::__get_method()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequest::__get_method() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_input_stream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x40>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Net::HttpListenerRequest::__get_input_stream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Net::HttpListenerRequest::__get_input_stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x40>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_version(::System::Version*  value)  {
::cordl_internals::setInstanceField<::System::Version*, 0x48>(this, std::forward<::System::Version*>(value));
}
constexpr ::System::Version* System::Net::HttpListenerRequest::__get_version()  {
return ::cordl_internals::getInstanceField<::System::Version*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> System::Net::HttpListenerRequest::__get_version() const {
return ::cordl_internals::getInstanceField<::System::Version*, 0x48>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_query_string(::System::Collections::Specialized::NameValueCollection*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Specialized::NameValueCollection*, 0x50>(this, std::forward<::System::Collections::Specialized::NameValueCollection*>(value));
}
constexpr ::System::Collections::Specialized::NameValueCollection* System::Net::HttpListenerRequest::__get_query_string()  {
return ::cordl_internals::getInstanceField<::System::Collections::Specialized::NameValueCollection*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NameValueCollection*> System::Net::HttpListenerRequest::__get_query_string() const {
return ::cordl_internals::getInstanceField<::System::Collections::Specialized::NameValueCollection*, 0x50>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_raw_url(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequest::__get_raw_url()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequest::__get_raw_url() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_url(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x60>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Net::HttpListenerRequest::__get_url()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Net::HttpListenerRequest::__get_url() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x60>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_referrer(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x68>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Net::HttpListenerRequest::__get_referrer()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Net::HttpListenerRequest::__get_referrer() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x68>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_user_languages(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x70>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Net::HttpListenerRequest::__get_user_languages()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x70>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Net::HttpListenerRequest::__get_user_languages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x70>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_context(::System::Net::HttpListenerContext*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListenerContext*, 0x78>(this, std::forward<::System::Net::HttpListenerContext*>(value));
}
constexpr ::System::Net::HttpListenerContext* System::Net::HttpListenerRequest::__get_context()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> System::Net::HttpListenerRequest::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x78>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_is_chunked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerRequest::__get_is_chunked()  {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr bool const& System::Net::HttpListenerRequest::__get_is_chunked() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_ka_set(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x81>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerRequest::__get_ka_set()  {
return ::cordl_internals::getInstanceField<bool, 0x81>(this);
}
constexpr bool const& System::Net::HttpListenerRequest::__get_ka_set() const {
return ::cordl_internals::getInstanceField<bool, 0x81>(this);
}
constexpr void System::Net::HttpListenerRequest::__set_keep_alive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x82>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpListenerRequest::__get_keep_alive()  {
return ::cordl_internals::getInstanceField<bool, 0x82>(this);
}
constexpr bool const& System::Net::HttpListenerRequest::__get_keep_alive() const {
return ::cordl_internals::getInstanceField<bool, 0x82>(this);
}
inline void System::Net::HttpListenerRequest::setStaticF__100continue(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "_100continue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Net::HttpListenerRequest::getStaticF__100continue()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "_100continue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>();
}
inline void System::Net::HttpListenerRequest::setStaticF_separators(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "separators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Net::HttpListenerRequest::getStaticF_separators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "separators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get>();
}
inline ::System::Net::HttpListenerRequest* System::Net::HttpListenerRequest::New_ctor(::System::Net::HttpListenerContext*  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpListenerRequest*>(context));
}
inline void System::Net::HttpListenerRequest::_ctor(::System::Net::HttpListenerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListenerContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void System::Net::HttpListenerRequest::SetRequestLine(::StringW  req)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "SetRequestLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, req);
}
inline void System::Net::HttpListenerRequest::CreateQueryString(::StringW  query)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "CreateQueryString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, query);
}
inline bool System::Net::HttpListenerRequest::MaybeUri(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "MaybeUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline bool System::Net::HttpListenerRequest::IsPredefinedScheme(::StringW  scheme)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "IsPredefinedScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, scheme);
}
inline bool System::Net::HttpListenerRequest::FinishInitialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "FinishInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::Unquote(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "Unquote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline void System::Net::HttpListenerRequest::AddHeader(::StringW  header)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "AddHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, header);
}
inline bool System::Net::HttpListenerRequest::FlushInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "FlushInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_HasEntityBody()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_HasEntityBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::HttpListenerRequest::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*, false>(*this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpListenerRequest::get_InputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_InputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_IsSecureConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_IsSecureConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Net::HttpListenerRequest::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::HttpListenerRequest::get_LocalEndPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_LocalEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(*this, ___internal_method);
}
inline ::System::Version* System::Net::HttpListenerRequest::get_ProtocolVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_ProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(*this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpListenerRequest::get_Url()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_Url",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(*this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserHostAddress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_UserHostAddress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Net::HttpListenerRequest::get_UserHostName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequest*>::get(),
                            "get_UserHostName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
