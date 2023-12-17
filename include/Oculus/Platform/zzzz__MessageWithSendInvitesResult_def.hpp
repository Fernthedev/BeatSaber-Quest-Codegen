#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithSendInvitesResult)
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSendInvitesResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithSendInvitesResult);
// Type: Oculus.Platform::MessageWithSendInvitesResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4609 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13322))
// CS Name: ::Oculus.Platform::MessageWithSendInvitesResult*
class CORDL_TYPE MessageWithSendInvitesResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SendInvitesResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::SendInvitesResult*>)]{};

static inline ::Oculus::Platform::MessageWithSendInvitesResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef818 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetSendInvitesResult addr 0x26f3960 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::SendInvitesResult* GetSendInvitesResult() ;

/// @brief Method GetDataFromMessage addr 0x26f399c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::SendInvitesResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSendInvitesResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithSendInvitesResult(MessageWithSendInvitesResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSendInvitesResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithSendInvitesResult(MessageWithSendInvitesResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithSendInvitesResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithSendInvitesResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithSendInvitesResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSendInvitesResult*, "Oculus.Platform", "MessageWithSendInvitesResult");
