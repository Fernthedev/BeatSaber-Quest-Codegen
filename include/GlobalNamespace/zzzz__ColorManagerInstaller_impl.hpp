#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ColorManagerInstaller_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorManagerInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorManagerInstaller::*)()>(&::GlobalNamespace::ColorManagerInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x226f59c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManagerInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManagerInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorManagerInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorManagerInstaller::*)()>(&::GlobalNamespace::ColorManagerInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManagerInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ColorManagerInstaller::__set__menuColorScheme(::GlobalNamespace::ColorSchemeSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSchemeSO*, 0x20>(this, std::forward<::GlobalNamespace::ColorSchemeSO*>(value));
}
constexpr ::GlobalNamespace::ColorSchemeSO* GlobalNamespace::ColorManagerInstaller::__get__menuColorScheme()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSchemeSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> GlobalNamespace::ColorManagerInstaller::__get__menuColorScheme() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSchemeSO*, 0x20>(this);
}
inline void GlobalNamespace::ColorManagerInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManagerInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ColorManagerInstaller* GlobalNamespace::ColorManagerInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ColorManagerInstaller*>());
}
inline void GlobalNamespace::ColorManagerInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorManagerInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
