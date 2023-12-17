#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightPairRotationEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__LightPairRotationEventEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightPairRotationEventEffect__RotationData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightPairRotationEventEffect__RotationData::*)()>(&::GlobalNamespace::__LightPairRotationEventEffect__RotationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ac504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_enabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_enabled()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_enabled() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_rotationSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_startRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x18>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x18>(this);
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x18>(this);
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_startRotationAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotationAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_startRotationAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::__LightPairRotationEventEffect__RotationData::__set_rotationAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairRotationEventEffect__RotationData::__get_rotationAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
inline ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* GlobalNamespace::__LightPairRotationEventEffect__RotationData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>());
}
inline void GlobalNamespace::__LightPairRotationEventEffect__RotationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(&::GlobalNamespace::LightPairRotationEventEffect::Start)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x23ac13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(&::GlobalNamespace::LightPairRotationEventEffect::Update)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x23ac50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(&::GlobalNamespace::LightPairRotationEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23ac7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::LightPairRotationEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x23ac7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect.UpdateRotationData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)(int32_t, ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, float_t, float_t)>(&::GlobalNamespace::LightPairRotationEventEffect::UpdateRotationData)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x23acb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "UpdateRotationData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairRotationEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairRotationEventEffect::*)()>(&::GlobalNamespace::LightPairRotationEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23acd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__eventL(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairRotationEventEffect::__get__eventL()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairRotationEventEffect::__get__eventL() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__eventR(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x1c>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairRotationEventEffect::__get__eventR()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x1c>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairRotationEventEffect::__get__eventR() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x1c>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairRotationEventEffect::__get__switchOverrideRandomValuesEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairRotationEventEffect::__get__switchOverrideRandomValuesEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__rotationVector(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairRotationEventEffect::__get__rotationVector()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairRotationEventEffect::__get__rotationVector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__overrideRandomValues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightPairRotationEventEffect::__get__overrideRandomValues()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& GlobalNamespace::LightPairRotationEventEffect::__get__overrideRandomValues() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__useZPositionForAngleOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightPairRotationEventEffect::__get__useZPositionForAngleOffset()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& GlobalNamespace::LightPairRotationEventEffect::__get__useZPositionForAngleOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__zPositionAngleOffsetScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__zPositionAngleOffsetScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__zPositionAngleOffsetScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__startRotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__startRotation()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__startRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__transformL(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x40>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::LightPairRotationEventEffect::__get__transformL()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::LightPairRotationEventEffect::__get__transformL() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__transformR(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x48>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::LightPairRotationEventEffect::__get__transformR()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::LightPairRotationEventEffect::__get__transformR() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::LightPairRotationEventEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::LightPairRotationEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x58>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::LightPairRotationEventEffect::__get__audioTimeSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::LightPairRotationEventEffect::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x58>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__rotationDataL(::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, 0x60>(this, std::forward<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>(value));
}
constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataL()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*> GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataL() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, 0x60>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__rotationDataR(::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, 0x68>(this, std::forward<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>(value));
}
constexpr ::GlobalNamespace::__LightPairRotationEventEffect__RotationData* GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataR()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*> GlobalNamespace::LightPairRotationEventEffect::__get__rotationDataR() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*, 0x68>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__randomGenerationFrameNum(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LightPairRotationEventEffect::__get__randomGenerationFrameNum()  {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr int32_t const& GlobalNamespace::LightPairRotationEventEffect::__get__randomGenerationFrameNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__randomStartRotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__randomStartRotation()  {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__randomStartRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__randomDirection(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightPairRotationEventEffect::__get__randomDirection()  {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr float_t const& GlobalNamespace::LightPairRotationEventEffect::__get__randomDirection() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr void GlobalNamespace::LightPairRotationEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x80>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::LightPairRotationEventEffect::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::LightPairRotationEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x80>(this);
}
inline void GlobalNamespace::LightPairRotationEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightPairRotationEventEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightPairRotationEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightPairRotationEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::LightPairRotationEventEffect::UpdateRotationData(int32_t  beatmapEventDataValue, ::GlobalNamespace::__LightPairRotationEventEffect__RotationData*  rotationData, float_t  startRotationOffset, float_t  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            "UpdateRotationData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairRotationEventEffect__RotationData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEventDataValue, rotationData, startRotationOffset, direction);
}
inline ::GlobalNamespace::LightPairRotationEventEffect* GlobalNamespace::LightPairRotationEventEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightPairRotationEventEffect*>());
}
inline void GlobalNamespace::LightPairRotationEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairRotationEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
