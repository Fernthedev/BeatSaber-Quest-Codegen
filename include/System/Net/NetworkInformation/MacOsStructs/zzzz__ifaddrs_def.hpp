#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifaddrs)
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct ifaddrs;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::MacOsStructs::ifaddrs);
// Type: System.Net.NetworkInformation.MacOsStructs::ifaddrs
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9294))
// CS Name: ::System.Net.NetworkInformation.MacOsStructs::ifaddrs
struct CORDL_TYPE ifaddrs : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field ifa_next offset 0x0
 __declspec(property(get=__get_ifa_next, put=__set_ifa_next)) ::cordl_internals::intptr_t  ifa_next;

/// @brief Field ifa_name offset 0x8
 __declspec(property(get=__get_ifa_name, put=__set_ifa_name)) ::StringW  ifa_name;

/// @brief Field ifa_flags offset 0x10
 __declspec(property(get=__get_ifa_flags, put=__set_ifa_flags)) uint32_t  ifa_flags;

/// @brief Field ifa_addr offset 0x18
 __declspec(property(get=__get_ifa_addr, put=__set_ifa_addr)) ::cordl_internals::intptr_t  ifa_addr;

/// @brief Field ifa_netmask offset 0x20
 __declspec(property(get=__get_ifa_netmask, put=__set_ifa_netmask)) ::cordl_internals::intptr_t  ifa_netmask;

/// @brief Field ifa_dstaddr offset 0x28
 __declspec(property(get=__get_ifa_dstaddr, put=__set_ifa_dstaddr)) ::cordl_internals::intptr_t  ifa_dstaddr;

/// @brief Field ifa_data offset 0x30
 __declspec(property(get=__get_ifa_data, put=__set_ifa_data)) ::cordl_internals::intptr_t  ifa_data;

constexpr void __set_ifa_next(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifa_next() ;

constexpr ::cordl_internals::intptr_t const& __get_ifa_next() const;

constexpr void __set_ifa_name(::StringW  value) ;

constexpr ::StringW& __get_ifa_name() ;

constexpr ::StringW const& __get_ifa_name() const;

constexpr void __set_ifa_flags(uint32_t  value) ;

constexpr uint32_t& __get_ifa_flags() ;

constexpr uint32_t const& __get_ifa_flags() const;

constexpr void __set_ifa_addr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifa_addr() ;

constexpr ::cordl_internals::intptr_t const& __get_ifa_addr() const;

constexpr void __set_ifa_netmask(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifa_netmask() ;

constexpr ::cordl_internals::intptr_t const& __get_ifa_netmask() const;

constexpr void __set_ifa_dstaddr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifa_dstaddr() ;

constexpr ::cordl_internals::intptr_t const& __get_ifa_dstaddr() const;

constexpr void __set_ifa_data(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifa_data() ;

constexpr ::cordl_internals::intptr_t const& __get_ifa_data() const;

// Ctor Parameters [CppParam { name: "ifa_next", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ifa_addr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_netmask", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_dstaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_data", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ifaddrs(::cordl_internals::intptr_t  ifa_next, ::StringW  ifa_name, uint32_t  ifa_flags, ::cordl_internals::intptr_t  ifa_addr, ::cordl_internals::intptr_t  ifa_netmask, ::cordl_internals::intptr_t  ifa_dstaddr, ::cordl_internals::intptr_t  ifa_data) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ifaddrs(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ifaddrs()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsStructs::ifaddrs, 0x38>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::ifaddrs, "System.Net.NetworkInformation.MacOsStructs", "ifaddrs");
