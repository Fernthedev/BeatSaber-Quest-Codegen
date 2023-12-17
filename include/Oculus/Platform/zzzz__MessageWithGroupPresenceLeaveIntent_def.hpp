#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithGroupPresenceLeaveIntent)
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithGroupPresenceLeaveIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
// Type: Oculus.Platform::MessageWithGroupPresenceLeaveIntent
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 972 }), TypeDefinitionIndex(TypeDefinitionIndex(13435)), TypeDefinitionIndex(TypeDefinitionIndex(13262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13290))
// CS Name: ::Oculus.Platform::MessageWithGroupPresenceLeaveIntent*
class CORDL_TYPE MessageWithGroupPresenceLeaveIntent : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>)]{};

static inline ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef088 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetGroupPresenceLeaveIntent addr 0x26f1a98 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetGroupPresenceLeaveIntent() ;

/// @brief Method GetDataFromMessage addr 0x26f1ad4 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithGroupPresenceLeaveIntent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithGroupPresenceLeaveIntent(MessageWithGroupPresenceLeaveIntent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithGroupPresenceLeaveIntent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*, "Oculus.Platform", "MessageWithGroupPresenceLeaveIntent");
