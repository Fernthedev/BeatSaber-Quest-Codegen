#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelNoTransitionInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelNoTransitionInstaller);
// Type: ::MultiplayerLevelNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6040))
// CS Name: ::MultiplayerLevelNoTransitionInstaller*
class CORDL_TYPE MultiplayerLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Zenject::NoTransitionInstaller)]{};

static inline ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x231b6f0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerLevelNoTransitionInstaller(MultiplayerLevelNoTransitionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerLevelNoTransitionInstaller(MultiplayerLevelNoTransitionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerLevelNoTransitionInstaller()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelNoTransitionInstaller*, "", "MultiplayerLevelNoTransitionInstaller");
