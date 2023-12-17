#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::*)()>(&::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x2825634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2825cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*> const& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set___4__this(::Mono::Net::Security::MonoTlsStream*  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MonoTlsStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Mono::Net::Security::MonoTlsStream*>(value));
}
constexpr ::Mono::Net::Security::MonoTlsStream* Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MonoTlsStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MonoTlsStream*> Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MonoTlsStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set_tunnel(::System::Net::WebConnectionTunnel*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebConnectionTunnel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::WebConnectionTunnel*>(value));
}
constexpr ::System::Net::WebConnectionTunnel* Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get_tunnel()  {
return ::cordl_internals::getInstanceField<::System::Net::WebConnectionTunnel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebConnectionTunnel*> Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get_tunnel() const {
return ::cordl_internals::getInstanceField<::System::Net::WebConnectionTunnel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set__socket_5__2(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get__socket_5__2()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get__socket_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MonoTlsStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_socket_5__2", ty: "::System::Net::Sockets::Socket*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__MonoTlsStream___CreateStream_d__18::__MonoTlsStream___CreateStream_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::Mono::Net::Security::MonoTlsStream*  __4__this, ::System::Net::WebConnectionTunnel*  tunnel, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Sockets::Socket*  _socket_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->tunnel = tunnel;
this->cancellationToken = cancellationToken;
this->_socket_5__2 = _socket_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_Request
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_ExceptionStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebExceptionStatus (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::get_ExceptionStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "get_ExceptionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.get_CertificateValidationFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2825370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "get_CertificateValidationFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.set_CertificateValidationFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(bool)>(&::Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2825378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "set_CertificateValidationFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)(::System::Net::HttpWebRequest*, ::System::Net::Sockets::NetworkStream*)>(&::Mono::Net::Security::MonoTlsStream::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2825384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CreateStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::Mono::Net::Security::MonoTlsStream::*)(::System::Net::WebConnectionTunnel*, ::System::Threading::CancellationToken)>(&::Mono::Net::Security::MonoTlsStream::CreateStream)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2825458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "CreateStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x282555c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoTlsStream.CloseSslStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoTlsStream::*)()>(&::Mono::Net::Security::MonoTlsStream::CloseSslStream)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2825560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "CloseSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mono::Net::Security::MonoTlsStream::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_provider(::Mono::Net::Security::MobileTlsProvider*  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileTlsProvider*, 0x10>(this, std::forward<::Mono::Net::Security::MobileTlsProvider*>(value));
}
constexpr ::Mono::Net::Security::MobileTlsProvider* Mono::Net::Security::MonoTlsStream::__get_provider()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileTlsProvider*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileTlsProvider*> Mono::Net::Security::MonoTlsStream::__get_provider() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileTlsProvider*, 0x10>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_networkStream(::System::Net::Sockets::NetworkStream*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::NetworkStream*, 0x18>(this, std::forward<::System::Net::Sockets::NetworkStream*>(value));
}
constexpr ::System::Net::Sockets::NetworkStream* Mono::Net::Security::MonoTlsStream::__get_networkStream()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::NetworkStream*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> Mono::Net::Security::MonoTlsStream::__get_networkStream() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::NetworkStream*, 0x18>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_request(::System::Net::HttpWebRequest*  value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebRequest*, 0x20>(this, std::forward<::System::Net::HttpWebRequest*>(value));
}
constexpr ::System::Net::HttpWebRequest* Mono::Net::Security::MonoTlsStream::__get_request()  {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpWebRequest*> Mono::Net::Security::MonoTlsStream::__get_request() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest*, 0x20>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_settings(::Mono::Security::Interface::MonoTlsSettings*  value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::MonoTlsSettings*, 0x28>(this, std::forward<::Mono::Security::Interface::MonoTlsSettings*>(value));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* Mono::Net::Security::MonoTlsStream::__get_settings()  {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoTlsSettings*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsSettings*> Mono::Net::Security::MonoTlsStream::__get_settings() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoTlsSettings*, 0x28>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_sslStream(::System::Net::Security::SslStream*  value)  {
::cordl_internals::setInstanceField<::System::Net::Security::SslStream*, 0x30>(this, std::forward<::System::Net::Security::SslStream*>(value));
}
constexpr ::System::Net::Security::SslStream* Mono::Net::Security::MonoTlsStream::__get_sslStream()  {
return ::cordl_internals::getInstanceField<::System::Net::Security::SslStream*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::SslStream*> Mono::Net::Security::MonoTlsStream::__get_sslStream() const {
return ::cordl_internals::getInstanceField<::System::Net::Security::SslStream*, 0x30>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_sslStreamLock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x38>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Mono::Net::Security::MonoTlsStream::__get_sslStreamLock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Mono::Net::Security::MonoTlsStream::__get_sslStreamLock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set_status(::System::Net::WebExceptionStatus  value)  {
::cordl_internals::setInstanceField<::System::Net::WebExceptionStatus, 0x40>(this, std::forward<::System::Net::WebExceptionStatus>(value));
}
constexpr ::System::Net::WebExceptionStatus& Mono::Net::Security::MonoTlsStream::__get_status()  {
return ::cordl_internals::getInstanceField<::System::Net::WebExceptionStatus, 0x40>(this);
}
constexpr ::System::Net::WebExceptionStatus const& Mono::Net::Security::MonoTlsStream::__get_status() const {
return ::cordl_internals::getInstanceField<::System::Net::WebExceptionStatus, 0x40>(this);
}
constexpr void Mono::Net::Security::MonoTlsStream::__set__CertificateValidationFailed_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Net::Security::MonoTlsStream::__get__CertificateValidationFailed_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& Mono::Net::Security::MonoTlsStream::__get__CertificateValidationFailed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
inline ::System::Net::HttpWebRequest* Mono::Net::Security::MonoTlsStream::get_Request()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "get_Request",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*, false>(*this, ___internal_method);
}
inline ::System::Net::WebExceptionStatus Mono::Net::Security::MonoTlsStream::get_ExceptionStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "get_ExceptionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebExceptionStatus, false>(*this, ___internal_method);
}
inline bool Mono::Net::Security::MonoTlsStream::get_CertificateValidationFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "get_CertificateValidationFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::set_CertificateValidationFailed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "set_CertificateValidationFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Mono::Net::Security::MonoTlsStream* Mono::Net::Security::MonoTlsStream::New_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::Sockets::NetworkStream*  networkStream)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::MonoTlsStream*>(request, networkStream));
}
inline void Mono::Net::Security::MonoTlsStream::_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::Sockets::NetworkStream*  networkStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, request, networkStream);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* Mono::Net::Security::MonoTlsStream::CreateStream(::System::Net::WebConnectionTunnel*  tunnel, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "CreateStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebConnectionTunnel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*, false>(*this, ___internal_method, tunnel, cancellationToken);
}
inline void Mono::Net::Security::MonoTlsStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::MonoTlsStream::CloseSslStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoTlsStream*>::get(),
                            "CloseSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
