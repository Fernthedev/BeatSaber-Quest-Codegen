#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLeaderboardList)
namespace Oculus::Platform::Models {
class LeaderboardList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardList);
// Type: Oculus.Platform::MessageWithLeaderboardList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13448)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4592 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13298))
// CS Name: ::Oculus.Platform::MessageWithLeaderboardList*
class CORDL_TYPE MessageWithLeaderboardList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardList*>)]{};

static inline ::Oculus::Platform::MessageWithLeaderboardList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef298 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLeaderboardList addr 0x26f2208 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LeaderboardList* GetLeaderboardList() ;

/// @brief Method GetDataFromMessage addr 0x26f2244 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LeaderboardList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLeaderboardList(MessageWithLeaderboardList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLeaderboardList(MessageWithLeaderboardList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLeaderboardList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardList*, "Oculus.Platform", "MessageWithLeaderboardList");
