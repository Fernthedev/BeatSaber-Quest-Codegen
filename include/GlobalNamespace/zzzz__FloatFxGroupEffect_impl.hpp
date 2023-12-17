#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FloatFxGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FloatFxGroupEffect__InitData::*)(int32_t, int32_t, ::GlobalNamespace::FloatFxGroupEffectTarget*)>(&::GlobalNamespace::__FloatFxGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a5f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__FloatFxGroupEffect__InitData::__set_groupId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_groupId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__FloatFxGroupEffect__InitData::__set_elementId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_elementId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__FloatFxGroupEffect__InitData::__get_elementId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__FloatFxGroupEffect__InitData::__set_target(::GlobalNamespace::FloatFxGroupEffectTarget*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x18>(this, std::forward<::GlobalNamespace::FloatFxGroupEffectTarget*>(value));
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget* GlobalNamespace::__FloatFxGroupEffect__InitData::__get_target()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> GlobalNamespace::__FloatFxGroupEffect__InitData::__get_target() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x18>(this);
}
inline ::GlobalNamespace::__FloatFxGroupEffect__InitData* GlobalNamespace::__FloatFxGroupEffect__InitData::New_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::FloatFxGroupEffectTarget*  target)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__FloatFxGroupEffect__InitData*>(groupId, elementId, target));
}
inline void GlobalNamespace::__FloatFxGroupEffect__InitData::_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::FloatFxGroupEffectTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, groupId, elementId, target);
}
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(::GlobalNamespace::__FloatFxGroupEffect__InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::FloatFxGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x23a62bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)()>(&::GlobalNamespace::FloatFxGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23a6118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.HandleFloatFxBeatmapEventCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(&::GlobalNamespace::FloatFxGroupEffect::HandleFloatFxBeatmapEventCallback)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23a6498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            "HandleFloatFxBeatmapEventCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(float_t)>(&::GlobalNamespace::FloatFxGroupEffect::SetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23a65b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__tweeningManager(::Tweening::SongTimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::SongTimeTweeningManager*, 0x10>(this, std::forward<::Tweening::SongTimeTweeningManager*>(value));
}
constexpr ::Tweening::SongTimeTweeningManager* GlobalNamespace::FloatFxGroupEffect::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> GlobalNamespace::FloatFxGroupEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x10>(this);
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::FloatFxGroupEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::FloatFxGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x18>(this);
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__floatTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x20>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::FloatFxGroupEffect::__get__floatTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::FloatFxGroupEffect::__get__floatTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x20>(this);
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::FloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::FloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x28>(this);
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__set__target(::GlobalNamespace::FloatFxGroupEffectTarget*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x30>(this, std::forward<::GlobalNamespace::FloatFxGroupEffectTarget*>(value));
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget* GlobalNamespace::FloatFxGroupEffect::__get__target()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> GlobalNamespace::FloatFxGroupEffect::__get__target() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x30>(this);
}
inline ::GlobalNamespace::FloatFxGroupEffect* GlobalNamespace::FloatFxGroupEffect::New_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatFxGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
inline void GlobalNamespace::FloatFxGroupEffect::_ctor(::GlobalNamespace::__FloatFxGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FloatFxGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::FloatFxGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FloatFxGroupEffect::HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData*  currentEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            "HandleFloatFxBeatmapEventCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentEvent);
}
inline void GlobalNamespace::FloatFxGroupEffect::SetValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffect*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
