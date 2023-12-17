#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberSound_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberSound.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSound::*)()>(&::GlobalNamespace::SaberSound::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x226458c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSound*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSound.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSound::*)()>(&::GlobalNamespace::SaberSound::Update)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x22645b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSound*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSound._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSound::*)()>(&::GlobalNamespace::SaberSound::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2264784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSound*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberSound::__set__saberTop(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::SaberSound::__get__saberTop()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::SaberSound::__get__saberTop() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x20>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::SaberSound::__get__audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::SaberSound::__get__audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__pitchBySpeedCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::SaberSound::__get__pitchBySpeedCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::SaberSound::__get__pitchBySpeedCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x28>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__gainBySpeedCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this, std::forward<::UnityEngine::AnimationCurve*>(value));
}
constexpr ::UnityEngine::AnimationCurve* GlobalNamespace::SaberSound::__get__gainBySpeedCurve()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> GlobalNamespace::SaberSound::__get__gainBySpeedCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve*, 0x30>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__speedMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SaberSound::__get__speedMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::SaberSound::__get__speedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__upSmooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SaberSound::__get__upSmooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr float_t const& GlobalNamespace::SaberSound::__get__upSmooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__downSmooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SaberSound::__get__downSmooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::SaberSound::__get__downSmooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__noSoundTopThresholdSqr(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SaberSound::__get__noSoundTopThresholdSqr()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& GlobalNamespace::SaberSound::__get__noSoundTopThresholdSqr() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__prevPos(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x48>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberSound::__get__prevPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberSound::__get__prevPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x48>(this);
}
constexpr void GlobalNamespace::SaberSound::__set__speed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SaberSound::__get__speed()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::SaberSound::__get__speed() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
inline void GlobalNamespace::SaberSound::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSound*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SaberSound::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSound*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SaberSound* GlobalNamespace::SaberSound::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberSound*>());
}
inline void GlobalNamespace::SaberSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSound*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
