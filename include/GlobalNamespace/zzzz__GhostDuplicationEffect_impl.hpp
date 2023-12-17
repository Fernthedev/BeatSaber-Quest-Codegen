#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__GhostDuplicationEffect_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_startAlpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_startAlpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_startAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_startPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_startPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_startPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_startSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_startSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_startSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_endAlpha(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_endAlpha()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_endAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_endPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_endPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_endPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_endSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_endSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_endSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_delay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_delay()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_easeType(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_easeType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_easeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_distanceCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_distanceCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_distanceCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_peakDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_peakDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_peakDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__set_lastPhase(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_lastPhase()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__get_lastPhase() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "startAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "startSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "endSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: Some("{}") }, CppParam { name: "distanceCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "peakDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastPhase", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams::__GhostDuplicationEffect__GhostEffectParams(float_t  startAlpha, ::UnityEngine::Vector3  startPosition, float_t  startSize, float_t  endAlpha, ::UnityEngine::Vector3  endPosition, float_t  endSize, float_t  duration, float_t  delay, ::GlobalNamespace::EaseType  easeType, ::UnityEngine::AnimationCurve*  distanceCurve, float_t  peakDistance, bool  lastPhase) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->startAlpha = startAlpha;
this->startPosition = startPosition;
this->startSize = startSize;
this->endAlpha = endAlpha;
this->endPosition = endPosition;
this->endSize = endSize;
this->duration = duration;
this->delay = delay;
this->easeType = easeType;
this->distanceCurve = distanceCurve;
this->peakDistance = peakDistance;
this->lastPhase = lastPhase;
}
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)()>(&::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239980c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(float_t)>(&::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2399ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(float_t)>(&::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2399af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2399b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0._Animate_b__3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::*)(float_t)>(&::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__3)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2399b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__set___4__this(::GlobalNamespace::GhostDuplicationEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GhostDuplicationEffect*, 0x10>(this, std::forward<::GlobalNamespace::GhostDuplicationEffect*>(value));
}
constexpr ::GlobalNamespace::GhostDuplicationEffect* GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GhostDuplicationEffect*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostDuplicationEffect*> GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GhostDuplicationEffect*, 0x10>(this);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__set_ghostEffectParams(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, 0x18>(this, std::forward<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams>(value));
}
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__get_ghostEffectParams()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, 0x18>(this);
}
constexpr ::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams const& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__get_ghostEffectParams() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams, 0x18>(this);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__set_direction(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x60>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__get_direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::__get_direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this);
}
inline ::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0* GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__0(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__1(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__2(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline void GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0::_Animate_b__3(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect____c__DisplayClass7_0*>::get(),
                            "<Animate>b__3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)(int32_t)>(&::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x239988c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(&::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2399bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(&::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2399bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(&::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2399cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(&::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2399cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::*)()>(&::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2399cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__set_delay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get_delay()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get_delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__set___4__this(::GlobalNamespace::GhostDuplicationEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GhostDuplicationEffect*, 0x28>(this, std::forward<::GlobalNamespace::GhostDuplicationEffect*>(value));
}
constexpr ::GlobalNamespace::GhostDuplicationEffect* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GhostDuplicationEffect*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GhostDuplicationEffect*> GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GhostDuplicationEffect*, 0x28>(this);
}
inline ::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>(__1__state));
}
inline void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GhostDuplicationEffect___HideRedundantWithDelay_d__8*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23992b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x239933c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x239934c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.Animate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams)>(&::GlobalNamespace::GhostDuplicationEffect::Animate)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2399458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "Animate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.HideRedundantWithDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GhostDuplicationEffect::*)(float_t)>(&::GlobalNamespace::GhostDuplicationEffect::HideRedundantWithDelay)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2399814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "HideRedundantWithDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.SetDistances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::GhostDuplicationEffect::SetDistances)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23998b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "SetDistances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.set_hide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(bool)>(&::GlobalNamespace::GhostDuplicationEffect::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23999a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "set_hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.set_size
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(float_t)>(&::GlobalNamespace::GhostDuplicationEffect::set_size)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23999cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "set_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.get_size
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::get_size)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2399a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "get_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)(float_t)>(&::GlobalNamespace::GhostDuplicationEffect::set_alpha)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23993d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect.get_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::get_alpha)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2399a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "get_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostDuplicationEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GhostDuplicationEffect::*)()>(&::GlobalNamespace::GhostDuplicationEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2399ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GhostDuplicationEffect::__set__canvases(::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>& GlobalNamespace::GhostDuplicationEffect::__get__canvases()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*> const& GlobalNamespace::GhostDuplicationEffect::__get__canvases() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::GhostDuplicationEffect::__set_isInitialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GhostDuplicationEffect::__get_isInitialized()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::GhostDuplicationEffect::__get_isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void GlobalNamespace::GhostDuplicationEffect::__set__tweeningManager(::Tweening::TimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager*, 0x28>(this, std::forward<::Tweening::TimeTweeningManager*>(value));
}
constexpr ::Tweening::TimeTweeningManager* GlobalNamespace::GhostDuplicationEffect::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> GlobalNamespace::GhostDuplicationEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0x28>(this);
}
inline void GlobalNamespace::GhostDuplicationEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::Animate(::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams  ghostEffectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "Animate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GhostDuplicationEffect__GhostEffectParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ghostEffectParams);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GhostDuplicationEffect::HideRedundantWithDelay(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "HideRedundantWithDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, delay);
}
inline void GlobalNamespace::GhostDuplicationEffect::SetDistances(float_t  distance, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "SetDistances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, distance, direction);
}
inline void GlobalNamespace::GhostDuplicationEffect::set_hide(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "set_hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::GhostDuplicationEffect::set_size(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "set_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::GhostDuplicationEffect::get_size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "get_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GhostDuplicationEffect::set_alpha(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::GhostDuplicationEffect::get_alpha()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            "get_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::GhostDuplicationEffect* GlobalNamespace::GhostDuplicationEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GhostDuplicationEffect*>());
}
inline void GlobalNamespace::GhostDuplicationEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GhostDuplicationEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
