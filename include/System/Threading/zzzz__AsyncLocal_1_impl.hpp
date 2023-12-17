#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
/// @brief Convert operator to "::System::Threading::IAsyncLocal"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Threading::AsyncLocal_1<T>::operator ::System::Threading::IAsyncLocal*() noexcept {
return static_cast<::System::Threading::IAsyncLocal*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::AsyncLocal_1<T>::__set_m_valueChangedHandler(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*, 0x10>(this, std::forward<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>* System::Threading::AsyncLocal_1<T>::__get_m_valueChangedHandler()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*> System::Threading::AsyncLocal_1<T>::__get_m_valueChangedHandler() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Threading::AsyncLocal_1<T>* System::Threading::AsyncLocal_1<T>::New_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  valueChangedHandler)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::AsyncLocal_1<T>*>(valueChangedHandler));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::AsyncLocal_1<T>::_ctor(::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*  valueChangedHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocal_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Threading::AsyncLocalValueChangedArgs_1<T>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, valueChangedHandler);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::AsyncLocal_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocal_1<T>*>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::AsyncLocal_1<T>::System_Threading_IAsyncLocal_OnValueChanged(::System::Object*  previousValueObj, ::System::Object*  currentValueObj, bool  contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocal_1<T>*>::get(),
                            "System.Threading.IAsyncLocal.OnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, previousValueObj, currentValueObj, contextChanged);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
