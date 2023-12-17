#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisconnectedReasonMethods)
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectedReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisconnectedReasonMethods);
// Type: ::DisconnectedReasonMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4486))
// CS Name: ::DisconnectedReasonMethods*
class CORDL_TYPE DisconnectedReasonMethods : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kDisconnectedUnknown offset 0x0
static constexpr ::ConstString  kDisconnectedUnknown{u"DISCONNECTED_UNKNOWN"};

/// @brief Field kDisconnectedUserInitiated offset 0x0
static constexpr ::ConstString  kDisconnectedUserInitiated{u"DISCONNECTED_USER_INITIATED"};

/// @brief Field kDisconnectedTimeout offset 0x0
static constexpr ::ConstString  kDisconnectedTimeout{u"DISCONNECTED_TIMEOUT"};

/// @brief Field kDisconnectedKicked offset 0x0
static constexpr ::ConstString  kDisconnectedKicked{u"DISCONNECTED_KICKED"};

/// @brief Field kDisconnectedServerAtCapacity offset 0x0
static constexpr ::ConstString  kDisconnectedServerAtCapacity{u"DISCONNECTED_SERVER_AT_CAPACITY"};

/// @brief Field kDisconnectedServerConnectionClosed offset 0x0
static constexpr ::ConstString  kDisconnectedServerConnectionClosed{u"DISCONNECTED_SERVER_SHUT_DOWN"};

/// @brief Field kDisconnectedMasterServerUnreachable offset 0x0
static constexpr ::ConstString  kDisconnectedMasterServerUnreachable{u"DISCONNECTED_MASTER_SERVER_UNREACHABLE"};

/// @brief Field kDisconnectedServerTerminated offset 0x0
static constexpr ::ConstString  kDisconnectedServerTerminated{u"DISCONNECTED_SERVER_SHUT_DOWN"};

/// @brief Method LocalizedKey addr 0x2355a4c size 0xa8 virtual false final false
static inline ::StringW LocalizedKey(::GlobalNamespace::DisconnectedReason  connectionFailedReason) ;

/// @brief Method ErrorCode addr 0x2355af4 size 0x80 virtual false final false
static inline ::StringW ErrorCode(::GlobalNamespace::DisconnectedReason  disconnectedReason) ;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectedReasonMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectedReasonMethods(DisconnectedReasonMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectedReasonMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectedReasonMethods(DisconnectedReasonMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisconnectedReasonMethods()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisconnectedReasonMethods, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisconnectedReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedReasonMethods*, "", "DisconnectedReasonMethods");
