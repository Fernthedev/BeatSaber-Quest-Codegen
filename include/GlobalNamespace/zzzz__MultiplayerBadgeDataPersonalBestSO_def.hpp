#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataPersonalBestSO)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataPersonalBestSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO);
// Type: ::MultiplayerBadgeDataPersonalBestSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5108))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5105))
// CS Name: ::MultiplayerBadgeDataPersonalBestSO*
class CORDL_TYPE MultiplayerBadgeDataPersonalBestSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
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

/// @brief Method CalculateBadgeData addr 0x23cf314 size 0x550 virtual true final false
inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, float_t  randomMultiplier) ;

static inline ::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO* New_ctor() ;

/// @brief Method .ctor addr 0x23cf864 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataPersonalBestSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgeDataPersonalBestSO(MultiplayerBadgeDataPersonalBestSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataPersonalBestSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgeDataPersonalBestSO(MultiplayerBadgeDataPersonalBestSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgeDataPersonalBestSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*, "", "MultiplayerBadgeDataPersonalBestSO");
