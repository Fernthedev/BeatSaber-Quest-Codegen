#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeCode)
// Forward declare root types
namespace System {
struct TypeCode;
}
// Write type traits
MARK_VAL_T(::System::TypeCode);
// Type: System::TypeCode
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2496))
// CS Name: ::System::TypeCode
struct CORDL_TYPE TypeCode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TypeCode_Unwrapped
enum struct __TypeCode_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Object = static_cast<int32_t>(0x1),
__E_DBNull = static_cast<int32_t>(0x2),
__E_Boolean = static_cast<int32_t>(0x3),
__E_Char = static_cast<int32_t>(0x4),
__E_SByte = static_cast<int32_t>(0x5),
__E_Byte = static_cast<int32_t>(0x6),
__E_Int16 = static_cast<int32_t>(0x7),
__E_UInt16 = static_cast<int32_t>(0x8),
__E_Int32 = static_cast<int32_t>(0x9),
__E_UInt32 = static_cast<int32_t>(0xa),
__E_Int64 = static_cast<int32_t>(0xb),
__E_UInt64 = static_cast<int32_t>(0xc),
__E_Single = static_cast<int32_t>(0xd),
__E_Double = static_cast<int32_t>(0xe),
__E_Decimal = static_cast<int32_t>(0xf),
__E_DateTime = static_cast<int32_t>(0x10),
__E_String = static_cast<int32_t>(0x12),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Empty value: static_cast<int32_t>(0x0)
static ::System::TypeCode const Empty;

/// @brief Field Object value: static_cast<int32_t>(0x1)
static ::System::TypeCode const Object;

/// @brief Field DBNull value: static_cast<int32_t>(0x2)
static ::System::TypeCode const DBNull;

/// @brief Field Boolean value: static_cast<int32_t>(0x3)
static ::System::TypeCode const Boolean;

/// @brief Field Char value: static_cast<int32_t>(0x4)
static ::System::TypeCode const Char;

/// @brief Field SByte value: static_cast<int32_t>(0x5)
static ::System::TypeCode const SByte;

/// @brief Field Byte value: static_cast<int32_t>(0x6)
static ::System::TypeCode const Byte;

/// @brief Field Int16 value: static_cast<int32_t>(0x7)
static ::System::TypeCode const Int16;

/// @brief Field UInt16 value: static_cast<int32_t>(0x8)
static ::System::TypeCode const UInt16;

/// @brief Field Int32 value: static_cast<int32_t>(0x9)
static ::System::TypeCode const Int32;

/// @brief Field UInt32 value: static_cast<int32_t>(0xa)
static ::System::TypeCode const UInt32;

/// @brief Field Int64 value: static_cast<int32_t>(0xb)
static ::System::TypeCode const Int64;

/// @brief Field UInt64 value: static_cast<int32_t>(0xc)
static ::System::TypeCode const UInt64;

/// @brief Field Single value: static_cast<int32_t>(0xd)
static ::System::TypeCode const Single;

/// @brief Field Double value: static_cast<int32_t>(0xe)
static ::System::TypeCode const Double;

/// @brief Field Decimal value: static_cast<int32_t>(0xf)
static ::System::TypeCode const Decimal;

/// @brief Field DateTime value: static_cast<int32_t>(0x10)
static ::System::TypeCode const DateTime;

/// @brief Field String value: static_cast<int32_t>(0x12)
static ::System::TypeCode const String;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeCode_Unwrapped () const noexcept {
return std::bit_cast<__TypeCode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeCode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypeCode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypeCode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeCode, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::TypeCode, "System", "TypeCode");
