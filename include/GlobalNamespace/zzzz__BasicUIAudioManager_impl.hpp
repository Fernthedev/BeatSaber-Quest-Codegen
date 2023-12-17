#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicUIAudioManager_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2274418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22744b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::OnDisable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2274584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager.HandleButtonClickEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::HandleButtonClickEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2274658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "HandleButtonClickEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicUIAudioManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicUIAudioManager::*)()>(&::GlobalNamespace::BasicUIAudioManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2274728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BasicUIAudioManager::__set__buttonClickEvents(::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>& GlobalNamespace::BasicUIAudioManager::__get__buttonClickEvents()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*> const& GlobalNamespace::BasicUIAudioManager::__get__buttonClickEvents() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x20>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::BasicUIAudioManager::__get__audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::BasicUIAudioManager::__get__audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x20>(this);
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__clickSounds(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::BasicUIAudioManager::__get__clickSounds()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::BasicUIAudioManager::__get__clickSounds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__minPitch(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BasicUIAudioManager::__get__minPitch()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::BasicUIAudioManager::__get__minPitch() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__maxPitch(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BasicUIAudioManager::__get__maxPitch()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::BasicUIAudioManager::__get__maxPitch() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::BasicUIAudioManager::__set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x38>(this, std::forward<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*>(value));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* GlobalNamespace::BasicUIAudioManager::__get__randomSoundPicker()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> GlobalNamespace::BasicUIAudioManager::__get__randomSoundPicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x38>(this);
}
inline void GlobalNamespace::BasicUIAudioManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BasicUIAudioManager::HandleButtonClickEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            "HandleButtonClickEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BasicUIAudioManager* GlobalNamespace::BasicUIAudioManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BasicUIAudioManager*>());
}
inline void GlobalNamespace::BasicUIAudioManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicUIAudioManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
