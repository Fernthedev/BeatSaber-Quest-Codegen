#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidancePathEvaluator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)(::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::PlayerTransforms*, ::GlobalNamespace::BezierSplineEvaluator*, float_t, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2217174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator.GetCurrentPathPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)()>(&::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22171ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(),
                            "GetCurrentPathPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__jumpStartZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpStartZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpStartZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__jumpEndZ(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpEndZ()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__jumpEndZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__zOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__zOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__zOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__yOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__yOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__yOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__noteJumpSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__noteJumpSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__noteJumpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__moveToPlayerHeadTParam(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__moveToPlayerHeadTParam()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__moveToPlayerHeadTParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__pathBezierCurveEvaluator(::GlobalNamespace::BezierSplineEvaluator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BezierSplineEvaluator*, 0x28>(this, std::forward<::GlobalNamespace::BezierSplineEvaluator*>(value));
}
constexpr ::GlobalNamespace::BezierSplineEvaluator* GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__pathBezierCurveEvaluator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BezierSplineEvaluator*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__pathBezierCurveEvaluator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BezierSplineEvaluator*, 0x28>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x30>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__audioTimeSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x30>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerTransforms*, 0x38>(this, std::forward<::GlobalNamespace::PlayerTransforms*>(value));
}
constexpr ::GlobalNamespace::PlayerTransforms* GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__playerTransforms()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms*, 0x38>(this);
}
inline ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::PlayerTransforms*  playerTransforms, ::GlobalNamespace::BezierSplineEvaluator*  pathBezierCurveEvaluator, float_t  jumpStartZ, float_t  jumpEndZ, float_t  yOffset, float_t  zOffset, float_t  noteJumpSeed, float_t  moveToPlayerHeadTParam)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam));
}
inline void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::PlayerTransforms*  playerTransforms, ::GlobalNamespace::BezierSplineEvaluator*  pathBezierCurveEvaluator, float_t  jumpStartZ, float_t  jumpEndZ, float_t  yOffset, float_t  zOffset, float_t  noteJumpSeed, float_t  moveToPlayerHeadTParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>::get(),
                            "GetCurrentPathPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
