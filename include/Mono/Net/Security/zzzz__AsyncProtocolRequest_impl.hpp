#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncOperationStatus_def.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolResult_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::*)()>(&::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x281e690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x281ea28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*> const& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__set___4__this(::Mono::Net::Security::AsyncProtocolRequest*  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest*>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest* Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__AsyncProtocolRequest___StartOperation_d__23::__AsyncProtocolRequest___StartOperation_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>  __t__builder, ::Mono::Net::Security::AsyncProtocolRequest*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::*)()>(&::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x281ea80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x281f18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set___4__this(::Mono::Net::Security::AsyncProtocolRequest*  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest*>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest* Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set__status_5__2(::Mono::Net::Security::AsyncOperationStatus  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncOperationStatus, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Mono::Net::Security::AsyncOperationStatus>(value));
}
constexpr ::Mono::Net::Security::AsyncOperationStatus& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get__status_5__2()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncOperationStatus, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Mono::Net::Security::AsyncOperationStatus const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get__status_5__2() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncOperationStatus, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set__newStatus_5__3(::Mono::Net::Security::AsyncOperationStatus  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncOperationStatus, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Mono::Net::Security::AsyncOperationStatus>(value));
}
constexpr ::Mono::Net::Security::AsyncOperationStatus& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get__newStatus_5__3()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncOperationStatus, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Mono::Net::Security::AsyncOperationStatus const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get__newStatus_5__3() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncOperationStatus, 0x34>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>> const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__set___u__2(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___u__2()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_status_5__2", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_newStatus_5__3", ty: "::Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__AsyncProtocolRequest___ProcessOperation_d__24::__AsyncProtocolRequest___ProcessOperation_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::Mono::Net::Security::AsyncProtocolRequest*  __4__this, ::Mono::Net::Security::AsyncOperationStatus  _status_5__2, ::Mono::Net::Security::AsyncOperationStatus  _newStatus_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Nullable_1<int32_t>>  __u__1, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter  __u__2) noexcept : ::bs_hook::ValueTypeWrapper<0x58>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->_status_5__2 = _status_5__2;
this->_newStatus_5__3 = _newStatus_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
//  Writing Method size for method: ::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::*)()>(&::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x281f198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x281f604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>> const& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set___4__this(::Mono::Net::Security::AsyncProtocolRequest*  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Mono::Net::Security::AsyncProtocolRequest*>(value));
}
constexpr ::Mono::Net::Security::AsyncProtocolRequest* Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::AsyncProtocolRequest*> Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::AsyncProtocolRequest*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set_cancellationToken(::System::Threading::CancellationToken  value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get_cancellationToken()  {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Threading::CancellationToken const& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set__totalRead_5__2(::System::Nullable_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Nullable_1<int32_t>>(value));
}
constexpr ::System::Nullable_1<int32_t>& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get__totalRead_5__2()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Nullable_1<int32_t> const& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get__totalRead_5__2() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<int32_t>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set__requestedSize_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get__requestedSize_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get__requestedSize_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> const& Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_totalRead_5__2", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestedSize_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Net::Security::__AsyncProtocolRequest___InnerRead_d__25::__AsyncProtocolRequest___InnerRead_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>  __t__builder, ::Mono::Net::Security::AsyncProtocolRequest*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Nullable_1<int32_t>  _totalRead_5__2, int32_t  _requestedSize_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x50>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_totalRead_5__2 = _totalRead_5__2;
this->_requestedSize_5__3 = _requestedSize_5__3;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_Parent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281e1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_Parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_RunSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_RunSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281e1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_RunSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_Name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x281e1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.get_UserResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::get_UserResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281e1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_UserResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.set_UserResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)(int32_t)>(&::Mono::Net::Security::AsyncProtocolRequest::set_UserResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281e1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "set_UserResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)(::Mono::Net::Security::MobileAuthenticatedStream*, bool)>(&::Mono::Net::Security::AsyncProtocolRequest::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x281e204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.RequestRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)(int32_t)>(&::Mono::Net::Security::AsyncProtocolRequest::RequestRead)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x281e28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "RequestRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.RequestWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::RequestWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x281e350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "RequestWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.StartOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* (::Mono::Net::Security::AsyncProtocolRequest::*)(::System::Threading::CancellationToken)>(&::Mono::Net::Security::AsyncProtocolRequest::StartOperation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x281e35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.ProcessOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::Mono::Net::Security::AsyncProtocolRequest::*)(::System::Threading::CancellationToken)>(&::Mono::Net::Security::AsyncProtocolRequest::ProcessOperation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x281e454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "ProcessOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.InnerRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* (::Mono::Net::Security::AsyncProtocolRequest::*)(::System::Threading::CancellationToken)>(&::Mono::Net::Security::AsyncProtocolRequest::InnerRead)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x281e534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "InnerRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::AsyncOperationStatus (::Mono::Net::Security::AsyncProtocolRequest::*)(::Mono::Net::Security::AsyncOperationStatus)>(&::Mono::Net::Security::AsyncProtocolRequest::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::AsyncProtocolRequest.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::AsyncProtocolRequest::*)()>(&::Mono::Net::Security::AsyncProtocolRequest::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x281e638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set__Parent_k__BackingField(::Mono::Net::Security::MobileAuthenticatedStream*  value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream*, 0x10>(this, std::forward<::Mono::Net::Security::MobileAuthenticatedStream*>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::AsyncProtocolRequest::__get__Parent_k__BackingField()  {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::MobileAuthenticatedStream*> Mono::Net::Security::AsyncProtocolRequest::__get__Parent_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream*, 0x10>(this);
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set__RunSynchronously_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Net::Security::AsyncProtocolRequest::__get__RunSynchronously_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Mono::Net::Security::AsyncProtocolRequest::__get__RunSynchronously_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set__UserResult_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__get__UserResult_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__get__UserResult_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set_Started(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__get_Started()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__get_Started() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set_RequestedSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__get_RequestedSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__get_RequestedSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set_WriteRequested(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::AsyncProtocolRequest::__get_WriteRequested()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& Mono::Net::Security::AsyncProtocolRequest::__get_WriteRequested() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void Mono::Net::Security::AsyncProtocolRequest::__set_locker(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Mono::Net::Security::AsyncProtocolRequest::__get_locker()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Mono::Net::Security::AsyncProtocolRequest::__get_locker() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
inline ::Mono::Net::Security::MobileAuthenticatedStream* Mono::Net::Security::AsyncProtocolRequest::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_Parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream*, false>(*this, ___internal_method);
}
inline bool Mono::Net::Security::AsyncProtocolRequest::get_RunSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_RunSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW Mono::Net::Security::AsyncProtocolRequest::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t Mono::Net::Security::AsyncProtocolRequest::get_UserResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "get_UserResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void Mono::Net::Security::AsyncProtocolRequest::set_UserResult(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "set_UserResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Mono::Net::Security::AsyncProtocolRequest* Mono::Net::Security::AsyncProtocolRequest::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, bool  sync)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::AsyncProtocolRequest*>(parent, sync));
}
inline void Mono::Net::Security::AsyncProtocolRequest::_ctor(::Mono::Net::Security::MobileAuthenticatedStream*  parent, bool  sync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, sync);
}
inline void Mono::Net::Security::AsyncProtocolRequest::RequestRead(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "RequestRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, size);
}
inline void Mono::Net::Security::AsyncProtocolRequest::RequestWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "RequestWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>* Mono::Net::Security::AsyncProtocolRequest::StartOperation(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Mono::Net::Security::AsyncProtocolResult*>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Mono::Net::Security::AsyncProtocolRequest::ProcessOperation(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "ProcessOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>* Mono::Net::Security::AsyncProtocolRequest::InnerRead(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "InnerRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>>*, false>(*this, ___internal_method, cancellationToken);
}
inline ::Mono::Net::Security::AsyncOperationStatus Mono::Net::Security::AsyncProtocolRequest::Run(::Mono::Net::Security::AsyncOperationStatus  status)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::AsyncOperationStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::AsyncOperationStatus, false>(*this, ___internal_method, status);
}
inline ::StringW Mono::Net::Security::AsyncProtocolRequest::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::AsyncProtocolRequest*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
