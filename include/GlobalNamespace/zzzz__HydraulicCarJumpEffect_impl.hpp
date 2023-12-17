#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarJumpEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22202d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2220448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2220464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarJumpEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarJumpEffect::*)()>(&::GlobalNamespace::HydraulicCarJumpEffect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2220580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__event(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarJumpEffect::__get__event()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarJumpEffect::__get__event() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__eventValues(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& GlobalNamespace::HydraulicCarJumpEffect::__get__eventValues()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& GlobalNamespace::HydraulicCarJumpEffect::__get__eventValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__impulse(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HydraulicCarJumpEffect::__get__impulse()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HydraulicCarJumpEffect::__get__impulse() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__randomness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__get__randomness()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__get__randomness() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HydraulicCarJumpEffect::__get__position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HydraulicCarJumpEffect::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__minDelayBetweenEvents(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__get__minDelayBetweenEvents()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__get__minDelayBetweenEvents() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__rigidbody(::UnityEngine::Rigidbody*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody*, 0x48>(this, std::forward<::UnityEngine::Rigidbody*>(value));
}
constexpr ::UnityEngine::Rigidbody* GlobalNamespace::HydraulicCarJumpEffect::__get__rigidbody()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> GlobalNamespace::HydraulicCarJumpEffect::__get__rigidbody() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody*, 0x48>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x50>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__lastEventTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::HydraulicCarJumpEffect::__get__lastEventTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::HydraulicCarJumpEffect::__get__lastEventTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__eventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x60>(this, std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* GlobalNamespace::HydraulicCarJumpEffect::__get__eventValuesHashSet()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> GlobalNamespace::HydraulicCarJumpEffect::__get__eventValuesHashSet() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<int32_t>*, 0x60>(this);
}
constexpr void GlobalNamespace::HydraulicCarJumpEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x68>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::HydraulicCarJumpEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x68>(this);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData*  basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::HydraulicCarJumpEffect* GlobalNamespace::HydraulicCarJumpEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HydraulicCarJumpEffect*>());
}
inline void GlobalNamespace::HydraulicCarJumpEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarJumpEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
