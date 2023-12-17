#pragma once
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__BufferedStream_def.hpp"
#include "System/IO/zzzz__BufferedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::System::IO::__BufferedStream____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream____c::*)()>(&::System::IO::__BufferedStream____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2530b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream____c._LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::__BufferedStream____c::*)()>(&::System::IO::__BufferedStream____c::_LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2530b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get(),
                            "<LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void System::IO::__BufferedStream____c::setStaticF___9(::System::IO::__BufferedStream____c*  value)  {
::cordl_internals::setStaticField<::System::IO::__BufferedStream____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get>(std::forward<::System::IO::__BufferedStream____c*>(value));
}
inline ::System::IO::__BufferedStream____c* System::IO::__BufferedStream____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::IO::__BufferedStream____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get>();
}
inline void System::IO::__BufferedStream____c::setStaticF___9__10_0(::System::Func_1<::System::Threading::SemaphoreSlim*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get>(std::forward<::System::Func_1<::System::Threading::SemaphoreSlim*>*>(value));
}
inline ::System::Func_1<::System::Threading::SemaphoreSlim*>* System::IO::__BufferedStream____c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Threading::SemaphoreSlim*>*, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get>();
}
inline ::System::IO::__BufferedStream____c* System::IO::__BufferedStream____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::__BufferedStream____c*>());
}
inline void System::IO::__BufferedStream____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::IO::__BufferedStream____c::_LazyEnsureAsyncActiveSemaphoreInitialized_b__10_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream____c*>::get(),
                            "<LazyEnsureAsyncActiveSemaphoreInitialized>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::IO::__BufferedStream___DisposeAsync_d__34.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___DisposeAsync_d__34::*)()>(&::System::IO::__BufferedStream___DisposeAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x2530bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___DisposeAsync_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream___DisposeAsync_d__34.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___DisposeAsync_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__BufferedStream___DisposeAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25311fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___DisposeAsync_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__BufferedStream___DisposeAsync_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___DisposeAsync_d__34::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___DisposeAsync_d__34::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___t__builder(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder& System::IO::__BufferedStream___DisposeAsync_d__34::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder const& System::IO::__BufferedStream___DisposeAsync_d__34::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___4__this(::System::IO::BufferedStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::BufferedStream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::BufferedStream*>(value));
}
constexpr ::System::IO::BufferedStream* System::IO::__BufferedStream___DisposeAsync_d__34::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BufferedStream*> System::IO::__BufferedStream___DisposeAsync_d__34::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___7__wrap1(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::IO::__BufferedStream___DisposeAsync_d__34::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::IO::__BufferedStream___DisposeAsync_d__34::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___7__wrap2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___DisposeAsync_d__34::__get___7__wrap2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___DisposeAsync_d__34::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& System::IO::__BufferedStream___DisposeAsync_d__34::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& System::IO::__BufferedStream___DisposeAsync_d__34::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___DisposeAsync_d__34::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& System::IO::__BufferedStream___DisposeAsync_d__34::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& System::IO::__BufferedStream___DisposeAsync_d__34::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__BufferedStream___DisposeAsync_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___DisposeAsync_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__BufferedStream___DisposeAsync_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___DisposeAsync_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__BufferedStream___DisposeAsync_d__34::__BufferedStream___DisposeAsync_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder, ::System::IO::BufferedStream*  __4__this, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::System::IO::__BufferedStream___FlushAsyncInternal_d__38.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___FlushAsyncInternal_d__38::*)()>(&::System::IO::__BufferedStream___FlushAsyncInternal_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x2531208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream___FlushAsyncInternal_d__38.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___FlushAsyncInternal_d__38::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__BufferedStream___FlushAsyncInternal_d__38::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2531750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__BufferedStream___FlushAsyncInternal_d__38::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__BufferedStream___FlushAsyncInternal_d__38::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushAsyncInternal_d__38::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushAsyncInternal_d__38::__set___4__this(::System::IO::BufferedStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::BufferedStream*>(value));
}
constexpr ::System::IO::BufferedStream* System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BufferedStream*> System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushAsyncInternal_d__38::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushAsyncInternal_d__38::__set__sem_5__2(::System::Threading::SemaphoreSlim*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::SemaphoreSlim*>(value));
}
constexpr ::System::Threading::SemaphoreSlim* System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get__sem_5__2()  {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get__sem_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushAsyncInternal_d__38::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& System::IO::__BufferedStream___FlushAsyncInternal_d__38::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__BufferedStream___FlushAsyncInternal_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__BufferedStream___FlushAsyncInternal_d__38::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushAsyncInternal_d__38>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sem_5__2", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__BufferedStream___FlushAsyncInternal_d__38::__BufferedStream___FlushAsyncInternal_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::IO::BufferedStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::SemaphoreSlim*  _sem_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_sem_5__2 = _sem_5__2;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::System::IO::__BufferedStream___FlushWriteAsync_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___FlushWriteAsync_d__42::*)()>(&::System::IO::__BufferedStream___FlushWriteAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x253175c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream___FlushWriteAsync_d__42.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___FlushWriteAsync_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__BufferedStream___FlushWriteAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2531bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__BufferedStream___FlushWriteAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__BufferedStream___FlushWriteAsync_d__42::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushWriteAsync_d__42::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushWriteAsync_d__42::__set___4__this(::System::IO::BufferedStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::BufferedStream*>(value));
}
constexpr ::System::IO::BufferedStream* System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BufferedStream*> System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushWriteAsync_d__42::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushWriteAsync_d__42::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___FlushWriteAsync_d__42::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& System::IO::__BufferedStream___FlushWriteAsync_d__42::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__BufferedStream___FlushWriteAsync_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__BufferedStream___FlushWriteAsync_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___FlushWriteAsync_d__42>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__BufferedStream___FlushWriteAsync_d__42::__BufferedStream___FlushWriteAsync_d__42(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::IO::BufferedStream*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::*)()>(&::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::MoveNext)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x2531be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2532438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___t__builder(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_semaphoreLockTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_semaphoreLockTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_semaphoreLockTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___4__this(::System::IO::BufferedStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::BufferedStream*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::BufferedStream*>(value));
}
constexpr ::System::IO::BufferedStream* System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BufferedStream*> System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_buffer(::System::Memory_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::System::Memory_1<uint8_t>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Memory_1<uint8_t>>(value));
}
constexpr ::System::Memory_1<uint8_t>& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_buffer()  {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Memory_1<uint8_t> const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_buffer() const {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_bytesAlreadySatisfied(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_bytesAlreadySatisfied()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_bytesAlreadySatisfied() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___7__wrap1(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t> const& System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51::__BufferedStream___ReadFromUnderlyingStreamAsync_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task*  semaphoreLockTask, ::System::IO::BufferedStream*  __4__this, ::System::Memory_1<uint8_t>  buffer, int32_t  bytesAlreadySatisfied, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, int32_t  __7__wrap1, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<int32_t>  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x80>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->semaphoreLockTask = semaphoreLockTask;
this->__4__this = __4__this;
this->buffer = buffer;
this->bytesAlreadySatisfied = bytesAlreadySatisfied;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__7__wrap1 = __7__wrap1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::*)()>(&::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::MoveNext)> {
  constexpr static std::size_t size = 0xfd8;
  constexpr static std::size_t addrs = 0x2532490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2533468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set_semaphoreLockTask(::System::Threading::Tasks::Task*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::Tasks::Task*>(value));
}
constexpr ::System::Threading::Tasks::Task* System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_semaphoreLockTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_semaphoreLockTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___4__this(::System::IO::BufferedStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::BufferedStream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::BufferedStream*>(value));
}
constexpr ::System::IO::BufferedStream* System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BufferedStream*> System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set_buffer(::System::ReadOnlyMemory_1<uint8_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlyMemory_1<uint8_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlyMemory_1<uint8_t>>(value));
}
constexpr ::System::ReadOnlyMemory_1<uint8_t>& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_buffer()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlyMemory_1<uint8_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlyMemory_1<uint8_t> const& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_buffer() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlyMemory_1<uint8_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buffer", ty: "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__BufferedStream___WriteToUnderlyingStreamAsync_d__63::__BufferedStream___WriteToUnderlyingStreamAsync_d__63(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  semaphoreLockTask, ::System::IO::BufferedStream*  __4__this, ::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x68>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->semaphoreLockTask = semaphoreLockTask;
this->__4__this = __4__this;
this->buffer = buffer;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::System::IO::__BufferedStream___CopyToAsyncCore_d__71.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___CopyToAsyncCore_d__71::*)()>(&::System::IO::__BufferedStream___CopyToAsyncCore_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x2533474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__BufferedStream___CopyToAsyncCore_d__71.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::__BufferedStream___CopyToAsyncCore_d__71::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::IO::__BufferedStream___CopyToAsyncCore_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2533b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  System::IO::__BufferedStream___CopyToAsyncCore_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set___4__this(::System::IO::BufferedStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::BufferedStream*>(value));
}
constexpr ::System::IO::BufferedStream* System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BufferedStream*> System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::IO::BufferedStream*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set_destination(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get_destination()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get_destination() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set_bufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get_bufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get_bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::IO::__BufferedStream___CopyToAsyncCore_d__71::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& System::IO::__BufferedStream___CopyToAsyncCore_d__71::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::IO::__BufferedStream___CopyToAsyncCore_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::__BufferedStream___CopyToAsyncCore_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::__BufferedStream___CopyToAsyncCore_d__71>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "destination", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::__BufferedStream___CopyToAsyncCore_d__71::__BufferedStream___CopyToAsyncCore_d__71(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::IO::BufferedStream*  __4__this, ::System::IO::Stream*  destination, ::System::Threading::CancellationToken  cancellationToken, int32_t  bufferSize, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1, ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x60>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->destination = destination;
this->cancellationToken = cancellationToken;
this->bufferSize = bufferSize;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::System::IO::BufferedStream.LazyEnsureAsyncActiveSemaphoreInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SemaphoreSlim* (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::LazyEnsureAsyncActiveSemaphoreInitialized)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x250fd10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "LazyEnsureAsyncActiveSemaphoreInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::System::IO::Stream*)>(&::System::IO::BufferedStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x250fe08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::BufferedStream::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x250fe10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureNotClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureNotClosed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x250ffec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureNotClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureCanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureCanSeek)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2510050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureCanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureCanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureCanRead)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25100c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureCanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureCanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureCanWrite)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2510138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureCanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureShadowBufferAllocated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureShadowBufferAllocated)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25101ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureShadowBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EnsureBufferAllocated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::EnsureBufferAllocated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2510280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_CanRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25102d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25102f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2510308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_Length)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2510320;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::get_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25103ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(int64_t)>(&::System::IO::BufferedStream::set_Position)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25103f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::DisposeAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25104bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(bool)>(&::System::IO::BufferedStream::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2510568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::Flush)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25106c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::FlushAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25107c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::FlushAsyncInternal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2510864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::FlushRead)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2510780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ClearReadBufferBeforeWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::ClearReadBufferBeforeWrite)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2510940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ClearReadBufferBeforeWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::FlushWrite)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x251035c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.FlushWriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::FlushWriteAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x25109d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2510ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2510b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ByRef<::System::Exception*>)>(&::System::IO::BufferedStream::ReadFromBuffer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2510c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::BufferedStream::Read)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2510cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::BufferedStream::Read)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2510f14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.LastSyncCompletedReadTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::BufferedStream::*)(int32_t)>(&::System::IO::BufferedStream::LastSyncCompletedReadTask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2511078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "LastSyncCompletedReadTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2511128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::BufferedStream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::ReadAsync)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x251160c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadFromUnderlyingStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::BufferedStream::*)(::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken, int32_t, ::System::Threading::Tasks::Task*)>(&::System::IO::BufferedStream::ReadFromUnderlyingStreamAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25114f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::BufferedStream::BeginRead)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25118a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::IAsyncResult*)>(&::System::IO::BufferedStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x251195c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::ReadByte)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25119a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.ReadByteSlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)()>(&::System::IO::BufferedStream::ReadByteSlow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25119f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadByteSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteToBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ByRef<int32_t>, ByRef<int32_t>)>(&::System::IO::BufferedStream::WriteToBuffer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2511a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteToBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::BufferedStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::BufferedStream::WriteToBuffer)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2511b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::IO::BufferedStream::Write)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2511cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::BufferedStream::Write)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2512008;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x25122d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::BufferedStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::WriteAsync)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x25124ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteToUnderlyingStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*)>(&::System::IO::BufferedStream::WriteToUnderlyingStreamAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x25126c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteToUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::IO::BufferedStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::IO::BufferedStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x25127bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::System::IAsyncResult*)>(&::System::IO::BufferedStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2512870;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(uint8_t)>(&::System::IO::BufferedStream::WriteByte)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x251287c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::BufferedStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::BufferedStream::Seek)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2512908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(int64_t)>(&::System::IO::BufferedStream::SetLength)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2512a30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.CopyTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::BufferedStream::CopyTo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2512af4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.CopyToAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::CopyToAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2512b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::BufferedStream.CopyToAsyncCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::BufferedStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::BufferedStream::CopyToAsyncCore)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2512c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "CopyToAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::IO::BufferedStream::__set__stream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x28>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::IO::BufferedStream::__get__stream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::IO::BufferedStream::__get__stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x28>(this);
}
constexpr void System::IO::BufferedStream::__set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::IO::BufferedStream::__get__buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::IO::BufferedStream::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x30>(this);
}
constexpr void System::IO::BufferedStream::__set__bufferSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::BufferedStream::__get__bufferSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& System::IO::BufferedStream::__get__bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void System::IO::BufferedStream::__set__readPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::BufferedStream::__get__readPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& System::IO::BufferedStream::__get__readPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void System::IO::BufferedStream::__set__readLen(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::BufferedStream::__get__readLen()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& System::IO::BufferedStream::__get__readLen() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void System::IO::BufferedStream::__set__writePos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::IO::BufferedStream::__get__writePos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& System::IO::BufferedStream::__get__writePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void System::IO::BufferedStream::__set__lastSyncCompletedReadTask(::System::Threading::Tasks::Task_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x48>(this, std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>* System::IO::BufferedStream::__get__lastSyncCompletedReadTask()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> System::IO::BufferedStream::__get__lastSyncCompletedReadTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x48>(this);
}
constexpr void System::IO::BufferedStream::__set__asyncActiveSemaphore(::System::Threading::SemaphoreSlim*  value)  {
::cordl_internals::setInstanceField<::System::Threading::SemaphoreSlim*, 0x50>(this, std::forward<::System::Threading::SemaphoreSlim*>(value));
}
constexpr ::System::Threading::SemaphoreSlim* System::IO::BufferedStream::__get__asyncActiveSemaphore()  {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> System::IO::BufferedStream::__get__asyncActiveSemaphore() const {
return ::cordl_internals::getInstanceField<::System::Threading::SemaphoreSlim*, 0x50>(this);
}
inline ::System::Threading::SemaphoreSlim* System::IO::BufferedStream::LazyEnsureAsyncActiveSemaphoreInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "LazyEnsureAsyncActiveSemaphoreInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SemaphoreSlim*, false>(*this, ___internal_method);
}
inline ::System::IO::BufferedStream* System::IO::BufferedStream::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::BufferedStream*>(stream));
}
inline void System::IO::BufferedStream::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream);
}
inline ::System::IO::BufferedStream* System::IO::BufferedStream::New_ctor(::System::IO::Stream*  stream, int32_t  bufferSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::IO::BufferedStream*>(stream, bufferSize));
}
inline void System::IO::BufferedStream::_ctor(::System::IO::Stream*  stream, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, bufferSize);
}
inline void System::IO::BufferedStream::EnsureNotClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureNotClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureCanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureCanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureCanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureCanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureCanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureCanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureShadowBufferAllocated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureShadowBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::EnsureBufferAllocated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EnsureBufferAllocated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::IO::BufferedStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::IO::BufferedStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::IO::BufferedStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int64_t System::IO::BufferedStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline int64_t System::IO::BufferedStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::set_Position(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Threading::Tasks::ValueTask System::IO::BufferedStream::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void System::IO::BufferedStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::FlushAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::FlushAsyncInternal(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline void System::IO::BufferedStream::FlushRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::ClearReadBufferBeforeWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ClearReadBufferBeforeWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::FlushWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::FlushWriteAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "FlushWriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline int32_t System::IO::BufferedStream::ReadFromBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::BufferedStream::ReadFromBuffer(::System::Span_1<uint8_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, destination);
}
inline int32_t System::IO::BufferedStream::ReadFromBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count, ByRef<::System::Exception*>  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, array, offset, count, error);
}
inline int32_t System::IO::BufferedStream::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::BufferedStream::Read(::System::Span_1<uint8_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, destination);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::BufferedStream::LastSyncCompletedReadTask(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "LastSyncCompletedReadTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(*this, ___internal_method, val);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::BufferedStream::ReadAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(*this, ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::BufferedStream::ReadAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(*this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::BufferedStream::ReadFromUnderlyingStreamAsync(::System::Memory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, int32_t  bytesAlreadySatisfied, ::System::Threading::Tasks::Task*  semaphoreLockTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadFromUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(*this, ___internal_method, buffer, cancellationToken, bytesAlreadySatisfied, semaphoreLockTask);
}
inline ::System::IAsyncResult* System::IO::BufferedStream::BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t System::IO::BufferedStream::EndRead(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, asyncResult);
}
inline int32_t System::IO::BufferedStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::IO::BufferedStream::ReadByteSlow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "ReadByteSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void System::IO::BufferedStream::WriteToBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  array, ByRef<int32_t>  offset, ByRef<int32_t>  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::BufferedStream::WriteToBuffer(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer);
}
inline void System::IO::BufferedStream::Write(::ArrayW<uint8_t,::Array<uint8_t>*>  array, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, offset, count);
}
inline void System::IO::BufferedStream::Write(::System::ReadOnlySpan_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::WriteAsync(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::ValueTask System::IO::BufferedStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(*this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::WriteToUnderlyingStreamAsync(::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::Tasks::Task*  semaphoreLockTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteToUnderlyingStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, buffer, cancellationToken, semaphoreLockTask);
}
inline ::System::IAsyncResult* System::IO::BufferedStream::BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, buffer, offset, count, callback, state);
}
inline void System::IO::BufferedStream::EndWrite(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, asyncResult);
}
inline void System::IO::BufferedStream::WriteByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int64_t System::IO::BufferedStream::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, offset, origin);
}
inline void System::IO::BufferedStream::SetLength(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::IO::BufferedStream::CopyTo(::System::IO::Stream*  destination, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, destination, bufferSize);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::CopyToAsync(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "CopyToAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::BufferedStream::CopyToAsyncCore(::System::IO::Stream*  destination, int32_t  bufferSize, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::BufferedStream*>::get(),
                            "CopyToAsyncCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, destination, bufferSize, cancellationToken);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
