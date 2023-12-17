#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEmitEventEffectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(&::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23b0214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::*)()>(&::GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b02bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__set__particleSystemEventControllerPrefab(::GlobalNamespace::ParticleSystemEventController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ParticleSystemEventController*, 0x20>(this, std::forward<::GlobalNamespace::ParticleSystemEventController*>(value));
}
constexpr ::GlobalNamespace::ParticleSystemEventController* GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ParticleSystemEventController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParticleSystemEventController*> GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ParticleSystemEventController*, 0x20>(this);
}
constexpr void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__set__particleSystemEventControllerInitialSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerInitialSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::ParticleSystemEmitEventEffectInstaller::__get__particleSystemEventControllerInitialSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* GlobalNamespace::ParticleSystemEmitEventEffectInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>());
}
inline void GlobalNamespace::ParticleSystemEmitEventEffectInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
