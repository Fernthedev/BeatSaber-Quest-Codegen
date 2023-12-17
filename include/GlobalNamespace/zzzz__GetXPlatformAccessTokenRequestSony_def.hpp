#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetXPlatformAccessTokenRequestSony)
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenRequestSony;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GetXPlatformAccessTokenRequestSony);
// Type: ::GetXPlatformAccessTokenRequestSony
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15997))
// CS Name: ::GetXPlatformAccessTokenRequestSony*
class CORDL_TYPE GetXPlatformAccessTokenRequestSony : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field platformToken offset 0x10
 __declspec(property(get=__get_platformToken, put=__set_platformToken)) ::StringW  platformToken;

/// @brief Field platformEnvironment offset 0x18
 __declspec(property(get=__get_platformEnvironment, put=__set_platformEnvironment)) ::GlobalNamespace::PlatformEnvironment  platformEnvironment;

constexpr void __set_platformToken(::StringW  value) ;

constexpr ::StringW& __get_platformToken() ;

constexpr ::StringW const& __get_platformToken() const;

constexpr void __set_platformEnvironment(::GlobalNamespace::PlatformEnvironment  value) ;

constexpr ::GlobalNamespace::PlatformEnvironment& __get_platformEnvironment() ;

constexpr ::GlobalNamespace::PlatformEnvironment const& __get_platformEnvironment() const;

static inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSony* New_ctor(::StringW  platformToken, ::GlobalNamespace::PlatformEnvironment  platformEnvironment) ;

/// @brief Method .ctor addr 0x2800154 size 0x30 virtual false final false
inline void _ctor(::StringW  platformToken, ::GlobalNamespace::PlatformEnvironment  platformEnvironment) ;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSony", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetXPlatformAccessTokenRequestSony(GetXPlatformAccessTokenRequestSony const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GetXPlatformAccessTokenRequestSony()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenRequestSony, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenRequestSony);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenRequestSony*, "", "GetXPlatformAccessTokenRequestSony");
