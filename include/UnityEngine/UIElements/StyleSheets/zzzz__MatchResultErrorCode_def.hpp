#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchResultErrorCode)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultErrorCode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode);
// Type: UnityEngine.UIElements.StyleSheets::MatchResultErrorCode
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7480))
// CS Name: ::UnityEngine.UIElements.StyleSheets::MatchResultErrorCode
struct CORDL_TYPE MatchResultErrorCode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MatchResultErrorCode_Unwrapped
enum struct __MatchResultErrorCode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Syntax = static_cast<int32_t>(0x1),
__E_EmptyValue = static_cast<int32_t>(0x2),
__E_ExpectedEndOfValue = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const None;

/// @brief Field Syntax value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const Syntax;

/// @brief Field EmptyValue value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const EmptyValue;

/// @brief Field ExpectedEndOfValue value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const ExpectedEndOfValue;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchResultErrorCode_Unwrapped () const noexcept {
return std::bit_cast<__MatchResultErrorCode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchResultErrorCode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MatchResultErrorCode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MatchResultErrorCode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, "UnityEngine.UIElements.StyleSheets", "MatchResultErrorCode");
