#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::*)()>(&::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23975e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__particleSystem(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x10>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleSystem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x10>(this);
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__isSubemitter(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__isSubemitter()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__isSubemitter() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__useMainColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useMainColor()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useMainColor() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__useOwnGradient(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useOwnGradient()  {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__useOwnGradient() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__particleColorGradient(::UnityEngine::Gradient*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Gradient*, 0x20>(this, std::forward<::UnityEngine::Gradient*>(value));
}
constexpr ::UnityEngine::Gradient* GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleColorGradient()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__particleColorGradient() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient*, 0x20>(this);
}
constexpr void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__set__randomizeSpeed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__randomizeSpeed()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::__get__randomizeSpeed() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem* GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>());
}
inline void GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.set_directionalLight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::GlobalNamespace::DirectionalLight*)>(&::GlobalNamespace::FireworkItemController::set_directionalLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2396ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "set_directionalLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DirectionalLight*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.set_directionalLightIntensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(float_t)>(&::GlobalNamespace::FireworkItemController::set_directionalLightIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2396de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "set_directionalLightIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)>(&::GlobalNamespace::FireworkItemController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2396dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(::System::Action_1<::GlobalNamespace::FireworkItemController*>*)>(&::GlobalNamespace::FireworkItemController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2396e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2396f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2396fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.Fire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::Fire)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2397128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.FireCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::FireCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2397148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "FireCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.SetLightsColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)(float_t)>(&::GlobalNamespace::FireworkItemController::SetLightsColor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2397028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "SetLightsColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.PlayExplosionSound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::PlayExplosionSound)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23971d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "PlayExplosionSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController.InitializeParticleSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::InitializeParticleSystem)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x23972b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "InitializeParticleSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworkItemController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FireworkItemController::*)()>(&::GlobalNamespace::FireworkItemController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23975c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FireworkItemController::__set__particleSystems(::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>& GlobalNamespace::FireworkItemController::__get__particleSystems()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*> const& GlobalNamespace::FireworkItemController::__get__particleSystems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*,::Array<::GlobalNamespace::__FireworkItemController__FireworkItemParticleSystem*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::FireworkItemController::__get__lights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::FireworkItemController::__get__lights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x28>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::FireworkItemController::__get__audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::FireworkItemController::__get__audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x28>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightFlashDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__lightFlashDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__lightFlashDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightIntensityCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::FireworkItemController::__get__lightIntensityCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::FireworkItemController::__get__lightIntensityCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightIntensityMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__lightIntensityMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__lightIntensityMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomizeColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FireworkItemController::__get__randomizeColor()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& GlobalNamespace::FireworkItemController::__get__randomizeColor() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightsColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x48>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::FireworkItemController::__get__lightsColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FireworkItemController::__get__lightsColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x48>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__lightsColorGradient(::UnityEngine::Gradient*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Gradient*, 0x58>(this, std::forward<::UnityEngine::Gradient*>(value));
}
constexpr ::UnityEngine::Gradient* GlobalNamespace::FireworkItemController::__get__lightsColorGradient()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> GlobalNamespace::FireworkItemController::__get__lightsColorGradient() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient*, 0x58>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomizeSpeed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FireworkItemController::__get__randomizeSpeed()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& GlobalNamespace::FireworkItemController::__get__randomizeSpeed() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__minSpeedMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__minSpeedMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__minSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__maxSpeedMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__maxSpeedMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__maxSpeedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__explosionClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x70>(this, std::forward<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::FireworkItemController::__get__explosionClips()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x70>(this);
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::FireworkItemController::__get__explosionClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x70>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__randomAudioPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x78>(this, std::forward<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*>(value));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* GlobalNamespace::FireworkItemController::__get__randomAudioPicker()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> GlobalNamespace::FireworkItemController::__get__randomAudioPicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x78>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__directionalLight(::GlobalNamespace::DirectionalLight*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DirectionalLight*, 0x80>(this, std::forward<::GlobalNamespace::DirectionalLight*>(value));
}
constexpr ::GlobalNamespace::DirectionalLight* GlobalNamespace::FireworkItemController::__get__directionalLight()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DirectionalLight*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> GlobalNamespace::FireworkItemController::__get__directionalLight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DirectionalLight*, 0x80>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__directionalLightIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FireworkItemController::__get__directionalLightIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& GlobalNamespace::FireworkItemController::__get__directionalLightIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FireworkItemController::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr bool const& GlobalNamespace::FireworkItemController::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr void GlobalNamespace::FireworkItemController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::FireworkItemController*>*, 0x90>(this, std::forward<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::FireworkItemController*>* GlobalNamespace::FireworkItemController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::FireworkItemController*>*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::FireworkItemController*>*> GlobalNamespace::FireworkItemController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::FireworkItemController*>*, 0x90>(this);
}
inline void GlobalNamespace::FireworkItemController::set_directionalLight(::GlobalNamespace::DirectionalLight*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "set_directionalLight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DirectionalLight*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::set_directionalLightIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "set_directionalLightIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::FireworkItemController*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::FireworkItemController*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::FireworkItemController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::Fire()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "Fire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FireworkItemController::FireCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "FireCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::SetLightsColor(float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "SetLightsColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, intensity);
}
inline void GlobalNamespace::FireworkItemController::PlayExplosionSound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "PlayExplosionSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FireworkItemController::InitializeParticleSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            "InitializeParticleSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FireworkItemController* GlobalNamespace::FireworkItemController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FireworkItemController*>());
}
inline void GlobalNamespace::FireworkItemController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FireworkItemController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController__Pool::*)()>(&::GlobalNamespace::__FireworkItemController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23975f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__FireworkItemController__Pool* GlobalNamespace::__FireworkItemController__Pool::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FireworkItemController__Pool*>());
}
inline void GlobalNamespace::__FireworkItemController__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)(int32_t)>(&::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23971b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(&::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2397640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(&::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2397644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(&::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2397874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(&::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x239787c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::*)()>(&::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23978bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set___4__this(::GlobalNamespace::FireworkItemController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FireworkItemController*, 0x20>(this, std::forward<::GlobalNamespace::FireworkItemController*>(value));
}
constexpr ::GlobalNamespace::FireworkItemController* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FireworkItemController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FireworkItemController*, 0x20>(this);
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set__soundTimeToCenter_5__2(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__soundTimeToCenter_5__2()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__soundTimeToCenter_5__2() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set__elapsedTime_5__3(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__elapsedTime_5__3()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__elapsedTime_5__3() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__set__explosionSoundFired_5__4(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__explosionSoundFired_5__4()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::__get__explosionSoundFired_5__4() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
inline ::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>(__1__state));
}
inline void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__FireworkItemController___FireCoroutine_d__29::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FireworkItemController___FireCoroutine_d__29*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
