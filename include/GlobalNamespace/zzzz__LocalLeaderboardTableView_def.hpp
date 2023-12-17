#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LeaderboardTableView_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardTableView)
namespace GlobalNamespace {
class __LocalLeaderboardsModel__ScoreData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardTableView);
// Type: ::LocalLeaderboardTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5789))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5796))
// CS Name: ::LocalLeaderboardTableView*
class CORDL_TYPE LocalLeaderboardTableView : public ::GlobalNamespace::LeaderboardTableView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LeaderboardTableView)]{};

/// @brief Method SetScores addr 0x22e731c size 0x28c virtual false final false
inline void SetScores(::System::Collections::Generic::List_1<::GlobalNamespace::__LocalLeaderboardsModel__ScoreData*>*  scores, int32_t  specialScorePos, int32_t  maxNumberOfCells) ;

static inline ::GlobalNamespace::LocalLeaderboardTableView* New_ctor() ;

/// @brief Method .ctor addr 0x22e75a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardTableView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalLeaderboardTableView(LocalLeaderboardTableView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardTableView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalLeaderboardTableView(LocalLeaderboardTableView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalLeaderboardTableView()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardTableView, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardTableView*, "", "LocalLeaderboardTableView");
