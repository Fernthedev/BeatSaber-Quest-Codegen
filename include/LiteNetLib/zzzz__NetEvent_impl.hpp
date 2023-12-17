#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
constexpr void LiteNetLib::__NetEvent__EType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::__NetEvent__EType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& LiteNetLib::__NetEvent__EType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::__NetEvent__EType::__NetEvent__EType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::Connect{static_cast<int32_t>(0x0)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::Disconnect{static_cast<int32_t>(0x1)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::Receive{static_cast<int32_t>(0x2)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::ReceiveUnconnected{static_cast<int32_t>(0x3)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::Error{static_cast<int32_t>(0x4)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::ConnectionLatencyUpdated{static_cast<int32_t>(0x5)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::Broadcast{static_cast<int32_t>(0x6)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::ConnectionRequest{static_cast<int32_t>(0x7)};
constexpr ::LiteNetLib::__NetEvent__EType  LiteNetLib::__NetEvent__EType::MessageDelivered{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::LiteNetLib::NetEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetEvent::*)(::LiteNetLib::NetManager*)>(&::LiteNetLib::NetEvent::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21fc760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::NetEvent::__set_Type(::LiteNetLib::__NetEvent__EType  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::__NetEvent__EType, 0x10>(this, std::forward<::LiteNetLib::__NetEvent__EType>(value));
}
constexpr ::LiteNetLib::__NetEvent__EType& LiteNetLib::NetEvent::__get_Type()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::__NetEvent__EType, 0x10>(this);
}
constexpr ::LiteNetLib::__NetEvent__EType const& LiteNetLib::NetEvent::__get_Type() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::__NetEvent__EType, 0x10>(this);
}
constexpr void LiteNetLib::NetEvent::__set_Peer(::LiteNetLib::NetPeer*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPeer*, 0x18>(this, std::forward<::LiteNetLib::NetPeer*>(value));
}
constexpr ::LiteNetLib::NetPeer* LiteNetLib::NetEvent::__get_Peer()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPeer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> LiteNetLib::NetEvent::__get_Peer() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPeer*, 0x18>(this);
}
constexpr void LiteNetLib::NetEvent::__set_RemoteEndPoint(::System::Net::IPEndPoint*  value)  {
::cordl_internals::setInstanceField<::System::Net::IPEndPoint*, 0x20>(this, std::forward<::System::Net::IPEndPoint*>(value));
}
constexpr ::System::Net::IPEndPoint* LiteNetLib::NetEvent::__get_RemoteEndPoint()  {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> LiteNetLib::NetEvent::__get_RemoteEndPoint() const {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint*, 0x20>(this);
}
constexpr void LiteNetLib::NetEvent::__set_UserData(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* LiteNetLib::NetEvent::__get_UserData()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> LiteNetLib::NetEvent::__get_UserData() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void LiteNetLib::NetEvent::__set_Latency(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::NetEvent::__get_Latency()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& LiteNetLib::NetEvent::__get_Latency() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void LiteNetLib::NetEvent::__set_ErrorCode(::System::Net::Sockets::SocketError  value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketError, 0x34>(this, std::forward<::System::Net::Sockets::SocketError>(value));
}
constexpr ::System::Net::Sockets::SocketError& LiteNetLib::NetEvent::__get_ErrorCode()  {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x34>(this);
}
constexpr ::System::Net::Sockets::SocketError const& LiteNetLib::NetEvent::__get_ErrorCode() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x34>(this);
}
constexpr void LiteNetLib::NetEvent::__set_DisconnectReason(::LiteNetLib::DisconnectReason  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::DisconnectReason, 0x38>(this, std::forward<::LiteNetLib::DisconnectReason>(value));
}
constexpr ::LiteNetLib::DisconnectReason& LiteNetLib::NetEvent::__get_DisconnectReason()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::DisconnectReason, 0x38>(this);
}
constexpr ::LiteNetLib::DisconnectReason const& LiteNetLib::NetEvent::__get_DisconnectReason() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::DisconnectReason, 0x38>(this);
}
constexpr void LiteNetLib::NetEvent::__set_ConnectionRequest(::LiteNetLib::ConnectionRequest*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::ConnectionRequest*, 0x40>(this, std::forward<::LiteNetLib::ConnectionRequest*>(value));
}
constexpr ::LiteNetLib::ConnectionRequest* LiteNetLib::NetEvent::__get_ConnectionRequest()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::ConnectionRequest*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::ConnectionRequest*> LiteNetLib::NetEvent::__get_ConnectionRequest() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::ConnectionRequest*, 0x40>(this);
}
constexpr void LiteNetLib::NetEvent::__set_DeliveryMethod(::LiteNetLib::DeliveryMethod  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::DeliveryMethod, 0x48>(this, std::forward<::LiteNetLib::DeliveryMethod>(value));
}
constexpr ::LiteNetLib::DeliveryMethod& LiteNetLib::NetEvent::__get_DeliveryMethod()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::DeliveryMethod, 0x48>(this);
}
constexpr ::LiteNetLib::DeliveryMethod const& LiteNetLib::NetEvent::__get_DeliveryMethod() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::DeliveryMethod, 0x48>(this);
}
constexpr void LiteNetLib::NetEvent::__set_DataReader(::LiteNetLib::NetPacketReader*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacketReader*, 0x50>(this, std::forward<::LiteNetLib::NetPacketReader*>(value));
}
constexpr ::LiteNetLib::NetPacketReader* LiteNetLib::NetEvent::__get_DataReader()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacketReader*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketReader*> LiteNetLib::NetEvent::__get_DataReader() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacketReader*, 0x50>(this);
}
inline ::LiteNetLib::NetEvent* LiteNetLib::NetEvent::New_ctor(::LiteNetLib::NetManager*  manager)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::NetEvent*>(manager));
}
inline void LiteNetLib::NetEvent::_ctor(::LiteNetLib::NetManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, manager);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
