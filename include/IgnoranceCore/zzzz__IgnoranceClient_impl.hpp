#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClient_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceConnectionEvent_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClient_def.hpp"
#include "IgnoranceThirdparty/zzzz__RingBuffer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceIncomingPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceOutgoingPacket_def.hpp"
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_Channels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Channels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Channels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_PollTime(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_PollTime()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_PollTime() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_Port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_PacketSizeLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_PacketSizeLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_PacketSizeLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_Verbosity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Verbosity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Verbosity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_Address(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Address()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_Address() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_UseSsl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_UseSsl()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_UseSsl() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_ValidateCertificate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_ValidateCertificate()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_ValidateCertificate() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_RootCertificatePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_RootCertificatePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_RootCertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__set_RootCertificate(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_RootCertificate()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__get_RootCertificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ValidateCertificate", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "RootCertificatePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RootCertificate", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::IgnoranceCore::__IgnoranceClient__ThreadParamInfo::__IgnoranceClient__ThreadParamInfo(int32_t  Channels, int32_t  PollTime, int32_t  Port, int32_t  PacketSizeLimit, int32_t  Verbosity, ::StringW  Address, bool  UseSsl, bool  ValidateCertificate, ::StringW  RootCertificatePath, ::StringW  RootCertificate) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->Channels = Channels;
this->PollTime = PollTime;
this->Port = Port;
this->PacketSizeLimit = PacketSizeLimit;
this->Verbosity = Verbosity;
this->Address = Address;
this->UseSsl = UseSsl;
this->ValidateCertificate = ValidateCertificate;
this->RootCertificatePath = RootCertificatePath;
this->RootCertificate = RootCertificate;
}
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.get_IsAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::get_IsAlive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f4290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "get_IsAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::Start)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x21f42a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::Stop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21f4858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.ThreadWorker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)(::System::Object*)>(&::IgnoranceCore::IgnoranceClient::ThreadWorker)> {
  constexpr static std::size_t size = 0xe90;
  constexpr static std::size_t addrs = 0x21f48e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "ThreadWorker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient.SetupRingBuffersIfNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::SetupRingBuffersIfNull)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x21f4614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "SetupRingBuffersIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceClient::*)()>(&::IgnoranceCore::IgnoranceClient::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21f5778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectAddress(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceClient::__get_ConnectAddress()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceClient::__get_ConnectAddress() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectPort(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_ConnectPort()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_ConnectPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ExpectedChannels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_ExpectedChannels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_ExpectedChannels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_PollTime(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_PollTime()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_PollTime() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_MaximumPacketSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_MaximumPacketSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_MaximumPacketSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Verbosity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_Verbosity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_Verbosity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_IncomingOutgoingBufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_IncomingOutgoingBufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_IncomingOutgoingBufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectionEventBufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceClient::__get_ConnectionEventBufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceClient::__get_ConnectionEventBufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_UseSsl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceClient::__get_UseSsl()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceClient::__get_UseSsl() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ValidateCertificate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x35>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceClient::__get_ValidateCertificate()  {
return ::cordl_internals::getInstanceField<bool, 0x35>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceClient::__get_ValidateCertificate() const {
return ::cordl_internals::getInstanceField<bool, 0x35>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_RootCertificatePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceClient::__get_RootCertificatePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceClient::__get_RootCertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_RootCertificate(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceClient::__get_RootCertificate()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceClient::__get_RootCertificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*, 0x48>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* IgnoranceCore::IgnoranceClient::__get_Incoming()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> IgnoranceCore::IgnoranceClient::__get_Incoming() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*, 0x48>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*, 0x50>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* IgnoranceCore::IgnoranceClient::__get_Outgoing()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> IgnoranceCore::IgnoranceClient::__get_Outgoing() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*, 0x50>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*, 0x58>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* IgnoranceCore::IgnoranceClient::__get_Commands()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> IgnoranceCore::IgnoranceClient::__get_Commands() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*, 0x58>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x60>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* IgnoranceCore::IgnoranceClient::__get_ConnectionEvents()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> IgnoranceCore::IgnoranceClient::__get_ConnectionEvents() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x60>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x68>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* IgnoranceCore::IgnoranceClient::__get_DisconnectionEvents()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> IgnoranceCore::IgnoranceClient::__get_DisconnectionEvents() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x68>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*, 0x70>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>* IgnoranceCore::IgnoranceClient::__get_StatusUpdates()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*> IgnoranceCore::IgnoranceClient::__get_StatusUpdates() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>*, 0x70>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_CeaseOperation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x78>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceClient::__get_CeaseOperation()  {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceClient::__get_CeaseOperation() const {
return ::cordl_internals::getInstanceField<bool, 0x78>(this);
}
constexpr void IgnoranceCore::IgnoranceClient::__set_WorkerThread(::System::Threading::Thread*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread*, 0x80>(this, std::forward<::System::Threading::Thread*>(value));
}
constexpr ::System::Threading::Thread* IgnoranceCore::IgnoranceClient::__get_WorkerThread()  {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> IgnoranceCore::IgnoranceClient::__get_WorkerThread() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0x80>(this);
}
inline bool IgnoranceCore::IgnoranceClient::get_IsAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "get_IsAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceClient::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceClient::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceClient::ThreadWorker(::System::Object*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "ThreadWorker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parameters);
}
inline void IgnoranceCore::IgnoranceClient::SetupRingBuffersIfNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            "SetupRingBuffersIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceClient* IgnoranceCore::IgnoranceClient::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::IgnoranceCore::IgnoranceClient*>());
}
inline void IgnoranceCore::IgnoranceClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceClient*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
