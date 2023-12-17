#pragma once
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.InitAndPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::GlobalNamespace::FlyingScoreEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x2398790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(float_t)>(&::GlobalNamespace::FlyingScoreEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2398cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(&::GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2398d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "HandleCutScoreBufferDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.RefreshScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(int32_t, int32_t)>(&::GlobalNamespace::FlyingScoreEffect::RefreshScore)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2398c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "RefreshScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(&::GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2398dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "HandleCutScoreBufferDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.UnregisterCallbacksIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)()>(&::GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2398dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "UnregisterCallbacksIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)()>(&::GlobalNamespace::FlyingScoreEffect::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2398efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
constexpr  GlobalNamespace::FlyingScoreEffect::operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver*() noexcept {
return static_cast<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr  GlobalNamespace::FlyingScoreEffect::operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept {
return static_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__fadeAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x80>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::FlyingScoreEffect::__get__fadeAnimationCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::FlyingScoreEffect::__get__fadeAnimationCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x80>(this);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__maxCutDistanceScoreIndicator(::UnityEngine::SpriteRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpriteRenderer*, 0x88>(this, std::forward<::UnityEngine::SpriteRenderer*>(value));
}
constexpr ::UnityEngine::SpriteRenderer* GlobalNamespace::FlyingScoreEffect::__get__maxCutDistanceScoreIndicator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> GlobalNamespace::FlyingScoreEffect::__get__maxCutDistanceScoreIndicator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer*, 0x88>(this);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__text(::TMPro::TextMeshPro*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshPro*, 0x90>(this, std::forward<::TMPro::TextMeshPro*>(value));
}
constexpr ::TMPro::TextMeshPro* GlobalNamespace::FlyingScoreEffect::__get__text()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshPro*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> GlobalNamespace::FlyingScoreEffect::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshPro*, 0x90>(this);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x98>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingScoreEffect::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x98>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingScoreEffect::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x98>(this);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__colorAMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xa8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingScoreEffect::__get__colorAMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this);
}
constexpr float_t const& GlobalNamespace::FlyingScoreEffect::__get__colorAMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__registeredToCallbacks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xac>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::FlyingScoreEffect::__get__registeredToCallbacks()  {
return ::cordl_internals::getInstanceField<bool, 0xac>(this);
}
constexpr bool const& GlobalNamespace::FlyingScoreEffect::__get__registeredToCallbacks() const {
return ::cordl_internals::getInstanceField<bool, 0xac>(this);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyCutScoreBuffer*, 0xb0>(this, std::forward<::GlobalNamespace::IReadonlyCutScoreBuffer*>(value));
}
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* GlobalNamespace::FlyingScoreEffect::__get__cutScoreBuffer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyCutScoreBuffer*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyCutScoreBuffer*> GlobalNamespace::FlyingScoreEffect::__get__cutScoreBuffer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyCutScoreBuffer*, 0xb0>(this);
}
inline void GlobalNamespace::FlyingScoreEffect::InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer*  cutScoreBuffer, float_t  duration, ::UnityEngine::Vector3  targetPos, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutScoreBuffer, duration, targetPos, color);
}
inline void GlobalNamespace::FlyingScoreEffect::ManualUpdate(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer*  cutScoreBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "HandleCutScoreBufferDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::FlyingScoreEffect::RefreshScore(int32_t  score, int32_t  maxPossibleCutScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "RefreshScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, score, maxPossibleCutScore);
}
inline void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer*  cutScoreBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "HandleCutScoreBufferDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CutScoreBuffer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            "UnregisterCallbacksIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FlyingScoreEffect* GlobalNamespace::FlyingScoreEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingScoreEffect*>());
}
inline void GlobalNamespace::FlyingScoreEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__FlyingScoreEffect__Pool.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingScoreEffect__Pool::*)(::GlobalNamespace::FlyingScoreEffect*)>(&::GlobalNamespace::__FlyingScoreEffect__Pool::OnDespawned)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2398f2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FlyingScoreEffect__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingScoreEffect__Pool::*)()>(&::GlobalNamespace::__FlyingScoreEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2398f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__FlyingScoreEffect__Pool::OnDespawned(::GlobalNamespace::FlyingScoreEffect*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingScoreEffect*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
inline ::GlobalNamespace::__FlyingScoreEffect__Pool* GlobalNamespace::__FlyingScoreEffect__Pool::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FlyingScoreEffect__Pool*>());
}
inline void GlobalNamespace::__FlyingScoreEffect__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreEffect__Pool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
