#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderPropertyType);
// Type: UnityEngine.Rendering::ShaderPropertyType
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10371))
// CS Name: ::UnityEngine.Rendering::ShaderPropertyType
struct CORDL_TYPE ShaderPropertyType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShaderPropertyType_Unwrapped
enum struct __ShaderPropertyType_Unwrapped : int32_t {
__E_Color = static_cast<int32_t>(0x0),
__E_Vector = static_cast<int32_t>(0x1),
__E_Float = static_cast<int32_t>(0x2),
__E_Range = static_cast<int32_t>(0x3),
__E_Texture = static_cast<int32_t>(0x4),
__E_Int = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Color value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::ShaderPropertyType const Color;

/// @brief Field Vector value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::ShaderPropertyType const Vector;

/// @brief Field Float value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::ShaderPropertyType const Float;

/// @brief Field Range value: static_cast<int32_t>(0x3)
static ::UnityEngine::Rendering::ShaderPropertyType const Range;

/// @brief Field Texture value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::ShaderPropertyType const Texture;

/// @brief Field Int value: static_cast<int32_t>(0x5)
static ::UnityEngine::Rendering::ShaderPropertyType const Int;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ShaderPropertyType_Unwrapped () const noexcept {
return std::bit_cast<__ShaderPropertyType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShaderPropertyType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ShaderPropertyType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ShaderPropertyType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderPropertyType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyType, "UnityEngine.Rendering", "ShaderPropertyType");
