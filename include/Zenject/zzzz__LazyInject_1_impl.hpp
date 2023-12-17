#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
/// @brief Convert operator to "::Zenject::IValidatable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Zenject::LazyInject_1<T>::operator ::Zenject::IValidatable*() noexcept {
return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::LazyInject_1<T>::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x10>(this, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Zenject::DiContainer* Zenject::LazyInject_1<T>::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::LazyInject_1<T>::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::LazyInject_1<T>::__set__context(::Zenject::InjectContext*  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectContext*, 0x18>(this, std::forward<::Zenject::InjectContext*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Zenject::InjectContext* Zenject::LazyInject_1<T>::__get__context()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectContext*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> Zenject::LazyInject_1<T>::__get__context() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectContext*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::LazyInject_1<T>::__set__hasValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& Zenject::LazyInject_1<T>::__get__hasValue()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& Zenject::LazyInject_1<T>::__get__hasValue() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Zenject::LazyInject_1<T>::__set__value(T  value)  {
::cordl_internals::setInstanceField<T, 0x28>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& Zenject::LazyInject_1<T>::__get__value()  {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& Zenject::LazyInject_1<T>::__get__value() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Zenject::LazyInject_1<T>* Zenject::LazyInject_1<T>::New_ctor(::Zenject::DiContainer*  container, ::Zenject::InjectContext*  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::LazyInject_1<T>*>(container, context));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::LazyInject_1<T>::_ctor(::Zenject::DiContainer*  container, ::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, context);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Zenject::LazyInject_1<T>::Zenject_IValidatable_Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(),
                            "Zenject.IValidatable.Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T Zenject::LazyInject_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::LazyInject_1<T>*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
