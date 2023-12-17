#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatEffectSpawner)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
namespace GlobalNamespace {
class __BeatEffect__Pool;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class SongController;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class __BeatEffectSpawner__InitData;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffectSpawner;
}
namespace GlobalNamespace {
class __BeatEffectSpawner__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatEffectSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__BeatEffectSpawner__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4885))
// CS Name: ::BeatEffectSpawner::InitData*
class CORDL_TYPE __BeatEffectSpawner__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field hideNoteSpawnEffect offset 0x10
 __declspec(property(get=__get_hideNoteSpawnEffect, put=__set_hideNoteSpawnEffect)) bool  hideNoteSpawnEffect;

constexpr void __set_hideNoteSpawnEffect(bool  value) ;

constexpr bool& __get_hideNoteSpawnEffect() ;

constexpr bool const& __get_hideNoteSpawnEffect() const;

static inline ::GlobalNamespace::__BeatEffectSpawner__InitData* New_ctor(bool  hideNoteSpawnEffect) ;

/// @brief Method .ctor addr 0x23a19f8 size 0x28 virtual false final false
inline void _ctor(bool  hideNoteSpawnEffect) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatEffectSpawner__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatEffectSpawner__InitData(__BeatEffectSpawner__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatEffectSpawner__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatEffectSpawner__InitData(__BeatEffectSpawner__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatEffectSpawner__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatEffectSpawner__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4886))
// CS Name: ::BeatEffectSpawner*
class CORDL_TYPE BeatEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__BeatEffectSpawner__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _effectDuration offset 0x18
 __declspec(property(get=__get__effectDuration, put=__set__effectDuration)) float_t  _effectDuration;

/// @brief Field _bombColorEffect offset 0x1c
 __declspec(property(get=__get__bombColorEffect, put=__set__bombColorEffect)) ::UnityEngine::Color  _bombColorEffect;

/// @brief Field _colorManager offset 0x30
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _beatmapObjectManager offset 0x38
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _audioTimeSyncController offset 0x40
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _initData offset 0x48
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__BeatEffectSpawner__InitData*  _initData;

/// @brief Field _bloomFog offset 0x50
 __declspec(property(get=__get__bloomFog, put=__set__bloomFog)) ::GlobalNamespace::BloomFogSO*  _bloomFog;

/// @brief Field _songController offset 0x58
 __declspec(property(get=__get__songController, put=__set__songController)) ::GlobalNamespace::SongController*  _songController;

/// @brief Field _beatEffectPoolContainer offset 0x60
 __declspec(property(get=__get__beatEffectPoolContainer, put=__set__beatEffectPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>*  _beatEffectPoolContainer;

/// @brief Convert operator to "::GlobalNamespace::IBeatEffectDidFinishEvent"
constexpr operator  ::GlobalNamespace::IBeatEffectDidFinishEvent*() noexcept;

constexpr void __set__effectDuration(float_t  value) ;

constexpr float_t& __get__effectDuration() ;

constexpr float_t const& __get__effectDuration() const;

constexpr void __set__bombColorEffect(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__bombColorEffect() ;

constexpr ::UnityEngine::Color const& __get__bombColorEffect() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__initData(::GlobalNamespace::__BeatEffectSpawner__InitData*  value) ;

constexpr ::GlobalNamespace::__BeatEffectSpawner__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatEffectSpawner__InitData*> __get__initData() const;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO*  value) ;

constexpr ::GlobalNamespace::BloomFogSO* __get__bloomFog() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> __get__bloomFog() const;

constexpr void __set__songController(::GlobalNamespace::SongController*  value) ;

constexpr ::GlobalNamespace::SongController* __get__songController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongController*> __get__songController() const;

constexpr void __set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>*  value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>* __get__beatEffectPoolContainer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect*>*> __get__beatEffectPoolContainer() const;

/// @brief Method Init addr 0x23a1318 size 0x84 virtual false final false
inline void Init(::GlobalNamespace::__BeatEffect__Pool*  beatEffectPool) ;

/// @brief Method Start addr 0x23a139c size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23a1428 size 0x98 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x23a14c0 size 0x184 virtual false final false
inline void Update() ;

/// @brief Method HandleNoteDidStartJump addr 0x23a1644 size 0x2c0 virtual false final false
inline void HandleNoteDidStartJump(::GlobalNamespace::NoteController*  noteController) ;

/// @brief Method HandleBeatEffectDidFinish addr 0x23a1904 size 0xd8 virtual true final true
inline void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect*  beatEffect) ;

static inline ::GlobalNamespace::BeatEffectSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23a19dc size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatEffectSpawner(BeatEffectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatEffectSpawner(BeatEffectSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatEffectSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatEffectSpawner, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffectSpawner*, "", "BeatEffectSpawner");
NEED_NO_BOX(::GlobalNamespace::__BeatEffectSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatEffectSpawner__InitData*, "", "BeatEffectSpawner/InitData");
