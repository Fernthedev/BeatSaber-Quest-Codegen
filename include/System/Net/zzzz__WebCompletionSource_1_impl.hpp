#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
template<typename T>
constexpr void System::Net::__WebCompletionSource_1__Status<T>::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& System::Net::__WebCompletionSource_1__Status<T>::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& System::Net::__WebCompletionSource_1__Status<T>::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T>::__WebCompletionSource_1__Status(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
template<typename T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T>  System::Net::__WebCompletionSource_1__Status<T>::Running{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T>  System::Net::__WebCompletionSource_1__Status<T>::Completed{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T>  System::Net::__WebCompletionSource_1__Status<T>::Canceled{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T>  System::Net::__WebCompletionSource_1__Status<T>::Faulted{static_cast<int32_t>(0x3)};
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set__Status_k__BackingField(::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  value)  {
::cordl_internals::setInstanceField<::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>, 0x10>(this, std::forward<::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>& System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get__Status_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>> const& System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get__Status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, 0x18>(this, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get__Error_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get__Error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set__Argument_k__BackingField(::System::ValueTuple_2<bool,T2_cordlgen_0>  value)  {
::cordl_internals::setInstanceField<::System::ValueTuple_2<bool,T2_cordlgen_0>, 0x20>(this, std::forward<::System::ValueTuple_2<bool,T2_cordlgen_0>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::ValueTuple_2<bool,T2_cordlgen_0>& System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get__Argument_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<bool,T2_cordlgen_0>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::ValueTuple_2<bool,T2_cordlgen_0> const& System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get__Argument_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::ValueTuple_2<bool,T2_cordlgen_0>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>> System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline bool System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::ValueTuple_2<bool,T2_cordlgen_0> System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "get_Argument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,T2_cordlgen_0>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::New_ctor(::System::ValueTuple_2<bool,T2_cordlgen_0>  argument)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(argument));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::_ctor(::System::ValueTuple_2<bool,T2_cordlgen_0>  argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, argument);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::New_ctor(::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(state, error));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>::_ctor(::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__WebCompletionSource_1__Status<::System::ValueTuple_2<bool,T2_cordlgen_0>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, error);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1__Result<T>::__set__Status_k__BackingField(::System::Net::__WebCompletionSource_1__Status<T>  value)  {
::cordl_internals::setInstanceField<::System::Net::__WebCompletionSource_1__Status<T>, 0x10>(this, std::forward<::System::Net::__WebCompletionSource_1__Status<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T>& System::Net::__WebCompletionSource_1__Result<T>::__get__Status_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Status<T>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::__WebCompletionSource_1__Status<T> const& System::Net::__WebCompletionSource_1__Result<T>::__get__Status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Status<T>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1__Result<T>::__set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, 0x18>(this, std::forward<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::__WebCompletionSource_1__Result<T>::__get__Error_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> System::Net::__WebCompletionSource_1__Result<T>::__get__Error_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1__Result<T>::__set__Argument_k__BackingField(T  value)  {
::cordl_internals::setInstanceField<T, 0x20>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Net::__WebCompletionSource_1__Result<T>::__get__Argument_k__BackingField()  {
return ::cordl_internals::getInstanceField<T, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Net::__WebCompletionSource_1__Result<T>::__get__Argument_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::__WebCompletionSource_1__Status<T> System::Net::__WebCompletionSource_1__Result<T>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__WebCompletionSource_1__Status<T>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::__WebCompletionSource_1__Result<T>::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::__WebCompletionSource_1__Result<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                            "get_Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Net::__WebCompletionSource_1__Result<T>::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                            "get_Argument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::__WebCompletionSource_1__Result<T>::New_ctor(T  argument)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebCompletionSource_1__Result<T>*>(argument));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::__WebCompletionSource_1__Result<T>::_ctor(T  argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, argument);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::__WebCompletionSource_1__Result<T>::New_ctor(::System::Net::__WebCompletionSource_1__Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebCompletionSource_1__Result<T>*>(state, error));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::__WebCompletionSource_1__Result<T>::_ctor(::System::Net::__WebCompletionSource_1__Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__WebCompletionSource_1__Status<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, error);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr  System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr int32_t& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr int32_t const& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>> const& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set___4__this(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> const& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__WebCompletionSource_1___WaitForCompletion_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>  __t__builder, ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> const& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__set___4__this(::System::Net::WebCompletionSource_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Net::WebCompletionSource_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::WebCompletionSource_1<T>* System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebCompletionSource_1<T>*> System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource_1<T>*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__set___u__1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*> const& System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__WebCompletionSource_1___WaitForCompletion_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Net::WebCompletionSource_1<T>*  __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>* System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get_completion()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*> System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get_completion() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr void System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__set_currentResult(::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*  value)  {
::cordl_internals::setInstanceField<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x18>(this, std::forward<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get_currentResult()  {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
constexpr ::cordl_internals::to_const_pointer<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*> System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::__get_currentResult() const {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, 0x18>(this);
}
/// @param runAsync: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::New_ctor(bool  runAsync)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>(runAsync));
}
/// @param runAsync: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::_ctor(bool  runAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, runAsync);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get_CurrentResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "get_CurrentResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__WebCompletionSource_1__Result<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Threading::Tasks::Task* System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline bool System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::TrySetCompleted(::System::ValueTuple_2<bool,T2_cordlgen_0>  argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<bool,T2_cordlgen_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, argument);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline bool System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::TrySetCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline bool System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline bool System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::TrySetCanceled(::System::OperationCanceledException*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline bool System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::TrySetException(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline void System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T2_cordlgen_0>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>* System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,T2_cordlgen_0>>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::WebCompletionSource_1<T>::__set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*, 0x10>(this, std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>* System::Net::WebCompletionSource_1<T>::__get_completion()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*> System::Net::WebCompletionSource_1<T>::__get_completion() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Net::WebCompletionSource_1<T>::__set_currentResult(::System::Net::__WebCompletionSource_1__Result<T>*  value)  {
::cordl_internals::setInstanceField<::System::Net::__WebCompletionSource_1__Result<T>*, 0x18>(this, std::forward<::System::Net::__WebCompletionSource_1__Result<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::WebCompletionSource_1<T>::__get_currentResult()  {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Result<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Net::__WebCompletionSource_1__Result<T>*> System::Net::WebCompletionSource_1<T>::__get_currentResult() const {
return ::cordl_internals::getInstanceField<::System::Net::__WebCompletionSource_1__Result<T>*, 0x18>(this);
}
/// @param runAsync: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::WebCompletionSource_1<T>* System::Net::WebCompletionSource_1<T>::New_ctor(bool  runAsync)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebCompletionSource_1<T>*>(runAsync));
}
/// @param runAsync: bool (default: true)
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::WebCompletionSource_1<T>::_ctor(bool  runAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, runAsync);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::WebCompletionSource_1<T>::get_CurrentResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "get_CurrentResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__WebCompletionSource_1__Result<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task* System::Net::WebCompletionSource_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted(T  argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, argument);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "TrySetCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled(::System::OperationCanceledException*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "TrySetCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetException(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "TrySetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Net::WebCompletionSource_1<T>::ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::WebCompletionSource_1<T>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
