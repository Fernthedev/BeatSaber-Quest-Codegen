#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerIntroAnimator)
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerIntroAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator);
// Type: ::MultiplayerConnectedPlayerIntroAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5125))
// CS Name: ::MultiplayerConnectedPlayerIntroAnimator*
class CORDL_TYPE MultiplayerConnectedPlayerIntroAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _introPlayableDirector offset 0x18
 __declspec(property(get=__get__introPlayableDirector, put=__set__introPlayableDirector)) ::UnityEngine::Playables::PlayableDirector*  _introPlayableDirector;

constexpr void __set__introPlayableDirector(::UnityEngine::Playables::PlayableDirector*  value) ;

constexpr ::UnityEngine::Playables::PlayableDirector* __get__introPlayableDirector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> __get__introPlayableDirector() const;

/// @brief Method SetBeforeIntroValues addr 0x23d64dc size 0x1c virtual false final false
inline void SetBeforeIntroValues() ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x23d64f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerIntroAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerIntroAnimator(MultiplayerConnectedPlayerIntroAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerIntroAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerIntroAnimator(MultiplayerConnectedPlayerIntroAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerIntroAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator*, "", "MultiplayerConnectedPlayerIntroAnimator");
