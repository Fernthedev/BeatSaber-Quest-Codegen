#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_in)
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct sockaddr_in;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::MacOsStructs::sockaddr_in);
// Type: System.Net.NetworkInformation.MacOsStructs::sockaddr_in
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9296))
// CS Name: ::System.Net.NetworkInformation.MacOsStructs::sockaddr_in
struct CORDL_TYPE sockaddr_in : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field sin_len offset 0x0
 __declspec(property(get=__get_sin_len, put=__set_sin_len)) uint8_t  sin_len;

/// @brief Field sin_family offset 0x1
 __declspec(property(get=__get_sin_family, put=__set_sin_family)) uint8_t  sin_family;

/// @brief Field sin_port offset 0x2
 __declspec(property(get=__get_sin_port, put=__set_sin_port)) uint16_t  sin_port;

/// @brief Field sin_addr offset 0x4
 __declspec(property(get=__get_sin_addr, put=__set_sin_addr)) uint32_t  sin_addr;

constexpr void __set_sin_len(uint8_t  value) ;

constexpr uint8_t& __get_sin_len() ;

constexpr uint8_t const& __get_sin_len() const;

constexpr void __set_sin_family(uint8_t  value) ;

constexpr uint8_t& __get_sin_family() ;

constexpr uint8_t const& __get_sin_family() const;

constexpr void __set_sin_port(uint16_t  value) ;

constexpr uint16_t& __get_sin_port() ;

constexpr uint16_t const& __get_sin_port() const;

constexpr void __set_sin_addr(uint32_t  value) ;

constexpr uint32_t& __get_sin_addr() ;

constexpr uint32_t const& __get_sin_addr() const;

// Ctor Parameters [CppParam { name: "sin_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr sockaddr_in(uint8_t  sin_len, uint8_t  sin_family, uint16_t  sin_port, uint32_t  sin_addr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit sockaddr_in(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 sockaddr_in()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsStructs::sockaddr_in, 0x8>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::sockaddr_in, "System.Net.NetworkInformation.MacOsStructs", "sockaddr_in");
