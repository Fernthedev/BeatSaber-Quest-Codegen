#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SongTimeAnimationPlayer)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SongTimeAnimationPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongTimeAnimationPlayer);
// Type: ::SongTimeAnimationPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5384))
// CS Name: ::SongTimeAnimationPlayer*
class CORDL_TYPE SongTimeAnimationPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _animationClip offset 0x18
 __declspec(property(get=__get__animationClip, put=__set__animationClip)) ::UnityEngine::AnimationClip*  _animationClip;

/// @brief Field _audioTimeSyncController offset 0x20
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::AudioTimeSyncController*  _audioTimeSyncController;

constexpr void __set__animationClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get__animationClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get__animationClip() const;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> __get__audioTimeSyncController() const;

/// @brief Method Update addr 0x226ef14 size 0x44 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::SongTimeAnimationPlayer* New_ctor() ;

/// @brief Method .ctor addr 0x226ef58 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongTimeAnimationPlayer(SongTimeAnimationPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeAnimationPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongTimeAnimationPlayer(SongTimeAnimationPlayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongTimeAnimationPlayer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongTimeAnimationPlayer, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongTimeAnimationPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeAnimationPlayer*, "", "SongTimeAnimationPlayer");
