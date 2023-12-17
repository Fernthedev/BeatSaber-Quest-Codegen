#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MethodProviderSimple_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
/// @brief Convert operator to "::Zenject::IProvider"
template<::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr  Zenject::MethodProviderSimple_1<TReturn>::operator ::Zenject::IProvider*() noexcept {
return static_cast<::Zenject::IProvider*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr void Zenject::MethodProviderSimple_1<TReturn>::__set__method(::System::Func_1<TReturn>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<TReturn>*, 0x10>(this, std::forward<::System::Func_1<TReturn>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::System::Func_1<TReturn>* Zenject::MethodProviderSimple_1<TReturn>::__get__method()  {
return ::cordl_internals::getInstanceField<::System::Func_1<TReturn>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TReturn>*> Zenject::MethodProviderSimple_1<TReturn>::__get__method() const {
return ::cordl_internals::getInstanceField<::System::Func_1<TReturn>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
inline ::Zenject::MethodProviderSimple_1<TReturn>* Zenject::MethodProviderSimple_1<TReturn>::New_ctor(::System::Func_1<TReturn>*  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::MethodProviderSimple_1<TReturn>*>(method));
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
inline void Zenject::MethodProviderSimple_1<TReturn>::_ctor(::System::Func_1<TReturn>*  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderSimple_1<TReturn>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<TReturn>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, method);
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
inline bool Zenject::MethodProviderSimple_1<TReturn>::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderSimple_1<TReturn>*>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
inline bool Zenject::MethodProviderSimple_1<TReturn>::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderSimple_1<TReturn>*>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
inline ::System::Type* Zenject::MethodProviderSimple_1<TReturn>::GetInstanceType(::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderSimple_1<TReturn>*>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method, context);
}
template<::il2cpp_utils::il2cpp_reference_type TReturn>
inline void Zenject::MethodProviderSimple_1<TReturn>::GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MethodProviderSimple_1<TReturn>*>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context, args, injectAction, buffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
