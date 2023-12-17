#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__CrossFadeAudioSource_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t)>(&::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23dd218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_audioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0x10>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_audioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x10>(this);
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_songTimeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_songTimeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__set_timeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_timeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::__get_timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::New_ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>(audioClip, startSongTime, songTimeOffset, timeScale));
}
inline void GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData::_ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioClip, startSongTime, songTimeOffset, timeScale);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_waitUntilIsReadyToStartTheSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23dd2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "get_waitUntilIsReadyToStartTheSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.get_isAudioLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23dd35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "get_isAudioLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x23dd3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23dd510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23dd600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x23dd708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.StartSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23ddae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.FollowOffsetSyncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(::GlobalNamespace::IMultiplayerObservable*, bool, bool)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23ddd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "FollowOffsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerObservable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.UpdateOffsetSyncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(int64_t, bool, bool)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x23dd984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "UpdateOffsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.SeekTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23ddf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.SeekTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float_t, bool, float_t)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x23ddbd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController.HandleVrFocusWasReleased
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23ddf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "HandleVrFocusWasReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ddf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController._get_waitUntilIsReadyToStartTheSong_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_get_waitUntilIsReadyToStartTheSong_b__7_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23ddf34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "<get_waitUntilIsReadyToStartTheSong>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
constexpr  GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::operator ::GlobalNamespace::IStartSeekSongController*() noexcept {
return static_cast<::GlobalNamespace::IStartSeekSongController*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__audioSource(::GlobalNamespace::CrossFadeAudioSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CrossFadeAudioSource*, 0x18>(this, std::forward<::GlobalNamespace::CrossFadeAudioSource*>(value));
}
constexpr ::GlobalNamespace::CrossFadeAudioSource* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CrossFadeAudioSource*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CrossFadeAudioSource*> GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CrossFadeAudioSource*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__audioLatency(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioLatency()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__initData(::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*>(value));
}
constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*> GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerLocalInactivePlayerSongSyncController__InitData*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x30>(this, std::forward<::GlobalNamespace::IMultiplayerSessionManager*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__multiplayerSessionManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__multiplayerSessionManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerSessionManager*, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x38>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__timeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__timeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__songTimeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTimeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__songTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__songTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__audioStarted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioStarted()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__audioStarted() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__currentObservableIsFailed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__currentObservableIsFailed()  {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__currentObservableIsFailed() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__observable(::GlobalNamespace::IMultiplayerObservable*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IMultiplayerObservable*, 0x58>(this, std::forward<::GlobalNamespace::IMultiplayerObservable*>(value));
}
constexpr ::GlobalNamespace::IMultiplayerObservable* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__observable()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerObservable*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerObservable*> GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__observable() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IMultiplayerObservable*, 0x58>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__set__lastLatencyOffsetTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x60>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__lastLatencyOffsetTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this);
}
constexpr int64_t const& GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::__get__lastLatencyOffsetTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "get_waitUntilIsReadyToStartTheSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "get_isAudioLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param offsetTime: float_t (default: 0.0)
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong(float_t  offsetTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offsetTime);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime(::GlobalNamespace::IMultiplayerObservable*  observable, bool  crossFade, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "FollowOffsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerObservable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, observable, crossFade, forceUpdate);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime(int64_t  offsetSyncTime, bool  crossFade, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "UpdateOffsetSyncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offsetSyncTime, crossFade, forceUpdate);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo(float_t  offsetTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offsetTime);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo(float_t  offsetTime, bool  crossFade, float_t  toVolume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offsetTime, crossFade, toVolume);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::HandleVrFocusWasReleased()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "HandleVrFocusWasReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController* GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::_get_waitUntilIsReadyToStartTheSong_b__7_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*>::get(),
                            "<get_waitUntilIsReadyToStartTheSong>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
