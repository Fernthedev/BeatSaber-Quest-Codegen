#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServer_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceIncomingPacket_def.hpp"
#include "IgnoranceThirdparty/zzzz__RingBuffer_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceConnectionEvent_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServer_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceOutgoingPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServerStats_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_IsFruityDevice(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_IsFruityDevice()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_IsFruityDevice() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_BindAllInterfaces(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_BindAllInterfaces()  {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_BindAllInterfaces() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_Channels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Channels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Channels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_Peers(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Peers()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Peers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_PollTime(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PollTime()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PollTime() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_Port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_PacketSizeLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PacketSizeLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PacketSizeLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_Verbosity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Verbosity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Verbosity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_Address(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Address()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Address() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_UseSsl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_UseSsl()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_UseSsl() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_CertificatePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_CertificatePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_CertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_Certificate(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Certificate()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_Certificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_PrivateKeyPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PrivateKeyPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PrivateKeyPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__set_PrivateKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PrivateKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__get_PrivateKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "IsFruityDevice", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "BindAllInterfaces", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Peers", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "CertificatePath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Certificate", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PrivateKeyPath", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PrivateKey", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::IgnoranceCore::__IgnoranceServer__ThreadParamInfo::__IgnoranceServer__ThreadParamInfo(bool  IsFruityDevice, bool  BindAllInterfaces, int32_t  Channels, int32_t  Peers, int32_t  PollTime, int32_t  Port, int32_t  PacketSizeLimit, int32_t  Verbosity, ::StringW  Address, bool  UseSsl, ::StringW  CertificatePath, ::StringW  Certificate, ::StringW  PrivateKeyPath, ::StringW  PrivateKey) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->IsFruityDevice = IsFruityDevice;
this->BindAllInterfaces = BindAllInterfaces;
this->Channels = Channels;
this->Peers = Peers;
this->PollTime = PollTime;
this->Port = Port;
this->PacketSizeLimit = PacketSizeLimit;
this->Verbosity = Verbosity;
this->Address = Address;
this->UseSsl = UseSsl;
this->CertificatePath = CertificatePath;
this->Certificate = Certificate;
this->PrivateKeyPath = PrivateKeyPath;
this->PrivateKey = PrivateKey;
}
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.get_IsAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::get_IsAlive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f57f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "get_IsAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::Start)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x21f5804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::Stop)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f5e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.ThreadWorker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)(::System::Object*)>(&::IgnoranceCore::IgnoranceServer::ThreadWorker)> {
  constexpr static std::size_t size = 0x1180;
  constexpr static std::size_t addrs = 0x21f5e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "ThreadWorker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer.SetupRingBuffersIfNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::SetupRingBuffersIfNull)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x21f5bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "SetupRingBuffersIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::IgnoranceCore::IgnoranceServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::IgnoranceCore::IgnoranceServer::*)()>(&::IgnoranceCore::IgnoranceServer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21f701c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void IgnoranceCore::IgnoranceServer::__set_BindAddress(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_BindAddress()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_BindAddress() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_BindPort(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_BindPort()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_BindPort() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_MaximumChannels(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_MaximumChannels()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_MaximumChannels() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_MaximumPeers(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_MaximumPeers()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_MaximumPeers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_MaximumPacketSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_MaximumPacketSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_MaximumPacketSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_PollTime(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_PollTime()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_PollTime() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Verbosity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_Verbosity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_Verbosity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_IncomingOutgoingBufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_IncomingOutgoingBufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_IncomingOutgoingBufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_ConnectionEventBufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& IgnoranceCore::IgnoranceServer::__get_ConnectionEventBufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& IgnoranceCore::IgnoranceServer::__get_ConnectionEventBufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_IsFruityDevice(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_IsFruityDevice()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_IsFruityDevice() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_BindAllInterfaces(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_BindAllInterfaces()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_BindAllInterfaces() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_UseSsl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_UseSsl()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_UseSsl() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_CertificatePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_CertificatePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_CertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Certificate(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_Certificate()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_Certificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_PrivateKeyPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_PrivateKeyPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_PrivateKeyPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_PrivateKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& IgnoranceCore::IgnoranceServer::__get_PrivateKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& IgnoranceCore::IgnoranceServer::__get_PrivateKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_CeaseOperation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& IgnoranceCore::IgnoranceServer::__get_CeaseOperation()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& IgnoranceCore::IgnoranceServer::__get_CeaseOperation() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*, 0x68>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>* IgnoranceCore::IgnoranceServer::__get_Incoming()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*> IgnoranceCore::IgnoranceServer::__get_Incoming() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>*, 0x68>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*, 0x70>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>* IgnoranceCore::IgnoranceServer::__get_Outgoing()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*> IgnoranceCore::IgnoranceServer::__get_Outgoing() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>*, 0x70>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*, 0x78>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>* IgnoranceCore::IgnoranceServer::__get_Commands()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*> IgnoranceCore::IgnoranceServer::__get_Commands() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>*, 0x78>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x80>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* IgnoranceCore::IgnoranceServer::__get_ConnectionEvents()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> IgnoranceCore::IgnoranceServer::__get_ConnectionEvents() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x80>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x88>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>* IgnoranceCore::IgnoranceServer::__get_DisconnectionEvents()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*> IgnoranceCore::IgnoranceServer::__get_DisconnectionEvents() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>*, 0x88>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*, 0x90>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* IgnoranceCore::IgnoranceServer::__get_StatusUpdates()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*> IgnoranceCore::IgnoranceServer::__get_StatusUpdates() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*, 0x90>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_RecycledServerStatBlocks(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*  value)  {
::cordl_internals::setInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*, 0x98>(this, std::forward<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*>(value));
}
constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>* IgnoranceCore::IgnoranceServer::__get_RecycledServerStatBlocks()  {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*> IgnoranceCore::IgnoranceServer::__get_RecycledServerStatBlocks() const {
return ::cordl_internals::getInstanceField<::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>*, 0x98>(this);
}
constexpr void IgnoranceCore::IgnoranceServer::__set_WorkerThread(::System::Threading::Thread*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread*, 0xa0>(this, std::forward<::System::Threading::Thread*>(value));
}
constexpr ::System::Threading::Thread* IgnoranceCore::IgnoranceServer::__get_WorkerThread()  {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> IgnoranceCore::IgnoranceServer::__get_WorkerThread() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread*, 0xa0>(this);
}
inline bool IgnoranceCore::IgnoranceServer::get_IsAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "get_IsAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceServer::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceServer::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void IgnoranceCore::IgnoranceServer::ThreadWorker(::System::Object*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "ThreadWorker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parameters);
}
inline void IgnoranceCore::IgnoranceServer::SetupRingBuffersIfNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            "SetupRingBuffersIfNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::IgnoranceCore::IgnoranceServer* IgnoranceCore::IgnoranceServer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::IgnoranceCore::IgnoranceServer*>());
}
inline void IgnoranceCore::IgnoranceServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IgnoranceCore::IgnoranceServer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
