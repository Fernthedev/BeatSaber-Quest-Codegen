#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__FactoryProviderWrapper_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory_1<TContract>"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr  Zenject::FactoryProviderWrapper_1<TContract>::operator ::Zenject::IFactory_1<TContract>*() noexcept {
return static_cast<::Zenject::IFactory_1<TContract>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr  Zenject::FactoryProviderWrapper_1<TContract>::operator ::Zenject::IFactory*() noexcept {
return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::FactoryProviderWrapper_1<TContract>::__set__provider(::Zenject::IProvider*  value)  {
::cordl_internals::setInstanceField<::Zenject::IProvider*, 0x10>(this, std::forward<::Zenject::IProvider*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::IProvider* Zenject::FactoryProviderWrapper_1<TContract>::__get__provider()  {
return ::cordl_internals::getInstanceField<::Zenject::IProvider*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> Zenject::FactoryProviderWrapper_1<TContract>::__get__provider() const {
return ::cordl_internals::getInstanceField<::Zenject::IProvider*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::FactoryProviderWrapper_1<TContract>::__set__injectContext(::Zenject::InjectContext*  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectContext*, 0x18>(this, std::forward<::Zenject::InjectContext*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::InjectContext* Zenject::FactoryProviderWrapper_1<TContract>::__get__injectContext()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectContext*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> Zenject::FactoryProviderWrapper_1<TContract>::__get__injectContext() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectContext*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::FactoryProviderWrapper_1<TContract>* Zenject::FactoryProviderWrapper_1<TContract>::New_ctor(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  injectContext)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryProviderWrapper_1<TContract>*>(provider, injectContext));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::FactoryProviderWrapper_1<TContract>::_ctor(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  injectContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, provider, injectContext);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline TContract Zenject::FactoryProviderWrapper_1<TContract>::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TContract, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Object* Zenject::FactoryProviderWrapper_1<TContract>::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::InjectTypeInfo* Zenject::FactoryProviderWrapper_1<TContract>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryProviderWrapper_1<TContract>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
