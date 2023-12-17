#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchDetails)
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform {
struct LaunchType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchDetails);
// Type: Oculus.Platform.Models::LaunchDetails
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13442))
// CS Name: ::Oculus.Platform.Models::LaunchDetails*
class CORDL_TYPE LaunchDetails : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field DeeplinkMessage offset 0x10
 __declspec(property(get=__get_DeeplinkMessage, put=__set_DeeplinkMessage)) ::StringW  DeeplinkMessage;

/// @brief Field DestinationApiName offset 0x18
 __declspec(property(get=__get_DestinationApiName, put=__set_DestinationApiName)) ::StringW  DestinationApiName;

/// @brief Field LaunchSource offset 0x20
 __declspec(property(get=__get_LaunchSource, put=__set_LaunchSource)) ::StringW  LaunchSource;

/// @brief Field LaunchType offset 0x28
 __declspec(property(get=__get_LaunchType, put=__set_LaunchType)) ::Oculus::Platform::LaunchType  LaunchType;

/// @brief Field TrackingID offset 0x30
 __declspec(property(get=__get_TrackingID, put=__set_TrackingID)) ::StringW  TrackingID;

/// @brief Field UsersOptional offset 0x38
 __declspec(property(get=__get_UsersOptional, put=__set_UsersOptional)) ::Oculus::Platform::Models::UserList*  UsersOptional;

/// @brief Field Users offset 0x40
 __declspec(property(get=__get_Users, put=__set_Users)) ::Oculus::Platform::Models::UserList*  Users;

constexpr void __set_DeeplinkMessage(::StringW  value) ;

constexpr ::StringW& __get_DeeplinkMessage() ;

constexpr ::StringW const& __get_DeeplinkMessage() const;

constexpr void __set_DestinationApiName(::StringW  value) ;

constexpr ::StringW& __get_DestinationApiName() ;

constexpr ::StringW const& __get_DestinationApiName() const;

constexpr void __set_LaunchSource(::StringW  value) ;

constexpr ::StringW& __get_LaunchSource() ;

constexpr ::StringW const& __get_LaunchSource() const;

constexpr void __set_LaunchType(::Oculus::Platform::LaunchType  value) ;

constexpr ::Oculus::Platform::LaunchType& __get_LaunchType() ;

constexpr ::Oculus::Platform::LaunchType const& __get_LaunchType() const;

constexpr void __set_TrackingID(::StringW  value) ;

constexpr ::StringW& __get_TrackingID() ;

constexpr ::StringW const& __get_TrackingID() const;

constexpr void __set_UsersOptional(::Oculus::Platform::Models::UserList*  value) ;

constexpr ::Oculus::Platform::Models::UserList* __get_UsersOptional() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> __get_UsersOptional() const;

constexpr void __set_Users(::Oculus::Platform::Models::UserList*  value) ;

constexpr ::Oculus::Platform::Models::UserList* __get_Users() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> __get_Users() const;

static inline ::Oculus::Platform::Models::LaunchDetails* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2706494 size 0x140 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LaunchDetails(LaunchDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LaunchDetails", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LaunchDetails(LaunchDetails const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LaunchDetails()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchDetails, 0x48>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchDetails*, "Oculus.Platform.Models", "LaunchDetails");
