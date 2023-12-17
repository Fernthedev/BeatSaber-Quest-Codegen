#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Platform/zzzz__VoipAudioSourceHiLevel_def.hpp"
#include "Oculus/Platform/zzzz__VoipAudioSourceHiLevel_def.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
#include "Oculus/Platform/zzzz__VoipSampleRate_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::*)()>(&::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2701b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate.OnAudioFilterRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x2701c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>::get(),
                            "OnAudioFilterRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::*)()>(&::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27020d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::__set_parent(::Oculus::Platform::VoipAudioSourceHiLevel*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::VoipAudioSourceHiLevel*, 0x18>(this, std::forward<::Oculus::Platform::VoipAudioSourceHiLevel*>(value));
}
constexpr ::Oculus::Platform::VoipAudioSourceHiLevel* Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::__get_parent()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::VoipAudioSourceHiLevel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::VoipAudioSourceHiLevel*> Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::__get_parent() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::VoipAudioSourceHiLevel*, 0x18>(this);
}
constexpr void Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::__set_scratchBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::__get_scratchBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::__get_scratchBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x20>(this);
}
inline void Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>::get(),
                            "OnAudioFilterRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, channels);
}
inline ::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate* Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>());
}
inline void Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::__VoipAudioSourceHiLevel__FilterReadDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.set_senderID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)(uint64_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel::set_senderID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27013e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "set_senderID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Stop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2701494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.SampleRateToEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::VoipSampleRate (::Oculus::Platform::VoipAudioSourceHiLevel::*)(int32_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2701498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "SampleRateToEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Awake)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x27014d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2701774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.CreatePCMSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2701790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.MSToElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Oculus::Platform::VoipAudioSourceHiLevel::MSToElements)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27017f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "MSToElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::Update)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2701860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::VoipAudioSourceHiLevel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::VoipAudioSourceHiLevel::*)()>(&::Oculus::Platform::VoipAudioSourceHiLevel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2701b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__set_initialPlaybackDelayMS(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::VoipAudioSourceHiLevel::__get_initialPlaybackDelayMS()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Oculus::Platform::VoipAudioSourceHiLevel::__get_initialPlaybackDelayMS() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__set_audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x20>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* Oculus::Platform::VoipAudioSourceHiLevel::__get_audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> Oculus::Platform::VoipAudioSourceHiLevel::__get_audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__set_peakAmplitude(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& Oculus::Platform::VoipAudioSourceHiLevel::__get_peakAmplitude()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& Oculus::Platform::VoipAudioSourceHiLevel::__get_peakAmplitude() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void Oculus::Platform::VoipAudioSourceHiLevel::__set_pcmSource(::Oculus::Platform::IVoipPCMSource*  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::IVoipPCMSource*, 0x30>(this, std::forward<::Oculus::Platform::IVoipPCMSource*>(value));
}
constexpr ::Oculus::Platform::IVoipPCMSource* Oculus::Platform::VoipAudioSourceHiLevel::__get_pcmSource()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::IVoipPCMSource*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::IVoipPCMSource*> Oculus::Platform::VoipAudioSourceHiLevel::__get_pcmSource() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::IVoipPCMSource*, 0x30>(this);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::setStaticF_audioSystemPlaybackFrequency(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "audioSystemPlaybackFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Platform::VoipAudioSourceHiLevel::getStaticF_audioSystemPlaybackFrequency()  {
return ::cordl_internals::getStaticField<int32_t, "audioSystemPlaybackFrequency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>();
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::setStaticF_verboseLogging(bool  value)  {
::cordl_internals::setStaticField<bool, "verboseLogging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>(std::forward<bool>(value));
}
inline bool Oculus::Platform::VoipAudioSourceHiLevel::getStaticF_verboseLogging()  {
return ::cordl_internals::getStaticField<bool, "verboseLogging", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get>();
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::set_senderID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "set_senderID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Oculus::Platform::VoipSampleRate Oculus::Platform::VoipAudioSourceHiLevel::SampleRateToEnum(int32_t  rate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "SampleRateToEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::VoipSampleRate, false>(*this, ___internal_method, rate);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::CreatePCMSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "CreatePCMSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t Oculus::Platform::VoipAudioSourceHiLevel::MSToElements(int32_t  ms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "MSToElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ms);
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Oculus::Platform::VoipAudioSourceHiLevel* Oculus::Platform::VoipAudioSourceHiLevel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::VoipAudioSourceHiLevel*>());
}
inline void Oculus::Platform::VoipAudioSourceHiLevel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::VoipAudioSourceHiLevel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
