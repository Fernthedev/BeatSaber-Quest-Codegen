#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataFullComboSO)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataFullComboSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataFullComboSO);
// Type: ::MultiplayerBadgeDataFullComboSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5108))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5100))
// CS Name: ::MultiplayerBadgeDataFullComboSO*
class CORDL_TYPE MultiplayerBadgeDataFullComboSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::MultiplayerBadgeDataSO)]{};

/// @brief Field _weight offset 0x30
 __declspec(property(get=__get__weight, put=__set__weight)) float_t  _weight;

constexpr void __set__weight(float_t  value) ;

constexpr float_t& __get__weight() ;

constexpr float_t const& __get__weight() const;

/// @brief Method CalculateBadgeData addr 0x23cd798 size 0x464 virtual true final false
inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, float_t  randomMultiplier) ;

static inline ::GlobalNamespace::MultiplayerBadgeDataFullComboSO* New_ctor() ;

/// @brief Method .ctor addr 0x23cdc5c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataFullComboSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgeDataFullComboSO(MultiplayerBadgeDataFullComboSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataFullComboSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgeDataFullComboSO(MultiplayerBadgeDataFullComboSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgeDataFullComboSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataFullComboSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataFullComboSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataFullComboSO*, "", "MultiplayerBadgeDataFullComboSO");
