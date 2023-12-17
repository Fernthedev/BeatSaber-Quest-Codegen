#pragma once
#include "GlobalNamespace/zzzz__IgnoranceConnectionManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__IgnoranceConnectionManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IgnoranceConnectionManager_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClient_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServer_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceChannelTypes_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::__IgnoranceConnectionManager__ConnectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::Connecting{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::Connected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::Disconnecting{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::Disconnected{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::__IgnoranceConnectionManager__ConnectionState::Disposed{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3ec48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>"
constexpr  GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>*() noexcept {
return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::IgnoranceConnectionManager*>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectionRequestHandler*, 0x10>(this, std::forward<::GlobalNamespace::IConnectionRequestHandler*>(value));
}
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_connectionRequestHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionRequestHandler*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionRequestHandler*, 0x10>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_useSsl(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_useSsl()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_useSsl() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_userId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_userId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_userName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_userName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_enableBackgroundSentry(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_enableBackgroundSentry()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_enableBackgroundSentry() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase* GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase*>());
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnectionParamsBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3ec58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__set_port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__set_certificatePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_certificatePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_certificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__set_certificate(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_certificate()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_certificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__set_privateKeyPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_privateKeyPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_privateKeyPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__set_privateKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_privateKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::__get_privateKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
inline ::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams* GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams*>());
}
inline void GlobalNamespace::__IgnoranceConnectionManager__StartServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__StartServerParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe38bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_hostName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_hostName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_hostName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_port(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_port()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_serverUserId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_serverUserId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_serverUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_serverUserName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_serverUserName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_serverUserName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_validateCertificate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_validateCertificate()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_validateCertificate() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_rootCertificatePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_rootCertificatePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_rootCertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__set_rootCertificate(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_rootCertificate()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::__get_rootCertificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
inline ::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams* GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams*>());
}
inline void GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__ConnectToServerParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.set_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)(::StringW)>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ec70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ec78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.set_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)(::StringW)>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ec80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ec88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.set_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)(bool)>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::set_isConnectionOwner)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3ec90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "set_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)(::GlobalNamespace::IgnoranceConnectionManager*, uint32_t, ::StringW, ::StringW, bool)>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe3e34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IgnoranceConnectionManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::Send)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe3ec9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::Disconnect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe3ecc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnection"
constexpr  GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::operator ::GlobalNamespace::IConnection*() noexcept {
return static_cast<::GlobalNamespace::IConnection*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__set__connectionManager(::GlobalNamespace::IgnoranceConnectionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x10>(this, std::forward<::GlobalNamespace::IgnoranceConnectionManager*>(value));
}
constexpr ::GlobalNamespace::IgnoranceConnectionManager* GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__connectionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__connectionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x10>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__set_peerId(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get_peerId()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this);
}
constexpr uint32_t const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get_peerId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__set__userId_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__userId_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__userId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__set__userName_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__userName_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__userName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__set__isConnectionOwner_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__isConnectionOwner_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::__get__isConnectionOwner_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline ::StringW GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::set_userId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::set_userName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::set_isConnectionOwner(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "set_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection* GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::New_ctor(::GlobalNamespace::IgnoranceConnectionManager*  connectionManager, uint32_t  peerId, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>(connectionManager, peerId, userId, userName, isConnectionOwner));
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::_ctor(::GlobalNamespace::IgnoranceConnectionManager*  connectionManager, uint32_t  peerId, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IgnoranceConnectionManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connectionManager, peerId, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::Send(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ece8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0._DisposeAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::_DisposeAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ecf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*>::get(),
                            "<DisposeAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::__set_client(::IgnoranceCore::IgnoranceClient*  value)  {
::cordl_internals::setInstanceField<::IgnoranceCore::IgnoranceClient*, 0x10>(this, std::forward<::IgnoranceCore::IgnoranceClient*>(value));
}
constexpr ::IgnoranceCore::IgnoranceClient* GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::__get_client()  {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceClient*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceClient*> GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::__get_client() const {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceClient*, 0x10>(this);
}
inline ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0* GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*>());
}
inline void GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0::_DisposeAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_0*>::get(),
                            "<DisposeAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ecf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1._DisposeAsync_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::_DisposeAsync_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3ed00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*>::get(),
                            "<DisposeAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::__set_server(::IgnoranceCore::IgnoranceServer*  value)  {
::cordl_internals::setInstanceField<::IgnoranceCore::IgnoranceServer*, 0x10>(this, std::forward<::IgnoranceCore::IgnoranceServer*>(value));
}
constexpr ::IgnoranceCore::IgnoranceServer* GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::__get_server()  {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceServer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceServer*> GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::__get_server() const {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceServer*, 0x10>(this);
}
inline ::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1* GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*>());
}
inline void GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1::_DisposeAsync_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager____c__DisplayClass77_1*>::get(),
                            "<DisposeAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xe3ed08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3f0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__set___4__this(::GlobalNamespace::IgnoranceConnectionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IgnoranceConnectionManager*>(value));
}
constexpr ::GlobalNamespace::IgnoranceConnectionManager* GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::IgnoranceConnectionManager*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IgnoranceConnectionManager___DisposeAsync_d__77::__IgnoranceConnectionManager___DisposeAsync_d__77(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::IgnoranceConnectionManager*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::*)()>(&::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xe3f0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3f4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___4__this(::GlobalNamespace::IgnoranceConnectionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IgnoranceConnectionManager*>(value));
}
constexpr ::GlobalNamespace::IgnoranceConnectionManager* GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IgnoranceConnectionManager*> GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IgnoranceConnectionManager*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set__cancellationToken_5__2(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get__cancellationToken_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::IgnoranceConnectionManager*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::IgnoranceConnectionManager*  __4__this, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3ca3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3cad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3cb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe3cc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3ccac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3cd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3ce0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3cebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3cf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3d01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3d0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3d17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.add_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*)>(&::GlobalNamespace::IgnoranceConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3d22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.remove_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*)>(&::GlobalNamespace::IgnoranceConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3d2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.set_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&::GlobalNamespace::IgnoranceConnectionManager::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d39c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.set_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&::GlobalNamespace::IgnoranceConnectionManager::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3d3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3d3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3d3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_connectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3d3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3d424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_isDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3d434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_serverUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_serverUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.set_serverUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&::GlobalNamespace::IgnoranceConnectionManager::set_serverUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.get_serverUserName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::get_serverUserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.set_serverUserName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&::GlobalNamespace::IgnoranceConnectionManager::set_serverUserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3d45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe37cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*)>(&::GlobalNamespace::IgnoranceConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xe3d464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xe3d614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe3dd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xe3de04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.HandleConnectionEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::HandleConnectionEvents)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xe3d728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "HandleConnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.HandleIncomingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::HandleIncomingEvents)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xe3d9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "HandleIncomingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.HandleDisconnectionEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::HandleDisconnectionEvents)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe3dc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "HandleDisconnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.GetConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xe3e154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.TryParseConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)(::LiteNetLib::Utils::NetDataReader*, ByRef<::StringW>, ByRef<::StringW>, ByRef<bool>)>(&::GlobalNamespace::IgnoranceConnectionManager::TryParseConnectionMessage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xe3e3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "TryParseConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(uint32_t, ::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::IgnoranceConnectionManager::Send)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe3e264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.DisconnectPeer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(uint32_t, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::IgnoranceConnectionManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xe3e4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "DisconnectPeer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.TryGetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IgnoranceConnectionManager::*)(uint32_t, ByRef<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>)>(&::GlobalNamespace::IgnoranceConnectionManager::TryGetConnection)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe3e5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "TryGetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::IgnoranceConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe3e6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::IgnoranceConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe3e778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::IgnoranceConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xe3de38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.GetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::IgnoranceConnectionManager::*)(int32_t)>(&::GlobalNamespace::IgnoranceConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe3e858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.ToDeliveryMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::DeliveryMethod (*)(uint8_t)>(&::GlobalNamespace::IgnoranceConnectionManager::ToDeliveryMethod)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3e6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "ToDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.ToChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::IgnoranceConnectionManager::ToChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe3e6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "ToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.WaitForClientShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::IgnoranceCore::IgnoranceClient*)>(&::GlobalNamespace::IgnoranceConnectionManager::WaitForClientShutdown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe3dfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "WaitForClientShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IgnoranceCore::IgnoranceClient*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.WaitForServerShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::IgnoranceCore::IgnoranceServer*)>(&::GlobalNamespace::IgnoranceConnectionManager::WaitForServerShutdown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe3e0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "WaitForServerShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IgnoranceCore::IgnoranceServer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::IgnoranceConnectionManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe3e93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::IgnoranceConnectionManager::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe3e8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.StartBackgroundSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::StartBackgroundSentry)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xe3e9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "StartBackgroundSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.CheckSentryState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::CheckSentryState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe3d704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "CheckSentryState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoranceConnectionManager.BackgroundDisconnectSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::IgnoranceConnectionManager::*)()>(&::GlobalNamespace::IgnoranceConnectionManager::BackgroundDisconnectSentry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe3eb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "BackgroundDisconnectSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
constexpr  GlobalNamespace::IgnoranceConnectionManager::operator ::GlobalNamespace::IConnectionManager*() noexcept {
return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr  GlobalNamespace::IgnoranceConnectionManager::operator ::GlobalNamespace::IPollable*() noexcept {
return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::IgnoranceConnectionManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onInitializedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::IgnoranceConnectionManager::__get_onInitializedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::IgnoranceConnectionManager::__get_onInitializedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x18>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::IgnoranceConnectionManager::__get_onConnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x18>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0x20>(this, std::forward<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* GlobalNamespace::IgnoranceConnectionManager::__get_onDisconnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> GlobalNamespace::IgnoranceConnectionManager::__get_onDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0x20>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, 0x28>(this, std::forward<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, 0x28>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::IConnection*>*, 0x30>(this, std::forward<::System::Action_1<::GlobalNamespace::IConnection*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>* GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionConnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::IConnection*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionConnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::IConnection*>*, 0x30>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*, 0x38>(this, std::forward<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>* GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionDisconnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*, 0x38>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value)  {
::cordl_internals::setInstanceField<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*, 0x40>(this, std::forward<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>(value));
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>* GlobalNamespace::IgnoranceConnectionManager::__get_onReceivedDataEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*> GlobalNamespace::IgnoranceConnectionManager::__get_onReceivedDataEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*, 0x40>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__userId_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::IgnoranceConnectionManager::__get__userId_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::IgnoranceConnectionManager::__get__userId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__userName_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::IgnoranceConnectionManager::__get__userName_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& GlobalNamespace::IgnoranceConnectionManager::__get__userName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__channels(::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>, 0x58>(this, std::forward<::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>>(value));
}
constexpr ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>& GlobalNamespace::IgnoranceConnectionManager::__get__channels()  {
return ::cordl_internals::getInstanceField<::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>, 0x58>(this);
}
constexpr ::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*> const& GlobalNamespace::IgnoranceConnectionManager::__get__channels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::IgnoranceCore::IgnoranceChannelTypes,::Array<::IgnoranceCore::IgnoranceChannelTypes>*>, 0x58>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__state(::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, 0x60>(this, std::forward<::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState>(value));
}
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState& GlobalNamespace::IgnoranceConnectionManager::__get__state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, 0x60>(this);
}
constexpr ::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState const& GlobalNamespace::IgnoranceConnectionManager::__get__state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__IgnoranceConnectionManager__ConnectionState, 0x60>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__client(::IgnoranceCore::IgnoranceClient*  value)  {
::cordl_internals::setInstanceField<::IgnoranceCore::IgnoranceClient*, 0x68>(this, std::forward<::IgnoranceCore::IgnoranceClient*>(value));
}
constexpr ::IgnoranceCore::IgnoranceClient* GlobalNamespace::IgnoranceConnectionManager::__get__client()  {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceClient*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceClient*> GlobalNamespace::IgnoranceConnectionManager::__get__client() const {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceClient*, 0x68>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__server(::IgnoranceCore::IgnoranceServer*  value)  {
::cordl_internals::setInstanceField<::IgnoranceCore::IgnoranceServer*, 0x70>(this, std::forward<::IgnoranceCore::IgnoranceServer*>(value));
}
constexpr ::IgnoranceCore::IgnoranceServer* GlobalNamespace::IgnoranceConnectionManager::__get__server()  {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceServer*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::IgnoranceCore::IgnoranceServer*> GlobalNamespace::IgnoranceConnectionManager::__get__server() const {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceServer*, 0x70>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__connectionRequestHandler(::GlobalNamespace::IConnectionRequestHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectionRequestHandler*, 0x78>(this, std::forward<::GlobalNamespace::IConnectionRequestHandler*>(value));
}
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::IgnoranceConnectionManager::__get__connectionRequestHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionRequestHandler*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionRequestHandler*> GlobalNamespace::IgnoranceConnectionManager::__get__connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionRequestHandler*, 0x78>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__pendingConnections(::System::Collections::Generic::List_1<uint32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<uint32_t>*, 0x80>(this, std::forward<::System::Collections::Generic::List_1<uint32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* GlobalNamespace::IgnoranceConnectionManager::__get__pendingConnections()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<uint32_t>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> GlobalNamespace::IgnoranceConnectionManager::__get__pendingConnections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<uint32_t>*, 0x80>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__connections(::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*, 0x88>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>* GlobalNamespace::IgnoranceConnectionManager::__get__connections()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*> GlobalNamespace::IgnoranceConnectionManager::__get__connections() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>*, 0x88>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__incomingDataWriter(::LiteNetLib::Utils::NetDataWriter*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x90>(this, std::forward<::LiteNetLib::Utils::NetDataWriter*>(value));
}
constexpr ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::IgnoranceConnectionManager::__get__incomingDataWriter()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> GlobalNamespace::IgnoranceConnectionManager::__get__incomingDataWriter() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0x90>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__incomingDataReader(::LiteNetLib::Utils::NetDataReader*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataReader*, 0x98>(this, std::forward<::LiteNetLib::Utils::NetDataReader*>(value));
}
constexpr ::LiteNetLib::Utils::NetDataReader* GlobalNamespace::IgnoranceConnectionManager::__get__incomingDataReader()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataReader*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> GlobalNamespace::IgnoranceConnectionManager::__get__incomingDataReader() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataReader*, 0x98>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__connectionRequestWriter(::LiteNetLib::Utils::NetDataWriter*  value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0xa0>(this, std::forward<::LiteNetLib::Utils::NetDataWriter*>(value));
}
constexpr ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::IgnoranceConnectionManager::__get__connectionRequestWriter()  {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> GlobalNamespace::IgnoranceConnectionManager::__get__connectionRequestWriter() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataWriter*, 0xa0>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__backgroundSentryDisconnectCts(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0xa8>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::IgnoranceConnectionManager::__get__backgroundSentryDisconnectCts()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::IgnoranceConnectionManager::__get__backgroundSentryDisconnectCts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0xa8>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__sentryDisconnected(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::IgnoranceConnectionManager::__get__sentryDisconnected()  {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr bool const& GlobalNamespace::IgnoranceConnectionManager::__get__sentryDisconnected() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__lastPollUpdateTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0xb8>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::IgnoranceConnectionManager::__get__lastPollUpdateTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0xb8>(this);
}
constexpr int64_t const& GlobalNamespace::IgnoranceConnectionManager::__get__lastPollUpdateTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0xb8>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__timeProvider(::BGNet::Core::ITimeProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITimeProvider*, 0xc0>(this, std::forward<::BGNet::Core::ITimeProvider*>(value));
}
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::IgnoranceConnectionManager::__get__timeProvider()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITimeProvider*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> GlobalNamespace::IgnoranceConnectionManager::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITimeProvider*, 0xc0>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__taskUtility(::BGNet::Core::ITaskUtility*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITaskUtility*, 0xc8>(this, std::forward<::BGNet::Core::ITaskUtility*>(value));
}
constexpr ::BGNet::Core::ITaskUtility* GlobalNamespace::IgnoranceConnectionManager::__get__taskUtility()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> GlobalNamespace::IgnoranceConnectionManager::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility*, 0xc8>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__serverUserId_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xd0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::IgnoranceConnectionManager::__get__serverUserId_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this);
}
constexpr ::StringW const& GlobalNamespace::IgnoranceConnectionManager::__get__serverUserId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__serverUserName_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xd8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::IgnoranceConnectionManager::__get__serverUserName_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0xd8>(this);
}
constexpr ::StringW const& GlobalNamespace::IgnoranceConnectionManager::__get__serverUserName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd8>(this);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onInitializedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onInitializedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onConnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::IgnoranceConnectionManager::remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::IgnoranceConnectionManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::set_userId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::IgnoranceConnectionManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::set_userName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::IgnoranceConnectionManager::get_connectionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::get_isDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::IgnoranceConnectionManager::get_serverUserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::set_serverUserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::IgnoranceConnectionManager::get_serverUserName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "get_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::set_serverUserName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "set_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::IgnoranceConnectionManager* GlobalNamespace::IgnoranceConnectionManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::IgnoranceConnectionManager*>());
}
inline void GlobalNamespace::IgnoranceConnectionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IgnoranceConnectionManager* GlobalNamespace::IgnoranceConnectionManager::New_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::IgnoranceConnectionManager*>(timeProvider, taskUtility));
}
inline void GlobalNamespace::IgnoranceConnectionManager::_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timeProvider, taskUtility);
}
template<typename T>
inline bool GlobalNamespace::IgnoranceConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T>*  initParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                        "Init",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionInitParams_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, initParams);
}
inline void GlobalNamespace::IgnoranceConnectionManager::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IgnoranceConnectionManager::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::HandleConnectionEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "HandleConnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::HandleIncomingEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "HandleIncomingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::HandleDisconnectionEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "HandleDisconnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::IgnoranceConnectionManager::GetConnectionMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::TryParseConnectionMessage(::LiteNetLib::Utils::NetDataReader*  reader, ByRef<::StringW>  userId, ByRef<::StringW>  userName, ByRef<bool>  isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "TryParseConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, reader, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::IgnoranceConnectionManager::Send(uint32_t  peerId, ::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, peerId, writer, deliveryMethod);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
inline void GlobalNamespace::IgnoranceConnectionManager::DisconnectPeer(uint32_t  peerId, ::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "DisconnectPeer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, peerId, disconnectedReason);
}
inline bool GlobalNamespace::IgnoranceConnectionManager::TryGetConnection(uint32_t  peerId, ByRef<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "TryGetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__IgnoranceConnectionManager__IgnoranceConnection*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, peerId, connection);
}
inline void GlobalNamespace::IgnoranceConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::IgnoranceConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod, ::GlobalNamespace::IConnection*  excludingConnection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, deliveryMethod, excludingConnection);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
inline void GlobalNamespace::IgnoranceConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::IgnoranceConnectionManager::GetConnection(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*, false>(*this, ___internal_method, index);
}
inline ::BGNet::Core::DeliveryMethod GlobalNamespace::IgnoranceConnectionManager::ToDeliveryMethod(uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "ToDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BGNet::Core::DeliveryMethod, false>(nullptr, ___internal_method, channel);
}
inline uint8_t GlobalNamespace::IgnoranceConnectionManager::ToChannel(::BGNet::Core::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "ToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, deliveryMethod);
}
inline void GlobalNamespace::IgnoranceConnectionManager::WaitForClientShutdown(::IgnoranceCore::IgnoranceClient*  client)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "WaitForClientShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IgnoranceCore::IgnoranceClient*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, client);
}
inline void GlobalNamespace::IgnoranceConnectionManager::WaitForServerShutdown(::IgnoranceCore::IgnoranceServer*  server)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "WaitForServerShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IgnoranceCore::IgnoranceServer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, server);
}
inline void GlobalNamespace::IgnoranceConnectionManager::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::IgnoranceConnectionManager::LogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
inline void GlobalNamespace::IgnoranceConnectionManager::StartBackgroundSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "StartBackgroundSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::IgnoranceConnectionManager::CheckSentryState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "CheckSentryState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IgnoranceConnectionManager::BackgroundDisconnectSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IgnoranceConnectionManager*>::get(),
                            "BackgroundDisconnectSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
