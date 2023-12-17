#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardGameplayInstaller_def.hpp"
#include "GlobalNamespace/zzzz__StandardGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardGameplayInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardGameplayInstaller::*)()>(&::GlobalNamespace::StandardGameplayInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x22731f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardGameplayInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardGameplayInstaller::*)()>(&::GlobalNamespace::StandardGameplayInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2273564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardGameplayInstaller::__set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardGameplaySceneSetupData*, 0x20>(this, std::forward<::GlobalNamespace::StandardGameplaySceneSetupData*>(value));
}
constexpr ::GlobalNamespace::StandardGameplaySceneSetupData* GlobalNamespace::StandardGameplayInstaller::__get__standardSceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardGameplaySceneSetupData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> GlobalNamespace::StandardGameplayInstaller::__get__standardSceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardGameplaySceneSetupData*, 0x20>(this);
}
inline void GlobalNamespace::StandardGameplayInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::StandardGameplayInstaller* GlobalNamespace::StandardGameplayInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardGameplayInstaller*>());
}
inline void GlobalNamespace::StandardGameplayInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardGameplayInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
