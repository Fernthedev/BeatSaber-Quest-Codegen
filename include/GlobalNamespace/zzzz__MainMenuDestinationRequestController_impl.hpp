#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuDestinationRequestController_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuDestinationRequestController_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__IDestinationRequestManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::*)()>(&::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x223d848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223dd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__set___4__this(::GlobalNamespace::MainMenuDestinationRequestController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainMenuDestinationRequestController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MainMenuDestinationRequestController*>(value));
}
constexpr ::GlobalNamespace::MainMenuDestinationRequestController* GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainMenuDestinationRequestController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainMenuDestinationRequestController*> GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainMenuDestinationRequestController*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__set_menuDestination(::GlobalNamespace::MenuDestination*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuDestination*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MenuDestination*>(value));
}
constexpr ::GlobalNamespace::MenuDestination* GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get_menuDestination()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get_menuDestination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuDestination*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__set__cancellationToken_5__2(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get__cancellationToken_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainMenuDestinationRequestController*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "menuDestination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MainMenuDestinationRequestController*  __4__this, ::GlobalNamespace::MenuDestination*  menuDestination, ::System::Threading::CancellationToken  _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->menuDestination = menuDestination;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(&::GlobalNamespace::MainMenuDestinationRequestController::Initialize)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x223d0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(&::GlobalNamespace::MainMenuDestinationRequestController::Dispose)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x223d3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.HandleGameScenesManagerInstallEarlyBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&::GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x223d5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "HandleGameScenesManagerInstallEarlyBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.HandleDestinationRequestManagerDidSendMenuDestinationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::MenuDestination*)>(&::GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223d83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "HandleDestinationRequestManagerDidSendMenuDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.ProcessDestinationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::MenuDestination*)>(&::GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x223d354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "ProcessDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(&::GlobalNamespace::MainMenuDestinationRequestController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223d840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  GlobalNamespace::MainMenuDestinationRequestController::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MainMenuDestinationRequestController::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void GlobalNamespace::MainMenuDestinationRequestController::setStaticF__nextMenuDestination(::GlobalNamespace::MenuDestination*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MenuDestination*, "_nextMenuDestination", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get>(std::forward<::GlobalNamespace::MenuDestination*>(value));
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::MainMenuDestinationRequestController::getStaticF__nextMenuDestination()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MenuDestination*, "_nextMenuDestination", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get>();
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__destinationRequestManager(::GlobalNamespace::IDestinationRequestManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDestinationRequestManager*, 0x10>(this, std::forward<::GlobalNamespace::IDestinationRequestManager*>(value));
}
constexpr ::GlobalNamespace::IDestinationRequestManager* GlobalNamespace::MainMenuDestinationRequestController::__get__destinationRequestManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDestinationRequestManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDestinationRequestManager*> GlobalNamespace::MainMenuDestinationRequestController::__get__destinationRequestManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDestinationRequestManager*, 0x10>(this);
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::MenuScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO* GlobalNamespace::MainMenuDestinationRequestController::__get__menuScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> GlobalNamespace::MainMenuDestinationRequestController::__get__menuScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this, std::forward<::GlobalNamespace::GameScenesManager*>(value));
}
constexpr ::GlobalNamespace::GameScenesManager* GlobalNamespace::MainMenuDestinationRequestController::__get__gameScenesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> GlobalNamespace::MainMenuDestinationRequestController::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager*, 0x20>(this);
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x28>(this, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* GlobalNamespace::MainMenuDestinationRequestController::__get__cancellationTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> GlobalNamespace::MainMenuDestinationRequestController::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x28>(this);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO*  scenesTransitionSetupData, ::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "HandleGameScenesManagerInstallEarlyBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, scenesTransitionSetupData, container);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest(::GlobalNamespace::MenuDestination*  menuDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "HandleDestinationRequestManagerDidSendMenuDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, menuDestination);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest(::GlobalNamespace::MenuDestination*  menuDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            "ProcessDestinationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, menuDestination);
}
inline ::GlobalNamespace::MainMenuDestinationRequestController* GlobalNamespace::MainMenuDestinationRequestController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainMenuDestinationRequestController*>());
}
inline void GlobalNamespace::MainMenuDestinationRequestController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
