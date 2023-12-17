#pragma once
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::AsyncLocalValueChangedArgs_1<T>::__set__PreviousValue_k__BackingField(T  value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__PreviousValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__PreviousValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::AsyncLocalValueChangedArgs_1<T>::__set__CurrentValue_k__BackingField(T  value)  {
::cordl_internals::setInstanceField<T, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__CurrentValue_k__BackingField()  {
return ::cordl_internals::getInstanceField<T, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__CurrentValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Threading::AsyncLocalValueChangedArgs_1<T>::__set__ThreadContextChanged_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__ThreadContextChanged_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Threading::AsyncLocalValueChangedArgs_1<T>::__get__ThreadContextChanged_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Threading::AsyncLocalValueChangedArgs_1<T>::get_CurrentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocalValueChangedArgs_1<T>>::get(),
                            "get_CurrentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Threading::AsyncLocalValueChangedArgs_1<T>::_ctor(T  previousValue, T  currentValue, bool  contextChanged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::AsyncLocalValueChangedArgs_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, previousValue, currentValue, contextChanged);
}
// Ctor Parameters [CppParam { name: "_PreviousValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_CurrentValue_k__BackingField", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ThreadContextChanged_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::AsyncLocalValueChangedArgs_1<T>::AsyncLocalValueChangedArgs_1(T  _PreviousValue_k__BackingField, T  _CurrentValue_k__BackingField, bool  _ThreadContextChanged_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->_PreviousValue_k__BackingField = _PreviousValue_k__BackingField;
this->_CurrentValue_k__BackingField = _CurrentValue_k__BackingField;
this->_ThreadContextChanged_k__BackingField = _ThreadContextChanged_k__BackingField;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
