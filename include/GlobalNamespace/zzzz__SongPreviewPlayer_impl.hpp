#pragma once
#include "GlobalNamespace/zzzz__AudioPlayerBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__InitData::*)(float_t)>(&::GlobalNamespace::__SongPreviewPlayer__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2231120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SongPreviewPlayer__InitData::__set_ambientVolumeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__InitData::__get_ambientVolumeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__InitData::__get_ambientVolumeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline ::GlobalNamespace::__SongPreviewPlayer__InitData* GlobalNamespace::__SongPreviewPlayer__InitData::New_ctor(float_t  ambientVolumeScale)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SongPreviewPlayer__InitData*>(ambientVolumeScale));
}
inline void GlobalNamespace::__SongPreviewPlayer__InitData::_ctor(float_t  ambientVolumeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ambientVolumeScale);
}
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2231148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_reverbZoneMix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_reverbZoneMix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2231154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_reverbZoneMix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_spatialBlend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spatialBlend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223115c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_spatialBlend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams.get_spread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spread)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2231164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_spread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223116c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__set__position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__set__reverbZoneMix(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__reverbZoneMix()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__reverbZoneMix() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__set__spatialBlend(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__spatialBlend()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__spatialBlend() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__set__spread(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__spread()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::__get__spread() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
inline ::UnityEngine::Vector3 GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_reverbZoneMix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_reverbZoneMix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spatialBlend()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_spatialBlend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::get_spread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            "get_spread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>());
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.set_volume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)(float_t)>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_volume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22309c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "set_volume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.get_volume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_volume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2231174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "get_volume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.get_maxVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)()>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_maxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223117c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "get_maxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController.set_maxVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)(float_t)>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_maxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2231184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "set_maxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::*)(::UnityEngine::AudioSource*)>(&::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22305a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__set_audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x10>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__get_audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__get_audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x10>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__set__maxVolume_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__get__maxVolume_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__get__maxVolume_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__set__volume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__get__volume()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::__get__volume() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "set_volume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_volume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "get_volume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::get_maxVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "get_maxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::set_maxVolume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            "set_maxVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController* GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::New_ctor(::UnityEngine::AudioSource*  audioSource)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>(audioSource));
}
inline void GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController::_ctor(::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioSource);
}
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)(int32_t)>(&::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x223075c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(&::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223118c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(&::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2231190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(&::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223123c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(&::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2231244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::*)()>(&::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2231284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__set_delay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get_delay()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get_delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__set___4__this(::GlobalNamespace::SongPreviewPlayer*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPreviewPlayer*, 0x28>(this, std::forward<::GlobalNamespace::SongPreviewPlayer*>(value));
}
constexpr ::GlobalNamespace::SongPreviewPlayer* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPreviewPlayer*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPreviewPlayer*, 0x28>(this);
}
inline ::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>(__1__state));
}
inline void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.get_activeAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::get_activeAudioClip)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2230378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Awake)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x22303cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22305d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::OnEnable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22305f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossFadeAfterDelayCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SongPreviewPlayer::*)(float_t)>(&::GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22306e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossFadeAfterDelayCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2230784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::Update)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2230858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeToDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2230d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeToNewDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2230e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeToNewDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t, ::System::Action*)>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2230f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.CrossfadeTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(::UnityEngine::AudioClip*, float_t, float_t, float_t, bool, ::System::Action*)>(&::GlobalNamespace::SongPreviewPlayer::CrossfadeTo)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2230aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.PauseCurrentChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2230f88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.UnPauseCurrentChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2230ffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.FadeOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(float_t)>(&::GlobalNamespace::SongPreviewPlayer::FadeOut)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x223106c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer.ReportChannelDidFadeOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)(int32_t)>(&::GlobalNamespace::SongPreviewPlayer::ReportChannelDidFadeOut)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22309fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "ReportChannelDidFadeOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayer::*)()>(&::GlobalNamespace::SongPreviewPlayer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2231088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongPreviewPlayer::__set__channelsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SongPreviewPlayer::__get__channelsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::SongPreviewPlayer::__get__channelsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__audioSourcePrefab(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x20>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::SongPreviewPlayer::__get__audioSourcePrefab()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::SongPreviewPlayer::__get__audioSourcePrefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__defaultAudioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0x28>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::SongPreviewPlayer::__get__defaultAudioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::SongPreviewPlayer::__get__defaultAudioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x28>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__volume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__volume()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__volume() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__crossFadeToAnotherSongSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__crossFadeToAnotherSongSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__crossFadeToAnotherSongSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__crossFadeToDefaultSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__crossFadeToDefaultSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__crossFadeToDefaultSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__fadeInSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__fadeInSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__fadeInSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__defaultAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, 0x40>(this, std::forward<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>(value));
}
constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* GlobalNamespace::SongPreviewPlayer::__get__defaultAudioSourceParams()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> GlobalNamespace::SongPreviewPlayer::__get__defaultAudioSourceParams() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, 0x40>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__othersAudioSourceParams(::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, 0x48>(this, std::forward<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*>(value));
}
constexpr ::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams* GlobalNamespace::SongPreviewPlayer::__get__othersAudioSourceParams()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*> GlobalNamespace::SongPreviewPlayer::__get__othersAudioSourceParams() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPreviewPlayer__AudioSourceParams*, 0x48>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__initData(::GlobalNamespace::__SongPreviewPlayer__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SongPreviewPlayer__InitData*, 0x50>(this, std::forward<::GlobalNamespace::__SongPreviewPlayer__InitData*>(value));
}
constexpr ::GlobalNamespace::__SongPreviewPlayer__InitData* GlobalNamespace::SongPreviewPlayer::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPreviewPlayer__InitData*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SongPreviewPlayer__InitData*> GlobalNamespace::SongPreviewPlayer::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SongPreviewPlayer__InitData*, 0x50>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__audioManager(::GlobalNamespace::AudioManagerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO*, 0x58>(this, std::forward<::GlobalNamespace::AudioManagerSO*>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO* GlobalNamespace::SongPreviewPlayer::__get__audioManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> GlobalNamespace::SongPreviewPlayer::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x58>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__audioSourceControllers(::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>, 0x60>(this, std::forward<::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>& GlobalNamespace::SongPreviewPlayer::__get__audioSourceControllers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>, 0x60>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*> const& GlobalNamespace::SongPreviewPlayer::__get__audioSourceControllers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*,::Array<::GlobalNamespace::__SongPreviewPlayer__AudioSourceVolumeController*>*>, 0x60>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__activeChannel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SongPreviewPlayer::__get__activeChannel()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr int32_t const& GlobalNamespace::SongPreviewPlayer::__get__activeChannel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__timeToDefaultAudioTransition(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__timeToDefaultAudioTransition()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__timeToDefaultAudioTransition() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__transitionAfterDelay(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SongPreviewPlayer::__get__transitionAfterDelay()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& GlobalNamespace::SongPreviewPlayer::__get__transitionAfterDelay() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__volumeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__volumeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__volumeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__fadeSpeed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__fadeSpeed()  {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__fadeSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__ambientVolumeScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SongPreviewPlayer::__get__ambientVolumeScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& GlobalNamespace::SongPreviewPlayer::__get__ambientVolumeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__isActiveChannelPaused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SongPreviewPlayer::__get__isActiveChannelPaused()  {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr bool const& GlobalNamespace::SongPreviewPlayer::__get__isActiveChannelPaused() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayer::__set__channelToFadeOutCallbackDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>*, 0x88>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>* GlobalNamespace::SongPreviewPlayer::__get__channelToFadeOutCallbackDictionary()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>*> GlobalNamespace::SongPreviewPlayer::__get__channelToFadeOutCallbackDictionary() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action*>*, 0x88>(this);
}
inline ::UnityEngine::AudioClip* GlobalNamespace::SongPreviewPlayer::get_activeAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "get_activeAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SongPreviewPlayer::CrossFadeAfterDelayCoroutine(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossFadeAfterDelayCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, delay);
}
inline void GlobalNamespace::SongPreviewPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeToDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeToDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeToNewDefault(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeToNewDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioClip);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeTo(::UnityEngine::AudioClip*  audioClip, float_t  musicVolume, float_t  startTime, float_t  duration, ::System::Action*  onFadeOutCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioClip, musicVolume, startTime, duration, onFadeOutCallback);
}
inline void GlobalNamespace::SongPreviewPlayer::CrossfadeTo(::UnityEngine::AudioClip*  audioClip, float_t  musicVolume, float_t  startTime, float_t  duration, bool  isDefault, ::System::Action*  onFadeOutCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "CrossfadeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, audioClip, musicVolume, startTime, duration, isDefault, onFadeOutCallback);
}
inline void GlobalNamespace::SongPreviewPlayer::PauseCurrentChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "PauseCurrentChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::UnPauseCurrentChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "UnPauseCurrentChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayer::FadeOut(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "FadeOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, duration);
}
inline void GlobalNamespace::SongPreviewPlayer::ReportChannelDidFadeOut(int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            "ReportChannelDidFadeOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, channel);
}
inline ::GlobalNamespace::SongPreviewPlayer* GlobalNamespace::SongPreviewPlayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPreviewPlayer*>());
}
inline void GlobalNamespace::SongPreviewPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
