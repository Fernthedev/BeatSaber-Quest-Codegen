#pragma once
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientConnectionRequestHandler_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__PlayerSessionInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
constexpr void GlobalNamespace::__GameLiftConnectionManager__ConnectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameLiftConnectionManager__ConnectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameLiftConnectionManager__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState::__GameLiftConnectionManager__ConnectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState  GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Unconnected{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState  GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState  GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Connected{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState  GlobalNamespace::__GameLiftConnectionManager__ConnectionState::Disconnecting{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::*)()>(&::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe38c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>"
constexpr  GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::operator ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*() noexcept {
return static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, 0x10>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_authenticationTokenProviderTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_authenticationTokenProviderTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, 0x10>(this);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, 0x18>(this, std::forward<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(value));
}
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_gameLiftPlayerSessionProvider()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_gameLiftPlayerSessionProvider() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, 0x18>(this);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_selectionMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this);
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_selectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x20>(this);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__set_configuration(::GlobalNamespace::GameplayServerConfiguration  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x48>(this, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_configuration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x48>(this);
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::__get_configuration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x48>(this);
}
inline ::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase* GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*>());
}
inline void GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::*)()>(&::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe38c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__set_secret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_secret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__set_code(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_code()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
inline ::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams* GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*>());
}
inline void GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__ConnectToServerParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager__StartClientParams::*)()>(&::GlobalNamespace::__GameLiftConnectionManager__StartClientParams::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe38ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameLiftConnectionManager__StartClientParams* GlobalNamespace::__GameLiftConnectionManager__StartClientParams::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*>());
}
inline void GlobalNamespace::__GameLiftConnectionManager__StartClientParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager__StartClientParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::*)()>(&::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::MoveNext)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xe38ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe392d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___4__this(::GlobalNamespace::GameLiftConnectionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameLiftConnectionManager*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::GameLiftConnectionManager*>(value));
}
constexpr ::GlobalNamespace::GameLiftConnectionManager* GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftConnectionManager*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftConnectionManager*> GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftConnectionManager*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set_secret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_secret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set_code(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_code()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*> const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*> const& GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameLiftConnectionManager*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameLiftConnectionManager___GameLiftConnectToServer_d__81::__GameLiftConnectionManager___GameLiftConnectToServer_d__81(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::GameLiftConnectionManager*  __4__this, ::StringW  secret, ::StringW  code, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IAuthenticationTokenProvider*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::PlayerSessionInfo*>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x58>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->secret = secret;
this->code = code;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe36df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe36e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe36f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe36ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe370a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::GlobalNamespace::IConnection*>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe372b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.add_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*)>(&::GlobalNamespace::GameLiftConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe37410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.remove_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*)>(&::GlobalNamespace::GameLiftConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe374c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xe37570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xe3765c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe37748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe37758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe37768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_connectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe37778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_isDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe378c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_playerSessionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_playerSessionId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe37964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_playerSessionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_selectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_selectionMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe37980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_configuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe37994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_code
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe379a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.get_secret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe379b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::GameLiftConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe379b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::BGNet::Core::DeliveryMethod, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::GameLiftConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe37a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe37b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe37bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IConnectionManager*, ::GlobalNamespace::ICertificateValidator*)>(&::GlobalNamespace::GameLiftConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xe37d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateValidator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe3824c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe382f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::GameLiftConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe38390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.DisconnectInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::GameLiftConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe385fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.DisconnectInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::DisconnectedReason, ::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::GameLiftConnectionManager::DisconnectInternal)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xe38398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.GetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::GameLiftConnectionManager::*)(int32_t)>(&::GlobalNamespace::GameLiftConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe38608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)()>(&::GlobalNamespace::GameLiftConnectionManager::HandleConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe386b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectionConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::IConnection*)>(&::GlobalNamespace::GameLiftConnectionManager::HandleConnectionConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe386e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectionConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectionDisconnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::GameLiftConnectionManager::HandleConnectionDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe38700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectionDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectionFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::ConnectionFailedReason)>(&::GlobalNamespace::GameLiftConnectionManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe3871c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleReceivedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::GameLiftConnectionManager::HandleReceivedData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe38728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleReceivedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.GameLiftConnectToServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::StringW, ::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectToServer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe38744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "GameLiftConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.HandleConnectToServerSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::StringW, ::StringW, int32_t, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::GameLiftConnectionManager::HandleConnectToServerSuccess)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xe387fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectToServerSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftConnectionManager.GetPublicServers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftConnectionManager::*)(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, int32_t, int32_t)>(&::GlobalNamespace::GameLiftConnectionManager::GetPublicServers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe38bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "GetPublicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionManager"
constexpr  GlobalNamespace::GameLiftConnectionManager::operator ::GlobalNamespace::IConnectionManager*() noexcept {
return static_cast<::GlobalNamespace::IConnectionManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr  GlobalNamespace::GameLiftConnectionManager::operator ::GlobalNamespace::IPollable*() noexcept {
return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GameLiftConnectionManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__timeProvider(::BGNet::Core::ITimeProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITimeProvider*, 0x10>(this, std::forward<::BGNet::Core::ITimeProvider*>(value));
}
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::GameLiftConnectionManager::__get__timeProvider()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITimeProvider*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> GlobalNamespace::GameLiftConnectionManager::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITimeProvider*, 0x10>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__taskUtility(::BGNet::Core::ITaskUtility*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITaskUtility*, 0x18>(this, std::forward<::BGNet::Core::ITaskUtility*>(value));
}
constexpr ::BGNet::Core::ITaskUtility* GlobalNamespace::GameLiftConnectionManager::__get__taskUtility()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> GlobalNamespace::GameLiftConnectionManager::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITaskUtility*, 0x18>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionManager(::GlobalNamespace::IConnectionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectionManager*, 0x20>(this, std::forward<::GlobalNamespace::IConnectionManager*>(value));
}
constexpr ::GlobalNamespace::IConnectionManager* GlobalNamespace::GameLiftConnectionManager::__get__connectionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionManager*> GlobalNamespace::GameLiftConnectionManager::__get__connectionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectionManager*, 0x20>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__certificateValidator(::GlobalNamespace::ICertificateValidator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ICertificateValidator*, 0x28>(this, std::forward<::GlobalNamespace::ICertificateValidator*>(value));
}
constexpr ::GlobalNamespace::ICertificateValidator* GlobalNamespace::GameLiftConnectionManager::__get__certificateValidator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICertificateValidator*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICertificateValidator*> GlobalNamespace::GameLiftConnectionManager::__get__certificateValidator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICertificateValidator*, 0x28>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__code(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::GameLiftConnectionManager::__get__code()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::GameLiftConnectionManager::__get__code() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__secret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::GameLiftConnectionManager::__get__secret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::GameLiftConnectionManager::__get__secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this, std::forward<::GlobalNamespace::BeatmapLevelSelectionMask>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::GameLiftConnectionManager::__get__selectionMask()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this);
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::GameLiftConnectionManager::__get__selectionMask() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelSelectionMask, 0x40>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__configuration(::GlobalNamespace::GameplayServerConfiguration  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x68>(this, std::forward<::GlobalNamespace::GameplayServerConfiguration>(value));
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::GameLiftConnectionManager::__get__configuration()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x68>(this);
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::GameLiftConnectionManager::__get__configuration() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayServerConfiguration, 0x68>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionState(::GlobalNamespace::__GameLiftConnectionManager__ConnectionState  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, 0x80>(this, std::forward<::GlobalNamespace::__GameLiftConnectionManager__ConnectionState>(value));
}
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState& GlobalNamespace::GameLiftConnectionManager::__get__connectionState()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, 0x80>(this);
}
constexpr ::GlobalNamespace::__GameLiftConnectionManager__ConnectionState const& GlobalNamespace::GameLiftConnectionManager::__get__connectionState() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GameLiftConnectionManager__ConnectionState, 0x80>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x88>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::GameLiftConnectionManager::__get__connectionCancellationTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::GameLiftConnectionManager::__get__connectionCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x88>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__authenticationTokenProviderTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, 0x90>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>* GlobalNamespace::GameLiftConnectionManager::__get__authenticationTokenProviderTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*> GlobalNamespace::GameLiftConnectionManager::__get__authenticationTokenProviderTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::IAuthenticationTokenProvider*>*, 0x90>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, 0x98>(this, std::forward<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*>(value));
}
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* GlobalNamespace::GameLiftConnectionManager::__get__gameLiftPlayerSessionProvider()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*> GlobalNamespace::GameLiftConnectionManager::__get__gameLiftPlayerSessionProvider() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*, 0x98>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set__connectionRequestHandler(::GlobalNamespace::GameLiftClientConnectionRequestHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameLiftClientConnectionRequestHandler*, 0xa0>(this, std::forward<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>(value));
}
constexpr ::GlobalNamespace::GameLiftClientConnectionRequestHandler* GlobalNamespace::GameLiftConnectionManager::__get__connectionRequestHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftClientConnectionRequestHandler*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftClientConnectionRequestHandler*> GlobalNamespace::GameLiftConnectionManager::__get__connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameLiftClientConnectionRequestHandler*, 0xa0>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onInitializedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xa8>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameLiftConnectionManager::__get_onInitializedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameLiftConnectionManager::__get_onInitializedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xa8>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0xb0>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::GameLiftConnectionManager::__get_onConnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::GameLiftConnectionManager::__get_onConnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0xb0>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0xb8>(this, std::forward<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* GlobalNamespace::GameLiftConnectionManager::__get_onDisconnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> GlobalNamespace::GameLiftConnectionManager::__get_onDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::DisconnectedReason>*, 0xb8>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, 0xc0>(this, std::forward<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* GlobalNamespace::GameLiftConnectionManager::__get_onConnectionFailedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> GlobalNamespace::GameLiftConnectionManager::__get_onConnectionFailedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*, 0xc0>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::IConnection*>*, 0xc8>(this, std::forward<::System::Action_1<::GlobalNamespace::IConnection*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnection*>* GlobalNamespace::GameLiftConnectionManager::__get_onConnectionConnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::IConnection*>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnection*>*> GlobalNamespace::GameLiftConnectionManager::__get_onConnectionConnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::IConnection*>*, 0xc8>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*, 0xd0>(this, std::forward<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>(value));
}
constexpr ::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>* GlobalNamespace::GameLiftConnectionManager::__get_onConnectionDisconnectedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*> GlobalNamespace::GameLiftConnectionManager::__get_onConnectionDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*, 0xd0>(this);
}
constexpr void GlobalNamespace::GameLiftConnectionManager::__set_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value)  {
::cordl_internals::setInstanceField<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*, 0xd8>(this, std::forward<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>(value));
}
constexpr ::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>* GlobalNamespace::GameLiftConnectionManager::__get_onReceivedDataEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*> GlobalNamespace::GameLiftConnectionManager::__get_onReceivedDataEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*, 0xd8>(this);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onInitializedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onInitializedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnection*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::IConnection*,::GlobalNamespace::DisconnectedReason>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftConnectionManager::remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::GlobalNamespace::IConnection*,::LiteNetLib::Utils::NetDataReader*,::BGNet::Core::DeliveryMethod>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::GameLiftConnectionManager::get_connectionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftConnectionManager::get_isDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_playerSessionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_playerSessionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameLiftConnectionManager::get_selectionMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_selectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameLiftConnectionManager::get_configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_configuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_code()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_code",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftConnectionManager::get_secret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "get_secret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameLiftConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, deliveryMethod);
}
inline void GlobalNamespace::GameLiftConnectionManager::SendToAll(::LiteNetLib::Utils::NetDataWriter*  writer, ::BGNet::Core::DeliveryMethod  deliveryMethod, ::GlobalNamespace::IConnection*  excludingConnection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, deliveryMethod, excludingConnection);
}
inline void GlobalNamespace::GameLiftConnectionManager::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GameLiftConnectionManager* GlobalNamespace::GameLiftConnectionManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameLiftConnectionManager*>());
}
inline void GlobalNamespace::GameLiftConnectionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GameLiftConnectionManager* GlobalNamespace::GameLiftConnectionManager::New_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IConnectionManager*  connectionManager, ::GlobalNamespace::ICertificateValidator*  certificateValidator)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameLiftConnectionManager*>(timeProvider, taskUtility, connectionManager, certificateValidator));
}
inline void GlobalNamespace::GameLiftConnectionManager::_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility, ::GlobalNamespace::IConnectionManager*  connectionManager, ::GlobalNamespace::ICertificateValidator*  certificateValidator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateValidator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timeProvider, taskUtility, connectionManager, certificateValidator);
}
template<typename T>
inline bool GlobalNamespace::GameLiftConnectionManager::Init(::GlobalNamespace::IConnectionInitParams_1<T>*  initParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
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
inline ::System::Threading::Tasks::Task* GlobalNamespace::GameLiftConnectionManager::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameLiftConnectionManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
inline void GlobalNamespace::GameLiftConnectionManager::Disconnect(::GlobalNamespace::DisconnectedReason  disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::GameLiftConnectionManager::DisconnectInternal(::GlobalNamespace::ConnectionFailedReason  connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connectionFailedReason);
}
inline void GlobalNamespace::GameLiftConnectionManager::DisconnectInternal(::GlobalNamespace::DisconnectedReason  disconnectedReason, ::GlobalNamespace::ConnectionFailedReason  connectionFailedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "DisconnectInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disconnectedReason, connectionFailedReason);
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::GameLiftConnectionManager::GetConnection(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*, false>(*this, ___internal_method, index);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectionConnected(::GlobalNamespace::IConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectionConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectionDisconnected(::GlobalNamespace::IConnection*  connection, ::GlobalNamespace::DisconnectedReason  reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectionDisconnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection, reason);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason  failedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectionFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, failedReason);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleReceivedData(::GlobalNamespace::IConnection*  connection, ::LiteNetLib::Utils::NetDataReader*  reader, ::BGNet::Core::DeliveryMethod  deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleReceivedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, connection, reader, deliveryMethod);
}
inline void GlobalNamespace::GameLiftConnectionManager::GameLiftConnectToServer(::StringW  secret, ::StringW  code, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "GameLiftConnectToServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, secret, code, cancellationToken);
}
inline void GlobalNamespace::GameLiftConnectionManager::HandleConnectToServerSuccess(::StringW  playerSessionId, ::StringW  hostName, int32_t  port, ::StringW  gameSessionId, ::StringW  secret, ::StringW  code, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "HandleConnectToServerSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, playerSessionId, hostName, port, gameSessionId, secret, code, selectionMask, configuration);
}
/// @param offset: int32_t (default: static_cast<int32_t>(0x0))
/// @param count: int32_t (default: static_cast<int32_t>(0x14))
inline void GlobalNamespace::GameLiftConnectionManager::GetPublicServers(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*  onSuccess, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*  onFailure, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::GlobalNamespace::GameplayServerConfiguration  configuration, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftConnectionManager*>::get(),
                            "GetPublicServers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onSuccess, onFailure, selectionMask, configuration, offset, count);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
