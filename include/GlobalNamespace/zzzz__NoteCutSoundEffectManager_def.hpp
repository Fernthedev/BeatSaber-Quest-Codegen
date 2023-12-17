#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteCutSoundEffectManager)
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
namespace GlobalNamespace {
class __NoteCutSoundEffectManager__InitData;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class __NoteCutSoundEffect__Pool;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutSoundEffectManager;
}
namespace GlobalNamespace {
class __NoteCutSoundEffectManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutSoundEffectManager);
MARK_REF_PTR_T(::GlobalNamespace::__NoteCutSoundEffectManager__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4071))
// CS Name: ::NoteCutSoundEffectManager::InitData*
class CORDL_TYPE __NoteCutSoundEffectManager__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field useTestAudioClips offset 0x10
 __declspec(property(get=__get_useTestAudioClips, put=__set_useTestAudioClips)) bool  useTestAudioClips;

/// @brief Field ignoreBadCuts offset 0x11
 __declspec(property(get=__get_ignoreBadCuts, put=__set_ignoreBadCuts)) bool  ignoreBadCuts;

constexpr void __set_useTestAudioClips(bool  value) ;

constexpr bool& __get_useTestAudioClips() ;

constexpr bool const& __get_useTestAudioClips() const;

constexpr void __set_ignoreBadCuts(bool  value) ;

constexpr bool& __get_ignoreBadCuts() ;

constexpr bool const& __get_ignoreBadCuts() const;

static inline ::GlobalNamespace::__NoteCutSoundEffectManager__InitData* New_ctor(bool  useTestAudioClips, bool  ignoreBadCuts) ;

/// @brief Method .ctor addr 0x222f804 size 0x30 virtual false final false
inline void _ctor(bool  useTestAudioClips, bool  ignoreBadCuts) ;

// Ctor Parameters [CppParam { name: "", ty: "__NoteCutSoundEffectManager__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NoteCutSoundEffectManager__InitData(__NoteCutSoundEffectManager__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NoteCutSoundEffectManager__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NoteCutSoundEffectManager__InitData(__NoteCutSoundEffectManager__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NoteCutSoundEffectManager__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NoteCutSoundEffectManager__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::NoteCutSoundEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4072))
// CS Name: ::NoteCutSoundEffectManager*
class CORDL_TYPE NoteCutSoundEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__NoteCutSoundEffectManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMaxNumberOfEffects offset 0x0
static constexpr int32_t  kMaxNumberOfEffects{static_cast<int32_t>(0x40)};

/// @brief Field kTwoNotesAtTheSameTimeVolumeMul offset 0x0
static constexpr float_t  kTwoNotesAtTheSameTimeVolumeMul{0.9};

/// @brief Field kDenseNotesVolumeMul offset 0x0
static constexpr float_t  kDenseNotesVolumeMul{0.9};

/// @brief Field _audioManager offset 0x18
 __declspec(property(get=__get__audioManager, put=__set__audioManager)) ::GlobalNamespace::AudioManagerSO*  _audioManager;

/// @brief Field _audioSamplesBeatAlignOffset offset 0x20
 __declspec(property(get=__get__audioSamplesBeatAlignOffset, put=__set__audioSamplesBeatAlignOffset)) float_t  _audioSamplesBeatAlignOffset;

/// @brief Field _longCutEffectsAudioClips offset 0x28
 __declspec(property(get=__get__longCutEffectsAudioClips, put=__set__longCutEffectsAudioClips)) ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  _longCutEffectsAudioClips;

/// @brief Field _shortCutEffectsAudioClips offset 0x30
 __declspec(property(get=__get__shortCutEffectsAudioClips, put=__set__shortCutEffectsAudioClips)) ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  _shortCutEffectsAudioClips;

/// @brief Field _testAudioClip offset 0x38
 __declspec(property(get=__get__testAudioClip, put=__set__testAudioClip)) ::UnityEngine::AudioClip*  _testAudioClip;

/// @brief Field _initData offset 0x40
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__NoteCutSoundEffectManager__InitData*  _initData;

/// @brief Field _beatmapObjectManager offset 0x48
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _saberManager offset 0x50
 __declspec(property(get=__get__saberManager, put=__set__saberManager)) ::GlobalNamespace::SaberManager*  _saberManager;

/// @brief Field _noteCutSoundEffectPool offset 0x58
 __declspec(property(get=__get__noteCutSoundEffectPool, put=__set__noteCutSoundEffectPool)) ::GlobalNamespace::__NoteCutSoundEffect__Pool*  _noteCutSoundEffectPool;

/// @brief Field _audioTimeSyncController offset 0x60
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field <handleWrongSaberTypeAsGood>k__BackingField offset 0x68
 __declspec(property(get=__get__handleWrongSaberTypeAsGood_k__BackingField, put=__set__handleWrongSaberTypeAsGood_k__BackingField)) bool  _handleWrongSaberTypeAsGood_k__BackingField;

/// @brief Field _randomLongCutSoundPicker offset 0x70
 __declspec(property(get=__get__randomLongCutSoundPicker, put=__set__randomLongCutSoundPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  _randomLongCutSoundPicker;

/// @brief Field _randomShortCutSoundPicker offset 0x78
 __declspec(property(get=__get__randomShortCutSoundPicker, put=__set__randomShortCutSoundPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  _randomShortCutSoundPicker;

/// @brief Field _prevNoteATime offset 0x80
 __declspec(property(get=__get__prevNoteATime, put=__set__prevNoteATime)) float_t  _prevNoteATime;

/// @brief Field _prevNoteBTime offset 0x84
 __declspec(property(get=__get__prevNoteBTime, put=__set__prevNoteBTime)) float_t  _prevNoteBTime;

/// @brief Field _prevNoteASoundEffect offset 0x88
 __declspec(property(get=__get__prevNoteASoundEffect, put=__set__prevNoteASoundEffect)) ::GlobalNamespace::NoteCutSoundEffect*  _prevNoteASoundEffect;

/// @brief Field _prevNoteBSoundEffect offset 0x90
 __declspec(property(get=__get__prevNoteBSoundEffect, put=__set__prevNoteBSoundEffect)) ::GlobalNamespace::NoteCutSoundEffect*  _prevNoteBSoundEffect;

/// @brief Field _beatAlignOffset offset 0x98
 __declspec(property(get=__get__beatAlignOffset, put=__set__beatAlignOffset)) float_t  _beatAlignOffset;

/// @brief Field _useTestAudioClips offset 0x9c
 __declspec(property(get=__get__useTestAudioClips, put=__set__useTestAudioClips)) bool  _useTestAudioClips;

/// @brief Field _noteCutSoundEffectPoolContainer offset 0xa0
 __declspec(property(get=__get__noteCutSoundEffectPoolContainer, put=__set__noteCutSoundEffectPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*  _noteCutSoundEffectPoolContainer;

 __declspec(property(get=get_handleWrongSaberTypeAsGood, put=set_handleWrongSaberTypeAsGood)) bool  handleWrongSaberTypeAsGood;

/// @brief Convert operator to "::GlobalNamespace::INoteCutSoundEffectDidFinishEvent"
constexpr operator  ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*() noexcept;

constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO*  value) ;

constexpr ::GlobalNamespace::AudioManagerSO* __get__audioManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> __get__audioManager() const;

constexpr void __set__audioSamplesBeatAlignOffset(float_t  value) ;

constexpr float_t& __get__audioSamplesBeatAlignOffset() ;

constexpr float_t const& __get__audioSamplesBeatAlignOffset() const;

constexpr void __set__longCutEffectsAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& __get__longCutEffectsAudioClips() ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& __get__longCutEffectsAudioClips() const;

constexpr void __set__shortCutEffectsAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& __get__shortCutEffectsAudioClips() ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& __get__shortCutEffectsAudioClips() const;

constexpr void __set__testAudioClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__testAudioClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__testAudioClip() const;

constexpr void __set__initData(::GlobalNamespace::__NoteCutSoundEffectManager__InitData*  value) ;

constexpr ::GlobalNamespace::__NoteCutSoundEffectManager__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutSoundEffectManager__InitData*> __get__initData() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__saberManager(::GlobalNamespace::SaberManager*  value) ;

constexpr ::GlobalNamespace::SaberManager* __get__saberManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> __get__saberManager() const;

constexpr void __set__noteCutSoundEffectPool(::GlobalNamespace::__NoteCutSoundEffect__Pool*  value) ;

constexpr ::GlobalNamespace::__NoteCutSoundEffect__Pool* __get__noteCutSoundEffectPool() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteCutSoundEffect__Pool*> __get__noteCutSoundEffectPool() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__handleWrongSaberTypeAsGood_k__BackingField(bool  value) ;

constexpr bool& __get__handleWrongSaberTypeAsGood_k__BackingField() ;

constexpr bool const& __get__handleWrongSaberTypeAsGood_k__BackingField() const;

constexpr void __set__randomLongCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value) ;

constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* __get__randomLongCutSoundPicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> __get__randomLongCutSoundPicker() const;

constexpr void __set__randomShortCutSoundPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value) ;

constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* __get__randomShortCutSoundPicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> __get__randomShortCutSoundPicker() const;

constexpr void __set__prevNoteATime(float_t  value) ;

constexpr float_t& __get__prevNoteATime() ;

constexpr float_t const& __get__prevNoteATime() const;

constexpr void __set__prevNoteBTime(float_t  value) ;

constexpr float_t& __get__prevNoteBTime() ;

constexpr float_t const& __get__prevNoteBTime() const;

constexpr void __set__prevNoteASoundEffect(::GlobalNamespace::NoteCutSoundEffect*  value) ;

constexpr ::GlobalNamespace::NoteCutSoundEffect* __get__prevNoteASoundEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> __get__prevNoteASoundEffect() const;

constexpr void __set__prevNoteBSoundEffect(::GlobalNamespace::NoteCutSoundEffect*  value) ;

constexpr ::GlobalNamespace::NoteCutSoundEffect* __get__prevNoteBSoundEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteCutSoundEffect*> __get__prevNoteBSoundEffect() const;

constexpr void __set__beatAlignOffset(float_t  value) ;

constexpr float_t& __get__beatAlignOffset() ;

constexpr float_t const& __get__beatAlignOffset() const;

constexpr void __set__useTestAudioClips(bool  value) ;

constexpr bool& __get__useTestAudioClips() ;

constexpr bool const& __get__useTestAudioClips() const;

constexpr void __set__noteCutSoundEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*  value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>* __get__noteCutSoundEffectPoolContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::NoteCutSoundEffect*>*> __get__noteCutSoundEffectPoolContainer() const;

/// @brief Method get_handleWrongSaberTypeAsGood addr 0x222ebc8 size 0x8 virtual false final false
inline bool get_handleWrongSaberTypeAsGood() ;

/// @brief Method set_handleWrongSaberTypeAsGood addr 0x222ebd0 size 0xc virtual false final false
inline void set_handleWrongSaberTypeAsGood(bool  value) ;

/// @brief Method Start addr 0x222ebdc size 0x260 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x222ee3c size 0x104 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleNoteWasSpawned addr 0x222ef40 size 0x580 virtual false final false
inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController*  noteController) ;

/// @brief Method HandleNoteWasCut addr 0x222f4fc size 0x1b0 virtual false final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

/// @brief Method HandleNoteCutSoundEffectDidFinish addr 0x222f6ac size 0xd8 virtual true final true
inline void HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect*  noteCutSoundEffect) ;

/// @brief Method IsSupportedNote addr 0x222f4c0 size 0x3c virtual false final false
inline bool IsSupportedNote(::GlobalNamespace::NoteData*  noteData) ;

static inline ::GlobalNamespace::NoteCutSoundEffectManager* New_ctor() ;

/// @brief Method .ctor addr 0x222f784 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteCutSoundEffectManager(NoteCutSoundEffectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteCutSoundEffectManager(NoteCutSoundEffectManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteCutSoundEffectManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutSoundEffectManager, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffectManager*, "", "NoteCutSoundEffectManager");
NEED_NO_BOX(::GlobalNamespace::__NoteCutSoundEffectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NoteCutSoundEffectManager__InitData*, "", "NoteCutSoundEffectManager/InitData");
