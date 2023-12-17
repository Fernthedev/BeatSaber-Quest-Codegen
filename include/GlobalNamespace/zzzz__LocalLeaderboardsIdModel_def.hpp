#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsIdModel)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsIdModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsIdModel);
// Type: ::LocalLeaderboardsIdModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4205))
// CS Name: ::LocalLeaderboardsIdModel*
class CORDL_TYPE LocalLeaderboardsIdModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetLocalLeaderboardID addr 0x2327554 size 0x8 virtual false final false
static inline ::StringW GetLocalLeaderboardID(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap) ;

static inline ::GlobalNamespace::LocalLeaderboardsIdModel* New_ctor() ;

/// @brief Method .ctor addr 0x232755c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalLeaderboardsIdModel(LocalLeaderboardsIdModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsIdModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalLeaderboardsIdModel(LocalLeaderboardsIdModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalLeaderboardsIdModel()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsIdModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsIdModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsIdModel*, "", "LocalLeaderboardsIdModel");
