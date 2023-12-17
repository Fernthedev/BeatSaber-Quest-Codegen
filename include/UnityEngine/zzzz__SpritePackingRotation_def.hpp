#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpritePackingRotation)
// Forward declare root types
namespace UnityEngine {
struct SpritePackingRotation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpritePackingRotation);
// Type: UnityEngine::SpritePackingRotation
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10289))
// CS Name: ::UnityEngine::SpritePackingRotation
struct CORDL_TYPE SpritePackingRotation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SpritePackingRotation_Unwrapped
enum struct __SpritePackingRotation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FlipHorizontal = static_cast<int32_t>(0x1),
__E_FlipVertical = static_cast<int32_t>(0x2),
__E_Rotate180 = static_cast<int32_t>(0x3),
__E_Any = static_cast<int32_t>(0xf),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::SpritePackingRotation const None;

/// @brief Field FlipHorizontal value: static_cast<int32_t>(0x1)
static ::UnityEngine::SpritePackingRotation const FlipHorizontal;

/// @brief Field FlipVertical value: static_cast<int32_t>(0x2)
static ::UnityEngine::SpritePackingRotation const FlipVertical;

/// @brief Field Rotate180 value: static_cast<int32_t>(0x3)
static ::UnityEngine::SpritePackingRotation const Rotate180;

/// @brief Field Any value: static_cast<int32_t>(0xf)
static ::UnityEngine::SpritePackingRotation const Any;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SpritePackingRotation_Unwrapped () const noexcept {
return std::bit_cast<__SpritePackingRotation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpritePackingRotation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SpritePackingRotation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SpritePackingRotation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpritePackingRotation, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpritePackingRotation, "UnityEngine", "SpritePackingRotation");
