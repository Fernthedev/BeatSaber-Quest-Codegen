#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::TcpListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::Sockets::TcpListener::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x28fd6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.get_LocalEndpoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::get_LocalEndpoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28fd85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "get_LocalEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28fd88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)(int32_t)>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x28fd894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Stop)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28fda20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.BeginAcceptTcpClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::TcpListener::*)(::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::TcpListener::BeginAcceptTcpClient)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x28fdae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "BeginAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.EndAcceptTcpClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::TcpClient* (::System::Net::Sockets::TcpListener::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::TcpListener::EndAcceptTcpClient)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28fdb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "EndAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Sockets::TcpListener::__set_m_ServerSocketEP(::System::Net::IPEndPoint*  value)  {
::cordl_internals::setInstanceField<::System::Net::IPEndPoint*, 0x10>(this, std::forward<::System::Net::IPEndPoint*>(value));
}
constexpr ::System::Net::IPEndPoint* System::Net::Sockets::TcpListener::__get_m_ServerSocketEP()  {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> System::Net::Sockets::TcpListener::__get_m_ServerSocketEP() const {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint*, 0x10>(this);
}
constexpr void System::Net::Sockets::TcpListener::__set_m_ServerSocket(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x18>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* System::Net::Sockets::TcpListener::__get_m_ServerSocket()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> System::Net::Sockets::TcpListener::__get_m_ServerSocket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x18>(this);
}
constexpr void System::Net::Sockets::TcpListener::__set_m_Active(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::TcpListener::__get_m_Active()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Net::Sockets::TcpListener::__get_m_Active() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Net::Sockets::TcpListener::__set_m_ExclusiveAddressUse(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& System::Net::Sockets::TcpListener::__get_m_ExclusiveAddressUse()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& System::Net::Sockets::TcpListener::__get_m_ExclusiveAddressUse() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
inline ::System::Net::Sockets::TcpListener* System::Net::Sockets::TcpListener::New_ctor(::System::Net::IPAddress*  localaddr, int32_t  port)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Sockets::TcpListener*>(localaddr, port));
}
inline void System::Net::Sockets::TcpListener::_ctor(::System::Net::IPAddress*  localaddr, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, localaddr, port);
}
inline ::System::Net::EndPoint* System::Net::Sockets::TcpListener::get_LocalEndpoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "get_LocalEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::TcpListener::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::Sockets::TcpListener::Start(int32_t  backlog)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, backlog);
}
inline void System::Net::Sockets::TcpListener::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Sockets::TcpListener::BeginAcceptTcpClient(::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "BeginAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::TcpClient* System::Net::Sockets::TcpListener::EndAcceptTcpClient(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener*>::get(),
                            "EndAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::TcpClient*, false>(*this, ___internal_method, asyncResult);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
