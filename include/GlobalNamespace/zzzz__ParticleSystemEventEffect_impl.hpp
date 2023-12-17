#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::Start)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23b0324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b08bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23b08d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23b09a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect.RefreshParticles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::RefreshParticles)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x23b04fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "RefreshParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemEventEffect::*)()>(&::GlobalNamespace::ParticleSystemEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23b0b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightColor0(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::ParticleSystemEventEffect::__get__lightColor0()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::ParticleSystemEventEffect::__get__lightColor0() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightColor1(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::ParticleSystemEventEffect::__get__lightColor1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::ParticleSystemEventEffect::__get__lightColor1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x20>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor0(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x28>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor0()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor0() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x28>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor1(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x30>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor1()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor1() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x30>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightOnStart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ParticleSystemEventEffect::__get__lightOnStart()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::ParticleSystemEventEffect::__get__lightOnStart() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__colorEvent(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x3c>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::ParticleSystemEventEffect::__get__colorEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x3c>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::ParticleSystemEventEffect::__get__colorEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x3c>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particleSystem(::UnityEngine::ParticleSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ParticleSystem*, 0x40>(this, std::forward<::UnityEngine::ParticleSystem*>(value));
}
constexpr ::UnityEngine::ParticleSystem* GlobalNamespace::ParticleSystemEventEffect::__get__particleSystem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> GlobalNamespace::ParticleSystemEventEffect::__get__particleSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ParticleSystem*, 0x40>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x48>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::ParticleSystemEventEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::ParticleSystemEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x48>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__lightIsOn(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::ParticleSystemEventEffect::__get__lightIsOn()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::ParticleSystemEventEffect::__get__lightIsOn() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__offColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x54>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__offColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__offColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ParticleSystemEventEffect::__get__highlightValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::ParticleSystemEventEffect::__get__highlightValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__afterHighlightColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x68>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__afterHighlightColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__afterHighlightColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x68>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__highlightColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__highlightColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set_kFadeSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ParticleSystemEventEffect::__get_kFadeSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& GlobalNamespace::ParticleSystemEventEffect::__get_kFadeSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__mainModule(::UnityEngine::__ParticleSystem__MainModule  value)  {
::cordl_internals::setInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0x90>(this, std::forward<::UnityEngine::__ParticleSystem__MainModule>(value));
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::ParticleSystemEventEffect::__get__mainModule()  {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0x90>(this);
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::ParticleSystemEventEffect::__get__mainModule() const {
return ::cordl_internals::getInstanceField<::UnityEngine::__ParticleSystem__MainModule, 0x90>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>, 0x98>(this, std::forward<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>& GlobalNamespace::ParticleSystemEventEffect::__get__particles()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>, 0x98>(this);
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*> const& GlobalNamespace::ParticleSystemEventEffect::__get__particles() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>, 0x98>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__particleColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xa0>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::ParticleSystemEventEffect::__get__particleColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa0>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ParticleSystemEventEffect::__get__particleColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa0>(this);
}
constexpr void GlobalNamespace::ParticleSystemEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0xb0>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::ParticleSystemEventEffect::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::ParticleSystemEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0xb0>(this);
}
inline void GlobalNamespace::ParticleSystemEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEventEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::ParticleSystemEventEffect::RefreshParticles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            "RefreshParticles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemEventEffect* GlobalNamespace::ParticleSystemEventEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ParticleSystemEventEffect*>());
}
inline void GlobalNamespace::ParticleSystemEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
