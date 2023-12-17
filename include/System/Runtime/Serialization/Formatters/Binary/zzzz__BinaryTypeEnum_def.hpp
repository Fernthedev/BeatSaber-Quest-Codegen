#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryTypeEnum)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryTypeEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3244))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryTypeEnum
struct CORDL_TYPE BinaryTypeEnum : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BinaryTypeEnum_Unwrapped
enum struct __BinaryTypeEnum_Unwrapped : int32_t {
__E_Primitive = static_cast<int32_t>(0x0),
__E_String = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
__E_ObjectUrt = static_cast<int32_t>(0x3),
__E_ObjectUser = static_cast<int32_t>(0x4),
__E_ObjectArray = static_cast<int32_t>(0x5),
__E_StringArray = static_cast<int32_t>(0x6),
__E_PrimitiveArray = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Primitive value: static_cast<int32_t>(0x0)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const Primitive;

/// @brief Field String value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const String;

/// @brief Field Object value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const Object;

/// @brief Field ObjectUrt value: static_cast<int32_t>(0x3)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectUrt;

/// @brief Field ObjectUser value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectUser;

/// @brief Field ObjectArray value: static_cast<int32_t>(0x5)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const ObjectArray;

/// @brief Field StringArray value: static_cast<int32_t>(0x6)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const StringArray;

/// @brief Field PrimitiveArray value: static_cast<int32_t>(0x7)
static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const PrimitiveArray;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryTypeEnum_Unwrapped () const noexcept {
return std::bit_cast<__BinaryTypeEnum_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BinaryTypeEnum(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BinaryTypeEnum(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BinaryTypeEnum()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum");
