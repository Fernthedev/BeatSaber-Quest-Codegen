#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutCoreEffectsSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__ShockwaveEffect_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23a2554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23a25e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x23a2678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.PlayHitNoteHapticEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(::GlobalNamespace::NoteCutInfo, ::GlobalNamespace::__NoteCutHapticEffect__Type)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitNoteHapticEffect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23a2db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "PlayHitNoteHapticEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.SpawnNoteCutEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*, int32_t, int32_t)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x23a2844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "SpawnNoteCutEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner.SpawnBombCutEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)(ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteController*)>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23a27f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "SpawnBombCutEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutCoreEffectsSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutCoreEffectsSpawner::*)()>(&::GlobalNamespace::NoteCutCoreEffectsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23a3690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__shockWaveYPos(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutCoreEffectsSpawner::__get__shockWaveYPos()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::NoteCutCoreEffectsSpawner::__get__shockWaveYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__noteCutParticlesEffect(::GlobalNamespace::NoteCutParticlesEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutParticlesEffect*, 0x20>(this, std::forward<::GlobalNamespace::NoteCutParticlesEffect*>(value));
}
constexpr ::GlobalNamespace::NoteCutParticlesEffect* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__noteCutParticlesEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutParticlesEffect*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutParticlesEffect*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__noteCutParticlesEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutParticlesEffect*, 0x20>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteDebrisSpawner*, 0x28>(this, std::forward<::GlobalNamespace::NoteDebrisSpawner*>(value));
}
constexpr ::GlobalNamespace::NoteDebrisSpawner* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__noteDebrisSpawner()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteDebrisSpawner*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebrisSpawner*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__noteDebrisSpawner() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteDebrisSpawner*, 0x28>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__noteCutHapticEffect(::GlobalNamespace::NoteCutHapticEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutHapticEffect*, 0x30>(this, std::forward<::GlobalNamespace::NoteCutHapticEffect*>(value));
}
constexpr ::GlobalNamespace::NoteCutHapticEffect* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__noteCutHapticEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutHapticEffect*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutHapticEffect*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__noteCutHapticEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutHapticEffect*, 0x30>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__shockwaveEffect(::GlobalNamespace::ShockwaveEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ShockwaveEffect*, 0x38>(this, std::forward<::GlobalNamespace::ShockwaveEffect*>(value));
}
constexpr ::GlobalNamespace::ShockwaveEffect* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__shockwaveEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ShockwaveEffect*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ShockwaveEffect*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__shockwaveEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ShockwaveEffect*, 0x38>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BombExplosionEffect*, 0x40>(this, std::forward<::GlobalNamespace::BombExplosionEffect*>(value));
}
constexpr ::GlobalNamespace::BombExplosionEffect* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__bombExplosionEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BombExplosionEffect*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombExplosionEffect*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__bombExplosionEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BombExplosionEffect*, 0x40>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__colorManager(::GlobalNamespace::ColorManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager*, 0x48>(this, std::forward<::GlobalNamespace::ColorManager*>(value));
}
constexpr ::GlobalNamespace::ColorManager* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__colorManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x48>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x50>(this);
}
constexpr void GlobalNamespace::NoteCutCoreEffectsSpawner::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x58>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::NoteCutCoreEffectsSpawner::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::NoteCutCoreEffectsSpawner::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x58>(this);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::PlayHitNoteHapticEffect(::GlobalNamespace::NoteCutInfo  noteCutInfo, ::GlobalNamespace::__NoteCutHapticEffect__Type  hapticType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "PlayHitNoteHapticEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteCutInfo, hapticType);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect(ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo, ::GlobalNamespace::NoteController*  noteController, int32_t  sparkleParticlesCount, int32_t  explosionParticlesCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "SpawnNoteCutEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteCutInfo, noteController, sparkleParticlesCount, explosionParticlesCount);
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect(ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo, ::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            "SpawnBombCutEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteCutInfo, noteController);
}
inline ::GlobalNamespace::NoteCutCoreEffectsSpawner* GlobalNamespace::NoteCutCoreEffectsSpawner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutCoreEffectsSpawner*>());
}
inline void GlobalNamespace::NoteCutCoreEffectsSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutCoreEffectsSpawner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
