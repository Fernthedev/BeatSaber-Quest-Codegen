#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssertionConditionType)
// Forward declare root types
namespace JetBrains::Annotations {
struct AssertionConditionType;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::AssertionConditionType);
// Type: JetBrains.Annotations::AssertionConditionType
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15787))
// CS Name: ::JetBrains.Annotations::AssertionConditionType
struct CORDL_TYPE AssertionConditionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AssertionConditionType_Unwrapped
enum struct __AssertionConditionType_Unwrapped : int32_t {
__E_IS_TRUE = static_cast<int32_t>(0x0),
__E_IS_FALSE = static_cast<int32_t>(0x1),
__E_IS_NULL = static_cast<int32_t>(0x2),
__E_IS_NOT_NULL = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field IS_TRUE value: static_cast<int32_t>(0x0)
static ::JetBrains::Annotations::AssertionConditionType const IS_TRUE;

/// @brief Field IS_FALSE value: static_cast<int32_t>(0x1)
static ::JetBrains::Annotations::AssertionConditionType const IS_FALSE;

/// @brief Field IS_NULL value: static_cast<int32_t>(0x2)
static ::JetBrains::Annotations::AssertionConditionType const IS_NULL;

/// @brief Field IS_NOT_NULL value: static_cast<int32_t>(0x3)
static ::JetBrains::Annotations::AssertionConditionType const IS_NOT_NULL;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AssertionConditionType_Unwrapped () const noexcept {
return std::bit_cast<__AssertionConditionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssertionConditionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AssertionConditionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AssertionConditionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AssertionConditionType, 0x4>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AssertionConditionType, "JetBrains.Annotations", "AssertionConditionType");
