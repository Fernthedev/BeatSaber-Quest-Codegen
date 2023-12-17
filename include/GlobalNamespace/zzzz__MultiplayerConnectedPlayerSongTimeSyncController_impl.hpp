#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::*)(float_t, float_t, float_t)>(&::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23d6498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__set_startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__set_songTimeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_songTimeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__set_timeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_timeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::__get_timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
inline ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::New_ctor(float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>(startSongTime, songTimeOffset, timeScale));
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData::_ctor(float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startSongTime, songTimeOffset, timeScale);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "set_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_lastFrameDeltaSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.set_lastFrameDeltaSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "set_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d6a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_songEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_songLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d6a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_songLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.get_isReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d6a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d6a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x23d6a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StartSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(int64_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23d4b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.SetConnectedPlayerSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)(int64_t, float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23d6bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "SetConnectedPlayerSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController.StopSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23d4e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23d6c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
constexpr  GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::operator ::GlobalNamespace::IAudioTimeSource*() noexcept {
return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__audioSyncLerpSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__audioSyncLerpSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__audioSyncLerpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__forcedSyncDeltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__forcedSyncDeltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__forcedSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__startSyncDeltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__startSyncDeltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__startSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__stopSyncDeltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__stopSyncDeltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__stopSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__audioLatency(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x28>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__audioLatency()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__audioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__initData(::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*, 0x30>(this, std::forward<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*>(value));
}
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*> GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerConnectedPlayerSongTimeSyncController__InitData*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x38>(this, std::forward<::GlobalNamespace::IConnectedPlayer*>(value));
}
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__connectedPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__connectedPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IConnectedPlayer*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__songTime_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__songTime_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__songTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__lastFrameDeltaSongTime_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__lastFrameDeltaSongTime_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__lastFrameDeltaSongTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__timeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__timeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__startSongSyncTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__startSongSyncTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr int64_t const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__startSongSyncTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__fixingAudioSyncError(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__fixingAudioSyncError()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__fixingAudioSyncError() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__set__isReady(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__isReady()  {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::__get__isReady() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_songTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "set_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_lastFrameDeltaSongTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::set_lastFrameDeltaSongTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "set_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_songEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_songLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_songLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::get_isReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StartSong(int64_t  songStartSyncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, songStartSyncTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::SetConnectedPlayerSongTime(int64_t  syncTime, float_t  songTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "SetConnectedPlayerSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, syncTime, songTime);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::StopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
