#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetXPlatformAccessTokenResponse)
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenResponse;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GetXPlatformAccessTokenResponse);
// Type: ::GetXPlatformAccessTokenResponse
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15999))
// CS Name: ::GetXPlatformAccessTokenResponse*
class CORDL_TYPE GetXPlatformAccessTokenResponse : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field accessToken offset 0x10
 __declspec(property(get=__get_accessToken, put=__set_accessToken)) ::StringW  accessToken;

constexpr void __set_accessToken(::StringW  value) ;

constexpr ::StringW& __get_accessToken() ;

constexpr ::StringW const& __get_accessToken() const;

static inline ::GlobalNamespace::GetXPlatformAccessTokenResponse* New_ctor(::StringW  accessToken) ;

/// @brief Method .ctor addr 0x28001b0 size 0x28 virtual false final false
inline void _ctor(::StringW  accessToken) ;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetXPlatformAccessTokenResponse(GetXPlatformAccessTokenResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetXPlatformAccessTokenResponse(GetXPlatformAccessTokenResponse const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GetXPlatformAccessTokenResponse()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenResponse, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenResponse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenResponse*, "", "GetXPlatformAccessTokenResponse");
