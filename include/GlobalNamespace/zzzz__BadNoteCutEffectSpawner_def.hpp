#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BadNoteCutEffectSpawner)
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BadNoteCutEffectSpawner);
// Type: ::BadNoteCutEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4884))
// CS Name: ::BadNoteCutEffectSpawner*
class CORDL_TYPE BadNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _failFlyingSpriteSpawner offset 0x18
 __declspec(property(get=__get__failFlyingSpriteSpawner, put=__set__failFlyingSpriteSpawner)) ::GlobalNamespace::FlyingSpriteSpawner*  _failFlyingSpriteSpawner;

/// @brief Field _beatmapObjectManager offset 0x20
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

/// @brief Field _audioTimeSyncController offset 0x28
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

/// @brief Field _initData offset 0x30
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__CoreGameHUDController__InitData*  _initData;

constexpr void __set__failFlyingSpriteSpawner(::GlobalNamespace::FlyingSpriteSpawner*  value) ;

constexpr ::GlobalNamespace::FlyingSpriteSpawner* __get__failFlyingSpriteSpawner() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingSpriteSpawner*> __get__failFlyingSpriteSpawner() const;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

constexpr void __set__initData(::GlobalNamespace::__CoreGameHUDController__InitData*  value) ;

constexpr ::GlobalNamespace::__CoreGameHUDController__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> __get__initData() const;

/// @brief Method Start addr 0x23a0eb0 size 0xb4 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23a0f64 size 0x98 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x23a0ffc size 0x118 virtual false final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

static inline ::GlobalNamespace::BadNoteCutEffectSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23a1310 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BadNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BadNoteCutEffectSpawner(BadNoteCutEffectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadNoteCutEffectSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadNoteCutEffectSpawner(BadNoteCutEffectSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BadNoteCutEffectSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadNoteCutEffectSpawner, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BadNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadNoteCutEffectSpawner*, "", "BadNoteCutEffectSpawner");
