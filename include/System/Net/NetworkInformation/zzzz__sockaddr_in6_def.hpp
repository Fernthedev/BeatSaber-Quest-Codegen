#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_in6)
namespace System::Net::NetworkInformation {
struct in6_addr;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
struct sockaddr_in6;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::sockaddr_in6);
// Type: System.Net.NetworkInformation::sockaddr_in6
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9273))
// CS Name: ::System.Net.NetworkInformation::sockaddr_in6
struct CORDL_TYPE sockaddr_in6 : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sin6_family offset 0x0
 __declspec(property(get=__get_sin6_family, put=__set_sin6_family)) uint16_t  sin6_family;

/// @brief Field sin6_port offset 0x2
 __declspec(property(get=__get_sin6_port, put=__set_sin6_port)) uint16_t  sin6_port;

/// @brief Field sin6_flowinfo offset 0x4
 __declspec(property(get=__get_sin6_flowinfo, put=__set_sin6_flowinfo)) uint32_t  sin6_flowinfo;

/// @brief Field sin6_addr offset 0x8
 __declspec(property(get=__get_sin6_addr, put=__set_sin6_addr)) ::System::Net::NetworkInformation::in6_addr  sin6_addr;

/// @brief Field sin6_scope_id offset 0x10
 __declspec(property(get=__get_sin6_scope_id, put=__set_sin6_scope_id)) uint32_t  sin6_scope_id;

constexpr void __set_sin6_family(uint16_t  value) ;

constexpr uint16_t& __get_sin6_family() ;

constexpr uint16_t const& __get_sin6_family() const;

constexpr void __set_sin6_port(uint16_t  value) ;

constexpr uint16_t& __get_sin6_port() ;

constexpr uint16_t const& __get_sin6_port() const;

constexpr void __set_sin6_flowinfo(uint32_t  value) ;

constexpr uint32_t& __get_sin6_flowinfo() ;

constexpr uint32_t const& __get_sin6_flowinfo() const;

constexpr void __set_sin6_addr(::System::Net::NetworkInformation::in6_addr  value) ;

constexpr ::System::Net::NetworkInformation::in6_addr& __get_sin6_addr() ;

constexpr ::System::Net::NetworkInformation::in6_addr const& __get_sin6_addr() const;

constexpr void __set_sin6_scope_id(uint32_t  value) ;

constexpr uint32_t& __get_sin6_scope_id() ;

constexpr uint32_t const& __get_sin6_scope_id() const;

// Ctor Parameters [CppParam { name: "sin6_family", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin6_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin6_flowinfo", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sin6_addr", ty: "::System::Net::NetworkInformation::in6_addr", modifiers: "", def_value: None }, CppParam { name: "sin6_scope_id", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr sockaddr_in6(uint16_t  sin6_family, uint16_t  sin6_port, uint32_t  sin6_flowinfo, ::System::Net::NetworkInformation::in6_addr  sin6_addr, uint32_t  sin6_scope_id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit sockaddr_in6(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 sockaddr_in6()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::sockaddr_in6, 0x18>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::sockaddr_in6, "System.Net.NetworkInformation", "sockaddr_in6");
