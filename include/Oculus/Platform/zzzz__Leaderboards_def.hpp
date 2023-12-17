#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Leaderboards)
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
// Forward declare root types
namespace Oculus::Platform {
class Leaderboards;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Leaderboards);
// Type: Oculus.Platform::Leaderboards
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13350))
// CS Name: ::Oculus.Platform::Leaderboards*
class CORDL_TYPE Leaderboards : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetNextEntries addr 0x26f5c14 size 0x17c virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetNextEntries(::Oculus::Platform::Models::LeaderboardEntryList*  list) ;

/// @brief Method GetPreviousEntries addr 0x26f5d90 size 0x17c virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetPreviousEntries(::Oculus::Platform::Models::LeaderboardEntryList*  list) ;

/// @brief Method Get addr 0x26f5f0c size 0x160 virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* Get(::StringW  leaderboardName) ;

/// @brief Method GetEntries addr 0x26f606c size 0x188 virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntries(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardFilterType  filter, ::Oculus::Platform::LeaderboardStartAt  startAt) ;

/// @brief Method GetEntriesAfterRank addr 0x26f61f4 size 0x178 virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesAfterRank(::StringW  leaderboardName, int32_t  limit, uint64_t  afterRank) ;

/// @brief Method GetEntriesByIds addr 0x26f636c size 0x19c virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardEntryList*>* GetEntriesByIds(::StringW  leaderboardName, int32_t  limit, ::Oculus::Platform::LeaderboardStartAt  startAt, ::ArrayW<uint64_t,::Array<uint64_t>*>  userIDs) ;

/// @brief Method WriteEntry addr 0x26f6508 size 0x19c virtual false final false
static inline ::Oculus::Platform::Request_1<bool>* WriteEntry(::StringW  leaderboardName, int64_t  score, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, bool  forceUpdate) ;

/// @brief Method WriteEntryWithSupplementaryMetric addr 0x26f66a4 size 0x1a4 virtual false final false
static inline ::Oculus::Platform::Request_1<bool>* WriteEntryWithSupplementaryMetric(::StringW  leaderboardName, int64_t  score, int64_t  supplementaryMetric, ::ArrayW<uint8_t,::Array<uint8_t>*>  extraData, bool  forceUpdate) ;

/// @brief Method GetNextLeaderboardListPage addr 0x26f6848 size 0x1dc virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LeaderboardList*>* GetNextLeaderboardListPage(::Oculus::Platform::Models::LeaderboardList*  list) ;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Leaderboards(Leaderboards && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboards", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Leaderboards(Leaderboards const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Leaderboards()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Leaderboards, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Leaderboards);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Leaderboards*, "Oculus.Platform", "Leaderboards");
