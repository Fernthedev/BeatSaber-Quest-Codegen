#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProtocolType)
// Forward declare root types
namespace System::Net::Sockets {
struct ProtocolType;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::ProtocolType);
// Type: System.Net.Sockets::ProtocolType
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9343))
// CS Name: ::System.Net.Sockets::ProtocolType
struct CORDL_TYPE ProtocolType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProtocolType_Unwrapped
enum struct __ProtocolType_Unwrapped : int32_t {
__E_IP = static_cast<int32_t>(0x0),
__E_IPv6HopByHopOptions = static_cast<int32_t>(0x0),
__E_Icmp = static_cast<int32_t>(0x1),
__E_Igmp = static_cast<int32_t>(0x2),
__E_Ggp = static_cast<int32_t>(0x3),
__E_IPv4 = static_cast<int32_t>(0x4),
__E_Tcp = static_cast<int32_t>(0x6),
__E_Pup = static_cast<int32_t>(0xc),
__E_Udp = static_cast<int32_t>(0x11),
__E_Idp = static_cast<int32_t>(0x16),
__E_IPv6 = static_cast<int32_t>(0x29),
__E_IPv6RoutingHeader = static_cast<int32_t>(0x2b),
__E_IPv6FragmentHeader = static_cast<int32_t>(0x2c),
__E_IPSecEncapsulatingSecurityPayload = static_cast<int32_t>(0x32),
__E_IPSecAuthenticationHeader = static_cast<int32_t>(0x33),
__E_IcmpV6 = static_cast<int32_t>(0x3a),
__E_IPv6NoNextHeader = static_cast<int32_t>(0x3b),
__E_IPv6DestinationOptions = static_cast<int32_t>(0x3c),
__E_ND = static_cast<int32_t>(0x4d),
__E_Raw = static_cast<int32_t>(0xff),
__E_Unspecified = static_cast<int32_t>(0x0),
__E_Ipx = static_cast<int32_t>(0x3e8),
__E_Spx = static_cast<int32_t>(0x4e8),
__E_SpxII = static_cast<int32_t>(0x4e9),
__E_Unknown = static_cast<int32_t>(0xffffffff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field IP value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::ProtocolType const IP;

/// @brief Field IPv6HopByHopOptions value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::ProtocolType const IPv6HopByHopOptions;

/// @brief Field Icmp value: static_cast<int32_t>(0x1)
static ::System::Net::Sockets::ProtocolType const Icmp;

/// @brief Field Igmp value: static_cast<int32_t>(0x2)
static ::System::Net::Sockets::ProtocolType const Igmp;

/// @brief Field Ggp value: static_cast<int32_t>(0x3)
static ::System::Net::Sockets::ProtocolType const Ggp;

/// @brief Field IPv4 value: static_cast<int32_t>(0x4)
static ::System::Net::Sockets::ProtocolType const IPv4;

/// @brief Field Tcp value: static_cast<int32_t>(0x6)
static ::System::Net::Sockets::ProtocolType const Tcp;

/// @brief Field Pup value: static_cast<int32_t>(0xc)
static ::System::Net::Sockets::ProtocolType const Pup;

/// @brief Field Udp value: static_cast<int32_t>(0x11)
static ::System::Net::Sockets::ProtocolType const Udp;

/// @brief Field Idp value: static_cast<int32_t>(0x16)
static ::System::Net::Sockets::ProtocolType const Idp;

/// @brief Field IPv6 value: static_cast<int32_t>(0x29)
static ::System::Net::Sockets::ProtocolType const IPv6;

/// @brief Field IPv6RoutingHeader value: static_cast<int32_t>(0x2b)
static ::System::Net::Sockets::ProtocolType const IPv6RoutingHeader;

/// @brief Field IPv6FragmentHeader value: static_cast<int32_t>(0x2c)
static ::System::Net::Sockets::ProtocolType const IPv6FragmentHeader;

/// @brief Field IPSecEncapsulatingSecurityPayload value: static_cast<int32_t>(0x32)
static ::System::Net::Sockets::ProtocolType const IPSecEncapsulatingSecurityPayload;

/// @brief Field IPSecAuthenticationHeader value: static_cast<int32_t>(0x33)
static ::System::Net::Sockets::ProtocolType const IPSecAuthenticationHeader;

/// @brief Field IcmpV6 value: static_cast<int32_t>(0x3a)
static ::System::Net::Sockets::ProtocolType const IcmpV6;

/// @brief Field IPv6NoNextHeader value: static_cast<int32_t>(0x3b)
static ::System::Net::Sockets::ProtocolType const IPv6NoNextHeader;

/// @brief Field IPv6DestinationOptions value: static_cast<int32_t>(0x3c)
static ::System::Net::Sockets::ProtocolType const IPv6DestinationOptions;

/// @brief Field ND value: static_cast<int32_t>(0x4d)
static ::System::Net::Sockets::ProtocolType const ND;

/// @brief Field Raw value: static_cast<int32_t>(0xff)
static ::System::Net::Sockets::ProtocolType const Raw;

/// @brief Field Unspecified value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::ProtocolType const Unspecified;

/// @brief Field Ipx value: static_cast<int32_t>(0x3e8)
static ::System::Net::Sockets::ProtocolType const Ipx;

/// @brief Field Spx value: static_cast<int32_t>(0x4e8)
static ::System::Net::Sockets::ProtocolType const Spx;

/// @brief Field SpxII value: static_cast<int32_t>(0x4e9)
static ::System::Net::Sockets::ProtocolType const SpxII;

/// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
static ::System::Net::Sockets::ProtocolType const Unknown;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ProtocolType_Unwrapped () const noexcept {
return std::bit_cast<__ProtocolType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProtocolType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ProtocolType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ProtocolType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::ProtocolType, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::ProtocolType, "System.Net.Sockets", "ProtocolType");
