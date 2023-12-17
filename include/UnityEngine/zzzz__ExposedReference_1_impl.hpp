#pragma once
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ExposedReference_1<T>::__set_exposedName(::UnityEngine::PropertyName  value)  {
::cordl_internals::setInstanceField<::UnityEngine::PropertyName, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::PropertyName>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::PropertyName& UnityEngine::ExposedReference_1<T>::__get_exposedName()  {
return ::cordl_internals::getInstanceField<::UnityEngine::PropertyName, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::PropertyName const& UnityEngine::ExposedReference_1<T>::__get_exposedName() const {
return ::cordl_internals::getInstanceField<::UnityEngine::PropertyName, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ExposedReference_1<T>::__set_defaultValue(::UnityEngine::Object*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::Object* UnityEngine::ExposedReference_1<T>::__get_defaultValue()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> UnityEngine::ExposedReference_1<T>::__get_defaultValue() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::ExposedReference_1<T>::Resolve(::UnityEngine::IExposedPropertyTable*  resolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ExposedReference_1<T>>::get(),
                            "Resolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::IExposedPropertyTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, resolver);
}
// Ctor Parameters [CppParam { name: "exposedName", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultValue", ty: "::UnityEngine::Object*", modifiers: "", def_value: Some("csnull") }]
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::ExposedReference_1<T>::ExposedReference_1(::UnityEngine::PropertyName  exposedName, ::UnityEngine::Object*  defaultValue) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->exposedName = exposedName;
this->defaultValue = defaultValue;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
