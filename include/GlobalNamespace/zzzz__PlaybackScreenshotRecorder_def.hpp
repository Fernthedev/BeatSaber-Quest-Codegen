#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlaybackScreenshotRecorder)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class PlaybackRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaybackScreenshotRecorder;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlaybackScreenshotRecorder);
// Type: ::PlaybackScreenshotRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5926))
// CS Name: ::PlaybackScreenshotRecorder*
class CORDL_TYPE PlaybackScreenshotRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _directory offset 0x18
 __declspec(property(get=__get__directory, put=__set__directory)) ::StringW  _directory;

/// @brief Field _playbackRenderer offset 0x20
 __declspec(property(get=__get__playbackRenderer, put=__set__playbackRenderer)) ::GlobalNamespace::PlaybackRenderer*  _playbackRenderer;

/// @brief Field _frameNumber offset 0x28
 __declspec(property(get=__get__frameNumber, put=__set__frameNumber)) int32_t  _frameNumber;

 __declspec(property(get=get_directory)) ::StringW  directory;

constexpr void __set__directory(::StringW  value) ;

constexpr ::StringW& __get__directory() ;

constexpr ::StringW const& __get__directory() const;

constexpr void __set__playbackRenderer(::GlobalNamespace::PlaybackRenderer*  value) ;

constexpr ::GlobalNamespace::PlaybackRenderer* __get__playbackRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlaybackRenderer*> __get__playbackRenderer() const;

constexpr void __set__frameNumber(int32_t  value) ;

constexpr int32_t& __get__frameNumber() ;

constexpr int32_t const& __get__frameNumber() const;

/// @brief Method get_directory addr 0x2301358 size 0x8 virtual false final false
inline ::StringW get_directory() ;

/// @brief Method OnEnable addr 0x2301360 size 0x88 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x23013e8 size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method Init addr 0x22ffc90 size 0xf4 virtual false final false
inline void Init(::StringW  directory, int32_t  framerate, ::GlobalNamespace::PlaybackRenderer*  playbackRenderer) ;

/// @brief Method HandleTexturesReady addr 0x2301470 size 0x7c virtual false final false
inline void HandleTexturesReady() ;

/// @brief Method SaveScreenshot addr 0x23014ec size 0x134 virtual false final false
inline void SaveScreenshot(::UnityEngine::RenderTexture*  renderTexture, ::StringW  directory) ;

/// @brief Method ConvertRenderTexture addr 0x2301620 size 0x11c virtual false final false
static inline ::UnityEngine::Texture2D* ConvertRenderTexture(::UnityEngine::RenderTexture*  renderTexture) ;

static inline ::GlobalNamespace::PlaybackScreenshotRecorder* New_ctor() ;

/// @brief Method .ctor addr 0x230173c size 0x50 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaybackScreenshotRecorder(PlaybackScreenshotRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaybackScreenshotRecorder(PlaybackScreenshotRecorder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlaybackScreenshotRecorder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaybackScreenshotRecorder, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaybackScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackScreenshotRecorder*, "", "PlaybackScreenshotRecorder");
