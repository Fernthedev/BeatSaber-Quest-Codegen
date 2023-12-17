#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupPresenceJoinIntent)
// Forward declare root types
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::GroupPresenceJoinIntent);
// Type: Oculus.Platform.Models::GroupPresenceJoinIntent
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13434))
// CS Name: ::Oculus.Platform.Models::GroupPresenceJoinIntent*
class CORDL_TYPE GroupPresenceJoinIntent : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field DeeplinkMessage offset 0x10
 __declspec(property(get=__get_DeeplinkMessage, put=__set_DeeplinkMessage)) ::StringW  DeeplinkMessage;

/// @brief Field DestinationApiName offset 0x18
 __declspec(property(get=__get_DestinationApiName, put=__set_DestinationApiName)) ::StringW  DestinationApiName;

/// @brief Field LobbySessionId offset 0x20
 __declspec(property(get=__get_LobbySessionId, put=__set_LobbySessionId)) ::StringW  LobbySessionId;

/// @brief Field MatchSessionId offset 0x28
 __declspec(property(get=__get_MatchSessionId, put=__set_MatchSessionId)) ::StringW  MatchSessionId;

constexpr void __set_DeeplinkMessage(::StringW  value) ;

constexpr ::StringW& __get_DeeplinkMessage() ;

constexpr ::StringW const& __get_DeeplinkMessage() const;

constexpr void __set_DestinationApiName(::StringW  value) ;

constexpr ::StringW& __get_DestinationApiName() ;

constexpr ::StringW const& __get_DestinationApiName() const;

constexpr void __set_LobbySessionId(::StringW  value) ;

constexpr ::StringW& __get_LobbySessionId() ;

constexpr ::StringW const& __get_LobbySessionId() const;

constexpr void __set_MatchSessionId(::StringW  value) ;

constexpr ::StringW& __get_MatchSessionId() ;

constexpr ::StringW const& __get_MatchSessionId() const;

static inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2705dfc size 0xa8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceJoinIntent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GroupPresenceJoinIntent(GroupPresenceJoinIntent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceJoinIntent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GroupPresenceJoinIntent(GroupPresenceJoinIntent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GroupPresenceJoinIntent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::GroupPresenceJoinIntent, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::GroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::GroupPresenceJoinIntent*, "Oculus.Platform.Models", "GroupPresenceJoinIntent");
