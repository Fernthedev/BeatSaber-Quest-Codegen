#pragma once
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformUserModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformInit_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserProof_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::*)()>(&::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x27fee94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27ff080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__set___4__this(::GlobalNamespace::OculusPlatformUserModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusPlatformUserModel*>(value));
}
constexpr ::GlobalNamespace::OculusPlatformUserModel* GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformUserModel*> GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__set_ctx(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get_ctx()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get_ctx() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ctx", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfo_d__12::__OculusPlatformUserModel___GetUserInfo_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>  __t__builder, ::GlobalNamespace::OculusPlatformUserModel*  __4__this, ::System::Threading::CancellationToken  ctx, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->ctx = ctx;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::*)()>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ff0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0._GetUserInfoTask_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::_GetUserInfoTask_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x27ff0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*>::get(),
                            "<GetUserInfoTask>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*> GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::UserInfo*>*, 0x10>(this);
}
inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0::_GetUserInfoTask_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*  response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*>::get(),
                            "<GetUserInfoTask>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, response);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::*)()>(&::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x27ff1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27ff6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*> const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__set___4__this(::GlobalNamespace::OculusPlatformUserModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusPlatformUserModel*>(value));
}
constexpr ::GlobalNamespace::OculusPlatformUserModel* GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformUserModel*> GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__set___8__1(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*>(value));
}
constexpr ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0* GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___8__1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*> GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___8__1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> const& GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformUserModel___GetUserInfoTask_d__13::__OculusPlatformUserModel___GetUserInfoTask_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo*>  __t__builder, ::GlobalNamespace::OculusPlatformUserModel*  __4__this, ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass13_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::*)()>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fe900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0._GetUserFriendsUserIds_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*)>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::_GetUserFriendsUserIds_b__0)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x27ff6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0*>::get(),
                            "<GetUserFriendsUserIds>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*> GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::__set___4__this(::GlobalNamespace::OculusPlatformUserModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x18>(this, std::forward<::GlobalNamespace::OculusPlatformUserModel*>(value));
}
constexpr ::GlobalNamespace::OculusPlatformUserModel* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformUserModel*> GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x18>(this);
}
inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0*>());
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0::_GetUserFriendsUserIds_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*  response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass14_0*>::get(),
                            "<GetUserFriendsUserIds>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, response);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::*)()>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fea3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0._GetUserAuthToken_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*)>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::_GetUserAuthToken_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ffb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0*>::get(),
                            "<GetUserAuthToken>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*> GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::PlatformUserAuthTokenData*>*, 0x10>(this);
}
inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0*>());
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0::_GetUserAuthToken_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*  response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass15_0*>::get(),
                            "<GetUserAuthToken>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserProof*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, response);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::*)()>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27feca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0._GetUserNamesForUserIds_g__Fetch_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::*)(int32_t, uint64_t)>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::_GetUserNamesForUserIds_g__Fetch_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27feca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*>::get(),
                            "<GetUserNamesForUserIds>g__Fetch|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__set_requests(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_requests()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_requests() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__set_success(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_success()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_success() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__set_userNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_userNames()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_userNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, 0x20>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*> GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, 0x20>(this);
}
inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0::_GetUserNamesForUserIds_g__Fetch_0(int32_t  index, uint64_t  platformId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*>::get(),
                            "<GetUserNamesForUserIds>g__Fetch|0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, platformId);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::*)()>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ffbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1._GetUserNamesForUserIds_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::_GetUserNamesForUserIds_b__1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x27ffc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1*>::get(),
                            "<GetUserNamesForUserIds>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::__set_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::__get_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::__set_CS$__8__locals1(::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*, 0x18>(this, std::forward<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*>(value));
}
constexpr ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::__get_CS$__8__locals1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*> GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_0*, 0x18>(this);
}
inline ::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1* GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1*>());
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1::_GetUserNamesForUserIds_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel____c__DisplayClass16_1*>::get(),
                            "<GetUserNamesForUserIds>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::*)()>(&::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x27ffd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28000e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> const& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__set___4__this(::GlobalNamespace::OculusPlatformUserModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusPlatformUserModel*>(value));
}
constexpr ::GlobalNamespace::OculusPlatformUserModel* GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformUserModel*> GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusPlatformUserModel*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> const& GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformUserModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17::__OculusPlatformUserModel___RequestXPlatformAccessToken_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>  __t__builder, ::GlobalNamespace::OculusPlatformUserModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel::*)(::GlobalNamespace::IPlatformInit*)>(&::GlobalNamespace::OculusPlatformUserModel::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27fe3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformInit*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.add_platformUserInfoDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Action_1<::GlobalNamespace::UserInfo*>*)>(&::GlobalNamespace::OculusPlatformUserModel::add_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27fe408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "add_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.remove_platformUserInfoDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Action_1<::GlobalNamespace::UserInfo*>*)>(&::GlobalNamespace::OculusPlatformUserModel::remove_platformUserInfoDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27fe4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "remove_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.get_CanXPlatformAccessTokenBeCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusPlatformUserModel::*)()>(&::GlobalNamespace::OculusPlatformUserModel::get_CanXPlatformAccessTokenBeCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fe568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "get_CanXPlatformAccessTokenBeCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserInfo)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27fe570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserInfoTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserInfoTask)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27fe66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserInfoTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserFriendsUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (::GlobalNamespace::OculusPlatformUserModel::*)(bool)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x27fe75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserFriendsUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserAuthToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* (::GlobalNamespace::OculusPlatformUserModel::*)()>(&::GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x27fe908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserAuthToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.GetUserNamesForUserIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x27fea44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserNamesForUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformUserModel.RequestXPlatformAccessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (::GlobalNamespace::OculusPlatformUserModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::OculusPlatformUserModel::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27fed9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
constexpr  GlobalNamespace::OculusPlatformUserModel::operator ::GlobalNamespace::IPlatformUserModel*() noexcept {
return static_cast<::GlobalNamespace::IPlatformUserModel*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__userInfoTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, 0x10>(this, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::OculusPlatformUserModel::__get__userInfoTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*> GlobalNamespace::OculusPlatformUserModel::__get__userInfoTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, 0x10>(this);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__friendsUserIds(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& GlobalNamespace::OculusPlatformUserModel::__get__friendsUserIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& GlobalNamespace::OculusPlatformUserModel::__get__friendsUserIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__userInfo(::GlobalNamespace::UserInfo*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::UserInfo*, 0x20>(this, std::forward<::GlobalNamespace::UserInfo*>(value));
}
constexpr ::GlobalNamespace::UserInfo* GlobalNamespace::OculusPlatformUserModel::__get__userInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UserInfo*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UserInfo*> GlobalNamespace::OculusPlatformUserModel::__get__userInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::UserInfo*, 0x20>(this);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__platformInit(::GlobalNamespace::IPlatformInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPlatformInit*, 0x28>(this, std::forward<::GlobalNamespace::IPlatformInit*>(value));
}
constexpr ::GlobalNamespace::IPlatformInit* GlobalNamespace::OculusPlatformUserModel::__get__platformInit()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformInit*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> GlobalNamespace::OculusPlatformUserModel::__get__platformInit() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformInit*, 0x28>(this);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set__lastXPlatformTokenStatusChange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OculusPlatformUserModel::__get__lastXPlatformTokenStatusChange()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::OculusPlatformUserModel::__get__lastXPlatformTokenStatusChange() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::OculusPlatformUserModel::__set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::UserInfo*>*, 0x38>(this, std::forward<::System::Action_1<::GlobalNamespace::UserInfo*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::OculusPlatformUserModel::__get_platformUserInfoDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::UserInfo*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::UserInfo*>*> GlobalNamespace::OculusPlatformUserModel::__get_platformUserInfoDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::UserInfo*>*, 0x38>(this);
}
inline ::GlobalNamespace::OculusPlatformUserModel* GlobalNamespace::OculusPlatformUserModel::New_ctor(::GlobalNamespace::IPlatformInit*  platformInit)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OculusPlatformUserModel*>(platformInit));
}
inline void GlobalNamespace::OculusPlatformUserModel::_ctor(::GlobalNamespace::IPlatformInit*  platformInit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformInit*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, platformInit);
}
inline void GlobalNamespace::OculusPlatformUserModel::add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "add_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OculusPlatformUserModel::remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "remove_platformUserInfoDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::UserInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OculusPlatformUserModel::get_CanXPlatformAccessTokenBeCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "get_CanXPlatformAccessTokenBeCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::OculusPlatformUserModel::GetUserInfo(::System::Threading::CancellationToken  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, false>(*this, ___internal_method, ctx);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GlobalNamespace::OculusPlatformUserModel::GetUserInfoTask(::System::Threading::CancellationToken  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserInfoTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>*, false>(*this, ___internal_method, ctx);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GlobalNamespace::OculusPlatformUserModel::GetUserFriendsUserIds(bool  cached)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserFriendsUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, false>(*this, ___internal_method, cached);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GlobalNamespace::OculusPlatformUserModel::GetUserAuthToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserAuthToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GlobalNamespace::OculusPlatformUserModel::GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  userIds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "GetUserNamesForUserIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*, false>(*this, ___internal_method, userIds);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* GlobalNamespace::OculusPlatformUserModel::RequestXPlatformAccessToken(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformUserModel*>::get(),
                            "RequestXPlatformAccessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(*this, ___internal_method, cancellationToken);
}
constexpr ::GlobalNamespace::PlatformEnvironment  GlobalNamespace::OculusPlatformUserModel::kPlatformEnvironment{static_cast<uint8_t>(0x2u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
