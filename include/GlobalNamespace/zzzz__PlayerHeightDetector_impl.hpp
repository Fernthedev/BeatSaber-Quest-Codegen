#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerHeightDetector__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerHeightDetector__InitData::*)(float_t, float_t)>(&::GlobalNamespace::__PlayerHeightDetector__InitData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22615fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeightDetector__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PlayerHeightDetector__InitData::__set_headPosToPlayerHeightOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerHeightDetector__InitData::__get_headPosToPlayerHeightOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerHeightDetector__InitData::__get_headPosToPlayerHeightOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlayerHeightDetector__InitData::__set_startPlayerHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__PlayerHeightDetector__InitData::__get_startPlayerHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__PlayerHeightDetector__InitData::__get_startPlayerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__PlayerHeightDetector__InitData* GlobalNamespace::__PlayerHeightDetector__InitData::New_ctor(float_t  headPosToPlayerHeightOffset, float_t  startPlayerHeight)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlayerHeightDetector__InitData*>(headPosToPlayerHeightOffset, startPlayerHeight));
}
inline void GlobalNamespace::__PlayerHeightDetector__InitData::_ctor(float_t  headPosToPlayerHeightOffset, float_t  startPlayerHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerHeightDetector__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, headPosToPlayerHeightOffset, startPlayerHeight);
}
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.add_playerHeightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x226117c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "add_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.remove_playerHeightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x226122c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "remove_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.get_playerHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::get_playerHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22612dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "get_playerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22612e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22613c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::LateUpdate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x22613e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector.BeatmapObjectSpawnCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)(::GlobalNamespace::ObstacleData*)>(&::GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22615b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "BeatmapObjectSpawnCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeightDetector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeightDetector::*)()>(&::GlobalNamespace::PlayerHeightDetector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22615f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerHeightDetector::__set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerTransforms*, 0x18>(this, std::forward<::GlobalNamespace::PlayerTransforms*>(value));
}
constexpr ::GlobalNamespace::PlayerTransforms* GlobalNamespace::PlayerHeightDetector::__get__playerTransforms()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> GlobalNamespace::PlayerHeightDetector::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms*, 0x18>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::PlayerHeightDetector::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::PlayerHeightDetector::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x20>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x28>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::PlayerHeightDetector::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::PlayerHeightDetector::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x28>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__initData(::GlobalNamespace::__PlayerHeightDetector__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlayerHeightDetector__InitData*, 0x30>(this, std::forward<::GlobalNamespace::__PlayerHeightDetector__InitData*>(value));
}
constexpr ::GlobalNamespace::__PlayerHeightDetector__InitData* GlobalNamespace::PlayerHeightDetector::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerHeightDetector__InitData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerHeightDetector__InitData*> GlobalNamespace::PlayerHeightDetector::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlayerHeightDetector__InitData*, 0x30>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set_playerHeightDidChangeEvent(::System::Action_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<float_t>*, 0x38>(this, std::forward<::System::Action_1<float_t>*>(value));
}
constexpr ::System::Action_1<float_t>* GlobalNamespace::PlayerHeightDetector::__get_playerHeightDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<float_t>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> GlobalNamespace::PlayerHeightDetector::__get_playerHeightDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<float_t>*, 0x38>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__beatmapObjectCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::PlayerHeightDetector::__get__beatmapObjectCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::PlayerHeightDetector::__get__beatmapObjectCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__noTopObstaclesStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__get__noTopObstaclesStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__get__noTopObstaclesStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__computedPlayerHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__get__computedPlayerHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__get__computedPlayerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__changeWeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__get__changeWeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__get__changeWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__lastReportedHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::PlayerHeightDetector::__get__lastReportedHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::PlayerHeightDetector::__get__lastReportedHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
inline void GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "add_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "remove_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerHeightDetector::get_playerHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "get_playerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback(::GlobalNamespace::ObstacleData*  obstacleData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            "BeatmapObjectSpawnCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obstacleData);
}
inline ::GlobalNamespace::PlayerHeightDetector* GlobalNamespace::PlayerHeightDetector::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerHeightDetector*>());
}
inline void GlobalNamespace::PlayerHeightDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeightDetector*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
