#pragma once
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorByMethod_3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3>
constexpr void Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>::__set__installMethod(::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*  value)  {
::cordl_internals::setInstanceField<::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*, 0x20>(this, std::forward<::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3>
constexpr ::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>* Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>::__get__installMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3>
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*> Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>::__get__installMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3>
inline ::Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>* Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>::New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*  installMethod)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>*>(container, containerBindInfo, installMethod));
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3>
inline void Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>::_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*  installMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::Zenject::DiContainer*,TParam1,TParam2,TParam3>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container, containerBindInfo, installMethod);
}
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3>
inline ::Zenject::DiContainer* Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethod_3<TParam1,TParam2,TParam3>*>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(*this, ___internal_method, args, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
