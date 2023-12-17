#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNodeType)
// Forward declare root types
namespace OVRSimpleJSON {
struct JSONNodeType;
}
// Write type traits
MARK_VAL_T(::OVRSimpleJSON::JSONNodeType);
// Type: OVRSimpleJSON::JSONNodeType
namespace OVRSimpleJSON {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8195))
// CS Name: ::OVRSimpleJSON::JSONNodeType
struct CORDL_TYPE JSONNodeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JSONNodeType_Unwrapped
enum struct __JSONNodeType_Unwrapped : int32_t {
__E_Array = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
__E_String = static_cast<int32_t>(0x3),
__E_Number = static_cast<int32_t>(0x4),
__E_NullValue = static_cast<int32_t>(0x5),
__E_Boolean = static_cast<int32_t>(0x6),
__E_None = static_cast<int32_t>(0x7),
__E_Custom = static_cast<int32_t>(0xff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Array value: static_cast<int32_t>(0x1)
static ::OVRSimpleJSON::JSONNodeType const Array;

/// @brief Field Object value: static_cast<int32_t>(0x2)
static ::OVRSimpleJSON::JSONNodeType const Object;

/// @brief Field String value: static_cast<int32_t>(0x3)
static ::OVRSimpleJSON::JSONNodeType const String;

/// @brief Field Number value: static_cast<int32_t>(0x4)
static ::OVRSimpleJSON::JSONNodeType const Number;

/// @brief Field NullValue value: static_cast<int32_t>(0x5)
static ::OVRSimpleJSON::JSONNodeType const NullValue;

/// @brief Field Boolean value: static_cast<int32_t>(0x6)
static ::OVRSimpleJSON::JSONNodeType const Boolean;

/// @brief Field None value: static_cast<int32_t>(0x7)
static ::OVRSimpleJSON::JSONNodeType const None;

/// @brief Field Custom value: static_cast<int32_t>(0xff)
static ::OVRSimpleJSON::JSONNodeType const Custom;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __JSONNodeType_Unwrapped () const noexcept {
return std::bit_cast<__JSONNodeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JSONNodeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit JSONNodeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 JSONNodeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNodeType, 0x4>, "Size mismatch!");

} // namespace end def OVRSimpleJSON
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNodeType, "OVRSimpleJSON", "JSONNodeType");
