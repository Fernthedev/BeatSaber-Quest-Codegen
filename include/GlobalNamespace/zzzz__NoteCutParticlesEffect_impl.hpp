#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)()>(&::GlobalNamespace::NoteCutParticlesEffect::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x239a95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect.SpawnParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Color32, int32_t, int32_t, float_t)>(&::GlobalNamespace::NoteCutParticlesEffect::SpawnParticles)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x239aaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(),
                            "SpawnParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)()>(&::GlobalNamespace::NoteCutParticlesEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239af54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x18>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x20>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::NoteCutParticlesEffect::__get__explosionPS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::NoteCutParticlesEffect::__get__explosionPS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x20>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x28>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x28>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPrePassBloomPS(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x30>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPS()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPS() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x30>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x38>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSEmitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x38>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSEmitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x38>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSMainModule(::UnityEngine::__ParticleSystem__MainModule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0xc8>(this, std::forward<::UnityEngine::__ParticleSystem__MainModule>(value));
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSMainModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0xc8>(this);
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSMainModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0xc8>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0xd0>(this, std::forward<::UnityEngine::__ParticleSystem__ShapeModule>(value));
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSShapeModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0xd0>(this);
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSShapeModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0xd0>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesLifetimeMinMaxCurve(::UnityEngine::__ParticleSystem__MinMaxCurve  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__MinMaxCurve, 0xd8>(this, std::forward<::UnityEngine::__ParticleSystem__MinMaxCurve>(value));
}
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesLifetimeMinMaxCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MinMaxCurve, 0xd8>(this);
}
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesLifetimeMinMaxCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MinMaxCurve, 0xd8>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0xf8>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPSEmitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0xf8>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPSEmitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0xf8>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x188>(this, std::forward<::UnityEngine::__ParticleSystem__EmitParams>(value));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSEmitParams()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x188>(this);
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSEmitParams() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__EmitParams, 0x188>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSMainModule(::UnityEngine::__ParticleSystem__MainModule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0x218>(this, std::forward<::UnityEngine::__ParticleSystem__MainModule>(value));
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSMainModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0x218>(this);
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSMainModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0x218>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0x220>(this, std::forward<::UnityEngine::__ParticleSystem__ShapeModule>(value));
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSShapeModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0x220>(this);
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSShapeModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0x220>(this);
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPrePassBloomPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0x228>(this, std::forward<::UnityEngine::__ParticleSystem__ShapeModule>(value));
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPSShapeModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0x228>(this);
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPSShapeModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__ShapeModule, 0x228>(this);
}
inline void GlobalNamespace::NoteCutParticlesEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutParticlesEffect::SpawnParticles(::UnityEngine::Vector3  cutPoint, ::UnityEngine::Vector3  cutNormal, ::UnityEngine::Vector3  saberDir, float_t  saberSpeed, ::UnityEngine::Vector3  noteMovementVec, ::UnityEngine::Color32  color, int32_t  sparkleParticlesCount, int32_t  explosionParticlesCount, float_t  lifetimeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(),
                            "SpawnParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutPoint, cutNormal, saberDir, saberSpeed, noteMovementVec, color, sparkleParticlesCount, explosionParticlesCount, lifetimeMultiplier);
}
inline ::GlobalNamespace::NoteCutParticlesEffect* GlobalNamespace::NoteCutParticlesEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutParticlesEffect*>());
}
inline void GlobalNamespace::NoteCutParticlesEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
