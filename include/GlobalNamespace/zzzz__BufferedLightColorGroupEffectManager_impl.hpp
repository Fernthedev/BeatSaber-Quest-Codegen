#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23a7e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23a8004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a8060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__lightGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__lightGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__materialPropertyBlockControllers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__materialPropertyBlockControllers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x28>(this, std::forward<::Zenject::DiContainer*>(value));
}
constexpr ::Zenject::DiContainer* GlobalNamespace::BufferedLightColorGroupEffectManager::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> GlobalNamespace::BufferedLightColorGroupEffectManager::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x28>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__bufferedLightColorGroupEffects(::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__bufferedLightColorGroupEffects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>, 0x30>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__bufferedLightColorGroupEffects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*,::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>, 0x30>(this);
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BufferedLightColorGroupEffectManager* GlobalNamespace::BufferedLightColorGroupEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BufferedLightColorGroupEffectManager*>());
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
