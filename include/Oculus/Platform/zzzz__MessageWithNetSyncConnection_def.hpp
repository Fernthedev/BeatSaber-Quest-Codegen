#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncConnection)
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncConnection;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncConnection);
// Type: Oculus.Platform::MessageWithNetSyncConnection
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 978 }), TypeDefinitionIndex(TypeDefinitionIndex(13458))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13306))
// CS Name: ::Oculus.Platform::MessageWithNetSyncConnection*
class CORDL_TYPE MessageWithNetSyncConnection : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncConnection*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncConnection*>)]{};

static inline ::Oculus::Platform::MessageWithNetSyncConnection* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef450 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetNetSyncConnection addr 0x26f2a28 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection() ;

/// @brief Method GetDataFromMessage addr 0x26f2a64 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::NetSyncConnection* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithNetSyncConnection(MessageWithNetSyncConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithNetSyncConnection(MessageWithNetSyncConnection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithNetSyncConnection()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncConnection, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncConnection*, "Oculus.Platform", "MessageWithNetSyncConnection");
