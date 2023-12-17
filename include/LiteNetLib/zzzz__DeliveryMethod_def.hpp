#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeliveryMethod)
// Forward declare root types
namespace LiteNetLib {
struct DeliveryMethod;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::DeliveryMethod);
// Type: LiteNetLib::DeliveryMethod
namespace LiteNetLib {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14155))
// CS Name: ::LiteNetLib::DeliveryMethod
struct CORDL_TYPE DeliveryMethod : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DeliveryMethod_Unwrapped
enum struct __DeliveryMethod_Unwrapped : uint8_t {
__E_Unreliable = static_cast<uint8_t>(0x4u),
__E_ReliableUnordered = static_cast<uint8_t>(0x0u),
__E_Sequenced = static_cast<uint8_t>(0x1u),
__E_ReliableOrdered = static_cast<uint8_t>(0x2u),
__E_ReliableSequenced = static_cast<uint8_t>(0x3u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Unreliable value: static_cast<uint8_t>(0x4u)
static ::LiteNetLib::DeliveryMethod const Unreliable;

/// @brief Field ReliableUnordered value: static_cast<uint8_t>(0x0u)
static ::LiteNetLib::DeliveryMethod const ReliableUnordered;

/// @brief Field Sequenced value: static_cast<uint8_t>(0x1u)
static ::LiteNetLib::DeliveryMethod const Sequenced;

/// @brief Field ReliableOrdered value: static_cast<uint8_t>(0x2u)
static ::LiteNetLib::DeliveryMethod const ReliableOrdered;

/// @brief Field ReliableSequenced value: static_cast<uint8_t>(0x3u)
static ::LiteNetLib::DeliveryMethod const ReliableSequenced;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DeliveryMethod_Unwrapped () const noexcept {
return std::bit_cast<__DeliveryMethod_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DeliveryMethod(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DeliveryMethod(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DeliveryMethod()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::DeliveryMethod, 0x1>, "Size mismatch!");

} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DeliveryMethod, "LiteNetLib", "DeliveryMethod");
