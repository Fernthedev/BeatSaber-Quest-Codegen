#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueType)
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueType);
// Type: UnityEngine.UIElements::StyleValueType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7263))
// CS Name: ::UnityEngine.UIElements::StyleValueType
struct CORDL_TYPE StyleValueType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StyleValueType_Unwrapped
enum struct __StyleValueType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Keyword = static_cast<int32_t>(0x1),
__E_Float = static_cast<int32_t>(0x2),
__E_Dimension = static_cast<int32_t>(0x3),
__E_Color = static_cast<int32_t>(0x4),
__E_ResourcePath = static_cast<int32_t>(0x5),
__E_AssetReference = static_cast<int32_t>(0x6),
__E_Enum = static_cast<int32_t>(0x7),
__E_Variable = static_cast<int32_t>(0x8),
__E_String = static_cast<int32_t>(0x9),
__E_Function = static_cast<int32_t>(0xa),
__E_CommaSeparator = static_cast<int32_t>(0xb),
__E_ScalableImage = static_cast<int32_t>(0xc),
__E_MissingAssetReference = static_cast<int32_t>(0xd),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Invalid value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::StyleValueType const Invalid;

/// @brief Field Keyword value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::StyleValueType const Keyword;

/// @brief Field Float value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::StyleValueType const Float;

/// @brief Field Dimension value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::StyleValueType const Dimension;

/// @brief Field Color value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::StyleValueType const Color;

/// @brief Field ResourcePath value: static_cast<int32_t>(0x5)
static ::UnityEngine::UIElements::StyleValueType const ResourcePath;

/// @brief Field AssetReference value: static_cast<int32_t>(0x6)
static ::UnityEngine::UIElements::StyleValueType const AssetReference;

/// @brief Field Enum value: static_cast<int32_t>(0x7)
static ::UnityEngine::UIElements::StyleValueType const Enum;

/// @brief Field Variable value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::StyleValueType const Variable;

/// @brief Field String value: static_cast<int32_t>(0x9)
static ::UnityEngine::UIElements::StyleValueType const String;

/// @brief Field Function value: static_cast<int32_t>(0xa)
static ::UnityEngine::UIElements::StyleValueType const Function;

/// @brief Field CommaSeparator value: static_cast<int32_t>(0xb)
static ::UnityEngine::UIElements::StyleValueType const CommaSeparator;

/// @brief Field ScalableImage value: static_cast<int32_t>(0xc)
static ::UnityEngine::UIElements::StyleValueType const ScalableImage;

/// @brief Field MissingAssetReference value: static_cast<int32_t>(0xd)
static ::UnityEngine::UIElements::StyleValueType const MissingAssetReference;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleValueType_Unwrapped () const noexcept {
return std::bit_cast<__StyleValueType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleValueType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleValueType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleValueType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueType, "UnityEngine.UIElements", "StyleValueType");
