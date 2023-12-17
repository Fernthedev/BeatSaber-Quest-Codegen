#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryArrayTypeEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryArrayTypeEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryArrayTypeEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3245))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryArrayTypeEnum
struct CORDL_TYPE BinaryArrayTypeEnum : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BinaryArrayTypeEnum_Unwrapped
enum struct __BinaryArrayTypeEnum_Unwrapped : int32_t {
__E_Single = static_cast<int32_t>(0x0),
__E_Jagged = static_cast<int32_t>(0x1),
__E_Rectangular = static_cast<int32_t>(0x2),
__E_SingleOffset = static_cast<int32_t>(0x3),
__E_JaggedOffset = static_cast<int32_t>(0x4),
__E_RectangularOffset = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Single value: static_cast<int32_t>(0x0)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Single;

/// @brief Field Jagged value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Jagged;

/// @brief Field Rectangular value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const Rectangular;

/// @brief Field SingleOffset value: static_cast<int32_t>(0x3)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const SingleOffset;

/// @brief Field JaggedOffset value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const JaggedOffset;

/// @brief Field RectangularOffset value: static_cast<int32_t>(0x5)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum const RectangularOffset;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryArrayTypeEnum_Unwrapped () const noexcept {
return std::bit_cast<__BinaryArrayTypeEnum_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BinaryArrayTypeEnum(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BinaryArrayTypeEnum(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BinaryArrayTypeEnum()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryArrayTypeEnum");
