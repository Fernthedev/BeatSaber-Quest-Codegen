#pragma once
#include "GlobalNamespace/zzzz__BasePlatformInit_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusInit_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusInit_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::*)()>(&::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2228f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2229220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__set___4__this(::GlobalNamespace::OculusInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusInit*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::OculusInit*>(value));
}
constexpr ::GlobalNamespace::OculusInit* GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusInit*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusInit*> GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusInit*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusInit*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OculusInit___InitializeInternalAsync_d__7::__OculusInit___InitializeInternalAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::OculusInit*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::__OculusInit____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit____c__DisplayClass8_0::*)()>(&::GlobalNamespace::__OculusInit____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2228d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass8_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusInit____c__DisplayClass8_0._TryToInitialize_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit____c__DisplayClass8_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(&::GlobalNamespace::__OculusInit____c__DisplayClass8_0::_TryToInitialize_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2229278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass8_0*>::get(),
                            "<TryToInitialize>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusInit____c__DisplayClass8_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__OculusInit____c__DisplayClass8_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__OculusInit____c__DisplayClass8_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
inline ::GlobalNamespace::__OculusInit____c__DisplayClass8_0* GlobalNamespace::__OculusInit____c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusInit____c__DisplayClass8_0*>());
}
inline void GlobalNamespace::__OculusInit____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass8_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusInit____c__DisplayClass8_0::_TryToInitialize_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass8_0*>::get(),
                            "<TryToInitialize>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusInit____c__DisplayClass9_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit____c__DisplayClass9_0::*)()>(&::GlobalNamespace::__OculusInit____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2228ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass9_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusInit____c__DisplayClass9_0._CheckUserAgeCategory_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit____c__DisplayClass9_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*)>(&::GlobalNamespace::__OculusInit____c__DisplayClass9_0::_CheckUserAgeCategory_b__0)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x22293f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass9_0*>::get(),
                            "<CheckUserAgeCategory>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusInit____c__DisplayClass9_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__OculusInit____c__DisplayClass9_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__OculusInit____c__DisplayClass9_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr void GlobalNamespace::__OculusInit____c__DisplayClass9_0::__set___4__this(::GlobalNamespace::OculusInit*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OculusInit*, 0x18>(this, std::forward<::GlobalNamespace::OculusInit*>(value));
}
constexpr ::GlobalNamespace::OculusInit* GlobalNamespace::__OculusInit____c__DisplayClass9_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusInit*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusInit*> GlobalNamespace::__OculusInit____c__DisplayClass9_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OculusInit*, 0x18>(this);
}
inline ::GlobalNamespace::__OculusInit____c__DisplayClass9_0* GlobalNamespace::__OculusInit____c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusInit____c__DisplayClass9_0*>());
}
inline void GlobalNamespace::__OculusInit____c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass9_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusInit____c__DisplayClass9_0::_CheckUserAgeCategory_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*  uacMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass9_0*>::get(),
                            "<CheckUserAgeCategory>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, uacMessage);
}
//  Writing Method size for method: ::GlobalNamespace::__OculusInit____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit____c__DisplayClass10_0::*)()>(&::GlobalNamespace::__OculusInit____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2228f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass10_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusInit____c__DisplayClass10_0._CheckEntitlements_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusInit____c__DisplayClass10_0::*)(::Oculus::Platform::Message*)>(&::GlobalNamespace::__OculusInit____c__DisplayClass10_0::_CheckEntitlements_b__0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2229564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass10_0*>::get(),
                            "<CheckEntitlements>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__OculusInit____c__DisplayClass10_0::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__OculusInit____c__DisplayClass10_0::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__OculusInit____c__DisplayClass10_0::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
inline ::GlobalNamespace::__OculusInit____c__DisplayClass10_0* GlobalNamespace::__OculusInit____c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OculusInit____c__DisplayClass10_0*>());
}
inline void GlobalNamespace::__OculusInit____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass10_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__OculusInit____c__DisplayClass10_0::_CheckEntitlements_b__0(::Oculus::Platform::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusInit____c__DisplayClass10_0*>::get(),
                            "<CheckEntitlements>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, message);
}
//  Writing Method size for method: ::GlobalNamespace::OculusInit.get_userAgeCategoryReceivedOrTimedOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OculusInit::*)()>(&::GlobalNamespace::OculusInit::get_userAgeCategoryReceivedOrTimedOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2228954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "get_userAgeCategoryReceivedOrTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInit.set_userAgeCategoryReceivedOrTimedOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusInit::*)(bool)>(&::GlobalNamespace::OculusInit::set_userAgeCategoryReceivedOrTimedOut)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x222895c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "set_userAgeCategoryReceivedOrTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusInit::*)()>(&::GlobalNamespace::OculusInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2228968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInit.InitializeInternalAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::OculusInit::*)()>(&::GlobalNamespace::OculusInit::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2228970;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInit.TryToInitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusInit::*)(::System::Threading::Tasks::TaskCompletionSource_1<bool>*)>(&::GlobalNamespace::OculusInit::TryToInitialize)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2228a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "TryToInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInit.CheckUserAgeCategory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusInit::*)(::System::Threading::Tasks::TaskCompletionSource_1<bool>*)>(&::GlobalNamespace::OculusInit::CheckUserAgeCategory)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2228d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "CheckUserAgeCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusInit.CheckEntitlements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusInit::*)(::System::Threading::Tasks::TaskCompletionSource_1<bool>*)>(&::GlobalNamespace::OculusInit::CheckEntitlements)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2228e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "CheckEntitlements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OculusInit::__set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel*, 0x20>(this, std::forward<::GlobalNamespace::PlayerDataModel*>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel* GlobalNamespace::OculusInit::__get__playerDataModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> GlobalNamespace::OculusInit::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel*, 0x20>(this);
}
constexpr void GlobalNamespace::OculusInit::__set__userAgeCategoryReceivedOrTimedOut_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OculusInit::__get__userAgeCategoryReceivedOrTimedOut_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::OculusInit::__get__userAgeCategoryReceivedOrTimedOut_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline bool GlobalNamespace::OculusInit::get_userAgeCategoryReceivedOrTimedOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "get_userAgeCategoryReceivedOrTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusInit::set_userAgeCategoryReceivedOrTimedOut(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "set_userAgeCategoryReceivedOrTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OculusInit* GlobalNamespace::OculusInit::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OculusInit*>());
}
inline void GlobalNamespace::OculusInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusInit::InitializeInternalAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "InitializeInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusInit::TryToInitialize(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "TryToInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tcs);
}
inline void GlobalNamespace::OculusInit::CheckUserAgeCategory(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "CheckUserAgeCategory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tcs);
}
inline void GlobalNamespace::OculusInit::CheckEntitlements(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusInit*>::get(),
                            "CheckEntitlements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tcs);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
