#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__ResponseStream_def.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__RequestStream_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Net/zzzz__ListenerPrefix_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
constexpr void System::Net::__HttpConnection__InputState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__HttpConnection__InputState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__HttpConnection__InputState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__HttpConnection__InputState::__HttpConnection__InputState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::__HttpConnection__InputState  System::Net::__HttpConnection__InputState::RequestLine{static_cast<int32_t>(0x0)};
constexpr ::System::Net::__HttpConnection__InputState  System::Net::__HttpConnection__InputState::Headers{static_cast<int32_t>(0x1)};
constexpr void System::Net::__HttpConnection__LineState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__HttpConnection__LineState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__HttpConnection__LineState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__HttpConnection__LineState::__HttpConnection__LineState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::__HttpConnection__LineState  System::Net::__HttpConnection__LineState::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::__HttpConnection__LineState  System::Net::__HttpConnection__LineState::CR{static_cast<int32_t>(0x1)};
constexpr ::System::Net::__HttpConnection__LineState  System::Net::__HttpConnection__LineState::LF{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Net::HttpConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::Net::Sockets::Socket*, ::System::Net::EndPointListener*, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::System::Net::HttpConnection::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x29c11a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::Init)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29c4f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.get_Reuses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::get_Reuses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c50c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "get_Reuses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.get_LocalEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29c50d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "get_LocalEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.get_IsSecure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::get_IsSecure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c5188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "get_IsSecure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.set_Prefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::Net::ListenerPrefix*)>(&::System::Net::HttpConnection::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29c5190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "set_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.OnTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::Object*)>(&::System::Net::HttpConnection::OnTimeout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29c5198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "OnTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.BeginReadRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::BeginReadRequest)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x29c1400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "BeginReadRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.GetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::RequestStream* (::System::Net::HttpConnection::*)(bool, int64_t)>(&::System::Net::HttpConnection::GetRequestStream)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x29c52e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "GetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.GetResponseStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ResponseStream* (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::GetResponseStream)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29c5510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.OnRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::HttpConnection::OnRead)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29c55d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.OnReadInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::System::IAsyncResult*)>(&::System::Net::HttpConnection::OnReadInternal)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x29c56ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "OnReadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.RemoveConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::RemoveConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29c62ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.ProcessInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpConnection::*)(::System::IO::MemoryStream*)>(&::System::Net::HttpConnection::ProcessInput)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x29c5a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "ProcessInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.ReadLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpConnection::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ByRef<int32_t>)>(&::System::Net::HttpConnection::ReadLine)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x29c66e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.SendError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(::StringW, int32_t)>(&::System::Net::HttpConnection::SendError)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x29bce80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "SendError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.SendError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::SendError)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29c59e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "SendError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.Unbind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::Unbind)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29c52b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "Unbind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.CloseSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)()>(&::System::Net::HttpConnection::CloseSocket)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29c51b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "CloseSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpConnection::*)(bool)>(&::System::Net::HttpConnection::Close)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x29c2cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpConnection.__ctor_b__24_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpConnection::*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(&::System::Net::HttpConnection::__ctor_b__24_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29c7c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "<.ctor>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
inline void System::Net::HttpConnection::setStaticF_onread_cb(::System::AsyncCallback*  value)  {
::cordl_internals::setStaticField<::System::AsyncCallback*, "onread_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::HttpConnection::getStaticF_onread_cb()  {
return ::cordl_internals::getStaticField<::System::AsyncCallback*, "onread_cb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get>();
}
constexpr void System::Net::HttpConnection::__set_sock(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x10>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::HttpConnection::__get_sock()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::HttpConnection::__get_sock() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x10>(this);
}
constexpr void System::Net::HttpConnection::__set_stream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x18>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Net::HttpConnection::__get_stream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Net::HttpConnection::__get_stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x18>(this);
}
constexpr void System::Net::HttpConnection::__set_epl(::System::Net::EndPointListener*  value)  {
::cordl_internals::setInstanceField<::System::Net::EndPointListener*, 0x20>(this, std::forward<::System::Net::EndPointListener*>(value));
}
constexpr ::System::Net::EndPointListener* System::Net::HttpConnection::__get_epl()  {
return ::cordl_internals::getInstanceField<::System::Net::EndPointListener*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPointListener*> System::Net::HttpConnection::__get_epl() const {
return ::cordl_internals::getInstanceField<::System::Net::EndPointListener*, 0x20>(this);
}
constexpr void System::Net::HttpConnection::__set_ms(::System::IO::MemoryStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream*, 0x28>(this, std::forward<::System::IO::MemoryStream*>(value));
}
constexpr ::System::IO::MemoryStream* System::Net::HttpConnection::__get_ms()  {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> System::Net::HttpConnection::__get_ms() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream*, 0x28>(this);
}
constexpr void System::Net::HttpConnection::__set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Net::HttpConnection::__get_buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Net::HttpConnection::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this);
}
constexpr void System::Net::HttpConnection::__set_context(::System::Net::HttpListenerContext*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListenerContext*, 0x38>(this, std::forward<::System::Net::HttpListenerContext*>(value));
}
constexpr ::System::Net::HttpListenerContext* System::Net::HttpConnection::__get_context()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerContext*> System::Net::HttpConnection::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListenerContext*, 0x38>(this);
}
constexpr void System::Net::HttpConnection::__set_current_line(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x40>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::Net::HttpConnection::__get_current_line()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::Net::HttpConnection::__get_current_line() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x40>(this);
}
constexpr void System::Net::HttpConnection::__set_prefix(::System::Net::ListenerPrefix*  value)  {
::cordl_internals::setInstanceField<::System::Net::ListenerPrefix*, 0x48>(this, std::forward<::System::Net::ListenerPrefix*>(value));
}
constexpr ::System::Net::ListenerPrefix* System::Net::HttpConnection::__get_prefix()  {
return ::cordl_internals::getInstanceField<::System::Net::ListenerPrefix*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ListenerPrefix*> System::Net::HttpConnection::__get_prefix() const {
return ::cordl_internals::getInstanceField<::System::Net::ListenerPrefix*, 0x48>(this);
}
constexpr void System::Net::HttpConnection::__set_i_stream(::System::Net::RequestStream*  value)  {
::cordl_internals::setInstanceField<::System::Net::RequestStream*, 0x50>(this, std::forward<::System::Net::RequestStream*>(value));
}
constexpr ::System::Net::RequestStream* System::Net::HttpConnection::__get_i_stream()  {
return ::cordl_internals::getInstanceField<::System::Net::RequestStream*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::RequestStream*> System::Net::HttpConnection::__get_i_stream() const {
return ::cordl_internals::getInstanceField<::System::Net::RequestStream*, 0x50>(this);
}
constexpr void System::Net::HttpConnection::__set_o_stream(::System::Net::ResponseStream*  value)  {
::cordl_internals::setInstanceField<::System::Net::ResponseStream*, 0x58>(this, std::forward<::System::Net::ResponseStream*>(value));
}
constexpr ::System::Net::ResponseStream* System::Net::HttpConnection::__get_o_stream()  {
return ::cordl_internals::getInstanceField<::System::Net::ResponseStream*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseStream*> System::Net::HttpConnection::__get_o_stream() const {
return ::cordl_internals::getInstanceField<::System::Net::ResponseStream*, 0x58>(this);
}
constexpr void System::Net::HttpConnection::__set_chunked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpConnection::__get_chunked()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& System::Net::HttpConnection::__get_chunked() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void System::Net::HttpConnection::__set_reuses(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::HttpConnection::__get_reuses()  {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr int32_t const& System::Net::HttpConnection::__get_reuses() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr void System::Net::HttpConnection::__set_context_bound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpConnection::__get_context_bound()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& System::Net::HttpConnection::__get_context_bound() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void System::Net::HttpConnection::__set_secure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::HttpConnection::__get_secure()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& System::Net::HttpConnection::__get_secure() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void System::Net::HttpConnection::__set_cert(::System::Security::Cryptography::X509Certificates::X509Certificate*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate*, 0x70>(this, std::forward<::System::Security::Cryptography::X509Certificates::X509Certificate*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::HttpConnection::__get_cert()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> System::Net::HttpConnection::__get_cert() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate*, 0x70>(this);
}
constexpr void System::Net::HttpConnection::__set_s_timeout(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::HttpConnection::__get_s_timeout()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& System::Net::HttpConnection::__get_s_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void System::Net::HttpConnection::__set_timer(::System::Threading::Timer*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Timer*, 0x80>(this, std::forward<::System::Threading::Timer*>(value));
}
constexpr ::System::Threading::Timer* System::Net::HttpConnection::__get_timer()  {
return ::cordl_internals::getInstanceField<::System::Threading::Timer*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> System::Net::HttpConnection::__get_timer() const {
return ::cordl_internals::getInstanceField<::System::Threading::Timer*, 0x80>(this);
}
constexpr void System::Net::HttpConnection::__set_local_ep(::System::Net::IPEndPoint*  value)  {
::cordl_internals::setInstanceField<::System::Net::IPEndPoint*, 0x88>(this, std::forward<::System::Net::IPEndPoint*>(value));
}
constexpr ::System::Net::IPEndPoint* System::Net::HttpConnection::__get_local_ep()  {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> System::Net::HttpConnection::__get_local_ep() const {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint*, 0x88>(this);
}
constexpr void System::Net::HttpConnection::__set_last_listener(::System::Net::HttpListener*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListener*, 0x90>(this, std::forward<::System::Net::HttpListener*>(value));
}
constexpr ::System::Net::HttpListener* System::Net::HttpConnection::__get_last_listener()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpListener*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> System::Net::HttpConnection::__get_last_listener() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListener*, 0x90>(this);
}
constexpr void System::Net::HttpConnection::__set_client_cert_errors(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x98>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Net::HttpConnection::__get_client_cert_errors()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x98>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Net::HttpConnection::__get_client_cert_errors() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x98>(this);
}
constexpr void System::Net::HttpConnection::__set_client_cert(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate2*, 0xa0>(this, std::forward<::System::Security::Cryptography::X509Certificates::X509Certificate2*>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* System::Net::HttpConnection::__get_client_cert()  {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate2*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> System::Net::HttpConnection::__get_client_cert() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate2*, 0xa0>(this);
}
constexpr void System::Net::HttpConnection::__set_ssl_stream(::System::Net::Security::SslStream*  value)  {
::cordl_internals::setInstanceField<::System::Net::Security::SslStream*, 0xa8>(this, std::forward<::System::Net::Security::SslStream*>(value));
}
constexpr ::System::Net::Security::SslStream* System::Net::HttpConnection::__get_ssl_stream()  {
return ::cordl_internals::getInstanceField<::System::Net::Security::SslStream*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> System::Net::HttpConnection::__get_ssl_stream() const {
return ::cordl_internals::getInstanceField<::System::Net::Security::SslStream*, 0xa8>(this);
}
constexpr void System::Net::HttpConnection::__set_input_state(::System::Net::__HttpConnection__InputState  value)  {
::cordl_internals::setInstanceField<::System::Net::__HttpConnection__InputState, 0xb0>(this, std::forward<::System::Net::__HttpConnection__InputState>(value));
}
constexpr ::System::Net::__HttpConnection__InputState& System::Net::HttpConnection::__get_input_state()  {
return ::cordl_internals::getInstanceField<::System::Net::__HttpConnection__InputState, 0xb0>(this);
}
constexpr ::System::Net::__HttpConnection__InputState const& System::Net::HttpConnection::__get_input_state() const {
return ::cordl_internals::getInstanceField<::System::Net::__HttpConnection__InputState, 0xb0>(this);
}
constexpr void System::Net::HttpConnection::__set_line_state(::System::Net::__HttpConnection__LineState  value)  {
::cordl_internals::setInstanceField<::System::Net::__HttpConnection__LineState, 0xb4>(this, std::forward<::System::Net::__HttpConnection__LineState>(value));
}
constexpr ::System::Net::__HttpConnection__LineState& System::Net::HttpConnection::__get_line_state()  {
return ::cordl_internals::getInstanceField<::System::Net::__HttpConnection__LineState, 0xb4>(this);
}
constexpr ::System::Net::__HttpConnection__LineState const& System::Net::HttpConnection::__get_line_state() const {
return ::cordl_internals::getInstanceField<::System::Net::__HttpConnection__LineState, 0xb4>(this);
}
constexpr void System::Net::HttpConnection::__set_position(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::HttpConnection::__get_position()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr int32_t const& System::Net::HttpConnection::__get_position() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
inline ::System::Net::HttpConnection* System::Net::HttpConnection::New_ctor(::System::Net::Sockets::Socket*  sock, ::System::Net::EndPointListener*  epl, bool  secure, ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpConnection*>(sock, epl, secure, cert));
}
inline void System::Net::HttpConnection::_ctor(::System::Net::Sockets::Socket*  sock, ::System::Net::EndPointListener*  epl, bool  secure, ::System::Security::Cryptography::X509Certificates::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sock, epl, secure, cert);
}
inline void System::Net::HttpConnection::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Net::HttpConnection::get_Reuses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "get_Reuses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Net::IPEndPoint* System::Net::HttpConnection::get_LocalEndPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "get_LocalEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(*this, ___internal_method);
}
inline bool System::Net::HttpConnection::get_IsSecure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "get_IsSecure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Net::HttpConnection::set_Prefix(::System::Net::ListenerPrefix*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "set_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ListenerPrefix*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Net::HttpConnection::OnTimeout(::System::Object*  unused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "OnTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unused);
}
inline void System::Net::HttpConnection::BeginReadRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "BeginReadRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Net::RequestStream* System::Net::HttpConnection::GetRequestStream(bool  chunked, int64_t  contentlength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "GetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::RequestStream*, false>(*this, ___internal_method, chunked, contentlength);
}
inline ::System::Net::ResponseStream* System::Net::HttpConnection::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "GetResponseStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ResponseStream*, false>(*this, ___internal_method);
}
inline void System::Net::HttpConnection::OnRead(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ares);
}
inline void System::Net::HttpConnection::OnReadInternal(::System::IAsyncResult*  ares)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "OnReadInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ares);
}
inline void System::Net::HttpConnection::RemoveConnection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Net::HttpConnection::ProcessInput(::System::IO::MemoryStream*  ms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "ProcessInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, ms);
}
inline ::StringW System::Net::HttpConnection::ReadLine(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  len, ByRef<int32_t>  used)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, buffer, offset, len, used);
}
inline void System::Net::HttpConnection::SendError(::StringW  msg, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "SendError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg, status);
}
inline void System::Net::HttpConnection::SendError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "SendError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::HttpConnection::Unbind()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "Unbind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::HttpConnection::CloseSocket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "CloseSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::HttpConnection::Close(bool  force_close)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, force_close);
}
inline bool System::Net::HttpConnection::__ctor_b__24_0(::System::Object*  t, ::System::Security::Cryptography::X509Certificates::X509Certificate*  c, ::System::Security::Cryptography::X509Certificates::X509Chain*  ch, ::System::Net::Security::SslPolicyErrors  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpConnection*>::get(),
                            "<.ctor>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, t, c, ch, e);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
