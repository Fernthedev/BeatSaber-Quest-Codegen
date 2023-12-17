#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerGameplayAnimator)
namespace GlobalNamespace {
class CoreGameHUDController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class MultiplayerPositionHUDController;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
// Type: ::MultiplayerLocalActivePlayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5207))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5152))
// CS Name: ::MultiplayerLocalActivePlayerGameplayAnimator*
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::GlobalNamespace::MultiplayerGameplayAnimator)]{};

/// @brief Field _coreGameHUDController offset 0x68
 __declspec(property(get=__get__coreGameHUDController, put=__set__coreGameHUDController)) ::GlobalNamespace::CoreGameHUDController*  _coreGameHUDController;

/// @brief Field _multiplayerPositionHUDController offset 0x70
 __declspec(property(get=__get__multiplayerPositionHUDController, put=__set__multiplayerPositionHUDController)) ::GlobalNamespace::MultiplayerPositionHUDController*  _multiplayerPositionHUDController;

/// @brief Field _levelEndActionsPublisher offset 0x78
 __declspec(property(get=__get__levelEndActionsPublisher, put=__set__levelEndActionsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  _levelEndActionsPublisher;

/// @brief Field _fadeOutHUDTween offset 0x80
 __declspec(property(get=__get__fadeOutHUDTween, put=__set__fadeOutHUDTween)) ::Tweening::FloatTween*  _fadeOutHUDTween;

/// @brief Field _initialized offset 0x88
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

constexpr void __set__coreGameHUDController(::GlobalNamespace::CoreGameHUDController*  value) ;

constexpr ::GlobalNamespace::CoreGameHUDController* __get__coreGameHUDController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CoreGameHUDController*> __get__coreGameHUDController() const;

constexpr void __set__multiplayerPositionHUDController(::GlobalNamespace::MultiplayerPositionHUDController*  value) ;

constexpr ::GlobalNamespace::MultiplayerPositionHUDController* __get__multiplayerPositionHUDController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPositionHUDController*> __get__multiplayerPositionHUDController() const;

constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*  value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* __get__levelEndActionsPublisher() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> __get__levelEndActionsPublisher() const;

constexpr void __set__fadeOutHUDTween(::Tweening::FloatTween*  value) ;

constexpr ::Tweening::FloatTween* __get__fadeOutHUDTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> __get__fadeOutHUDTween() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

/// @brief Method OnDestroy addr 0x23dab3c size 0x114 virtual true final false
inline void OnDestroy() ;

/// @brief Method InitializeIfNeeded addr 0x23dac50 size 0xd0 virtual false final false
inline void InitializeIfNeeded() ;

/// @brief Method HandleStateChanged addr 0x23dad20 size 0x1a8 virtual true final false
inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State  state) ;

/// @brief Method AnimateNewLeaderSelected addr 0x23daf78 size 0xe4 virtual true final false
inline void AnimateNewLeaderSelected(bool  isLeading) ;

/// @brief Method TransitionIntoFailedState addr 0x23daec8 size 0xb0 virtual false final false
inline void TransitionIntoFailedState() ;

/// @brief Method HandlePlayerDidFinish addr 0x23db05c size 0x34 virtual false final false
inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  levelCompletionResults) ;

static inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x23db090 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <InitializeIfNeeded>b__6_0 addr 0x23db098 size 0x40 virtual false final false
inline void _InitializeIfNeeded_b__6_0(float_t  f) ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLocalActivePlayerGameplayAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*, "", "MultiplayerLocalActivePlayerGameplayAnimator");
