#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerEffectsSpawner)
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class BombExplosionEffect;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerEffectsSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner);
// Type: ::MultiplayerConnectedPlayerEffectsSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5120))
// CS Name: ::MultiplayerConnectedPlayerEffectsSpawner*
class CORDL_TYPE MultiplayerConnectedPlayerEffectsSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _noteDebrisSpawner offset 0x18
 __declspec(property(get=__get__noteDebrisSpawner, put=__set__noteDebrisSpawner)) ::GlobalNamespace::NoteDebrisSpawner*  _noteDebrisSpawner;

/// @brief Field _bombExplosionEffect offset 0x20
 __declspec(property(get=__get__bombExplosionEffect, put=__set__bombExplosionEffect)) ::GlobalNamespace::BombExplosionEffect*  _bombExplosionEffect;

/// @brief Field _beatmapObjectEventManager offset 0x28
 __declspec(property(get=__get__beatmapObjectEventManager, put=__set__beatmapObjectEventManager)) ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  _beatmapObjectEventManager;

constexpr void __set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner*  value) ;

constexpr ::GlobalNamespace::NoteDebrisSpawner* __get__noteDebrisSpawner() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebrisSpawner*> __get__noteDebrisSpawner() const;

constexpr void __set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect*  value) ;

constexpr ::GlobalNamespace::BombExplosionEffect* __get__bombExplosionEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombExplosionEffect*> __get__bombExplosionEffect() const;

constexpr void __set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* __get__beatmapObjectEventManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> __get__beatmapObjectEventManager() const;

/// @brief Method Start addr 0x23d4748 size 0xf0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23d4838 size 0x108 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut addr 0x23d4940 size 0x1f8 virtual false final false
inline void HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable*  noteCutInfo) ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23d4b38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerEffectsSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerEffectsSpawner(MultiplayerConnectedPlayerEffectsSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerEffectsSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerEffectsSpawner(MultiplayerConnectedPlayerEffectsSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerEffectsSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*, "", "MultiplayerConnectedPlayerEffectsSpawner");
