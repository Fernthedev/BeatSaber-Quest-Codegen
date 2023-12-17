#pragma once
#include "Zenject/zzzz__NoTransitionInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstaller_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelNoTransitionInstallerData_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelNoTransitionInstaller.get_standardLevelNoTransitionInstallerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelNoTransitionInstallerData* (::GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231b74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                            "get_standardLevelNoTransitionInstallerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelNoTransitionInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(&::GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x231b754;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelNoTransitionInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelNoTransitionInstaller::*)()>(&::GlobalNamespace::StandardLevelNoTransitionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231bf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelNoTransitionInstaller::__set__scenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::StandardLevelNoTransitionInstaller::__get__scenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> GlobalNamespace::StandardLevelNoTransitionInstaller::__get__scenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr void GlobalNamespace::StandardLevelNoTransitionInstaller::__set__standardLevelNoTransitionInstallerData(::GlobalNamespace::StandardLevelNoTransitionInstallerData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StandardLevelNoTransitionInstallerData*, 0x20>(this, std::forward<::GlobalNamespace::StandardLevelNoTransitionInstallerData*>(value));
}
constexpr ::GlobalNamespace::StandardLevelNoTransitionInstallerData* GlobalNamespace::StandardLevelNoTransitionInstaller::__get__standardLevelNoTransitionInstallerData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelNoTransitionInstallerData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelNoTransitionInstallerData*> GlobalNamespace::StandardLevelNoTransitionInstaller::__get__standardLevelNoTransitionInstallerData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StandardLevelNoTransitionInstallerData*, 0x20>(this);
}
inline ::GlobalNamespace::StandardLevelNoTransitionInstallerData* GlobalNamespace::StandardLevelNoTransitionInstaller::get_standardLevelNoTransitionInstallerData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                            "get_standardLevelNoTransitionInstallerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardLevelNoTransitionInstallerData*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelNoTransitionInstaller::InstallBindings(::Zenject::DiContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, container);
}
inline ::GlobalNamespace::StandardLevelNoTransitionInstaller* GlobalNamespace::StandardLevelNoTransitionInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelNoTransitionInstaller*>());
}
inline void GlobalNamespace::StandardLevelNoTransitionInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelNoTransitionInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
