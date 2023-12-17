#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerIntroAnimator)
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerIntroAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator);
// Type: ::MultiplayerLocalActivePlayerIntroAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5156))
// CS Name: ::MultiplayerLocalActivePlayerIntroAnimator*
class CORDL_TYPE MultiplayerLocalActivePlayerIntroAnimator : public ::UnityEngine::MonoBehaviour {
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

/// @brief Method SetBeforeIntroValues addr 0x23dc508 size 0x1c virtual false final false
inline void SetBeforeIntroValues() ;

/// @brief Method SetAfterIntroValues addr 0x23dc524 size 0x48 virtual false final false
inline void SetAfterIntroValues() ;

static inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x23dc56c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerIntroAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActivePlayerIntroAnimator(MultiplayerLocalActivePlayerIntroAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerIntroAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActivePlayerIntroAnimator(MultiplayerLocalActivePlayerIntroAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalActivePlayerIntroAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, "", "MultiplayerLocalActivePlayerIntroAnimator");
