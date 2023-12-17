#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalPrimitiveTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalPrimitiveTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3253))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::InternalPrimitiveTypeE
struct CORDL_TYPE InternalPrimitiveTypeE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InternalPrimitiveTypeE_Unwrapped
enum struct __InternalPrimitiveTypeE_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Boolean = static_cast<int32_t>(0x1),
__E_Byte = static_cast<int32_t>(0x2),
__E_Char = static_cast<int32_t>(0x3),
__E_Currency = static_cast<int32_t>(0x4),
__E_Decimal = static_cast<int32_t>(0x5),
__E_Double = static_cast<int32_t>(0x6),
__E_Int16 = static_cast<int32_t>(0x7),
__E_Int32 = static_cast<int32_t>(0x8),
__E_Int64 = static_cast<int32_t>(0x9),
__E_SByte = static_cast<int32_t>(0xa),
__E_Single = static_cast<int32_t>(0xb),
__E_TimeSpan = static_cast<int32_t>(0xc),
__E_DateTime = static_cast<int32_t>(0xd),
__E_UInt16 = static_cast<int32_t>(0xe),
__E_UInt32 = static_cast<int32_t>(0xf),
__E_UInt64 = static_cast<int32_t>(0x10),
__E_Null = static_cast<int32_t>(0x11),
__E_String = static_cast<int32_t>(0x12),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Invalid value: static_cast<int32_t>(0x0)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Invalid;

/// @brief Field Boolean value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Boolean;

/// @brief Field Byte value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Byte;

/// @brief Field Char value: static_cast<int32_t>(0x3)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Char;

/// @brief Field Currency value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Currency;

/// @brief Field Decimal value: static_cast<int32_t>(0x5)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Decimal;

/// @brief Field Double value: static_cast<int32_t>(0x6)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Double;

/// @brief Field Int16 value: static_cast<int32_t>(0x7)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int16;

/// @brief Field Int32 value: static_cast<int32_t>(0x8)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int32;

/// @brief Field Int64 value: static_cast<int32_t>(0x9)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Int64;

/// @brief Field SByte value: static_cast<int32_t>(0xa)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const SByte;

/// @brief Field Single value: static_cast<int32_t>(0xb)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Single;

/// @brief Field TimeSpan value: static_cast<int32_t>(0xc)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const TimeSpan;

/// @brief Field DateTime value: static_cast<int32_t>(0xd)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const DateTime;

/// @brief Field UInt16 value: static_cast<int32_t>(0xe)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt16;

/// @brief Field UInt32 value: static_cast<int32_t>(0xf)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt32;

/// @brief Field UInt64 value: static_cast<int32_t>(0x10)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const UInt64;

/// @brief Field Null value: static_cast<int32_t>(0x11)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const Null;

/// @brief Field String value: static_cast<int32_t>(0x12)
static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const String;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalPrimitiveTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalPrimitiveTypeE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalPrimitiveTypeE(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalPrimitiveTypeE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalPrimitiveTypeE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalPrimitiveTypeE");
