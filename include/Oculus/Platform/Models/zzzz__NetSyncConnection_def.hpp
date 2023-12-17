#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncConnection)
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncConnection);
// Type: Oculus.Platform.Models::NetSyncConnection
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13458))
// CS Name: ::Oculus.Platform.Models::NetSyncConnection*
class CORDL_TYPE NetSyncConnection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field ConnectionId offset 0x10
 __declspec(property(get=__get_ConnectionId, put=__set_ConnectionId)) int64_t  ConnectionId;

/// @brief Field DisconnectReason offset 0x18
 __declspec(property(get=__get_DisconnectReason, put=__set_DisconnectReason)) ::Oculus::Platform::NetSyncDisconnectReason  DisconnectReason;

/// @brief Field SessionId offset 0x20
 __declspec(property(get=__get_SessionId, put=__set_SessionId)) uint64_t  SessionId;

/// @brief Field Status offset 0x28
 __declspec(property(get=__get_Status, put=__set_Status)) ::Oculus::Platform::NetSyncConnectionStatus  Status;

/// @brief Field ZoneId offset 0x30
 __declspec(property(get=__get_ZoneId, put=__set_ZoneId)) ::StringW  ZoneId;

constexpr void __set_ConnectionId(int64_t  value) ;

constexpr int64_t& __get_ConnectionId() ;

constexpr int64_t const& __get_ConnectionId() const;

constexpr void __set_DisconnectReason(::Oculus::Platform::NetSyncDisconnectReason  value) ;

constexpr ::Oculus::Platform::NetSyncDisconnectReason& __get_DisconnectReason() ;

constexpr ::Oculus::Platform::NetSyncDisconnectReason const& __get_DisconnectReason() const;

constexpr void __set_SessionId(uint64_t  value) ;

constexpr uint64_t& __get_SessionId() ;

constexpr uint64_t const& __get_SessionId() const;

constexpr void __set_Status(::Oculus::Platform::NetSyncConnectionStatus  value) ;

constexpr ::Oculus::Platform::NetSyncConnectionStatus& __get_Status() ;

constexpr ::Oculus::Platform::NetSyncConnectionStatus const& __get_Status() const;

constexpr void __set_ZoneId(::StringW  value) ;

constexpr ::StringW& __get_ZoneId() ;

constexpr ::StringW const& __get_ZoneId() const;

static inline ::Oculus::Platform::Models::NetSyncConnection* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x27074e0 size 0xb8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSyncConnection(NetSyncConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSyncConnection(NetSyncConnection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetSyncConnection()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncConnection, 0x38>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncConnection*, "Oculus.Platform.Models", "NetSyncConnection");
