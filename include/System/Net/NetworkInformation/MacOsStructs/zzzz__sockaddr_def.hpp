#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr)
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct sockaddr;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::MacOsStructs::sockaddr);
// Type: System.Net.NetworkInformation.MacOsStructs::sockaddr
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9295))
// CS Name: ::System.Net.NetworkInformation.MacOsStructs::sockaddr
struct CORDL_TYPE sockaddr : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field sa_len offset 0x0
 __declspec(property(get=__get_sa_len, put=__set_sa_len)) uint8_t  sa_len;

/// @brief Field sa_family offset 0x1
 __declspec(property(get=__get_sa_family, put=__set_sa_family)) uint8_t  sa_family;

constexpr void __set_sa_len(uint8_t  value) ;

constexpr uint8_t& __get_sa_len() ;

constexpr uint8_t const& __get_sa_len() const;

constexpr void __set_sa_family(uint8_t  value) ;

constexpr uint8_t& __get_sa_family() ;

constexpr uint8_t const& __get_sa_family() const;

// Ctor Parameters [CppParam { name: "sa_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sa_family", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr sockaddr(uint8_t  sa_len, uint8_t  sa_family) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit sockaddr(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 sockaddr()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsStructs::sockaddr, 0x2>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::sockaddr, "System.Net.NetworkInformation.MacOsStructs", "sockaddr");
