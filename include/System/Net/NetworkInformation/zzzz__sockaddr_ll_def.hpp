#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_ll)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct sockaddr_ll;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::sockaddr_ll);
// Type: System.Net.NetworkInformation::sockaddr_ll
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9275))
// CS Name: ::System.Net.NetworkInformation::sockaddr_ll
struct CORDL_TYPE sockaddr_ll : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sll_family offset 0x0
 __declspec(property(get=__get_sll_family, put=__set_sll_family)) uint16_t  sll_family;

/// @brief Field sll_protocol offset 0x2
 __declspec(property(get=__get_sll_protocol, put=__set_sll_protocol)) uint16_t  sll_protocol;

/// @brief Field sll_ifindex offset 0x4
 __declspec(property(get=__get_sll_ifindex, put=__set_sll_ifindex)) int32_t  sll_ifindex;

/// @brief Field sll_hatype offset 0x8
 __declspec(property(get=__get_sll_hatype, put=__set_sll_hatype)) uint16_t  sll_hatype;

/// @brief Field sll_pkttype offset 0xa
 __declspec(property(get=__get_sll_pkttype, put=__set_sll_pkttype)) uint8_t  sll_pkttype;

/// @brief Field sll_halen offset 0xb
 __declspec(property(get=__get_sll_halen, put=__set_sll_halen)) uint8_t  sll_halen;

/// @brief Field sll_addr offset 0x10
 __declspec(property(get=__get_sll_addr, put=__set_sll_addr)) ::ArrayW<uint8_t,::Array<uint8_t>*>  sll_addr;

constexpr void __set_sll_family(uint16_t  value) ;

constexpr uint16_t& __get_sll_family() ;

constexpr uint16_t const& __get_sll_family() const;

constexpr void __set_sll_protocol(uint16_t  value) ;

constexpr uint16_t& __get_sll_protocol() ;

constexpr uint16_t const& __get_sll_protocol() const;

constexpr void __set_sll_ifindex(int32_t  value) ;

constexpr int32_t& __get_sll_ifindex() ;

constexpr int32_t const& __get_sll_ifindex() const;

constexpr void __set_sll_hatype(uint16_t  value) ;

constexpr uint16_t& __get_sll_hatype() ;

constexpr uint16_t const& __get_sll_hatype() const;

constexpr void __set_sll_pkttype(uint8_t  value) ;

constexpr uint8_t& __get_sll_pkttype() ;

constexpr uint8_t const& __get_sll_pkttype() const;

constexpr void __set_sll_halen(uint8_t  value) ;

constexpr uint8_t& __get_sll_halen() ;

constexpr uint8_t const& __get_sll_halen() const;

constexpr void __set_sll_addr(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_sll_addr() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_sll_addr() const;

// Ctor Parameters [CppParam { name: "sll_family", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_protocol", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_ifindex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sll_hatype", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_pkttype", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sll_halen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sll_addr", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr sockaddr_ll(uint16_t  sll_family, uint16_t  sll_protocol, int32_t  sll_ifindex, uint16_t  sll_hatype, uint8_t  sll_pkttype, uint8_t  sll_halen, ::ArrayW<uint8_t,::Array<uint8_t>*>  sll_addr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit sockaddr_ll(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 sockaddr_ll()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::sockaddr_ll, 0x18>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::sockaddr_ll, "System.Net.NetworkInformation", "sockaddr_ll");
