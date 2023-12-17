#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__IPoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::*)(float_t, ::GlobalNamespace::IPoolableSerializable*)>(&::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d2bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__set_time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__get_time()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__set_beatmapObjectEventData(::GlobalNamespace::IPoolableSerializable*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPoolableSerializable*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::IPoolableSerializable*>(value));
}
constexpr ::GlobalNamespace::IPoolableSerializable* GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__get_beatmapObjectEventData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPoolableSerializable*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPoolableSerializable*> GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__get_beatmapObjectEventData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPoolableSerializable*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::_ctor(float_t  time, ::GlobalNamespace::IPoolableSerializable*  beatmapObjectEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, beatmapObjectEventData);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapObjectEventData", ty: "::GlobalNamespace::IPoolableSerializable*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(float_t  time, ::GlobalNamespace::IPoolableSerializable*  beatmapObjectEventData) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->time = time;
this->beatmapObjectEventData = beatmapObjectEventData;
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerNoteWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d19f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerNoteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerNoteWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerNoteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerObstacleWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerObstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerObstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerObstacleWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerObstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerObstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerSliderWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerSliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerSliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerSliderWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerSliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerSliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerNoteWasCutEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerNoteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerNoteWasCutEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerNoteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerNoteWasMissedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d1f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerNoteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerNoteWasMissedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23d2020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerNoteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Start)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x23d20d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::OnDestroy)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x23d2488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23d2850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Pause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Pause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d2b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Resume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Resume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d2b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Resume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.InvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::GlobalNamespace::IPoolableSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::InvokeCallback)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x23d2910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23d2b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
constexpr  GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::operator ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*() noexcept {
return static_cast<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x18>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x20>(this, std::forward<::GlobalNamespace::IGameplayRpcManager*>(value));
}
constexpr ::GlobalNamespace::IGameplayRpcManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__gameplayRpcManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__gameplayRpcManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IGameplayRpcManager*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set__songTimeController(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, 0x28>(this, std::forward<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__songTimeController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__songTimeController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*, 0x30>(this, std::forward<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerNoteWasSpawnedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerNoteWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*, 0x38>(this, std::forward<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerObstacleWasSpawnedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerObstacleWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*, 0x40>(this, std::forward<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerSliderWasSpawnedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerSliderWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*, 0x48>(this, std::forward<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerNoteWasCutEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerNoteWasCutEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*, 0x50>(this, std::forward<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerNoteWasMissedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get_connectedPlayerNoteWasMissedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set__beatmapObjectEventQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*, 0x58>(this, std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__beatmapObjectEventQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__beatmapObjectEventQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__set__paused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__paused()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__get__paused() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerNoteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerNoteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerObstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerObstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerSliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerSliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerNoteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerNoteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "add_connectedPlayerNoteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "remove_connectedPlayerNoteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Pause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Resume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "Resume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::HandleBeatmapObjectEventData(::StringW  userId, int64_t  syncTime, float_t  songTime, T  beatmapObjectEventData)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                        "HandleBeatmapObjectEventData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, syncTime, songTime, beatmapObjectEventData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::InvokeCallback(::GlobalNamespace::IPoolableSerializable*  noteEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteEventData);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
