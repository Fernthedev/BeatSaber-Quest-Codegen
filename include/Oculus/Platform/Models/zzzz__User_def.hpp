#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(User)
namespace Oculus::Platform {
struct UserPresenceStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class User;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::User);
// Type: Oculus.Platform.Models::User
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13484))
// CS Name: ::Oculus.Platform.Models::User*
class CORDL_TYPE User : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field DisplayName offset 0x10
 __declspec(property(get=__get_DisplayName, put=__set_DisplayName)) ::StringW  DisplayName;

/// @brief Field ID offset 0x18
 __declspec(property(get=__get__cordl_ID, put=__set__cordl_ID)) uint64_t  _cordl_ID;

/// @brief Field ImageURL offset 0x20
 __declspec(property(get=__get_ImageURL, put=__set_ImageURL)) ::StringW  ImageURL;

/// @brief Field OculusID offset 0x28
 __declspec(property(get=__get_OculusID, put=__set_OculusID)) ::StringW  OculusID;

/// @brief Field Presence offset 0x30
 __declspec(property(get=__get_Presence, put=__set_Presence)) ::StringW  Presence;

/// @brief Field PresenceDeeplinkMessage offset 0x38
 __declspec(property(get=__get_PresenceDeeplinkMessage, put=__set_PresenceDeeplinkMessage)) ::StringW  PresenceDeeplinkMessage;

/// @brief Field PresenceDestinationApiName offset 0x40
 __declspec(property(get=__get_PresenceDestinationApiName, put=__set_PresenceDestinationApiName)) ::StringW  PresenceDestinationApiName;

/// @brief Field PresenceLobbySessionId offset 0x48
 __declspec(property(get=__get_PresenceLobbySessionId, put=__set_PresenceLobbySessionId)) ::StringW  PresenceLobbySessionId;

/// @brief Field PresenceMatchSessionId offset 0x50
 __declspec(property(get=__get_PresenceMatchSessionId, put=__set_PresenceMatchSessionId)) ::StringW  PresenceMatchSessionId;

/// @brief Field PresenceStatus offset 0x58
 __declspec(property(get=__get_PresenceStatus, put=__set_PresenceStatus)) ::Oculus::Platform::UserPresenceStatus  PresenceStatus;

/// @brief Field SmallImageUrl offset 0x60
 __declspec(property(get=__get_SmallImageUrl, put=__set_SmallImageUrl)) ::StringW  SmallImageUrl;

constexpr void __set_DisplayName(::StringW  value) ;

constexpr ::StringW& __get_DisplayName() ;

constexpr ::StringW const& __get_DisplayName() const;

constexpr void __set__cordl_ID(uint64_t  value) ;

constexpr uint64_t& __get__cordl_ID() ;

constexpr uint64_t const& __get__cordl_ID() const;

constexpr void __set_ImageURL(::StringW  value) ;

constexpr ::StringW& __get_ImageURL() ;

constexpr ::StringW const& __get_ImageURL() const;

constexpr void __set_OculusID(::StringW  value) ;

constexpr ::StringW& __get_OculusID() ;

constexpr ::StringW const& __get_OculusID() const;

constexpr void __set_Presence(::StringW  value) ;

constexpr ::StringW& __get_Presence() ;

constexpr ::StringW const& __get_Presence() const;

constexpr void __set_PresenceDeeplinkMessage(::StringW  value) ;

constexpr ::StringW& __get_PresenceDeeplinkMessage() ;

constexpr ::StringW const& __get_PresenceDeeplinkMessage() const;

constexpr void __set_PresenceDestinationApiName(::StringW  value) ;

constexpr ::StringW& __get_PresenceDestinationApiName() ;

constexpr ::StringW const& __get_PresenceDestinationApiName() const;

constexpr void __set_PresenceLobbySessionId(::StringW  value) ;

constexpr ::StringW& __get_PresenceLobbySessionId() ;

constexpr ::StringW const& __get_PresenceLobbySessionId() const;

constexpr void __set_PresenceMatchSessionId(::StringW  value) ;

constexpr ::StringW& __get_PresenceMatchSessionId() ;

constexpr ::StringW const& __get_PresenceMatchSessionId() const;

constexpr void __set_PresenceStatus(::Oculus::Platform::UserPresenceStatus  value) ;

constexpr ::Oculus::Platform::UserPresenceStatus& __get_PresenceStatus() ;

constexpr ::Oculus::Platform::UserPresenceStatus const& __get_PresenceStatus() const;

constexpr void __set_SmallImageUrl(::StringW  value) ;

constexpr ::StringW& __get_SmallImageUrl() ;

constexpr ::StringW const& __get_SmallImageUrl() const;

static inline ::Oculus::Platform::Models::User* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x270414c size 0x118 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
User(User && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
User(User const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 User()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::User, 0x68>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::User);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::User*, "Oculus.Platform.Models", "User");
