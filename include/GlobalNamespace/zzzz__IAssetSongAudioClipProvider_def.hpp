#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAssetSongAudioClipProvider)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAssetSongAudioClipProvider);
// Type: ::IAssetSongAudioClipProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5890))
// CS Name: ::IAssetSongAudioClipProvider*
class CORDL_TYPE IAssetSongAudioClipProvider {
public:
// Declarations
 __declspec(property(get=get_songAudioClip)) ::UnityEngine::AudioClip*  songAudioClip;

/// @brief Method get_songAudioClip addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::AudioClip* get_songAudioClip() ;

// Ctor Parameters [CppParam { name: "", ty: "IAssetSongAudioClipProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IAssetSongAudioClipProvider(IAssetSongAudioClipProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IAssetSongAudioClipProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAssetSongAudioClipProvider(IAssetSongAudioClipProvider const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAssetSongAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongAudioClipProvider*, "", "IAssetSongAudioClipProvider");
