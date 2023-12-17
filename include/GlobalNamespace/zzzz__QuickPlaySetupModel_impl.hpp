#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::*)()>(&::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2353fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__set_data(::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>& GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>, 0x10>(this);
}
constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*> const& GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>, 0x10>(this);
}
inline ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB* GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*>());
}
inline void GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::*)()>(&::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x2353fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x1058;
  constexpr static std::size_t addrs = 0x23547e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>& GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> const& GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___4__this(::GlobalNamespace::QuickPlaySetupModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::QuickPlaySetupModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::QuickPlaySetupModel*>(value));
}
constexpr ::GlobalNamespace::QuickPlaySetupModel* GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuickPlaySetupModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupModel*> GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::QuickPlaySetupModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set__uriBuilder_5__2(::System::UriBuilder*  value)  {
::cordl_internals::setInstanceField<::System::UriBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::UriBuilder*>(value));
}
constexpr ::System::UriBuilder* GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get__uriBuilder_5__2()  {
return ::cordl_internals::getInstanceField<::System::UriBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::UriBuilder*> GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get__uriBuilder_5__2() const {
return ::cordl_internals::getInstanceField<::System::UriBuilder*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::QuickPlaySetupModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>  __t__builder, ::GlobalNamespace::QuickPlaySetupModel*  __4__this, ::System::UriBuilder*  _uriBuilder_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_uriBuilder_5__2 = _uriBuilder_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.GetQuickPlaySetupAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (::GlobalNamespace::QuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2353c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2353e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.StartRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::StartRequest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2353dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "StartRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.GetQuickPlaySetupInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2353e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "GetQuickPlaySetupInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.IsQuickPlaySetupTaskValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2353cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "IsQuickPlaySetupTaskValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.IsUrlValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuickPlaySetupModel::*)(::StringW)>(&::GlobalNamespace::QuickPlaySetupModel::IsUrlValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2353f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "IsUrlValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2353f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr  GlobalNamespace::QuickPlaySetupModel::operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept {
return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__networkConfig(::GlobalNamespace::INetworkConfig*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this, std::forward<::GlobalNamespace::INetworkConfig*>(value));
}
constexpr ::GlobalNamespace::INetworkConfig* GlobalNamespace::QuickPlaySetupModel::__get__networkConfig()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> GlobalNamespace::QuickPlaySetupModel::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig*, 0x10>(this);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__client(::System::Net::Http::HttpClient*  value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpClient*, 0x18>(this, std::forward<::System::Net::Http::HttpClient*>(value));
}
constexpr ::System::Net::Http::HttpClient* GlobalNamespace::QuickPlaySetupModel::__get__client()  {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> GlobalNamespace::QuickPlaySetupModel::__get__client() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient*, 0x18>(this);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, 0x20>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GlobalNamespace::QuickPlaySetupModel::__get__request()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*> GlobalNamespace::QuickPlaySetupModel::__get__request() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, 0x20>(this);
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__set__lastRequestTime(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x28>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& GlobalNamespace::QuickPlaySetupModel::__get__lastRequestTime()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this);
}
constexpr ::System::DateTime const& GlobalNamespace::QuickPlaySetupModel::__get__lastRequestTime() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "GetQuickPlaySetupAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, false>(*this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::QuickPlaySetupModel::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySetupModel::StartRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "StartRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "GetQuickPlaySetupInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "IsQuickPlaySetupTaskValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::QuickPlaySetupModel::IsUrlValid(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            "IsUrlValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, url);
}
inline ::GlobalNamespace::QuickPlaySetupModel* GlobalNamespace::QuickPlaySetupModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::QuickPlaySetupModel*>());
}
inline void GlobalNamespace::QuickPlaySetupModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
