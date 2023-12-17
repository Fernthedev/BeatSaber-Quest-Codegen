#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> (*)()>(&::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>.SetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::*)(int32_t)>(&::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::SetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "SetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>.SetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::*)(::System::Exception*)>(&::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::SetException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>.get_Task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::*)()>(&::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::get_Task)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__methodBuilder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__methodBuilder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__set__result(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__result()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__set__haveResult(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__haveResult()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__haveResult() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__set__useBuilder(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__useBuilder()  {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::__get__useBuilder() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>, false>(nullptr, ___internal_method);
}
template<typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::Start(ByRef<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                        "Start",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::SetResult(int32_t  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "SetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exception);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(*this, ___internal_method);
}
template<typename TAwaiter,typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>>::get(),
                        "AwaitUnsafeOnCompleted",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TAwaiter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, awaiter, stateMachine);
}
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>::AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  _methodBuilder, int32_t  _result, bool  _haveResult, bool  _useBuilder) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->_methodBuilder = _methodBuilder;
this->_result = _result;
this->_haveResult = _haveResult;
this->_useBuilder = _useBuilder;
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__methodBuilder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__methodBuilder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__set__result(TResult  value)  {
::cordl_internals::setInstanceField<TResult, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TResult>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr TResult& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__result()  {
return ::cordl_internals::getInstanceField<TResult, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr TResult const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__result() const {
return ::cordl_internals::getInstanceField<TResult, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__set__haveResult(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__haveResult()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__haveResult() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__set__useBuilder(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__useBuilder()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool const& System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::__get__useBuilder() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
template<typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::Start(ByRef<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "Start",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                            "SetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::SetException(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                            "SetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, exception);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::Threading::Tasks::ValueTask_1<TResult> System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                            "get_Task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<TResult>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
template<typename TAwaiter,typename TStateMachine>
inline void System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AwaitUnsafeOnCompleted(ByRef<TAwaiter>  awaiter, ByRef<TStateMachine>  stateMachine)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>>::get(),
                        "AwaitUnsafeOnCompleted",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TAwaiter>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateMachine>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, awaiter, stateMachine);
}
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult>::AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>  _methodBuilder, TResult  _result, bool  _haveResult, bool  _useBuilder) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->_methodBuilder = _methodBuilder;
this->_result = _result;
this->_haveResult = _haveResult;
this->_useBuilder = _useBuilder;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
