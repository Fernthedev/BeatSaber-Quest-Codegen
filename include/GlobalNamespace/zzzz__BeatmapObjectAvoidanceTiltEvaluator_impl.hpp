#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceTiltEvaluator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)(::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BezierSplineEvaluator*, ::UnityEngine::Vector2)>(&::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2217308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator.GetTiltAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)()>(&::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x22173e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(),
                            "GetTiltAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x10>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__audioTimeSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__gravity(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x18>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__gravity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x18>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__gravity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__normalizedGravity(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x20>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__normalizedGravity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__normalizedGravity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__bezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BezierSplineEvaluator*, 0x28>(this, std::forward<::GlobalNamespace::BezierSplineEvaluator*>(value));
}
constexpr ::GlobalNamespace::BezierSplineEvaluator* GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__bezierSplineEvaluator()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BezierSplineEvaluator*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__bezierSplineEvaluator() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BezierSplineEvaluator*, 0x28>(this);
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__set__currentAcceleration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__currentAcceleration()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__get__currentAcceleration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
inline ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator*  bezierSplineEvaluator, ::UnityEngine::Vector2  gravity)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(audioTimeSource, bezierSplineEvaluator, gravity));
}
inline void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource*  audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator*  bezierSplineEvaluator, ::UnityEngine::Vector2  gravity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAudioTimeSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BezierSplineEvaluator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioTimeSource, bezierSplineEvaluator, gravity);
}
inline float_t GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>::get(),
                            "GetTiltAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
