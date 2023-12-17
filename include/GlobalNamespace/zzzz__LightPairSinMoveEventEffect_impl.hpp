#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightPairSinMoveEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__LightPairSinMoveEventEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::*)()>(&::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ad0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_enabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_enabled()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_enabled() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_speed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_speed()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_startPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_transform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_transform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_startMovementValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startMovementValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_startMovementValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_movementValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_movementValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_movementValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__set_side(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_side()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::__get_side() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
inline ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>());
}
inline void GlobalNamespace::__LightPairSinMoveEventEffect__MovementData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::Start)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x23acddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23ad0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23ad2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x23ad2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect.UpdateMovementData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)(int32_t, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, float_t)>(&::GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x23ad444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "UpdateMovementData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightPairSinMoveEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightPairSinMoveEventEffect::*)()>(&::GlobalNamespace::LightPairSinMoveEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23ad57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__eventL(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventL()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventL() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__eventR(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x1c>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventR()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x1c>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__get__eventR() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x1c>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__switchOverrideRandomValuesEvent(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::LightPairSinMoveEventEffect::__get__switchOverrideRandomValuesEvent()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::LightPairSinMoveEventEffect::__get__switchOverrideRandomValuesEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x20>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__overrideRandomValues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightPairSinMoveEventEffect::__get__overrideRandomValues()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::LightPairSinMoveEventEffect::__get__overrideRandomValues() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__startValueOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightPairSinMoveEventEffect::__get__startValueOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::LightPairSinMoveEventEffect::__get__startValueOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__startPositionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairSinMoveEventEffect::__get__startPositionOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairSinMoveEventEffect::__get__startPositionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__endPositionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightPairSinMoveEventEffect::__get__endPositionOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightPairSinMoveEventEffect::__get__endPositionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__transformL(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x48>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::LightPairSinMoveEventEffect::__get__transformL()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::LightPairSinMoveEventEffect::__get__transformL() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__transformR(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x50>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::LightPairSinMoveEventEffect::__get__transformR()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::LightPairSinMoveEventEffect::__get__transformR() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x50>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x58>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x58>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x60>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::LightPairSinMoveEventEffect::__get__audioTimeSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::LightPairSinMoveEventEffect::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x60>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__movementDataL(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, 0x68>(this, std::forward<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>(value));
}
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataL()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataL() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, 0x68>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__movementDataR(::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, 0x70>(this, std::forward<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>(value));
}
constexpr ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData* GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataR()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*> GlobalNamespace::LightPairSinMoveEventEffect::__get__movementDataR() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*, 0x70>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__randomGenerationFrameNum(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomGenerationFrameNum()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomGenerationFrameNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__randomStartOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomStartOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& GlobalNamespace::LightPairSinMoveEventEffect::__get__randomStartOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void GlobalNamespace::LightPairSinMoveEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x80>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::LightPairSinMoveEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x80>(this);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::UpdateMovementData(int32_t  beatmapEventDataValue, ::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*  movementData, float_t  movementValueOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            "UpdateMovementData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightPairSinMoveEventEffect__MovementData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEventDataValue, movementData, movementValueOffset);
}
inline ::GlobalNamespace::LightPairSinMoveEventEffect* GlobalNamespace::LightPairSinMoveEventEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightPairSinMoveEventEffect*>());
}
inline void GlobalNamespace::LightPairSinMoveEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightPairSinMoveEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
