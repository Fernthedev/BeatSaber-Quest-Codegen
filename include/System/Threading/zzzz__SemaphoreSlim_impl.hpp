#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim__TaskNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim__TaskNode::*)()>(&::System::Threading::__SemaphoreSlim__TaskNode::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2614edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim__TaskNode.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim__TaskNode::*)()>(&::System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26155fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim__TaskNode.System_Threading_IThreadPoolWorkItem_MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim__TaskNode::*)(::System::Threading::ThreadAbortException*)>(&::System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2615648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr  System::Threading::__SemaphoreSlim__TaskNode::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr void System::Threading::__SemaphoreSlim__TaskNode::__set_Prev(::System::Threading::__SemaphoreSlim__TaskNode*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x58>(this, std::forward<::System::Threading::__SemaphoreSlim__TaskNode*>(value));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::__SemaphoreSlim__TaskNode::__get_Prev()  {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> System::Threading::__SemaphoreSlim__TaskNode::__get_Prev() const {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x58>(this);
}
constexpr void System::Threading::__SemaphoreSlim__TaskNode::__set_Next(::System::Threading::__SemaphoreSlim__TaskNode*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x60>(this, std::forward<::System::Threading::__SemaphoreSlim__TaskNode*>(value));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::__SemaphoreSlim__TaskNode::__get_Next()  {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> System::Threading::__SemaphoreSlim__TaskNode::__get_Next() const {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x60>(this);
}
inline ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::__SemaphoreSlim__TaskNode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__SemaphoreSlim__TaskNode*>());
}
inline void System::Threading::__SemaphoreSlim__TaskNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException*  tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tae);
}
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::*)()>(&::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x261564c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2615db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set_asyncWaiter(::System::Threading::__SemaphoreSlim__TaskNode*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::__SemaphoreSlim__TaskNode*>(value));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_asyncWaiter()  {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_asyncWaiter() const {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set_millisecondsTimeout(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_millisecondsTimeout()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get_millisecondsTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___4__this(::System::Threading::SemaphoreSlim*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::SemaphoreSlim*>(value));
}
constexpr ::System::Threading::SemaphoreSlim* System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set__cts_5__2(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationTokenSource*>(value));
}
constexpr ::System::Threading::CancellationTokenSource* System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get__cts_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get__cts_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___7__wrap2(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___7__wrap2()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> const& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> const& System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncWaiter", ty: "::System::Threading::__SemaphoreSlim__TaskNode*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "millisecondsTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::__SemaphoreSlim__TaskNode*  asyncWaiter, int32_t  millisecondsTimeout, ::System::Threading::SemaphoreSlim*  __4__this, ::System::Threading::CancellationTokenSource*  _cts_5__2, ::System::Object*  __7__wrap2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x70>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->asyncWaiter = asyncWaiter;
this->millisecondsTimeout = millisecondsTimeout;
this->__4__this = __4__this;
this->_cts_5__2 = _cts_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.get_CurrentCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::get_CurrentCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2614218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "get_CurrentCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(int32_t, int32_t)>(&::System::Threading::SemaphoreSlim::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2614238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26143d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26148b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x26143e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitUntilCountOrTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t, uint32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2614c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitUntilCountOrTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2614d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::SemaphoreSlim::*)(::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2614d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Threading::SemaphoreSlim::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2614944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CreateAndAddAsyncWaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__SemaphoreSlim__TaskNode* (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2614d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "CreateAndAddAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.RemoveAsyncWaiter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(::System::Threading::__SemaphoreSlim__TaskNode*)>(&::System::Threading::SemaphoreSlim::RemoveAsyncWaiter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2614f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "RemoveAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitUntilCountOrTimeoutAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Threading::SemaphoreSlim::*)(::System::Threading::__SemaphoreSlim__TaskNode*, int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2614db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitUntilCountOrTimeoutAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::Release)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2614fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.QueueWaiterTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::__SemaphoreSlim__TaskNode*)>(&::System::Threading::SemaphoreSlim::QueueWaiterTask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26152e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "QueueWaiterTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26152f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(bool)>(&::System::Threading::SemaphoreSlim::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2615360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CancellationTokenCanceledEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26153bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "CancellationTokenCanceledEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CheckDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::CheckDispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26148c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "CheckDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.GetResourceString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Threading::SemaphoreSlim::GetResourceString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26143cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Threading::SemaphoreSlim::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Threading::SemaphoreSlim::__set_m_currentCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::SemaphoreSlim::__get_m_currentCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Threading::SemaphoreSlim::__get_m_currentCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Threading::SemaphoreSlim::__set_m_maxCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::SemaphoreSlim::__get_m_maxCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Threading::SemaphoreSlim::__get_m_maxCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Threading::SemaphoreSlim::__set_m_waitCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::SemaphoreSlim::__get_m_waitCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Threading::SemaphoreSlim::__get_m_waitCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Threading::SemaphoreSlim::__set_m_lockObj(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Threading::SemaphoreSlim::__get_m_lockObj()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Threading::SemaphoreSlim::__get_m_lockObj() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Threading::SemaphoreSlim::__set_m_waitHandle(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* System::Threading::SemaphoreSlim::__get_m_waitHandle()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> System::Threading::SemaphoreSlim::__get_m_waitHandle() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x28>(this);
}
constexpr void System::Threading::SemaphoreSlim::__set_m_asyncHead(::System::Threading::__SemaphoreSlim__TaskNode*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x30>(this, std::forward<::System::Threading::__SemaphoreSlim__TaskNode*>(value));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::SemaphoreSlim::__get_m_asyncHead()  {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> System::Threading::SemaphoreSlim::__get_m_asyncHead() const {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x30>(this);
}
constexpr void System::Threading::SemaphoreSlim::__set_m_asyncTail(::System::Threading::__SemaphoreSlim__TaskNode*  value)  {
::cordl_internals::setInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x38>(this, std::forward<::System::Threading::__SemaphoreSlim__TaskNode*>(value));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::SemaphoreSlim::__get_m_asyncTail()  {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> System::Threading::SemaphoreSlim::__get_m_asyncTail() const {
return ::cordl_internals::getInstanceField<::System::Threading::__SemaphoreSlim__TaskNode*, 0x38>(this);
}
inline void System::Threading::SemaphoreSlim::setStaticF_s_trueTask(::System::Threading::Tasks::Task_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_trueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>(std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::getStaticF_s_trueTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_trueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>();
}
inline void System::Threading::SemaphoreSlim::setStaticF_s_falseTask(::System::Threading::Tasks::Task_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_falseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>(std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::getStaticF_s_falseTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_falseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>();
}
inline void System::Threading::SemaphoreSlim::setStaticF_s_cancellationTokenCanceledEventHandler(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_cancellationTokenCanceledEventHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::SemaphoreSlim::getStaticF_s_cancellationTokenCanceledEventHandler()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_cancellationTokenCanceledEventHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>();
}
inline int32_t System::Threading::SemaphoreSlim::get_CurrentCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "get_CurrentCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::Threading::SemaphoreSlim::New_ctor(int32_t  initialCount)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SemaphoreSlim*>(initialCount));
}
inline void System::Threading::SemaphoreSlim::_ctor(int32_t  initialCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialCount);
}
inline ::System::Threading::SemaphoreSlim* System::Threading::SemaphoreSlim::New_ctor(int32_t  initialCount, int32_t  maxCount)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SemaphoreSlim*>(initialCount, maxCount));
}
inline void System::Threading::SemaphoreSlim::_ctor(int32_t  initialCount, int32_t  maxCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialCount, maxCount);
}
inline void System::Threading::SemaphoreSlim::Wait()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Threading::SemaphoreSlim::Wait(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::SemaphoreSlim::Wait(int32_t  millisecondsTimeout, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Wait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline bool System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout(int32_t  millisecondsTimeout, uint32_t  startTime, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitUntilCountOrTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, millisecondsTimeout, startTime, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::SemaphoreSlim::WaitAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::SemaphoreSlim::WaitAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::WaitAsync(int32_t  millisecondsTimeout, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "CreateAndAddAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::__SemaphoreSlim__TaskNode*, false>(*this, ___internal_method);
}
inline bool System::Threading::SemaphoreSlim::RemoveAsyncWaiter(::System::Threading::__SemaphoreSlim__TaskNode*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "RemoveAsyncWaiter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync(::System::Threading::__SemaphoreSlim__TaskNode*  asyncWaiter, int32_t  millisecondsTimeout, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "WaitUntilCountOrTimeoutAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(*this, ___internal_method, asyncWaiter, millisecondsTimeout, cancellationToken);
}
inline int32_t System::Threading::SemaphoreSlim::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Threading::SemaphoreSlim::Release(int32_t  releaseCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, releaseCount);
}
inline void System::Threading::SemaphoreSlim::QueueWaiterTask(::System::Threading::__SemaphoreSlim__TaskNode*  waiterTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "QueueWaiterTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, waiterTask);
}
inline void System::Threading::SemaphoreSlim::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::SemaphoreSlim::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "CancellationTokenCanceledEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void System::Threading::SemaphoreSlim::CheckDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "CheckDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW System::Threading::SemaphoreSlim::GetResourceString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                            "GetResourceString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
