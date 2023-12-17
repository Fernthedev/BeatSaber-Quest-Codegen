#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__GetterProvider_2_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  Zenject::GetterProvider_2<TObj,TResult>::operator ::Zenject::IProvider*() noexcept {
return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x10>(this, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::Zenject::DiContainer* Zenject::GetterProvider_2<TObj,TResult>::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> Zenject::GetterProvider_2<TObj,TResult>::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__identifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Object* Zenject::GetterProvider_2<TObj,TResult>::__get__identifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::GetterProvider_2<TObj,TResult>::__get__identifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__method(::System::Func_2<TObj,TResult>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TObj,TResult>*, 0x20>(this, std::forward<::System::Func_2<TObj,TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Func_2<TObj,TResult>* Zenject::GetterProvider_2<TObj,TResult>::__get__method()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TObj,TResult>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj,TResult>*> Zenject::GetterProvider_2<TObj,TResult>::__get__method() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TObj,TResult>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__matchAll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool& Zenject::GetterProvider_2<TObj,TResult>::__get__matchAll()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr bool const& Zenject::GetterProvider_2<TObj,TResult>::__get__matchAll() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void Zenject::GetterProvider_2<TObj,TResult>::__set__sourceType(::Zenject::InjectSources  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectSources, 0x2c>(this, std::forward<::Zenject::InjectSources>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::Zenject::InjectSources& Zenject::GetterProvider_2<TObj,TResult>::__get__sourceType()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x2c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::Zenject::InjectSources const& Zenject::GetterProvider_2<TObj,TResult>::__get__sourceType() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x2c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::Zenject::GetterProvider_2<TObj,TResult>* Zenject::GetterProvider_2<TObj,TResult>::New_ctor(::System::Object*  identifier, ::System::Func_2<TObj,TResult>*  method, ::Zenject::DiContainer*  container, ::Zenject::InjectSources  sourceType, bool  matchAll)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::GetterProvider_2<TObj,TResult>*>(identifier, method, container, sourceType, matchAll));
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline void Zenject::GetterProvider_2<TObj,TResult>::_ctor(::System::Object*  identifier, ::System::Func_2<TObj,TResult>*  method, ::Zenject::DiContainer*  container, ::Zenject::InjectSources  sourceType, bool  matchAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj,TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObj,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, identifier, method, container, sourceType, matchAll);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline bool Zenject::GetterProvider_2<TObj,TResult>::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj,TResult>*>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline bool Zenject::GetterProvider_2<TObj,TResult>::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj,TResult>*>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::Type* Zenject::GetterProvider_2<TObj,TResult>::GetInstanceType(::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj,TResult>*>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method, context);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::Zenject::InjectContext* Zenject::GetterProvider_2<TObj,TResult>::GetSubContext(::Zenject::InjectContext*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj,TResult>*>::get(),
                            "GetSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectContext*, false>(*this, ___internal_method, parent);
}
template<::il2cpp_utils::il2cpp_reference_type TObj,::il2cpp_utils::il2cpp_reference_type TResult>
inline void Zenject::GetterProvider_2<TObj,TResult>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::GetterProvider_2<TObj,TResult>*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, args, injectAction, buffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
