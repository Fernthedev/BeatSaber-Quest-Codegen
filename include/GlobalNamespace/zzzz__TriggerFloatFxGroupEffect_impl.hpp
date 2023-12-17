#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerFloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__TriggerFloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::*)(int32_t, int32_t, ::GlobalNamespace::FloatFxGroupEffectTarget*)>(&::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a71b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__set_groupId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_groupId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__set_elementId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_elementId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_elementId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__set_target(::GlobalNamespace::FloatFxGroupEffectTarget*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x18>(this, std::forward<::GlobalNamespace::FloatFxGroupEffectTarget*>(value));
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget* GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_target()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::__get_target() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x18>(this);
}
inline ::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData* GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::New_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::FloatFxGroupEffectTarget*  target)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>(groupId, elementId, target));
}
inline void GlobalNamespace::__TriggerFloatFxGroupEffect__InitData::_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::FloatFxGroupEffectTarget*  target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxGroupEffectTarget*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, groupId, elementId, target);
}
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::TriggerFloatFxGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a7074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)()>(&::GlobalNamespace::TriggerFloatFxGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23a6f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerFloatFxGroupEffect.HandleFloatFxBeatmapEventCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TriggerFloatFxGroupEffect::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(&::GlobalNamespace::TriggerFloatFxGroupEffect::HandleFloatFxBeatmapEventCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23a7190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(),
                            "HandleFloatFxBeatmapEventCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x10>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::TriggerFloatFxGroupEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::TriggerFloatFxGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x10>(this);
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::TriggerFloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::TriggerFloatFxGroupEffect::__get__floatFxBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x18>(this);
}
constexpr void GlobalNamespace::TriggerFloatFxGroupEffect::__set__target(::GlobalNamespace::FloatFxGroupEffectTarget*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x20>(this, std::forward<::GlobalNamespace::FloatFxGroupEffectTarget*>(value));
}
constexpr ::GlobalNamespace::FloatFxGroupEffectTarget* GlobalNamespace::TriggerFloatFxGroupEffect::__get__target()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatFxGroupEffectTarget*> GlobalNamespace::TriggerFloatFxGroupEffect::__get__target() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatFxGroupEffectTarget*, 0x20>(this);
}
inline ::GlobalNamespace::TriggerFloatFxGroupEffect* GlobalNamespace::TriggerFloatFxGroupEffect::New_ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*  initData, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TriggerFloatFxGroupEffect*>(initData, beatmapCallbacksController));
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::_ctor(::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*  initData, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TriggerFloatFxGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, beatmapCallbacksController);
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::TriggerFloatFxGroupEffect::HandleFloatFxBeatmapEventCallback(::GlobalNamespace::FloatFxBeatmapEventData*  currentEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TriggerFloatFxGroupEffect*>::get(),
                            "HandleFloatFxBeatmapEventCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FloatFxBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentEvent);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
