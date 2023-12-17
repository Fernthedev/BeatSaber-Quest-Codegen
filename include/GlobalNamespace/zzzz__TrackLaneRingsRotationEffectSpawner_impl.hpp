#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__TrackLaneRingsRotationEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
constexpr void GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::__TrackLaneRingsRotationEffectSpawner__RotationStepType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType  GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::Range0ToMax{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType  GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::Range{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType  GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType::MaxOr0{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23b87dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b8900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x23b891c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23b89e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__trackLaneRingsRotationEffect(::GlobalNamespace::TrackLaneRingsRotationEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TrackLaneRingsRotationEffect*, 0x18>(this, std::forward<::GlobalNamespace::TrackLaneRingsRotationEffect*>(value));
}
constexpr ::GlobalNamespace::TrackLaneRingsRotationEffect* GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__trackLaneRingsRotationEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TrackLaneRingsRotationEffect*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TrackLaneRingsRotationEffect*> GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__trackLaneRingsRotationEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TrackLaneRingsRotationEffect*, 0x18>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapEventType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotation()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationStep(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationStep()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationStepType(::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType, 0x2c>(this, std::forward<::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType>(value));
}
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationStepType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType, 0x2c>(this);
}
constexpr ::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationStepType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TrackLaneRingsRotationEffectSpawner__RotationStepType, 0x2c>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationPropagationSpeed(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationPropagationSpeed()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationPropagationSpeed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__rotationFlexySpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationFlexySpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__rotationFlexySpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x38>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x38>(this);
}
constexpr void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::TrackLaneRingsRotationEffectSpawner::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner* GlobalNamespace::TrackLaneRingsRotationEffectSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>());
}
inline void GlobalNamespace::TrackLaneRingsRotationEffectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
