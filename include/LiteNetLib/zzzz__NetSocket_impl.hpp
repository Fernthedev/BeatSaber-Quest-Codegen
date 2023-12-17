#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_LocalPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "get_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_LocalPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(int32_t)>(&::LiteNetLib::NetSocket::set_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "set_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_Ttl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_Ttl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2204ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "get_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_Ttl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(int16_t)>(&::LiteNetLib::NetSocket::set_Ttl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21fb8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "set_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(::LiteNetLib::INetSocketListener*)>(&::LiteNetLib::NetSocket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21fd1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetSocketListener*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.IsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::IsActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2204fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.ReceiveLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(::System::Object*)>(&::LiteNetLib::NetSocket::ReceiveLogic)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x2204fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "ReceiveLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Bind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*, int32_t, bool, bool, ::System::Threading::ThreadPriority)>(&::LiteNetLib::NetSocket::Bind)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2200e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.BindSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, bool)>(&::LiteNetLib::NetSocket::BindSocket)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x220555c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "BindSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendBroadcast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(&::LiteNetLib::NetSocket::SendBroadcast)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x220180c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "SendBroadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::IPEndPoint*, ByRef<::System::Net::Sockets::SocketError>)>(&::LiteNetLib::NetSocket::SendTo)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x21fb8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "SendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(bool)>(&::LiteNetLib::NetSocket::Close)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22026a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::NetSocket::__set__udpSocketv4(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x10>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* LiteNetLib::NetSocket::__get__udpSocketv4()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> LiteNetLib::NetSocket::__get__udpSocketv4() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x10>(this);
}
constexpr void LiteNetLib::NetSocket::__set__udpSocketv6(::System::Net::Sockets::Socket*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket*, 0x18>(this, std::forward<::System::Net::Sockets::Socket*>(value));
}
constexpr ::System::Net::Sockets::Socket* LiteNetLib::NetSocket::__get__udpSocketv6()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> LiteNetLib::NetSocket::__get__udpSocketv6() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket*, 0x18>(this);
}
constexpr void LiteNetLib::NetSocket::__set__threadv4(::System::Threading::Thread*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread*, 0x20>(this, std::forward<::System::Threading::Thread*>(value));
}
constexpr ::System::Threading::Thread* LiteNetLib::NetSocket::__get__threadv4()  {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> LiteNetLib::NetSocket::__get__threadv4() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x20>(this);
}
constexpr void LiteNetLib::NetSocket::__set__threadv6(::System::Threading::Thread*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread*, 0x28>(this, std::forward<::System::Threading::Thread*>(value));
}
constexpr ::System::Threading::Thread* LiteNetLib::NetSocket::__get__threadv6()  {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> LiteNetLib::NetSocket::__get__threadv6() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x28>(this);
}
constexpr void LiteNetLib::NetSocket::__set__listener(::LiteNetLib::INetSocketListener*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::INetSocketListener*, 0x30>(this, std::forward<::LiteNetLib::INetSocketListener*>(value));
}
constexpr ::LiteNetLib::INetSocketListener* LiteNetLib::NetSocket::__get__listener()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::INetSocketListener*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INetSocketListener*> LiteNetLib::NetSocket::__get__listener() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::INetSocketListener*, 0x30>(this);
}
inline void LiteNetLib::NetSocket::setStaticF_MulticastAddressV6(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "MulticastAddressV6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* LiteNetLib::NetSocket::getStaticF_MulticastAddressV6()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "MulticastAddressV6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>();
}
inline void LiteNetLib::NetSocket::setStaticF_IPv6Support(bool  value)  {
::cordl_internals::setStaticField<bool, "IPv6Support", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>(std::forward<bool>(value));
}
inline bool LiteNetLib::NetSocket::getStaticF_IPv6Support()  {
return ::cordl_internals::getStaticField<bool, "IPv6Support", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>();
}
constexpr void LiteNetLib::NetSocket::__set__LocalPort_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::NetSocket::__get__LocalPort_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& LiteNetLib::NetSocket::__get__LocalPort_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void LiteNetLib::NetSocket::__set_IsRunning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& LiteNetLib::NetSocket::__get_IsRunning()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& LiteNetLib::NetSocket::__get_IsRunning() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
inline int32_t LiteNetLib::NetSocket::get_LocalPort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "get_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void LiteNetLib::NetSocket::set_LocalPort(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "set_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int16_t LiteNetLib::NetSocket::get_Ttl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "get_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(*this, ___internal_method);
}
inline void LiteNetLib::NetSocket::set_Ttl(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "set_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::LiteNetLib::NetSocket* LiteNetLib::NetSocket::New_ctor(::LiteNetLib::INetSocketListener*  listener)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::NetSocket*>(listener));
}
inline void LiteNetLib::NetSocket::_ctor(::LiteNetLib::INetSocketListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetSocketListener*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listener);
}
inline bool LiteNetLib::NetSocket::IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void LiteNetLib::NetSocket::ReceiveLogic(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "ReceiveLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state);
}
/// @param priority: ::System::Threading::ThreadPriority (default: static_cast<int32_t>(0x2))
inline bool LiteNetLib::NetSocket::Bind(::System::Net::IPAddress*  addressIPv4, ::System::Net::IPAddress*  addressIPv6, int32_t  port, bool  reuseAddress, bool  ipv6, ::System::Threading::ThreadPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, addressIPv4, addressIPv6, port, reuseAddress, ipv6, priority);
}
inline bool LiteNetLib::NetSocket::BindSocket(::System::Net::Sockets::Socket*  socket, ::System::Net::IPEndPoint*  ep, bool  reuseAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "BindSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, socket, ep, reuseAddress);
}
inline bool LiteNetLib::NetSocket::SendBroadcast(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset, int32_t  size, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "SendBroadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, data, offset, size, port);
}
inline int32_t LiteNetLib::NetSocket::SendTo(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset, int32_t  size, ::System::Net::IPEndPoint*  remoteEndPoint, ByRef<::System::Net::Sockets::SocketError>  errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "SendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, data, offset, size, remoteEndPoint, errorCode);
}
inline void LiteNetLib::NetSocket::Close(bool  suspend)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, suspend);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
