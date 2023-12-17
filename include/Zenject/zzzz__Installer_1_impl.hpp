#pragma once
#include "Zenject/zzzz__InstallerBase_impl.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TDerived>
inline void Zenject::Installer_1<TDerived>::Install(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_1<TDerived>*>::get(),
                            "Install",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, container);
}
template<::il2cpp_utils::il2cpp_reference_type TDerived>
inline ::Zenject::Installer_1<TDerived>* Zenject::Installer_1<TDerived>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Installer_1<TDerived>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TDerived>
inline void Zenject::Installer_1<TDerived>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_1<TDerived>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TDerived>
inline ::Zenject::InjectTypeInfo* Zenject::Installer_1<TDerived>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Installer_1<TDerived>*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
