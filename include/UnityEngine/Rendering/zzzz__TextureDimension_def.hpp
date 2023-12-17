#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureDimension)
// Forward declare root types
namespace UnityEngine::Rendering {
struct TextureDimension;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::TextureDimension);
// Type: UnityEngine.Rendering::TextureDimension
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10350))
// CS Name: ::UnityEngine.Rendering::TextureDimension
struct CORDL_TYPE TextureDimension : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureDimension_Unwrapped
enum struct __TextureDimension_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_None = static_cast<int32_t>(0x0),
__E_Any = static_cast<int32_t>(0x1),
__E_Tex2D = static_cast<int32_t>(0x2),
__E_Tex3D = static_cast<int32_t>(0x3),
__E_Cube = static_cast<int32_t>(0x4),
__E_Tex2DArray = static_cast<int32_t>(0x5),
__E_CubeArray = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0xffffffff)
static ::UnityEngine::Rendering::TextureDimension const Unknown;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::TextureDimension const None;

/// @brief Field Any value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::TextureDimension const Any;

/// @brief Field Tex2D value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::TextureDimension const Tex2D;

/// @brief Field Tex3D value: static_cast<int32_t>(0x3)
static ::UnityEngine::Rendering::TextureDimension const Tex3D;

/// @brief Field Cube value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::TextureDimension const Cube;

/// @brief Field Tex2DArray value: static_cast<int32_t>(0x5)
static ::UnityEngine::Rendering::TextureDimension const Tex2DArray;

/// @brief Field CubeArray value: static_cast<int32_t>(0x6)
static ::UnityEngine::Rendering::TextureDimension const CubeArray;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureDimension_Unwrapped () const noexcept {
return std::bit_cast<__TextureDimension_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureDimension(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextureDimension(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextureDimension()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureDimension, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureDimension, "UnityEngine.Rendering", "TextureDimension");
