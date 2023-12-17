#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceChannelTypes)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceChannelTypes);
// Type: IgnoranceCore::IgnoranceChannelTypes
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15242))
// CS Name: ::IgnoranceCore::IgnoranceChannelTypes
struct CORDL_TYPE IgnoranceChannelTypes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IgnoranceChannelTypes_Unwrapped
enum struct __IgnoranceChannelTypes_Unwrapped : int32_t {
__E_Reliable = static_cast<int32_t>(0x1),
__E_ReliableUnsequenced = static_cast<int32_t>(0x3),
__E_Unreliable = static_cast<int32_t>(0x2),
__E_UnreliableFragmented = static_cast<int32_t>(0x8),
__E_UnreliableSequenced = static_cast<int32_t>(0x0),
__E_Unthrottled = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Reliable value: static_cast<int32_t>(0x1)
static ::IgnoranceCore::IgnoranceChannelTypes const Reliable;

/// @brief Field ReliableUnsequenced value: static_cast<int32_t>(0x3)
static ::IgnoranceCore::IgnoranceChannelTypes const ReliableUnsequenced;

/// @brief Field Unreliable value: static_cast<int32_t>(0x2)
static ::IgnoranceCore::IgnoranceChannelTypes const Unreliable;

/// @brief Field UnreliableFragmented value: static_cast<int32_t>(0x8)
static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableFragmented;

/// @brief Field UnreliableSequenced value: static_cast<int32_t>(0x0)
static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableSequenced;

/// @brief Field Unthrottled value: static_cast<int32_t>(0x20)
static ::IgnoranceCore::IgnoranceChannelTypes const Unthrottled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __IgnoranceChannelTypes_Unwrapped () const noexcept {
return std::bit_cast<__IgnoranceChannelTypes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IgnoranceChannelTypes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IgnoranceChannelTypes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IgnoranceChannelTypes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceChannelTypes, 0x4>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceChannelTypes, "IgnoranceCore", "IgnoranceChannelTypes");
