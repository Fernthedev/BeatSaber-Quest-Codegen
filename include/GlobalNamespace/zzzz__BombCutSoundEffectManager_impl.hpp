#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__BombCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)()>(&::GlobalNamespace::BombCutSoundEffectManager::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x222c8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::BombCutSoundEffectManager::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x222c9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)()>(&::GlobalNamespace::BombCutSoundEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x222cbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager.HandleBombCutSoundEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)(::GlobalNamespace::BombCutSoundEffect*)>(&::GlobalNamespace::BombCutSoundEffectManager::HandleBombCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x222cc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "HandleBombCutSoundEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BombCutSoundEffect*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombCutSoundEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombCutSoundEffectManager::*)()>(&::GlobalNamespace::BombCutSoundEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x222cd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__volume(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BombCutSoundEffectManager::__get__volume()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::BombCutSoundEffectManager::__get__volume() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__bombExplosionAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::BombCutSoundEffectManager::__get__bombExplosionAudioClips()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::BombCutSoundEffectManager::__get__bombExplosionAudioClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::BombCutSoundEffectManager::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::BombCutSoundEffectManager::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x28>(this);
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set_saberManager(::GlobalNamespace::SaberManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberManager*, 0x30>(this, std::forward<::GlobalNamespace::SaberManager*>(value));
}
constexpr ::GlobalNamespace::SaberManager* GlobalNamespace::BombCutSoundEffectManager::__get_saberManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> GlobalNamespace::BombCutSoundEffectManager::__get_saberManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x30>(this);
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__bombCutSoundEffectPool(::GlobalNamespace::__BombCutSoundEffect__Pool*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BombCutSoundEffect__Pool*, 0x38>(this, std::forward<::GlobalNamespace::__BombCutSoundEffect__Pool*>(value));
}
constexpr ::GlobalNamespace::__BombCutSoundEffect__Pool* GlobalNamespace::BombCutSoundEffectManager::__get__bombCutSoundEffectPool()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BombCutSoundEffect__Pool*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BombCutSoundEffect__Pool*> GlobalNamespace::BombCutSoundEffectManager::__get__bombCutSoundEffectPool() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BombCutSoundEffect__Pool*, 0x38>(this);
}
constexpr void GlobalNamespace::BombCutSoundEffectManager::__set__randomSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x40>(this, std::forward<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*>(value));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* GlobalNamespace::BombCutSoundEffectManager::__get__randomSoundPicker()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> GlobalNamespace::BombCutSoundEffectManager::__get__randomSoundPicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x40>(this);
}
inline void GlobalNamespace::BombCutSoundEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BombCutSoundEffectManager::HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::BombCutSoundEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BombCutSoundEffectManager::HandleBombCutSoundEffectDidFinish(::GlobalNamespace::BombCutSoundEffect*  bombCutSoundEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            "HandleBombCutSoundEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BombCutSoundEffect*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bombCutSoundEffect);
}
inline ::GlobalNamespace::BombCutSoundEffectManager* GlobalNamespace::BombCutSoundEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BombCutSoundEffectManager*>());
}
inline void GlobalNamespace::BombCutSoundEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombCutSoundEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
