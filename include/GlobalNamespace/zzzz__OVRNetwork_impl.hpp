#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "GlobalNamespace/zzzz__OVRNetwork_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__FrameHeader.ToBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::GlobalNamespace::__OVRNetwork__FrameHeader::*)()>(&::GlobalNamespace::__OVRNetwork__FrameHeader::ToBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x27b47a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__FrameHeader.FromBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRNetwork__FrameHeader (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRNetwork__FrameHeader::FromBytes)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27b48c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                            "FromBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRNetwork__FrameHeader::__set_protocolIdentifier(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__OVRNetwork__FrameHeader::__get_protocolIdentifier()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& GlobalNamespace::__OVRNetwork__FrameHeader::__get_protocolIdentifier() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRNetwork__FrameHeader::__set_payloadType(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__FrameHeader::__get_payloadType()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__FrameHeader::__get_payloadType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OVRNetwork__FrameHeader::__set_payloadLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__FrameHeader::__get_payloadLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__FrameHeader::__get_payloadLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GlobalNamespace::__OVRNetwork__FrameHeader::ToBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__OVRNetwork__FrameHeader GlobalNamespace::__OVRNetwork__FrameHeader::FromBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  arr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__FrameHeader>::get(),
                            "FromBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRNetwork__FrameHeader, false>(nullptr, ___internal_method, arr);
}
// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRNetwork__FrameHeader::__OVRNetwork__FrameHeader(uint32_t  protocolIdentifier, int32_t  payloadType, int32_t  payloadLength) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->protocolIdentifier = protocolIdentifier;
this->payloadType = payloadType;
this->payloadLength = payloadLength;
}
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.StartListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(int32_t)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StartListening)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x27b49f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "StartListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.StopListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StopListening)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x27b4f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "StopListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.DoAcceptTcpClientCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoAcceptTcpClientCallback)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x27b50dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "DoAcceptTcpClientCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.HasConnectedClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::HasConnectedClient)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x27b5628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "HasConnectedClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.Broadcast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::Broadcast)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x27b587c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "Broadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer.DoWriteDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoWriteDataCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27b5e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "DoWriteDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27b5f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__set_tcpListener(::System::Net::Sockets::TcpListener*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::TcpListener*, 0x10>(this, std::forward<::System::Net::Sockets::TcpListener*>(value));
}
constexpr ::System::Net::Sockets::TcpListener* GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__get_tcpListener()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TcpListener*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpListener*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__get_tcpListener() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TcpListener*, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__set_clientsLock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__get_clientsLock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__get_clientsLock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__set_clients(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__get_clients()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::__get_clients() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*, 0x20>(this);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StartListening(int32_t  listeningPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "StartListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::StopListening()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "StopListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoAcceptTcpClientCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "DoAcceptTcpClientCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ar);
}
inline bool GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::HasConnectedClient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "HasConnectedClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::Broadcast(int32_t  payloadType, ::ArrayW<uint8_t,::Array<uint8_t>*>  payload)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "Broadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, payloadType, payload);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::DoWriteDataCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            "DoWriteDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ar);
}
inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>());
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::__OVRNetwork__OVRNetworkTcpClient__ConnectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Connected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState  GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState::Connecting{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.get_connectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_connectionState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27b5fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.get_Connected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27b5ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)(int32_t)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Connect)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x27b6008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.ConnectCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::ConnectCallback)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x27b6184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "ConnectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Disconnect)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x27b6484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Tick)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x27b66bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient.OnReadDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::OnReadDataCallback)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x27b68d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "OnReadDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::*)()>(&::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27b6db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_connectionStateChangedCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_connectionStateChangedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_connectionStateChangedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_payloadReceivedCallback(::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*, 0x18>(this, std::forward<::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*>(value));
}
constexpr ::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>* GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_payloadReceivedCallback()  {
return ::cordl_internals::getInstanceField<::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_payloadReceivedCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_4<int32_t,::ArrayW<uint8_t,::Array<uint8_t>*>,int32_t,int32_t>*, 0x18>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_tcpClient(::System::Net::Sockets::TcpClient*  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::TcpClient*, 0x20>(this, std::forward<::System::Net::Sockets::TcpClient*>(value));
}
constexpr ::System::Net::Sockets::TcpClient* GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_tcpClient()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TcpClient*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::TcpClient*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_tcpClient() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TcpClient*, 0x20>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_receivedBuffers(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x28>(this, std::forward<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_receivedBuffers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x28>(this);
}
constexpr ::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*> const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_receivedBuffers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>, 0x28>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_receivedBufferIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_receivedBufferIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_receivedBufferIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_receivedBufferDataSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_receivedBufferDataSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_receivedBufferDataSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__set_readyReceiveDataEvent(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x38>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_readyReceiveDataEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::__get_readyReceiveDataEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x38>(this);
}
inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_connectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "get_connectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient__ConnectionState, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Connect(int32_t  listeningPort)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, listeningPort);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::ConnectCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "ConnectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ar);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::OnReadDataCallback(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            "OnReadDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ar);
}
inline ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient* GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>());
}
inline void GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRNetwork._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRNetwork::*)()>(&::GlobalNamespace::OVRNetwork::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b479c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRNetwork* GlobalNamespace::OVRNetwork::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRNetwork*>());
}
inline void GlobalNamespace::OVRNetwork::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRNetwork*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
