#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusModel_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::*)()>(&::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2353200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::__set_data(::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>& GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*> const& GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>, 0x10>(this);
}
inline ::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB* GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB*>());
}
inline void GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::*)()>(&::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0x2353208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2353a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>& GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*> const& GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__set___4__this(::GlobalNamespace::MultiplayerStatusModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerStatusModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::MultiplayerStatusModel*>(value));
}
constexpr ::GlobalNamespace::MultiplayerStatusModel* GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerStatusModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerStatusModel*> GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerStatusModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__set__uriBuilder_5__2(::System::UriBuilder*  value)  {
::cordl_internals::setInstanceField<::System::UriBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::UriBuilder*>(value));
}
constexpr ::System::UriBuilder* GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get__uriBuilder_5__2()  {
return ::cordl_internals::getInstanceField<::System::UriBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::UriBuilder*> GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get__uriBuilder_5__2() const {
return ::cordl_internals::getInstanceField<::System::UriBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerStatusModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>  __t__builder, ::GlobalNamespace::MultiplayerStatusModel*  __4__this, ::System::UriBuilder*  _uriBuilder_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_uriBuilder_5__2 = _uriBuilder_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2352fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.GetMultiplayerStatusAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (::GlobalNamespace::MultiplayerStatusModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2352fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "GetMultiplayerStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.IsAvailabilityTaskValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::IsAvailabilityTaskValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2353048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "IsAvailabilityTaskValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.StartRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::StartRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2352fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "StartRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.GetMultiplayerStatusAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsyncInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23530a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "GetMultiplayerStatusAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2353198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr  GlobalNamespace::MultiplayerStatusModel::operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept {
return static_cast<::GlobalNamespace::IMultiplayerStatusModel*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerStatusModel::__set__networkConfig(::GlobalNamespace::INetworkConfig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this, std::forward<::GlobalNamespace::INetworkConfig*>(value));
}
constexpr ::GlobalNamespace::INetworkConfig* GlobalNamespace::MultiplayerStatusModel::__get__networkConfig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> GlobalNamespace::MultiplayerStatusModel::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusModel::__set__client(::System::Net::Http::HttpClient*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpClient*, 0x18>(this, std::forward<::System::Net::Http::HttpClient*>(value));
}
constexpr ::System::Net::Http::HttpClient* GlobalNamespace::MultiplayerStatusModel::__get__client()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> GlobalNamespace::MultiplayerStatusModel::__get__client() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerStatusModel::__set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, 0x20>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GlobalNamespace::MultiplayerStatusModel::__get__request()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*> GlobalNamespace::MultiplayerStatusModel::__get__request() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, 0x20>(this);
}
inline void GlobalNamespace::MultiplayerStatusModel::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "GetMultiplayerStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, false>(*this, ___internal_method, cancellationToken);
}
inline bool GlobalNamespace::MultiplayerStatusModel::IsAvailabilityTaskValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "IsAvailabilityTaskValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusModel::StartRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "StartRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsyncInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            "GetMultiplayerStatusAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerStatusModel* GlobalNamespace::MultiplayerStatusModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerStatusModel*>());
}
inline void GlobalNamespace::MultiplayerStatusModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
