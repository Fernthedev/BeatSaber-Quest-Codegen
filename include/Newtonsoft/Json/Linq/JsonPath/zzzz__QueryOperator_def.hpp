#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryOperator)
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::JsonPath::QueryOperator);
// Type: Newtonsoft.Json.Linq.JsonPath::QueryOperator
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12021))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::QueryOperator
struct CORDL_TYPE QueryOperator : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __QueryOperator_Unwrapped
enum struct __QueryOperator_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Equals = static_cast<int32_t>(0x1),
__E_NotEquals = static_cast<int32_t>(0x2),
__E_Exists = static_cast<int32_t>(0x3),
__E_LessThan = static_cast<int32_t>(0x4),
__E_LessThanOrEquals = static_cast<int32_t>(0x5),
__E_GreaterThan = static_cast<int32_t>(0x6),
__E_GreaterThanOrEquals = static_cast<int32_t>(0x7),
__E_And = static_cast<int32_t>(0x8),
__E_Or = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const None;

/// @brief Field Equals value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Equals;

/// @brief Field NotEquals value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const NotEquals;

/// @brief Field Exists value: static_cast<int32_t>(0x3)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Exists;

/// @brief Field LessThan value: static_cast<int32_t>(0x4)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const LessThan;

/// @brief Field LessThanOrEquals value: static_cast<int32_t>(0x5)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const LessThanOrEquals;

/// @brief Field GreaterThan value: static_cast<int32_t>(0x6)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const GreaterThan;

/// @brief Field GreaterThanOrEquals value: static_cast<int32_t>(0x7)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const GreaterThanOrEquals;

/// @brief Field And value: static_cast<int32_t>(0x8)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const And;

/// @brief Field Or value: static_cast<int32_t>(0x9)
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Or;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __QueryOperator_Unwrapped () const noexcept {
return std::bit_cast<__QueryOperator_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QueryOperator(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QueryOperator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QueryOperator()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::QueryOperator, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq::JsonPath
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryOperator, "Newtonsoft.Json.Linq.JsonPath", "QueryOperator");
