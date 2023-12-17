#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TlsProtocols)
// Forward declare root types
namespace Mono::Security::Interface {
struct TlsProtocols;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::TlsProtocols);
// Type: Mono.Security.Interface::TlsProtocols
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13786))
// CS Name: ::Mono.Security.Interface::TlsProtocols
struct CORDL_TYPE TlsProtocols : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TlsProtocols_Unwrapped
enum struct __TlsProtocols_Unwrapped : int32_t {
__E_Zero = static_cast<int32_t>(0x0),
__E_Tls10Client = static_cast<int32_t>(0x80),
__E_Tls10Server = static_cast<int32_t>(0x40),
__E_Tls10 = static_cast<int32_t>(0xc0),
__E_Tls11Client = static_cast<int32_t>(0x200),
__E_Tls11Server = static_cast<int32_t>(0x100),
__E_Tls11 = static_cast<int32_t>(0x300),
__E_Tls12Client = static_cast<int32_t>(0x800),
__E_Tls12Server = static_cast<int32_t>(0x400),
__E_Tls12 = static_cast<int32_t>(0xc00),
__E_ClientMask = static_cast<int32_t>(0xa80),
__E_ServerMask = static_cast<int32_t>(0x540),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Zero value: static_cast<int32_t>(0x0)
static ::Mono::Security::Interface::TlsProtocols const Zero;

/// @brief Field Tls10Client value: static_cast<int32_t>(0x80)
static ::Mono::Security::Interface::TlsProtocols const Tls10Client;

/// @brief Field Tls10Server value: static_cast<int32_t>(0x40)
static ::Mono::Security::Interface::TlsProtocols const Tls10Server;

/// @brief Field Tls10 value: static_cast<int32_t>(0xc0)
static ::Mono::Security::Interface::TlsProtocols const Tls10;

/// @brief Field Tls11Client value: static_cast<int32_t>(0x200)
static ::Mono::Security::Interface::TlsProtocols const Tls11Client;

/// @brief Field Tls11Server value: static_cast<int32_t>(0x100)
static ::Mono::Security::Interface::TlsProtocols const Tls11Server;

/// @brief Field Tls11 value: static_cast<int32_t>(0x300)
static ::Mono::Security::Interface::TlsProtocols const Tls11;

/// @brief Field Tls12Client value: static_cast<int32_t>(0x800)
static ::Mono::Security::Interface::TlsProtocols const Tls12Client;

/// @brief Field Tls12Server value: static_cast<int32_t>(0x400)
static ::Mono::Security::Interface::TlsProtocols const Tls12Server;

/// @brief Field Tls12 value: static_cast<int32_t>(0xc00)
static ::Mono::Security::Interface::TlsProtocols const Tls12;

/// @brief Field ClientMask value: static_cast<int32_t>(0xa80)
static ::Mono::Security::Interface::TlsProtocols const ClientMask;

/// @brief Field ServerMask value: static_cast<int32_t>(0x540)
static ::Mono::Security::Interface::TlsProtocols const ServerMask;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TlsProtocols_Unwrapped () const noexcept {
return std::bit_cast<__TlsProtocols_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TlsProtocols(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TlsProtocols(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TlsProtocols()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::TlsProtocols, 0x4>, "Size mismatch!");

} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::TlsProtocols, "Mono.Security.Interface", "TlsProtocols");
