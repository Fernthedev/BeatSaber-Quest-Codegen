#pragma once
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/Net/zzzz__FileWebResponse_def.hpp"
#include "System/Net/zzzz__FileWebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
//  Writing Method size for method: ::System::Net::FileWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Net::FileWebRequest*, ::System::Uri*, ::System::IO::FileAccess, bool)>(&::System::Net::FileWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x29b559c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FileWebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x29b64fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29b6730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x29b673c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29b68cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.get_ResponseUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29b6968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.CheckDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::CheckDisposed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29b68e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::Close)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29b6980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.System_Net_ICloseEx_CloseEx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebResponse::*)(::System::Net::CloseExState)>(&::System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x29b6a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "System.Net.ICloseEx.CloseEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebResponse.GetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FileWebResponse::*)()>(&::System::Net::FileWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29b6b84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Net::FileWebResponse::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr  System::Net::FileWebResponse::operator ::System::Net::ICloseEx*() noexcept {
return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
constexpr void System::Net::FileWebResponse::__set_m_closed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::FileWebResponse::__get_m_closed()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& System::Net::FileWebResponse::__get_m_closed() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void System::Net::FileWebResponse::__set_m_contentLength(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Net::FileWebResponse::__get_m_contentLength()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& System::Net::FileWebResponse::__get_m_contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void System::Net::FileWebResponse::__set_m_fileAccess(::System::IO::FileAccess  value)  {
::cordl_internals::setInstanceField<::System::IO::FileAccess, 0x28>(this, std::forward<::System::IO::FileAccess>(value));
}
constexpr ::System::IO::FileAccess& System::Net::FileWebResponse::__get_m_fileAccess()  {
return ::cordl_internals::getInstanceField<::System::IO::FileAccess, 0x28>(this);
}
constexpr ::System::IO::FileAccess const& System::Net::FileWebResponse::__get_m_fileAccess() const {
return ::cordl_internals::getInstanceField<::System::IO::FileAccess, 0x28>(this);
}
constexpr void System::Net::FileWebResponse::__set_m_headers(::System::Net::WebHeaderCollection*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection*, 0x30>(this, std::forward<::System::Net::WebHeaderCollection*>(value));
}
constexpr ::System::Net::WebHeaderCollection* System::Net::FileWebResponse::__get_m_headers()  {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> System::Net::FileWebResponse::__get_m_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection*, 0x30>(this);
}
constexpr void System::Net::FileWebResponse::__set_m_stream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x38>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Net::FileWebResponse::__get_m_stream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Net::FileWebResponse::__get_m_stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x38>(this);
}
constexpr void System::Net::FileWebResponse::__set_m_uri(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x40>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Net::FileWebResponse::__get_m_uri()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Net::FileWebResponse::__get_m_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x40>(this);
}
inline ::System::Net::FileWebResponse* System::Net::FileWebResponse::New_ctor(::System::Net::FileWebRequest*  request, ::System::Uri*  uri, ::System::IO::FileAccess  access, bool  asyncHint)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FileWebResponse*>(request, uri, access, asyncHint));
}
inline void System::Net::FileWebResponse::_ctor(::System::Net::FileWebRequest*  request, ::System::Uri*  uri, ::System::IO::FileAccess  access, bool  asyncHint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FileWebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, request, uri, access, asyncHint);
}
inline ::System::Net::FileWebResponse* System::Net::FileWebResponse::New_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FileWebResponse*>(serializationInfo, streamingContext));
}
inline void System::Net::FileWebResponse::_ctor(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebResponse::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  serializationInfo, ::System::Runtime::Serialization::StreamingContext  streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::WebHeaderCollection* System::Net::FileWebResponse::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(*this, ___internal_method);
}
inline ::System::Uri* System::Net::FileWebResponse::get_ResponseUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "get_ResponseUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(*this, ___internal_method);
}
inline void System::Net::FileWebResponse::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::FileWebResponse::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx(::System::Net::CloseExState  closeState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "System.Net.ICloseEx.CloseEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, closeState);
}
inline ::System::IO::Stream* System::Net::FileWebResponse::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebResponse*>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
