#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormatUsage)
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::FormatUsage);
// Type: UnityEngine.Experimental.Rendering::FormatUsage
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10404))
// CS Name: ::UnityEngine.Experimental.Rendering::FormatUsage
struct CORDL_TYPE FormatUsage : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FormatUsage_Unwrapped
enum struct __FormatUsage_Unwrapped : int32_t {
__E_Sample = static_cast<int32_t>(0x0),
__E_Linear = static_cast<int32_t>(0x1),
__E_Sparse = static_cast<int32_t>(0x2),
__E_Render = static_cast<int32_t>(0x4),
__E_Blend = static_cast<int32_t>(0x5),
__E_GetPixels = static_cast<int32_t>(0x6),
__E_SetPixels = static_cast<int32_t>(0x7),
__E_SetPixels32 = static_cast<int32_t>(0x8),
__E_ReadPixels = static_cast<int32_t>(0x9),
__E_LoadStore = static_cast<int32_t>(0xa),
__E_MSAA2x = static_cast<int32_t>(0xb),
__E_MSAA4x = static_cast<int32_t>(0xc),
__E_MSAA8x = static_cast<int32_t>(0xd),
__E_StencilSampling = static_cast<int32_t>(0x10),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Sample value: static_cast<int32_t>(0x0)
static ::UnityEngine::Experimental::Rendering::FormatUsage const Sample;

/// @brief Field Linear value: static_cast<int32_t>(0x1)
static ::UnityEngine::Experimental::Rendering::FormatUsage const Linear;

/// @brief Field Sparse value: static_cast<int32_t>(0x2)
static ::UnityEngine::Experimental::Rendering::FormatUsage const Sparse;

/// @brief Field Render value: static_cast<int32_t>(0x4)
static ::UnityEngine::Experimental::Rendering::FormatUsage const Render;

/// @brief Field Blend value: static_cast<int32_t>(0x5)
static ::UnityEngine::Experimental::Rendering::FormatUsage const Blend;

/// @brief Field GetPixels value: static_cast<int32_t>(0x6)
static ::UnityEngine::Experimental::Rendering::FormatUsage const GetPixels;

/// @brief Field SetPixels value: static_cast<int32_t>(0x7)
static ::UnityEngine::Experimental::Rendering::FormatUsage const SetPixels;

/// @brief Field SetPixels32 value: static_cast<int32_t>(0x8)
static ::UnityEngine::Experimental::Rendering::FormatUsage const SetPixels32;

/// @brief Field ReadPixels value: static_cast<int32_t>(0x9)
static ::UnityEngine::Experimental::Rendering::FormatUsage const ReadPixels;

/// @brief Field LoadStore value: static_cast<int32_t>(0xa)
static ::UnityEngine::Experimental::Rendering::FormatUsage const LoadStore;

/// @brief Field MSAA2x value: static_cast<int32_t>(0xb)
static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA2x;

/// @brief Field MSAA4x value: static_cast<int32_t>(0xc)
static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA4x;

/// @brief Field MSAA8x value: static_cast<int32_t>(0xd)
static ::UnityEngine::Experimental::Rendering::FormatUsage const MSAA8x;

/// @brief Field StencilSampling value: static_cast<int32_t>(0x10)
static ::UnityEngine::Experimental::Rendering::FormatUsage const StencilSampling;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FormatUsage_Unwrapped () const noexcept {
return std::bit_cast<__FormatUsage_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FormatUsage(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FormatUsage(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FormatUsage()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::FormatUsage, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::FormatUsage, "UnityEngine.Experimental.Rendering", "FormatUsage");
