#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatmapCallbacksUpdater)
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksUpdater);
// Type: ::BeatmapCallbacksUpdater
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4709))
// CS Name: ::BeatmapCallbacksUpdater*
class CORDL_TYPE BeatmapCallbacksUpdater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _beatmapCallbacksController offset 0x18
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _audioTimeSource offset 0x20
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

/// @brief Method LateUpdate addr 0x237bb98 size 0x124 virtual false final false
inline void LateUpdate() ;

/// @brief Method Pause addr 0x237bcbc size 0xc virtual false final false
inline void Pause() ;

/// @brief Method Resume addr 0x237bcc8 size 0xc virtual false final false
inline void Resume() ;

static inline ::GlobalNamespace::BeatmapCallbacksUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x237bcd4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCallbacksUpdater(BeatmapCallbacksUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCallbacksUpdater(BeatmapCallbacksUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapCallbacksUpdater()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksUpdater, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksUpdater*, "", "BeatmapCallbacksUpdater");
