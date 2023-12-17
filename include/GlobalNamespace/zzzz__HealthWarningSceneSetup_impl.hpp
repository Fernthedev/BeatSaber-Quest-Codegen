#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetup::*)()>(&::GlobalNamespace::HealthWarningSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2319d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetup::*)()>(&::GlobalNamespace::HealthWarningSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2319e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HealthWarningSceneSetup::__set__sceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HealthWarningSceneSetupData*, 0x20>(this, std::forward<::GlobalNamespace::HealthWarningSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::HealthWarningSceneSetupData* GlobalNamespace::HealthWarningSceneSetup::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningSceneSetupData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningSceneSetupData*> GlobalNamespace::HealthWarningSceneSetup::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningSceneSetupData*, 0x20>(this);
}
inline void GlobalNamespace::HealthWarningSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningSceneSetup* GlobalNamespace::HealthWarningSceneSetup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningSceneSetup*>());
}
inline void GlobalNamespace::HealthWarningSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
