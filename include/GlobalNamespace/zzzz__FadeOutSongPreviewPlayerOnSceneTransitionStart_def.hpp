#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FadeOutSongPreviewPlayerOnSceneTransitionStart)
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class GameScenesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutSongPreviewPlayerOnSceneTransitionStart;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart);
// Type: ::FadeOutSongPreviewPlayerOnSceneTransitionStart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4064))
// CS Name: ::FadeOutSongPreviewPlayerOnSceneTransitionStart*
class CORDL_TYPE FadeOutSongPreviewPlayerOnSceneTransitionStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _songPreviewPlayer offset 0x18
 __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer)) ::GlobalNamespace::AudioPlayerBase*  _songPreviewPlayer;

/// @brief Field _gameScenesManager offset 0x20
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

constexpr void __set__songPreviewPlayer(::GlobalNamespace::AudioPlayerBase*  value) ;

constexpr ::GlobalNamespace::AudioPlayerBase* __get__songPreviewPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPlayerBase*> __get__songPreviewPlayer() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

/// @brief Method Start addr 0x222de78 size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x222df04 size 0xd4 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleGameScenesManagerTransitionDidStart addr 0x222dfd8 size 0x38 virtual false final false
inline void HandleGameScenesManagerTransitionDidStart(float_t  duration) ;

static inline ::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart* New_ctor() ;

/// @brief Method .ctor addr 0x222e010 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutSongPreviewPlayerOnSceneTransitionStart", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FadeOutSongPreviewPlayerOnSceneTransitionStart(FadeOutSongPreviewPlayerOnSceneTransitionStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutSongPreviewPlayerOnSceneTransitionStart", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FadeOutSongPreviewPlayerOnSceneTransitionStart(FadeOutSongPreviewPlayerOnSceneTransitionStart const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FadeOutSongPreviewPlayerOnSceneTransitionStart()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*, "", "FadeOutSongPreviewPlayerOnSceneTransitionStart");
