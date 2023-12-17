#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncSessionsChangedNotification)
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncSessionsChangedNotification);
// Type: Oculus.Platform.Models::NetSyncSessionsChangedNotification
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13461))
// CS Name: ::Oculus.Platform.Models::NetSyncSessionsChangedNotification*
class CORDL_TYPE NetSyncSessionsChangedNotification : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field ConnectionId offset 0x10
 __declspec(property(get=__get_ConnectionId, put=__set_ConnectionId)) int64_t  ConnectionId;

/// @brief Field Sessions offset 0x18
 __declspec(property(get=__get_Sessions, put=__set_Sessions)) ::Oculus::Platform::Models::NetSyncSessionList*  Sessions;

constexpr void __set_ConnectionId(int64_t  value) ;

constexpr int64_t& __get_ConnectionId() ;

constexpr int64_t const& __get_ConnectionId() const;

constexpr void __set_Sessions(::Oculus::Platform::Models::NetSyncSessionList*  value) ;

constexpr ::Oculus::Platform::Models::NetSyncSessionList* __get_Sessions() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::NetSyncSessionList*> __get_Sessions() const;

static inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2707890 size 0xc0 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionsChangedNotification", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSyncSessionsChangedNotification(NetSyncSessionsChangedNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionsChangedNotification", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSyncSessionsChangedNotification(NetSyncSessionsChangedNotification const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetSyncSessionsChangedNotification()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncSessionsChangedNotification, 0x20>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSessionsChangedNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSessionsChangedNotification*, "Oculus.Platform.Models", "NetSyncSessionsChangedNotification");
