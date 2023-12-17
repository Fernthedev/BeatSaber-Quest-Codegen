#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketOptionLevel)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOptionLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketOptionLevel);
// Type: System.Net.Sockets::SocketOptionLevel
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9349))
// CS Name: ::System.Net.Sockets::SocketOptionLevel
struct CORDL_TYPE SocketOptionLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SocketOptionLevel_Unwrapped
enum struct __SocketOptionLevel_Unwrapped : int32_t {
__E_Socket = static_cast<int32_t>(0xffff),
__E_IP = static_cast<int32_t>(0x0),
__E_IPv6 = static_cast<int32_t>(0x29),
__E_Tcp = static_cast<int32_t>(0x6),
__E_Udp = static_cast<int32_t>(0x11),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Socket value: static_cast<int32_t>(0xffff)
static ::System::Net::Sockets::SocketOptionLevel const Socket;

/// @brief Field IP value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::SocketOptionLevel const IP;

/// @brief Field IPv6 value: static_cast<int32_t>(0x29)
static ::System::Net::Sockets::SocketOptionLevel const IPv6;

/// @brief Field Tcp value: static_cast<int32_t>(0x6)
static ::System::Net::Sockets::SocketOptionLevel const Tcp;

/// @brief Field Udp value: static_cast<int32_t>(0x11)
static ::System::Net::Sockets::SocketOptionLevel const Udp;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketOptionLevel_Unwrapped () const noexcept {
return std::bit_cast<__SocketOptionLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketOptionLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SocketOptionLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SocketOptionLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketOptionLevel, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionLevel, "System.Net.Sockets", "SocketOptionLevel");
