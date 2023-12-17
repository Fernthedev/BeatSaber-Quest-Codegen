#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMultiplayerLevelEndActionsListener)
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMultiplayerLevelEndActionsListener);
// Type: ::IMultiplayerLevelEndActionsListener
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5157))
// CS Name: ::IMultiplayerLevelEndActionsListener*
class CORDL_TYPE IMultiplayerLevelEndActionsListener {
public:
// Declarations
/// @brief Method ReportPlayerDidFinish addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults*  results) ;

/// @brief Method ReportPlayerNetworkDidFailed addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults*  results) ;

// Ctor Parameters [CppParam { name: "", ty: "IMultiplayerLevelEndActionsListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMultiplayerLevelEndActionsListener(IMultiplayerLevelEndActionsListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMultiplayerLevelEndActionsListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMultiplayerLevelEndActionsListener(IMultiplayerLevelEndActionsListener const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerLevelEndActionsListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerLevelEndActionsListener*, "", "IMultiplayerLevelEndActionsListener");
