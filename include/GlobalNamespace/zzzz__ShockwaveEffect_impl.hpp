#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ShockwaveEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShockwaveEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShockwaveEffect::*)()>(&::GlobalNamespace::ShockwaveEffect::Start)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a0adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShockwaveEffect.SpawnShockwave
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShockwaveEffect::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ShockwaveEffect::SpawnShockwave)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23a0bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(),
                            "SpawnShockwave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShockwaveEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShockwaveEffect::*)()>(&::GlobalNamespace::ShockwaveEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a0ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ShockwaveEffect::__set__shockwavePS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::ShockwaveEffect::__get__shockwavePS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::ShockwaveEffect::__get__shockwavePS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__maxShockwaveParticles(::GlobalNamespace::IntSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO*, 0x20>(this, std::forward<::GlobalNamespace::IntSO*>(value));
}
constexpr ::GlobalNamespace::IntSO* GlobalNamespace::ShockwaveEffect::__get__maxShockwaveParticles()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> GlobalNamespace::ShockwaveEffect::__get__maxShockwaveParticles() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO*, 0x20>(this);
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x28>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::ShockwaveEffect::__get__shockwavePSEmitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x28>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::ShockwaveEffect::__get__shockwavePSEmitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x28>(this);
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__prevShockwaveParticleSpawnTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ShockwaveEffect::__get__prevShockwaveParticleSpawnTime()  {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr float_t const& GlobalNamespace::ShockwaveEffect::__get__prevShockwaveParticleSpawnTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
inline void GlobalNamespace::ShockwaveEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ShockwaveEffect::SpawnShockwave(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(),
                            "SpawnShockwave",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline ::GlobalNamespace::ShockwaveEffect* GlobalNamespace::ShockwaveEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ShockwaveEffect*>());
}
inline void GlobalNamespace::ShockwaveEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
