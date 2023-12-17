#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BackgroundTextureGradientSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23a4f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23a503c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect.HandleBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(&::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23a5058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a50a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__defaultTextureGradient(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, 0x18>(this, std::forward<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__defaultTextureGradient()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*> GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__defaultTextureGradient() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, 0x18>(this);
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__boostTextureGradient(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, 0x20>(this, std::forward<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*>(value));
}
constexpr ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__boostTextureGradient()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*> GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__boostTextureGradient() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, 0x20>(this);
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x28>(this);
}
constexpr void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x30>(this);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            "HandleBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect* GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>());
}
inline void GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
