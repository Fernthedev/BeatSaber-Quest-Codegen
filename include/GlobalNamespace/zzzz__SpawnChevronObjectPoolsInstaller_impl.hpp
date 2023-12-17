#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnChevronObjectPoolsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(&::GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23b55c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnChevronObjectPoolsInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnChevronObjectPoolsInstaller::*)()>(&::GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b5648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SpawnChevronObjectPoolsInstaller::__set__spawnRotationChevronPrefab(::GlobalNamespace::SpawnRotationChevron*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SpawnRotationChevron*, 0x20>(this, std::forward<::GlobalNamespace::SpawnRotationChevron*>(value));
}
constexpr ::GlobalNamespace::SpawnRotationChevron* GlobalNamespace::SpawnChevronObjectPoolsInstaller::__get__spawnRotationChevronPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SpawnRotationChevron*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SpawnRotationChevron*> GlobalNamespace::SpawnChevronObjectPoolsInstaller::__get__spawnRotationChevronPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SpawnRotationChevron*, 0x20>(this);
}
inline void GlobalNamespace::SpawnChevronObjectPoolsInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SpawnChevronObjectPoolsInstaller* GlobalNamespace::SpawnChevronObjectPoolsInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>());
}
inline void GlobalNamespace::SpawnChevronObjectPoolsInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnChevronObjectPoolsInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
