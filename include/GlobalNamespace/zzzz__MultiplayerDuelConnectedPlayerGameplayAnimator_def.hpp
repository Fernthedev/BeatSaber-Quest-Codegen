#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerDuelConnectedPlayerGameplayAnimator)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class ScaleAnimator;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerDuelConnectedPlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator);
// Type: ::MultiplayerDuelConnectedPlayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5207))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5129))
// CS Name: ::MultiplayerDuelConnectedPlayerGameplayAnimator*
class CORDL_TYPE MultiplayerDuelConnectedPlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::GlobalNamespace::MultiplayerGameplayAnimator)]{};

/// @brief Field _avatarScaleAnimator offset 0x68
 __declspec(property(get=__get__avatarScaleAnimator, put=__set__avatarScaleAnimator)) ::GlobalNamespace::ScaleAnimator*  _avatarScaleAnimator;

/// @brief Field _failController offset 0x70
 __declspec(property(get=__get__failController, put=__set__failController)) ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*  _failController;

constexpr void __set__avatarScaleAnimator(::GlobalNamespace::ScaleAnimator*  value) ;

constexpr ::GlobalNamespace::ScaleAnimator* __get__avatarScaleAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScaleAnimator*> __get__avatarScaleAnimator() const;

constexpr void __set__failController(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*  value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* __get__failController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*> __get__failController() const;

/// @brief Method OnDestroy addr 0x23d6c40 size 0xdc virtual true final false
inline void OnDestroy() ;

/// @brief Method TransitionIntoFailedState addr 0x23d6d1c size 0xd4 virtual false final false
inline void TransitionIntoFailedState() ;

/// @brief Method AnimateNewLeaderSelected addr 0x23d6df0 size 0xdc virtual true final false
inline void AnimateNewLeaderSelected(bool  isLeading) ;

/// @brief Method HandleStateChanged addr 0x23d6ecc size 0x110 virtual true final false
inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  state) ;

/// @brief Method HandlePlayerDidFail addr 0x23d6fdc size 0x4 virtual false final false
inline void HandlePlayerDidFail() ;

static inline ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x23d6fe0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelConnectedPlayerGameplayAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerDuelConnectedPlayerGameplayAnimator(MultiplayerDuelConnectedPlayerGameplayAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelConnectedPlayerGameplayAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerDuelConnectedPlayerGameplayAnimator(MultiplayerDuelConnectedPlayerGameplayAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerDuelConnectedPlayerGameplayAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*, "", "MultiplayerDuelConnectedPlayerGameplayAnimator");
