#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffectManager_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__NoteCutSoundEffectManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NoteCutSoundEffectManager__InitData::*)(bool, bool)>(&::GlobalNamespace::__NoteCutSoundEffectManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x222f804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__NoteCutSoundEffectManager__InitData::__set_useTestAudioClips(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_useTestAudioClips()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_useTestAudioClips() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::__NoteCutSoundEffectManager__InitData::__set_ignoreBadCuts(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_ignoreBadCuts()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& GlobalNamespace::__NoteCutSoundEffectManager__InitData::__get_ignoreBadCuts() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
inline ::GlobalNamespace::__NoteCutSoundEffectManager__InitData* GlobalNamespace::__NoteCutSoundEffectManager__InitData::New_ctor(bool  useTestAudioClips, bool  ignoreBadCuts)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>(useTestAudioClips, ignoreBadCuts));
}
inline void GlobalNamespace::__NoteCutSoundEffectManager__InitData::_ctor(bool  useTestAudioClips, bool  ignoreBadCuts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, useTestAudioClips, ignoreBadCuts);
}
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.get_handleWrongSaberTypeAsGood
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222ebc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "get_handleWrongSaberTypeAsGood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.set_handleWrongSaberTypeAsGood
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(bool)>(&::GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x222ebd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "set_handleWrongSaberTypeAsGood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::Start)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x222ebdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x222ee3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x222ef40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "HandleNoteWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x222f4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.HandleNoteCutSoundEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteCutSoundEffect*)>(&::GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x222f6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "HandleNoteCutSoundEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutSoundEffect*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager.IsSupportedNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutSoundEffectManager::*)(::GlobalNamespace::NoteData*)>(&::GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x222f4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "IsSupportedNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutSoundEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutSoundEffectManager::*)()>(&::GlobalNamespace::NoteCutSoundEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x222f784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
constexpr  GlobalNamespace::NoteCutSoundEffectManager::operator ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*() noexcept {
return static_cast<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__audioManager(::GlobalNamespace::AudioManagerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioManagerSO*, 0x18>(this, std::forward<::GlobalNamespace::AudioManagerSO*>(value));
}
constexpr ::GlobalNamespace::AudioManagerSO* GlobalNamespace::NoteCutSoundEffectManager::__get__audioManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> GlobalNamespace::NoteCutSoundEffectManager::__get__audioManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioManagerSO*, 0x18>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__audioSamplesBeatAlignOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__audioSamplesBeatAlignOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__audioSamplesBeatAlignOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__longCutEffectsAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::NoteCutSoundEffectManager::__get__longCutEffectsAudioClips()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__longCutEffectsAudioClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__shortCutEffectsAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& GlobalNamespace::NoteCutSoundEffectManager::__get__shortCutEffectsAudioClips()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& GlobalNamespace::NoteCutSoundEffectManager::__get__shortCutEffectsAudioClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>, 0x30>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__testAudioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0x38>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::NoteCutSoundEffectManager::__get__testAudioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::NoteCutSoundEffectManager::__get__testAudioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x38>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__initData(::GlobalNamespace::__NoteCutSoundEffectManager__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*, 0x40>(this, std::forward<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*>(value));
}
constexpr ::GlobalNamespace::__NoteCutSoundEffectManager__InitData* GlobalNamespace::NoteCutSoundEffectManager::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*> GlobalNamespace::NoteCutSoundEffectManager::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*, 0x40>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x48>(this, std::forward<::GlobalNamespace::BeatmapObjectManager*>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager* GlobalNamespace::NoteCutSoundEffectManager::__get__beatmapObjectManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> GlobalNamespace::NoteCutSoundEffectManager::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager*, 0x48>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__saberManager(::GlobalNamespace::SaberManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberManager*, 0x50>(this, std::forward<::GlobalNamespace::SaberManager*>(value));
}
constexpr ::GlobalNamespace::SaberManager* GlobalNamespace::NoteCutSoundEffectManager::__get__saberManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> GlobalNamespace::NoteCutSoundEffectManager::__get__saberManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberManager*, 0x50>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__noteCutSoundEffectPool(::GlobalNamespace::__NoteCutSoundEffect__Pool*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NoteCutSoundEffect__Pool*, 0x58>(this, std::forward<::GlobalNamespace::__NoteCutSoundEffect__Pool*>(value));
}
constexpr ::GlobalNamespace::__NoteCutSoundEffect__Pool* GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPool()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteCutSoundEffect__Pool*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutSoundEffect__Pool*> GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPool() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteCutSoundEffect__Pool*, 0x58>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x60>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::NoteCutSoundEffectManager::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::NoteCutSoundEffectManager::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x60>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__handleWrongSaberTypeAsGood_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager::__get__handleWrongSaberTypeAsGood_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager::__get__handleWrongSaberTypeAsGood_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__randomLongCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x70>(this, std::forward<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*>(value));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* GlobalNamespace::NoteCutSoundEffectManager::__get__randomLongCutSoundPicker()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> GlobalNamespace::NoteCutSoundEffectManager::__get__randomLongCutSoundPicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x70>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__randomShortCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x78>(this, std::forward<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*>(value));
}
constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* GlobalNamespace::NoteCutSoundEffectManager::__get__randomShortCutSoundPicker()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> GlobalNamespace::NoteCutSoundEffectManager::__get__randomShortCutSoundPicker() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*, 0x78>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteATime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteATime()  {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteATime() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteBTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteASoundEffect(::GlobalNamespace::NoteCutSoundEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutSoundEffect*, 0x88>(this, std::forward<::GlobalNamespace::NoteCutSoundEffect*>(value));
}
constexpr ::GlobalNamespace::NoteCutSoundEffect* GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteASoundEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutSoundEffect*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteASoundEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutSoundEffect*, 0x88>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__prevNoteBSoundEffect(::GlobalNamespace::NoteCutSoundEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutSoundEffect*, 0x90>(this, std::forward<::GlobalNamespace::NoteCutSoundEffect*>(value));
}
constexpr ::GlobalNamespace::NoteCutSoundEffect* GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBSoundEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutSoundEffect*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> GlobalNamespace::NoteCutSoundEffectManager::__get__prevNoteBSoundEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutSoundEffect*, 0x90>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__beatAlignOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteCutSoundEffectManager::__get__beatAlignOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& GlobalNamespace::NoteCutSoundEffectManager::__get__beatAlignOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__useTestAudioClips(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x9c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteCutSoundEffectManager::__get__useTestAudioClips()  {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this);
}
constexpr bool const& GlobalNamespace::NoteCutSoundEffectManager::__get__useTestAudioClips() const {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this);
}
constexpr void GlobalNamespace::NoteCutSoundEffectManager::__set__noteCutSoundEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*, 0xa0>(this, std::forward<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*>(value));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>* GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPoolContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*> GlobalNamespace::NoteCutSoundEffectManager::__get__noteCutSoundEffectPoolContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*, 0xa0>(this);
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::get_handleWrongSaberTypeAsGood()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "get_handleWrongSaberTypeAsGood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::set_handleWrongSaberTypeAsGood(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "set_handleWrongSaberTypeAsGood",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "HandleNoteWasSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::NoteCutSoundEffectManager::HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect*  noteCutSoundEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "HandleNoteCutSoundEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutSoundEffect*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteCutSoundEffect);
}
inline bool GlobalNamespace::NoteCutSoundEffectManager::IsSupportedNote(::GlobalNamespace::NoteData*  noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            "IsSupportedNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, noteData);
}
inline ::GlobalNamespace::NoteCutSoundEffectManager* GlobalNamespace::NoteCutSoundEffectManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutSoundEffectManager*>());
}
inline void GlobalNamespace::NoteCutSoundEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutSoundEffectManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
