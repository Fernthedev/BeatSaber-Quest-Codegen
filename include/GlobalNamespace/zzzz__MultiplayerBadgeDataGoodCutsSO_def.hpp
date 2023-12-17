#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataGoodCutsSO)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataGoodCutsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO);
// Type: ::MultiplayerBadgeDataGoodCutsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5104))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5101))
// CS Name: ::MultiplayerBadgeDataGoodCutsSO*
class CORDL_TYPE MultiplayerBadgeDataGoodCutsSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO)]{};

/// @brief Method GetValue addr 0x23cdc74 size 0x28 virtual true final false
inline int32_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData*  result) ;

static inline ::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO* New_ctor() ;

/// @brief Method .ctor addr 0x23cdc9c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataGoodCutsSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgeDataGoodCutsSO(MultiplayerBadgeDataGoodCutsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataGoodCutsSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgeDataGoodCutsSO(MultiplayerBadgeDataGoodCutsSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgeDataGoodCutsSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*, "", "MultiplayerBadgeDataGoodCutsSO");
