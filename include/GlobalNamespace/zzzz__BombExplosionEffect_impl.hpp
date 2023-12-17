#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)()>(&::GlobalNamespace::BombExplosionEffect::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2396730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.SpawnExplosion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BombExplosionEffect::SpawnExplosion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x239675c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(),
                            "SpawnExplosion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)()>(&::GlobalNamespace::BombExplosionEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2396818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BombExplosionEffect::__set__debrisPS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::BombExplosionEffect::__get__debrisPS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::BombExplosionEffect::__get__debrisPS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__explosionPS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x20>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::BombExplosionEffect::__get__explosionPS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::BombExplosionEffect::__get__explosionPS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x20>(this);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__debrisCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BombExplosionEffect::__get__debrisCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::BombExplosionEffect::__get__debrisCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__explosionParticlesCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BombExplosionEffect::__get__explosionParticlesCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::BombExplosionEffect::__get__explosionParticlesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__emitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x30>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::BombExplosionEffect::__get__emitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x30>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::BombExplosionEffect::__get__emitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x30>(this);
}
constexpr void GlobalNamespace::BombExplosionEffect::__set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0xc0>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::BombExplosionEffect::__get__explosionPSEmitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0xc0>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::BombExplosionEffect::__get__explosionPSEmitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0xc0>(this);
}
inline void GlobalNamespace::BombExplosionEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BombExplosionEffect::SpawnExplosion(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(),
                            "SpawnExplosion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline ::GlobalNamespace::BombExplosionEffect* GlobalNamespace::BombExplosionEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BombExplosionEffect*>());
}
inline void GlobalNamespace::BombExplosionEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
