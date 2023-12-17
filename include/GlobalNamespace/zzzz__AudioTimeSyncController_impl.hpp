#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AudioTimeSyncController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioTimeSyncController__InitData::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t)>(&::GlobalNamespace::__AudioTimeSyncController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x222c22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioTimeSyncController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__set_audioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0x10>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::__AudioTimeSyncController__InitData::__get_audioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::__AudioTimeSyncController__InitData::__get_audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x10>(this);
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__set_startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__AudioTimeSyncController__InitData::__get_startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__AudioTimeSyncController__InitData::__get_startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__set_songTimeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__AudioTimeSyncController__InitData::__get_songTimeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__AudioTimeSyncController__InitData::__get_songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__AudioTimeSyncController__InitData::__set_timeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__AudioTimeSyncController__InitData::__get_timeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__AudioTimeSyncController__InitData::__get_timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
inline ::GlobalNamespace::__AudioTimeSyncController__InitData* GlobalNamespace::__AudioTimeSyncController__InitData::New_ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AudioTimeSyncController__InitData*>(audioClip, startSongTime, songTimeOffset, timeScale));
}
inline void GlobalNamespace::__AudioTimeSyncController__InitData::_ctor(::UnityEngine::AudioClip*  audioClip, float_t  startSongTime, float_t  songTimeOffset, float_t  timeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioTimeSyncController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioClip, startSongTime, songTimeOffset, timeScale);
}
constexpr void GlobalNamespace::__AudioTimeSyncController__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AudioTimeSyncController__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AudioTimeSyncController__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AudioTimeSyncController__State::__AudioTimeSyncController__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__State  GlobalNamespace::__AudioTimeSyncController__State::Playing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__AudioTimeSyncController__State  GlobalNamespace::__AudioTimeSyncController__State::Paused{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__AudioTimeSyncController__State  GlobalNamespace::__AudioTimeSyncController__State::Stopped{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_state
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AudioTimeSyncController__State (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_lastFrameDeltaSongTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_songLength)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x222b69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_isAudioLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x222b734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_isAudioLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songEndTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_songEndTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x222b764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_timeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_timeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_timeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_dspTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_dspTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_waitUntilAudioIsLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x222b7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_waitUntilAudioIsLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_isReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_songTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_forceNoAudioSyncOrAudioSyncErrorFixing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_forceNoAudioSyncOrAudioSyncErrorFixing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222b89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_forceNoAudioSyncOrAudioSyncErrorFixing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.set_forceNoAudioSyncOrAudioSyncErrorFixing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(bool)>(&::GlobalNamespace::AudioTimeSyncController::set_forceNoAudioSyncOrAudioSyncErrorFixing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x222b8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "set_forceNoAudioSyncOrAudioSyncErrorFixing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.add_stateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(::System::Action*)>(&::GlobalNamespace::AudioTimeSyncController::add_stateChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222b8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "add_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.remove_stateChangedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(::System::Action*)>(&::GlobalNamespace::AudioTimeSyncController::remove_stateChangedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222b94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "remove_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.get_timeSinceStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::get_timeSinceStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x222b9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_timeSinceStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x222ba08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x222ba50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Update)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x222bb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.StartSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(float_t)>(&::GlobalNamespace::AudioTimeSyncController::StartSong)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x222be80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.SeekTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)(float_t)>(&::GlobalNamespace::AudioTimeSyncController::SeekTo)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x222bec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.StopSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::StopSong)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x222c044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Pause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Pause)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x222c08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.Resume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::Resume)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x222c0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Resume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController.SetSongTimeIntoAudioTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::SetSongTimeIntoAudioTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x222c134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "SetSongTimeIntoAudioTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x222c214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioTimeSyncController._get_waitUntilAudioIsLoaded_b__27_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioTimeSyncController::*)()>(&::GlobalNamespace::AudioTimeSyncController::_get_waitUntilAudioIsLoaded_b__27_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222c228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "<get_waitUntilAudioIsLoaded>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAudioTimeSource"
constexpr  GlobalNamespace::AudioTimeSyncController::operator ::GlobalNamespace::IAudioTimeSource*() noexcept {
return static_cast<::GlobalNamespace::IAudioTimeSource*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__audioSyncLerpSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__audioSyncLerpSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__audioSyncLerpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__forcedSyncDeltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__forcedSyncDeltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__forcedSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__startSyncDeltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__startSyncDeltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__startSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__stopSyncDeltaTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__stopSyncDeltaTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__stopSyncDeltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x28>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::AudioTimeSyncController::__get__audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::AudioTimeSyncController::__get__audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x28>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__audioLatency(::GlobalNamespace::FloatSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO*, 0x30>(this, std::forward<::GlobalNamespace::FloatSO*>(value));
}
constexpr ::GlobalNamespace::FloatSO* GlobalNamespace::AudioTimeSyncController::__get__audioLatency()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> GlobalNamespace::AudioTimeSyncController::__get__audioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO*, 0x30>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__initData(::GlobalNamespace::__AudioTimeSyncController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__AudioTimeSyncController__InitData*, 0x38>(this, std::forward<::GlobalNamespace::__AudioTimeSyncController__InitData*>(value));
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__InitData* GlobalNamespace::AudioTimeSyncController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AudioTimeSyncController__InitData*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AudioTimeSyncController__InitData*> GlobalNamespace::AudioTimeSyncController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AudioTimeSyncController__InitData*, 0x38>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set_forcedNoAudioSync(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__get_forcedNoAudioSync()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__get_forcedNoAudioSync() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set_stateChangedEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x48>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::AudioTimeSyncController::__get_stateChangedEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::AudioTimeSyncController::__get_stateChangedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__fixingAudioSyncError(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__get__fixingAudioSyncError()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__get__fixingAudioSyncError() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__audioStartTimeOffsetSinceStart(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__audioStartTimeOffsetSinceStart()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__audioStartTimeOffsetSinceStart() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__playbackLoopIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::AudioTimeSyncController::__get__playbackLoopIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& GlobalNamespace::AudioTimeSyncController::__get__playbackLoopIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__prevAudioSamplePos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::AudioTimeSyncController::__get__prevAudioSamplePos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& GlobalNamespace::AudioTimeSyncController::__get__prevAudioSamplePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__startSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__startSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__startSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__songTimeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__songTimeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__songTimeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__audioStarted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__get__audioStarted()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__get__audioStarted() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__timeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__timeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__timeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__songTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__songTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__songTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__dspTimeOffset(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0x78>(this, std::forward<double_t>(value));
}
constexpr double_t& GlobalNamespace::AudioTimeSyncController::__get__dspTimeOffset()  {
return ::cordl_internals::getInstanceField<double_t, 0x78>(this);
}
constexpr double_t const& GlobalNamespace::AudioTimeSyncController::__get__dspTimeOffset() const {
return ::cordl_internals::getInstanceField<double_t, 0x78>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__state(::GlobalNamespace::__AudioTimeSyncController__State  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__AudioTimeSyncController__State, 0x80>(this, std::forward<::GlobalNamespace::__AudioTimeSyncController__State>(value));
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__State& GlobalNamespace::AudioTimeSyncController::__get__state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AudioTimeSyncController__State, 0x80>(this);
}
constexpr ::GlobalNamespace::__AudioTimeSyncController__State const& GlobalNamespace::AudioTimeSyncController::__get__state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AudioTimeSyncController__State, 0x80>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__canStartSong(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x84>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__get__canStartSong()  {
return ::cordl_internals::getInstanceField<bool, 0x84>(this);
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__get__canStartSong() const {
return ::cordl_internals::getInstanceField<bool, 0x84>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__isReady(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x85>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__get__isReady()  {
return ::cordl_internals::getInstanceField<bool, 0x85>(this);
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__get__isReady() const {
return ::cordl_internals::getInstanceField<bool, 0x85>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__lastFrameDeltaSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AudioTimeSyncController::__get__lastFrameDeltaSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& GlobalNamespace::AudioTimeSyncController::__get__lastFrameDeltaSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void GlobalNamespace::AudioTimeSyncController::__set__forceNoAudioSyncOrAudioSyncErrorFixing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::AudioTimeSyncController::__get__forceNoAudioSyncOrAudioSyncErrorFixing()  {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr bool const& GlobalNamespace::AudioTimeSyncController::__get__forceNoAudioSyncOrAudioSyncErrorFixing() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
inline ::GlobalNamespace::__AudioTimeSyncController__State GlobalNamespace::AudioTimeSyncController::get_state()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_state",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AudioTimeSyncController__State, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_lastFrameDeltaSongTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_lastFrameDeltaSongTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::get_isAudioLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_isAudioLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songEndTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songEndTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_timeScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_timeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline double_t GlobalNamespace::AudioTimeSyncController::get_dspTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_dspTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* GlobalNamespace::AudioTimeSyncController::get_waitUntilAudioIsLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_waitUntilAudioIsLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::get_isReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_isReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_songTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_songTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::get_forceNoAudioSyncOrAudioSyncErrorFixing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_forceNoAudioSyncOrAudioSyncErrorFixing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::set_forceNoAudioSyncOrAudioSyncErrorFixing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "set_forceNoAudioSyncOrAudioSyncErrorFixing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::AudioTimeSyncController::add_stateChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "add_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::AudioTimeSyncController::remove_stateChangedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "remove_stateChangedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioTimeSyncController::get_timeSinceStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "get_timeSinceStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param startTimeOffset: float_t (default: 0.0)
inline void GlobalNamespace::AudioTimeSyncController::StartSong(float_t  startTimeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startTimeOffset);
}
inline void GlobalNamespace::AudioTimeSyncController::SeekTo(float_t  startTimeOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startTimeOffset);
}
inline void GlobalNamespace::AudioTimeSyncController::StopSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "StopSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Pause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::Resume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "Resume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioTimeSyncController::SetSongTimeIntoAudioTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "SetSongTimeIntoAudioTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::AudioTimeSyncController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AudioTimeSyncController*>());
}
inline void GlobalNamespace::AudioTimeSyncController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::AudioTimeSyncController::_get_waitUntilAudioIsLoaded_b__27_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTimeSyncController*>::get(),
                            "<get_waitUntilAudioIsLoaded>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
