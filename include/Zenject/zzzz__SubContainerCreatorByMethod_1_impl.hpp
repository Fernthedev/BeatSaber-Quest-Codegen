#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_1_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
constexpr void Zenject::SubContainerCreatorByMethod_1<TParam1>::__set__installMethod(::System::Action_2<::Zenject::DiContainer*,TParam1>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::Zenject::DiContainer*,TParam1>*, 0x20>(this, std::forward<::System::Action_2<::Zenject::DiContainer*,TParam1>*>(value));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
constexpr ::System::Action_2<::Zenject::DiContainer*,TParam1>* Zenject::SubContainerCreatorByMethod_1<TParam1>::__get__installMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::Zenject::DiContainer*,TParam1>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::DiContainer*,TParam1>*> Zenject::SubContainerCreatorByMethod_1<TParam1>::__get__installMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::Zenject::DiContainer*,TParam1>*, 0x20>(this);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
inline ::Zenject::SubContainerCreatorByMethod_1<TParam1>* Zenject::SubContainerCreatorByMethod_1<TParam1>::New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>(container, containerBindInfo, installMethod));
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
inline void Zenject::SubContainerCreatorByMethod_1<TParam1>::_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::DiContainer*,TParam1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, containerBindInfo, installMethod);
}
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByMethod_1<TParam1>::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method, args, context);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1>
constexpr void Zenject::SubContainerCreatorByMethod_1<TParam1>::__set__installMethod(::System::Action_2<::Zenject::DiContainer*,TParam1>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::Zenject::DiContainer*,TParam1>*, 0x20>(this, std::forward<::System::Action_2<::Zenject::DiContainer*,TParam1>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1>
constexpr ::System::Action_2<::Zenject::DiContainer*,TParam1>* Zenject::SubContainerCreatorByMethod_1<TParam1>::__get__installMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::Zenject::DiContainer*,TParam1>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::DiContainer*,TParam1>*> Zenject::SubContainerCreatorByMethod_1<TParam1>::__get__installMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::Zenject::DiContainer*,TParam1>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1>
inline ::Zenject::SubContainerCreatorByMethod_1<TParam1>* Zenject::SubContainerCreatorByMethod_1<TParam1>::New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>(container, containerBindInfo, installMethod));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1>
inline void Zenject::SubContainerCreatorByMethod_1<TParam1>::_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::Zenject::DiContainer*,TParam1>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, containerBindInfo, installMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1>
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByMethod_1<TParam1>::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_1<TParam1>*>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method, args, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
