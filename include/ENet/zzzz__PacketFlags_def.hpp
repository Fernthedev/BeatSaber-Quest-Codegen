#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketFlags)
// Forward declare root types
namespace ENet {
struct PacketFlags;
}
// Write type traits
MARK_VAL_T(::ENet::PacketFlags);
// Type: ENet::PacketFlags
namespace ENet {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15213))
// CS Name: ::ENet::PacketFlags
struct CORDL_TYPE PacketFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PacketFlags_Unwrapped
enum struct __PacketFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Reliable = static_cast<int32_t>(0x1),
__E_Unsequenced = static_cast<int32_t>(0x2),
__E_NoAllocate = static_cast<int32_t>(0x4),
__E_UnreliableFragmented = static_cast<int32_t>(0x8),
__E_Instant = static_cast<int32_t>(0x10),
__E_Unthrottled = static_cast<int32_t>(0x20),
__E_Sent = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::ENet::PacketFlags const None;

/// @brief Field Reliable value: static_cast<int32_t>(0x1)
static ::ENet::PacketFlags const Reliable;

/// @brief Field Unsequenced value: static_cast<int32_t>(0x2)
static ::ENet::PacketFlags const Unsequenced;

/// @brief Field NoAllocate value: static_cast<int32_t>(0x4)
static ::ENet::PacketFlags const NoAllocate;

/// @brief Field UnreliableFragmented value: static_cast<int32_t>(0x8)
static ::ENet::PacketFlags const UnreliableFragmented;

/// @brief Field Instant value: static_cast<int32_t>(0x10)
static ::ENet::PacketFlags const Instant;

/// @brief Field Unthrottled value: static_cast<int32_t>(0x20)
static ::ENet::PacketFlags const Unthrottled;

/// @brief Field Sent value: static_cast<int32_t>(0x100)
static ::ENet::PacketFlags const Sent;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PacketFlags_Unwrapped () const noexcept {
return std::bit_cast<__PacketFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PacketFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PacketFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::PacketFlags, 0x4>, "Size mismatch!");

} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::PacketFlags, "ENet", "PacketFlags");
