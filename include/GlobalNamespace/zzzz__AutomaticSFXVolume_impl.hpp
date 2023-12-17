#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AutomaticSFXVolume_def.hpp"
#include "GlobalNamespace/zzzz__AutomaticSFXVolumeParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__AutomaticSFXVolume_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AutomaticSFXVolume__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AutomaticSFXVolume__InitData::*)(float_t, bool, float_t)>(&::GlobalNamespace::__AutomaticSFXVolume__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222c538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AutomaticSFXVolume__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__AutomaticSFXVolume__InitData::__set_volumeOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_volumeOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_volumeOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__AutomaticSFXVolume__InitData::__set_maxVolume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_maxVolume()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_maxVolume() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__AutomaticSFXVolume__InitData::__set_adaptiveSfx(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_adaptiveSfx()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__AutomaticSFXVolume__InitData::__get_adaptiveSfx() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
/// @param maxVolume: float_t (default: INFINITY)
inline ::GlobalNamespace::__AutomaticSFXVolume__InitData* GlobalNamespace::__AutomaticSFXVolume__InitData::New_ctor(float_t  volumeOffset, bool  adaptiveSfx, float_t  maxVolume)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AutomaticSFXVolume__InitData*>(volumeOffset, adaptiveSfx, maxVolume));
}
/// @param maxVolume: float_t (default: INFINITY)
inline void GlobalNamespace::__AutomaticSFXVolume__InitData::_ctor(float_t  volumeOffset, bool  adaptiveSfx, float_t  maxVolume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AutomaticSFXVolume__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, volumeOffset, adaptiveSfx, maxVolume);
}
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222c278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x222c2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x222c37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.RecalculateParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::RecalculateParams)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x222c27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "RecalculateParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.OnAudioFilterRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x222c380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "OnAudioFilterRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x222c4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticSFXVolume._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutomaticSFXVolume::*)()>(&::GlobalNamespace::AutomaticSFXVolume::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x222c524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__params(::GlobalNamespace::AutomaticSFXVolumeParamsSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AutomaticSFXVolumeParamsSO*, 0x18>(this, std::forward<::GlobalNamespace::AutomaticSFXVolumeParamsSO*>(value));
}
constexpr ::GlobalNamespace::AutomaticSFXVolumeParamsSO* GlobalNamespace::AutomaticSFXVolume::__get__params()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AutomaticSFXVolumeParamsSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AutomaticSFXVolumeParamsSO*> GlobalNamespace::AutomaticSFXVolume::__get__params() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AutomaticSFXVolumeParamsSO*, 0x18>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__audioManager(::GlobalNamespace::AudioManagerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this, std::forward<::GlobalNamespace::AudioManagerSO*>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO* GlobalNamespace::AutomaticSFXVolume::__get__audioManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> GlobalNamespace::AutomaticSFXVolume::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x20>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__initData(::GlobalNamespace::__AutomaticSFXVolume__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__AutomaticSFXVolume__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__AutomaticSFXVolume__InitData*>(value));
}
constexpr ::GlobalNamespace::__AutomaticSFXVolume__InitData* GlobalNamespace::AutomaticSFXVolume::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AutomaticSFXVolume__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AutomaticSFXVolume__InitData*> GlobalNamespace::AutomaticSFXVolume::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AutomaticSFXVolume__InitData*, 0x28>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__sampleRate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__sampleRate()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__sampleRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__volume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__volume()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__volume() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__envelope(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__envelope()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__envelope() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__attackSamples(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__attackSamples()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__attackSamples() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__releaseSamples(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__releaseSamples()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__releaseSamples() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__attackCoef(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__attackCoef()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__attackCoef() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__releaseCoef(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__releaseCoef()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__releaseCoef() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void GlobalNamespace::AutomaticSFXVolume::__set__maxVolume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::AutomaticSFXVolume::__get__maxVolume()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& GlobalNamespace::AutomaticSFXVolume::__get__maxVolume() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
inline void GlobalNamespace::AutomaticSFXVolume::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::RecalculateParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "RecalculateParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "OnAudioFilterRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, channels);
}
inline void GlobalNamespace::AutomaticSFXVolume::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::AutomaticSFXVolume* GlobalNamespace::AutomaticSFXVolume::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AutomaticSFXVolume*>());
}
inline void GlobalNamespace::AutomaticSFXVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutomaticSFXVolume*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
