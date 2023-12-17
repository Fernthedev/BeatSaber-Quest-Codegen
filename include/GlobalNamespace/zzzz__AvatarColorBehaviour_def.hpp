#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarColorBehaviour)
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
struct Color;
}
namespace BeatSaber::AvatarCore {
class AvatarVisualController;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorBehaviour);
// Type: ::AvatarColorBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6004))
// CS Name: ::AvatarColorBehaviour*
class CORDL_TYPE AvatarColorBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field _startColor offset 0x10
 __declspec(property(get=__get__startColor, put=__set__startColor)) ::UnityEngine::Color  _startColor;

/// @brief Field _endColor offset 0x20
 __declspec(property(get=__get__endColor, put=__set__endColor)) ::UnityEngine::Color  _endColor;

/// @brief Field _easeType offset 0x30
 __declspec(property(get=__get__easeType, put=__set__easeType)) ::GlobalNamespace::EaseType  _easeType;

/// @brief Field _avatarVisualController offset 0x38
 __declspec(property(get=__get__avatarVisualController, put=__set__avatarVisualController)) ::BeatSaber::AvatarCore::AvatarVisualController*  _avatarVisualController;

/// @brief Field _duration offset 0x40
 __declspec(property(get=__get__duration, put=__set__duration)) float_t  _duration;

constexpr void __set__startColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__startColor() ;

constexpr ::UnityEngine::Color const& __get__startColor() const;

constexpr void __set__endColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__endColor() ;

constexpr ::UnityEngine::Color const& __get__endColor() const;

constexpr void __set__easeType(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__easeType() ;

constexpr ::GlobalNamespace::EaseType const& __get__easeType() const;

constexpr void __set__avatarVisualController(::BeatSaber::AvatarCore::AvatarVisualController*  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarVisualController* __get__avatarVisualController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarVisualController*> __get__avatarVisualController() const;

constexpr void __set__duration(float_t  value) ;

constexpr float_t& __get__duration() ;

constexpr float_t const& __get__duration() const;

/// @brief Method OnGraphStart addr 0x2315250 size 0x74 virtual true final false
inline void OnGraphStart(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method ProcessFrame addr 0x23152c4 size 0x1e8 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method OnPlayableDestroy addr 0x23154ac size 0x8c virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

static inline ::GlobalNamespace::AvatarColorBehaviour* New_ctor() ;

/// @brief Method .ctor addr 0x2315538 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarColorBehaviour(AvatarColorBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarColorBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarColorBehaviour(AvatarColorBehaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarColorBehaviour()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorBehaviour, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorBehaviour*, "", "AvatarColorBehaviour");
