#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(LeaderboardViewController)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardViewController);
// Type: ::LeaderboardViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5650))
// CS Name: ::LeaderboardViewController*
class CORDL_TYPE LeaderboardViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::HMUI::ViewController)]{};

/// @brief Method SetData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void SetData(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap) ;

/// @brief Method RefreshLevelStats addr 0x22b5c14 size 0x4 virtual true final false
inline void RefreshLevelStats() ;

static inline ::GlobalNamespace::LeaderboardViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22b5c18 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardViewController(LeaderboardViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardViewController(LeaderboardViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeaderboardViewController()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardViewController, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardViewController*, "", "LeaderboardViewController");
