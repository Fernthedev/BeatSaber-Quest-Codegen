#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationTokenPlatformExtensions)
namespace GlobalNamespace {
struct __UserInfo__Platform;
}
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class AuthenticationTokenPlatformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
// Type: ::AuthenticationTokenPlatformExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14933))
// CS Name: ::AuthenticationTokenPlatformExtensions*
class CORDL_TYPE AuthenticationTokenPlatformExtensions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ToAuthenticationTokenPlatform addr 0x2635414 size 0x28 virtual false final false
static inline ::GlobalNamespace::__AuthenticationToken__Platform ToAuthenticationTokenPlatform(::GlobalNamespace::__UserInfo__Platform  platform) ;

/// @brief Method ToUserInfoPlatform addr 0x263543c size 0x2c virtual false final false
static inline ::GlobalNamespace::__UserInfo__Platform ToUserInfoPlatform(::GlobalNamespace::__AuthenticationToken__Platform  platform) ;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationTokenPlatformExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationTokenPlatformExtensions(AuthenticationTokenPlatformExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationTokenPlatformExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationTokenPlatformExtensions(AuthenticationTokenPlatformExtensions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthenticationTokenPlatformExtensions()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationTokenPlatformExtensions, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationTokenPlatformExtensions*, "", "AuthenticationTokenPlatformExtensions");
