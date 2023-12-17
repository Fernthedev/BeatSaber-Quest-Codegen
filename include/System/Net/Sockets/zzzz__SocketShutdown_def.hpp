#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketShutdown)
// Forward declare root types
namespace System::Net::Sockets {
struct SocketShutdown;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SocketShutdown);
// Type: System.Net.Sockets::SocketShutdown
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9351))
// CS Name: ::System.Net.Sockets::SocketShutdown
struct CORDL_TYPE SocketShutdown : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SocketShutdown_Unwrapped
enum struct __SocketShutdown_Unwrapped : int32_t {
__E_Receive = static_cast<int32_t>(0x0),
__E_Send = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Receive value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::SocketShutdown const Receive;

/// @brief Field Send value: static_cast<int32_t>(0x1)
static ::System::Net::Sockets::SocketShutdown const Send;

/// @brief Field Both value: static_cast<int32_t>(0x2)
static ::System::Net::Sockets::SocketShutdown const Both;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketShutdown_Unwrapped () const noexcept {
return std::bit_cast<__SocketShutdown_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketShutdown(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SocketShutdown(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SocketShutdown()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SocketShutdown, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketShutdown, "System.Net.Sockets", "SocketShutdown");
