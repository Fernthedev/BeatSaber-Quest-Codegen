#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformOriginOffset)
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformOriginOffset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransformOriginOffset);
// Type: UnityEngine.UIElements::TransformOriginOffset
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6895))
// CS Name: ::UnityEngine.UIElements::TransformOriginOffset
struct CORDL_TYPE TransformOriginOffset : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransformOriginOffset_Unwrapped
enum struct __TransformOriginOffset_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Top = static_cast<int32_t>(0x3),
__E_Bottom = static_cast<int32_t>(0x4),
__E_Center = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Left value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::TransformOriginOffset const Left;

/// @brief Field Right value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::TransformOriginOffset const Right;

/// @brief Field Top value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::TransformOriginOffset const Top;

/// @brief Field Bottom value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::TransformOriginOffset const Bottom;

/// @brief Field Center value: static_cast<int32_t>(0x5)
static ::UnityEngine::UIElements::TransformOriginOffset const Center;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TransformOriginOffset_Unwrapped () const noexcept {
return std::bit_cast<__TransformOriginOffset_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TransformOriginOffset(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TransformOriginOffset(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TransformOriginOffset()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformOriginOffset, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformOriginOffset, "UnityEngine.UIElements", "TransformOriginOffset");
