#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsModelSO_def.hpp"
CORDL_MODULE_EXPORT(PS5LeaderboardIdsModelSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5LeaderboardIdsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5LeaderboardIdsModelSO);
// Type: ::PS5LeaderboardIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4583))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4562))
// CS Name: ::PS5LeaderboardIdsModelSO*
class CORDL_TYPE PS5LeaderboardIdsModelSO : public ::GlobalNamespace::SonyLeaderboardIdsModelSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::SonyLeaderboardIdsModelSO)]{};

/// @brief Method DoesSupport360 addr 0x23682b0 size 0x8 virtual true final false
inline bool DoesSupport360() ;

static inline ::GlobalNamespace::PS5LeaderboardIdsModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23682b8 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5LeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5LeaderboardIdsModelSO(PS5LeaderboardIdsModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5LeaderboardIdsModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5LeaderboardIdsModelSO(PS5LeaderboardIdsModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5LeaderboardIdsModelSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5LeaderboardIdsModelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5LeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5LeaderboardIdsModelSO*, "", "PS5LeaderboardIdsModelSO");
