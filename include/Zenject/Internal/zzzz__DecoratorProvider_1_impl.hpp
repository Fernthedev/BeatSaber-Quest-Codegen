#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__DecoratorProvider_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__IFactory_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to "::Zenject::Internal::IDecoratorProvider"
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr  Zenject::Internal::DecoratorProvider_1<TContract>::operator ::Zenject::Internal::IDecoratorProvider*() noexcept {
return static_cast<::Zenject::Internal::IDecoratorProvider*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__set__cachedInstances(::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>* Zenject::Internal::DecoratorProvider_1<TContract>::__get__cachedInstances()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>*> Zenject::Internal::DecoratorProvider_1<TContract>::__get__cachedInstances() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Zenject::IProvider*,::System::Collections::Generic::List_1<::System::Object*>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x18>(this, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::Zenject::DiContainer* Zenject::Internal::DecoratorProvider_1<TContract>::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::Internal::DecoratorProvider_1<TContract>::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__set__factoryBindIds(::System::Collections::Generic::List_1<::System::Guid>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Guid>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::Guid>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::System::Collections::Generic::List_1<::System::Guid>* Zenject::Internal::DecoratorProvider_1<TContract>::__get__factoryBindIds()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Guid>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Guid>*> Zenject::Internal::DecoratorProvider_1<TContract>::__get__factoryBindIds() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Guid>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr void Zenject::Internal::DecoratorProvider_1<TContract>::__set__decoratorFactories(::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>* Zenject::Internal::DecoratorProvider_1<TContract>::__get__decoratorFactories()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>*> Zenject::Internal::DecoratorProvider_1<TContract>::__get__decoratorFactories() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::IFactory_2<TContract,TContract>*>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::Zenject::Internal::DecoratorProvider_1<TContract>* Zenject::Internal::DecoratorProvider_1<TContract>::New_ctor(::Zenject::DiContainer*  container)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::DecoratorProvider_1<TContract>*>(container));
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::_ctor(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::AddFactoryId(::System::Guid  factoryBindId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                            "AddFactoryId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, factoryBindId);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::LazyInitializeDecoratorFactories()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                            "LazyInitializeDecoratorFactories",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::GetAllInstances(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                            "GetAllInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, provider, context, buffer);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline void Zenject::Internal::DecoratorProvider_1<TContract>::WrapProviderInstances(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                            "WrapProviderInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, provider, context, buffer);
}
template<::il2cpp_utils::il2cpp_reference_type TContract>
inline ::System::Object* Zenject::Internal::DecoratorProvider_1<TContract>::DecorateInstance(::System::Object*  instance, ::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::DecoratorProvider_1<TContract>*>::get(),
                            "DecorateInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, instance, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
