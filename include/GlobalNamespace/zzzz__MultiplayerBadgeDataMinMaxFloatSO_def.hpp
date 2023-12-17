#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerBadgeDataMinMaxFloatSO)
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
struct MultiplayerBadgeMinMax;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataMinMaxFloatSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO);
// Type: ::MultiplayerBadgeDataMinMaxFloatSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5108))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5103))
// CS Name: ::MultiplayerBadgeDataMinMaxFloatSO*
class CORDL_TYPE MultiplayerBadgeDataMinMaxFloatSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::MultiplayerBadgeDataSO)]{};

/// @brief Field _minMax offset 0x30
 __declspec(property(get=__get__minMax, put=__set__minMax)) ::GlobalNamespace::MultiplayerBadgeMinMax  _minMax;

/// @brief Field _weightMultiplier offset 0x34
 __declspec(property(get=__get__weightMultiplier, put=__set__weightMultiplier)) float_t  _weightMultiplier;

constexpr void __set__minMax(::GlobalNamespace::MultiplayerBadgeMinMax  value) ;

constexpr ::GlobalNamespace::MultiplayerBadgeMinMax& __get__minMax() ;

constexpr ::GlobalNamespace::MultiplayerBadgeMinMax const& __get__minMax() const;

constexpr void __set__weightMultiplier(float_t  value) ;

constexpr float_t& __get__weightMultiplier() ;

constexpr float_t const& __get__weightMultiplier() const;

/// @brief Method CalculateBadgeData addr 0x23cdcf8 size 0x14 virtual true final false
inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, float_t  randomMultiplier) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData*  result) ;

/// @brief Method CalculateMax addr 0x23cdd0c size 0x570 virtual false final false
inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateMax(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, float_t  randomMultiplier) ;

/// @brief Method CalculateMin addr 0x23ce27c size 0x57c virtual false final false
inline ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateMin(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, float_t  randomMultiplier) ;

static inline ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO* New_ctor() ;

/// @brief Method .ctor addr 0x23cdce8 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxFloatSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerBadgeDataMinMaxFloatSO(MultiplayerBadgeDataMinMaxFloatSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxFloatSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerBadgeDataMinMaxFloatSO(MultiplayerBadgeDataMinMaxFloatSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerBadgeDataMinMaxFloatSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*, "", "MultiplayerBadgeDataMinMaxFloatSO");
