#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBindingFinalizer_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__set__factoryBindInfo(::Zenject::FactoryBindInfo*  value)  {
::cordl_internals::setInstanceField<::Zenject::FactoryBindInfo*, 0x18>(this, std::forward<::Zenject::FactoryBindInfo*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::FactoryBindInfo* Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__get__factoryBindInfo()  {
return ::cordl_internals::getInstanceField<::Zenject::FactoryBindInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::__get__factoryBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::FactoryBindInfo*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>* Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::New_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>(bindInfo, factoryBindInfo));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindInfo, factoryBindInfo);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>::OnFinalizeBinding(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBindingFinalizer_1<TContract>*>::get(),
                            "OnFinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
