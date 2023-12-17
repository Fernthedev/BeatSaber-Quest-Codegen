#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataHandMovementSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataHandMovementSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO);
// Type: ::MultiplayerBadgeDataHandMovementSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5103))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5102))
// CS Name: ::MultiplayerBadgeDataHandMovementSO*
class CORDL_TYPE MultiplayerBadgeDataHandMovementSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO)]{};

/// @brief Method GetValue addr 0x23cdcac size 0x2c virtual true final false
inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData*  result) ;

static inline ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO* New_ctor() ;

/// @brief Method .ctor addr 0x23cdcd8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgeDataHandMovementSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*, "", "MultiplayerBadgeDataHandMovementSO");
