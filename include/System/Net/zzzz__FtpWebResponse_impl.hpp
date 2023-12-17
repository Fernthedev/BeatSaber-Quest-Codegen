#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Net::__FtpWebResponse__EmptyStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpWebResponse__EmptyStream::*)()>(&::System::Net::__FtpWebResponse__EmptyStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x299acec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebResponse__EmptyStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::System::Net::__FtpWebResponse__EmptyStream* System::Net::__FtpWebResponse__EmptyStream::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__FtpWebResponse__EmptyStream*>());
}
inline void System::Net::__FtpWebResponse__EmptyStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebResponse__EmptyStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Net::FtpWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::IO::Stream*, int64_t, ::System::Uri*, ::System::Net::FtpStatusCode, ::StringW, ::System::DateTime, ::StringW, ::StringW, ::StringW)>(&::System::Net::FtpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x299a58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.UpdateStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::Net::FtpStatusCode, ::StringW, ::StringW)>(&::System::Net::FtpWebResponse::UpdateStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29990f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "UpdateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.GetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x299ac84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.SetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::IO::Stream*)>(&::System::Net::FtpWebResponse::SetResponseStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x299a4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "SetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::Close)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x299ad78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x299ae5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_ResponseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299af7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpStatusCode (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299af84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::FtpWebResponse::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Net::FtpWebResponse::__set__responseStream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x20>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Net::FtpWebResponse::__get__responseStream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Net::FtpWebResponse::__get__responseStream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x20>(this);
}
constexpr void System::Net::FtpWebResponse::__set__contentLength(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Net::FtpWebResponse::__get__contentLength()  {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr int64_t const& System::Net::FtpWebResponse::__get__contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr void System::Net::FtpWebResponse::__set__responseUri(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x30>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Net::FtpWebResponse::__get__responseUri()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Net::FtpWebResponse::__get__responseUri() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x30>(this);
}
constexpr void System::Net::FtpWebResponse::__set__statusCode(::System::Net::FtpStatusCode  value)  {
::cordl_internals::setInstanceField<::System::Net::FtpStatusCode, 0x38>(this, std::forward<::System::Net::FtpStatusCode>(value));
}
constexpr ::System::Net::FtpStatusCode& System::Net::FtpWebResponse::__get__statusCode()  {
return ::cordl_internals::getInstanceField<::System::Net::FtpStatusCode, 0x38>(this);
}
constexpr ::System::Net::FtpStatusCode const& System::Net::FtpWebResponse::__get__statusCode() const {
return ::cordl_internals::getInstanceField<::System::Net::FtpStatusCode, 0x38>(this);
}
constexpr void System::Net::FtpWebResponse::__set__statusLine(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__statusLine()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__statusLine() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void System::Net::FtpWebResponse::__set__ftpRequestHeaders(::System::Net::WebHeaderCollection*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection*, 0x48>(this, std::forward<::System::Net::WebHeaderCollection*>(value));
}
constexpr ::System::Net::WebHeaderCollection* System::Net::FtpWebResponse::__get__ftpRequestHeaders()  {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> System::Net::FtpWebResponse::__get__ftpRequestHeaders() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x48>(this);
}
constexpr void System::Net::FtpWebResponse::__set__lastModified(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x50>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& System::Net::FtpWebResponse::__get__lastModified()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x50>(this);
}
constexpr ::System::DateTime const& System::Net::FtpWebResponse::__get__lastModified() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x50>(this);
}
constexpr void System::Net::FtpWebResponse::__set__bannerMessage(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__bannerMessage()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__bannerMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void System::Net::FtpWebResponse::__set__welcomeMessage(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__welcomeMessage()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__welcomeMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void System::Net::FtpWebResponse::__set__exitMessage(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__exitMessage()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__exitMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
inline ::System::Net::FtpWebResponse* System::Net::FtpWebResponse::New_ctor(::System::IO::Stream*  responseStream, int64_t  contentLength, ::System::Uri*  responseUri, ::System::Net::FtpStatusCode  statusCode, ::StringW  statusLine, ::System::DateTime  lastModified, ::StringW  bannerMessage, ::StringW  welcomeMessage, ::StringW  exitMessage)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FtpWebResponse*>(responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage, exitMessage));
}
inline void System::Net::FtpWebResponse::_ctor(::System::IO::Stream*  responseStream, int64_t  contentLength, ::System::Uri*  responseUri, ::System::Net::FtpStatusCode  statusCode, ::StringW  statusLine, ::System::DateTime  lastModified, ::StringW  bannerMessage, ::StringW  welcomeMessage, ::StringW  exitMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage, exitMessage);
}
inline void System::Net::FtpWebResponse::UpdateStatus(::System::Net::FtpStatusCode  statusCode, ::StringW  statusLine, ::StringW  exitMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "UpdateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, statusCode, statusLine, exitMessage);
}
inline ::System::IO::Stream* System::Net::FtpWebResponse::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
inline void System::Net::FtpWebResponse::SetResponseStream(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "SetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream);
}
inline void System::Net::FtpWebResponse::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::FtpWebResponse::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(*this, ___internal_method);
}
inline ::System::Uri* System::Net::FtpWebResponse::get_ResponseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "get_ResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(*this, ___internal_method);
}
inline ::System::Net::FtpStatusCode System::Net::FtpWebResponse::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::FtpStatusCode, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
