#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationResultTaskFromResultTask_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
constexpr void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x58>(this, std::forward<::System::Threading::Tasks::Task_1<TAntecedentResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>* System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>*>(antecedent, function, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,::System::Nullable_1<int32_t>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::*)(::System::Threading::Tasks::Task_1<int32_t>*, ::System::Delegate*, ::System::Object*, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::*)()>(&::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::__set_m_antecedent(::System::Threading::Tasks::Task_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x58>(this, std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>* System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>*, 0x58>(this);
}
inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>* System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::New_ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>*>(antecedent, function, state, creationOptions, internalOptions));
}
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::_ctor(::System::Threading::Tasks::Task_1<int32_t>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<int32_t,::System::Nullable_1<int32_t>>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>::__set_m_antecedent(::System::Threading::Tasks::Task_1<TAntecedentResult>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x58>(this, std::forward<::System::Threading::Tasks::Task_1<TAntecedentResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Threading::Tasks::Task_1<TAntecedentResult>* System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>::__get_m_antecedent()  {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TAntecedentResult>*> System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<TAntecedentResult>*, 0x58>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>* System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>::New_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>*>(antecedent, function, state, creationOptions, internalOptions));
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>::_ctor(::System::Threading::Tasks::Task_1<TAntecedentResult>*  antecedent, ::System::Delegate*  function, ::System::Object*  state, ::System::Threading::Tasks::TaskCreationOptions  creationOptions, ::System::Threading::Tasks::InternalTaskOptions  internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<TAntecedentResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, antecedent, function, state, creationOptions, internalOptions);
}
template<::il2cpp_utils::il2cpp_reference_type TAntecedentResult,::il2cpp_utils::il2cpp_reference_type TResult>
inline void System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationResultTaskFromResultTask_2<TAntecedentResult,TResult>*>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
