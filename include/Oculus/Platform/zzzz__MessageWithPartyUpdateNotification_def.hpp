#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPartyUpdateNotification)
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPartyUpdateNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPartyUpdateNotification);
// Type: Oculus.Platform::MessageWithPartyUpdateNotification
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13468)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 981 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13315))
// CS Name: ::Oculus.Platform::MessageWithPartyUpdateNotification*
class CORDL_TYPE MessageWithPartyUpdateNotification : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PartyUpdateNotification*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PartyUpdateNotification*>)]{};

static inline ::Oculus::Platform::MessageWithPartyUpdateNotification* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef5b0 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetPartyUpdateNotification addr 0x26f3378 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::PartyUpdateNotification* GetPartyUpdateNotification() ;

/// @brief Method GetDataFromMessage addr 0x26f33b4 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::PartyUpdateNotification* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUpdateNotification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithPartyUpdateNotification(MessageWithPartyUpdateNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPartyUpdateNotification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithPartyUpdateNotification(MessageWithPartyUpdateNotification const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithPartyUpdateNotification()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPartyUpdateNotification, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPartyUpdateNotification*, "Oculus.Platform", "MessageWithPartyUpdateNotification");
