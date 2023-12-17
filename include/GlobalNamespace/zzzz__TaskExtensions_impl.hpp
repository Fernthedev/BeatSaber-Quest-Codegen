#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TaskExtensions_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__TaskExtensions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::TaskExtensions::WithCancellation(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TaskExtensions*>::get(),
                        "WithCancellation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, task, cancellationToken);
}
template<typename T>
inline void GlobalNamespace::TaskExtensions::WaitForTask(::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TaskExtensions*>::get(),
                        "WaitForTask",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, tcs);
}
//  Writing Method size for method: ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::*)()>(&::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>._WithCancellation_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::*)()>(&::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::_WithCancellation_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>*>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x10>(this);
}
constexpr void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this);
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this);
}
inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>* GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>*>());
}
inline void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>::_WithCancellation_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<bool>*>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x18>(this, std::forward<::System::Threading::CancellationToken>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>* GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>::_WithCancellation_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions____c__DisplayClass0_0_1<T>*>::get(),
                            "<WithCancellation>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::*)()>(&::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__set_task(::System::Threading::Tasks::Task_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get_task()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<bool>*> GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get_task() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<bool>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(value));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<bool>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<bool>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<bool>::__TaskExtensions___WaitForTask_d__1_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  tcs, ::System::Threading::Tasks::Task_1<bool>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tcs = tcs;
this->task = task;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get_tcs()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get_tcs() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__set_task(::System::Threading::Tasks::Task_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<T>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get_task()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<T>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<T>*> GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get_task() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<T>*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__set___7__wrap1(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<T>*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<T>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T>& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<T> const& GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__TaskExtensions___WaitForTask_d__1_1<T>::__TaskExtensions___WaitForTask_d__1_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, ::System::Threading::Tasks::Task_1<T>*  task, ::System::Threading::Tasks::TaskCompletionSource_1<T>*  __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tcs = tcs;
this->task = task;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
