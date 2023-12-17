#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainAudioEffects_def.hpp"
#include "UnityEngine/zzzz__AudioLowPassFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x222e018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::LateUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x222e04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.ResumeNormalSound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::ResumeNormalSound)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x222e108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "ResumeNormalSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects.TriggerLowPass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::TriggerLowPass)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222e130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "TriggerLowPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainAudioEffects._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainAudioEffects::*)()>(&::GlobalNamespace::MainAudioEffects::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x222e16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MainAudioEffects::__set__audioLowPassFilter(::UnityEngine::AudioLowPassFilter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioLowPassFilter*, 0x18>(this, std::forward<::UnityEngine::AudioLowPassFilter*>(value));
}
constexpr ::UnityEngine::AudioLowPassFilter* GlobalNamespace::MainAudioEffects::__get__audioLowPassFilter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioLowPassFilter*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioLowPassFilter*> GlobalNamespace::MainAudioEffects::__get__audioLowPassFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioLowPassFilter*, 0x18>(this);
}
constexpr void GlobalNamespace::MainAudioEffects::__set__smooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MainAudioEffects::__get__smooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::MainAudioEffects::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::MainAudioEffects::__set__targetFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MainAudioEffects::__get__targetFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::MainAudioEffects::__get__targetFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
inline void GlobalNamespace::MainAudioEffects::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::ResumeNormalSound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "ResumeNormalSound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MainAudioEffects::TriggerLowPass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            "TriggerLowPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MainAudioEffects* GlobalNamespace::MainAudioEffects::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainAudioEffects*>());
}
inline void GlobalNamespace::MainAudioEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainAudioEffects*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
