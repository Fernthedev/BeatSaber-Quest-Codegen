#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalInactivePlayerOutroAnimator)
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class MultiplayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerOutroAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator);
// Type: ::MultiplayerLocalInactivePlayerOutroAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5163))
// CS Name: ::MultiplayerLocalInactivePlayerOutroAnimator*
class CORDL_TYPE MultiplayerLocalInactivePlayerOutroAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _outroPlayableDirector offset 0x18
 __declspec(property(get=__get__outroPlayableDirector, put=__set__outroPlayableDirector)) ::UnityEngine::Playables::PlayableDirector*  _outroPlayableDirector;

/// @brief Field _multiplayerController offset 0x20
 __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController)) ::GlobalNamespace::MultiplayerController*  _multiplayerController;

constexpr void __set__outroPlayableDirector(::UnityEngine::Playables::PlayableDirector*  value) ;

constexpr ::UnityEngine::Playables::PlayableDirector* __get__outroPlayableDirector() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> __get__outroPlayableDirector() const;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController*  value) ;

constexpr ::GlobalNamespace::MultiplayerController* __get__multiplayerController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> __get__multiplayerController() const;

/// @brief Method Start addr 0x23dd26c size 0x3c virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x23dd2a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerOutroAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalInactivePlayerOutroAnimator(MultiplayerLocalInactivePlayerOutroAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerOutroAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalInactivePlayerOutroAnimator(MultiplayerLocalInactivePlayerOutroAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalInactivePlayerOutroAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, "", "MultiplayerLocalInactivePlayerOutroAnimator");
