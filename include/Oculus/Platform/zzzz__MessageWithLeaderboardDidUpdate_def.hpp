#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLeaderboardDidUpdate)
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLeaderboardDidUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLeaderboardDidUpdate);
// Type: Oculus.Platform::MessageWithLeaderboardDidUpdate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 105 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13333))
// CS Name: ::Oculus.Platform::MessageWithLeaderboardDidUpdate*
class CORDL_TYPE MessageWithLeaderboardDidUpdate : public ::Oculus::Platform::Message_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<bool>)]{};

static inline ::Oculus::Platform::MessageWithLeaderboardDidUpdate* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef348 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLeaderboardDidUpdate addr 0x26f42b8 size 0x3c virtual true final false
inline bool GetLeaderboardDidUpdate() ;

/// @brief Method GetDataFromMessage addr 0x26f42f4 size 0x5c virtual true final false
inline bool GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLeaderboardDidUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLeaderboardDidUpdate(MessageWithLeaderboardDidUpdate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLeaderboardDidUpdate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLeaderboardDidUpdate, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLeaderboardDidUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLeaderboardDidUpdate*, "Oculus.Platform", "MessageWithLeaderboardDidUpdate");
