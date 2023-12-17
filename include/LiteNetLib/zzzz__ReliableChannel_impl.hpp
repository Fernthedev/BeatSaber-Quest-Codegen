#pragma once
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LiteNetLib::__ReliableChannel__PendingPacket::*)()>(&::LiteNetLib::__ReliableChannel__PendingPacket::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2207b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__ReliableChannel__PendingPacket::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::__ReliableChannel__PendingPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2207600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.TrySend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__ReliableChannel__PendingPacket::*)(int64_t, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::__ReliableChannel__PendingPacket::TrySend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x220760c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "TrySend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__ReliableChannel__PendingPacket.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::__ReliableChannel__PendingPacket::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::__ReliableChannel__PendingPacket::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2207158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::__ReliableChannel__PendingPacket::__set__packet(::LiteNetLib::NetPacket*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacket*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::LiteNetLib::NetPacket*>(value));
}
constexpr ::LiteNetLib::NetPacket* LiteNetLib::__ReliableChannel__PendingPacket::__get__packet()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> LiteNetLib::__ReliableChannel__PendingPacket::__get__packet() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LiteNetLib::__ReliableChannel__PendingPacket::__set__timeStamp(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int64_t>(value));
}
constexpr int64_t& LiteNetLib::__ReliableChannel__PendingPacket::__get__timeStamp()  {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int64_t const& LiteNetLib::__ReliableChannel__PendingPacket::__get__timeStamp() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void LiteNetLib::__ReliableChannel__PendingPacket::__set__isSent(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& LiteNetLib::__ReliableChannel__PendingPacket::__get__isSent()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& LiteNetLib::__ReliableChannel__PendingPacket::__get__isSent() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW LiteNetLib::__ReliableChannel__PendingPacket::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void LiteNetLib::__ReliableChannel__PendingPacket::Init(::LiteNetLib::NetPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packet);
}
inline void LiteNetLib::__ReliableChannel__PendingPacket::TrySend(int64_t  currentTime, ::LiteNetLib::NetPeer*  peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "TrySend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentTime, peer);
}
inline bool LiteNetLib::__ReliableChannel__PendingPacket::Clear(::LiteNetLib::NetPeer*  peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__ReliableChannel__PendingPacket>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, peer);
}
// Ctor Parameters [CppParam { name: "_packet", ty: "::LiteNetLib::NetPacket*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::__ReliableChannel__PendingPacket::__ReliableChannel__PendingPacket(::LiteNetLib::NetPacket*  _packet, int64_t  _timeStamp, bool  _isSent) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->_packet = _packet;
this->_timeStamp = _timeStamp;
this->_isSent = _isSent;
}
//  Writing Method size for method: ::LiteNetLib::ReliableChannel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPeer*, bool, uint8_t)>(&::LiteNetLib::ReliableChannel::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x22036dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessAck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel::ProcessAck)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2206e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                            "ProcessAck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.SendNextPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)()>(&::LiteNetLib::ReliableChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x2207194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::ReliableChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x2207684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::ReliableChannel::__set__outgoingAcks(::LiteNetLib::NetPacket*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacket*, 0x28>(this, std::forward<::LiteNetLib::NetPacket*>(value));
}
constexpr ::LiteNetLib::NetPacket* LiteNetLib::ReliableChannel::__get__outgoingAcks()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> LiteNetLib::ReliableChannel::__get__outgoingAcks() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket*, 0x28>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__pendingPackets(::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>, 0x30>(this, std::forward<::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>>(value));
}
constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>& LiteNetLib::ReliableChannel::__get__pendingPackets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>, 0x30>(this);
}
constexpr ::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*> const& LiteNetLib::ReliableChannel::__get__pendingPackets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::__ReliableChannel__PendingPacket,::Array<::LiteNetLib::__ReliableChannel__PendingPacket>*>, 0x30>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__receivedPackets(::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>, 0x38>(this, std::forward<::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>>(value));
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>& LiteNetLib::ReliableChannel::__get__receivedPackets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>, 0x38>(this);
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*> const& LiteNetLib::ReliableChannel::__get__receivedPackets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::NetPacket*,::Array<::LiteNetLib::NetPacket*>*>, 0x38>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__earlyReceived(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<bool,::Array<bool>*>, 0x40>(this, std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
constexpr ::ArrayW<bool,::Array<bool>*>& LiteNetLib::ReliableChannel::__get__earlyReceived()  {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x40>(this);
}
constexpr ::ArrayW<bool,::Array<bool>*> const& LiteNetLib::ReliableChannel::__get__earlyReceived() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x40>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__localSeqence(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::ReliableChannel::__get__localSeqence()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__get__localSeqence() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__remoteSequence(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::ReliableChannel::__get__remoteSequence()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__get__remoteSequence() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__localWindowStart(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::ReliableChannel::__get__localWindowStart()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__get__localWindowStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__remoteWindowStart(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::ReliableChannel::__get__remoteWindowStart()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__get__remoteWindowStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__mustSendAcks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& LiteNetLib::ReliableChannel::__get__mustSendAcks()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& LiteNetLib::ReliableChannel::__get__mustSendAcks() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__deliveryMethod(::LiteNetLib::DeliveryMethod  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::DeliveryMethod, 0x59>(this, std::forward<::LiteNetLib::DeliveryMethod>(value));
}
constexpr ::LiteNetLib::DeliveryMethod& LiteNetLib::ReliableChannel::__get__deliveryMethod()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::DeliveryMethod, 0x59>(this);
}
constexpr ::LiteNetLib::DeliveryMethod const& LiteNetLib::ReliableChannel::__get__deliveryMethod() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::DeliveryMethod, 0x59>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__ordered(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5a>(this, std::forward<bool>(value));
}
constexpr bool& LiteNetLib::ReliableChannel::__get__ordered()  {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this);
}
constexpr bool const& LiteNetLib::ReliableChannel::__get__ordered() const {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__windowSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& LiteNetLib::ReliableChannel::__get__windowSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& LiteNetLib::ReliableChannel::__get__windowSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void LiteNetLib::ReliableChannel::__set__id(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x60>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& LiteNetLib::ReliableChannel::__get__id()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x60>(this);
}
constexpr uint8_t const& LiteNetLib::ReliableChannel::__get__id() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x60>(this);
}
inline ::LiteNetLib::ReliableChannel* LiteNetLib::ReliableChannel::New_ctor(::LiteNetLib::NetPeer*  peer, bool  ordered, uint8_t  id)  {
return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::ReliableChannel*>(peer, ordered, id));
}
inline void LiteNetLib::ReliableChannel::_ctor(::LiteNetLib::NetPeer*  peer, bool  ordered, uint8_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, peer, ordered, id);
}
inline void LiteNetLib::ReliableChannel::ProcessAck(::LiteNetLib::NetPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                            "ProcessAck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packet);
}
inline void LiteNetLib::ReliableChannel::SendNextPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                            "SendNextPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool LiteNetLib::ReliableChannel::ProcessPacket(::LiteNetLib::NetPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel*>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, packet);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
