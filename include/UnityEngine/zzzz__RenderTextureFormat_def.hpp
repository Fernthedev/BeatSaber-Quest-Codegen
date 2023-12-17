#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTextureFormat)
// Forward declare root types
namespace UnityEngine {
struct RenderTextureFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTextureFormat);
// Type: UnityEngine::RenderTextureFormat
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10117))
// CS Name: ::UnityEngine::RenderTextureFormat
struct CORDL_TYPE RenderTextureFormat : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderTextureFormat_Unwrapped
enum struct __RenderTextureFormat_Unwrapped : int32_t {
__E_ARGB32 = static_cast<int32_t>(0x0),
__E_Depth = static_cast<int32_t>(0x1),
__E_ARGBHalf = static_cast<int32_t>(0x2),
__E_Shadowmap = static_cast<int32_t>(0x3),
__E_RGB565 = static_cast<int32_t>(0x4),
__E_ARGB4444 = static_cast<int32_t>(0x5),
__E_ARGB1555 = static_cast<int32_t>(0x6),
__E_Default = static_cast<int32_t>(0x7),
__E_ARGB2101010 = static_cast<int32_t>(0x8),
__E_DefaultHDR = static_cast<int32_t>(0x9),
__E_ARGB64 = static_cast<int32_t>(0xa),
__E_ARGBFloat = static_cast<int32_t>(0xb),
__E_RGFloat = static_cast<int32_t>(0xc),
__E_RGHalf = static_cast<int32_t>(0xd),
__E_RFloat = static_cast<int32_t>(0xe),
__E_RHalf = static_cast<int32_t>(0xf),
__E_R8 = static_cast<int32_t>(0x10),
__E_ARGBInt = static_cast<int32_t>(0x11),
__E_RGInt = static_cast<int32_t>(0x12),
__E_RInt = static_cast<int32_t>(0x13),
__E_BGRA32 = static_cast<int32_t>(0x14),
__E_RGB111110Float = static_cast<int32_t>(0x16),
__E_RG32 = static_cast<int32_t>(0x17),
__E_RGBAUShort = static_cast<int32_t>(0x18),
__E_RG16 = static_cast<int32_t>(0x19),
__E_BGRA10101010_XR = static_cast<int32_t>(0x1a),
__E_BGR101010_XR = static_cast<int32_t>(0x1b),
__E_R16 = static_cast<int32_t>(0x1c),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ARGB32 value: static_cast<int32_t>(0x0)
static ::UnityEngine::RenderTextureFormat const ARGB32;

/// @brief Field Depth value: static_cast<int32_t>(0x1)
static ::UnityEngine::RenderTextureFormat const Depth;

/// @brief Field ARGBHalf value: static_cast<int32_t>(0x2)
static ::UnityEngine::RenderTextureFormat const ARGBHalf;

/// @brief Field Shadowmap value: static_cast<int32_t>(0x3)
static ::UnityEngine::RenderTextureFormat const Shadowmap;

/// @brief Field RGB565 value: static_cast<int32_t>(0x4)
static ::UnityEngine::RenderTextureFormat const RGB565;

/// @brief Field ARGB4444 value: static_cast<int32_t>(0x5)
static ::UnityEngine::RenderTextureFormat const ARGB4444;

/// @brief Field ARGB1555 value: static_cast<int32_t>(0x6)
static ::UnityEngine::RenderTextureFormat const ARGB1555;

/// @brief Field Default value: static_cast<int32_t>(0x7)
static ::UnityEngine::RenderTextureFormat const Default;

/// @brief Field ARGB2101010 value: static_cast<int32_t>(0x8)
static ::UnityEngine::RenderTextureFormat const ARGB2101010;

/// @brief Field DefaultHDR value: static_cast<int32_t>(0x9)
static ::UnityEngine::RenderTextureFormat const DefaultHDR;

/// @brief Field ARGB64 value: static_cast<int32_t>(0xa)
static ::UnityEngine::RenderTextureFormat const ARGB64;

/// @brief Field ARGBFloat value: static_cast<int32_t>(0xb)
static ::UnityEngine::RenderTextureFormat const ARGBFloat;

/// @brief Field RGFloat value: static_cast<int32_t>(0xc)
static ::UnityEngine::RenderTextureFormat const RGFloat;

/// @brief Field RGHalf value: static_cast<int32_t>(0xd)
static ::UnityEngine::RenderTextureFormat const RGHalf;

/// @brief Field RFloat value: static_cast<int32_t>(0xe)
static ::UnityEngine::RenderTextureFormat const RFloat;

/// @brief Field RHalf value: static_cast<int32_t>(0xf)
static ::UnityEngine::RenderTextureFormat const RHalf;

/// @brief Field R8 value: static_cast<int32_t>(0x10)
static ::UnityEngine::RenderTextureFormat const R8;

/// @brief Field ARGBInt value: static_cast<int32_t>(0x11)
static ::UnityEngine::RenderTextureFormat const ARGBInt;

/// @brief Field RGInt value: static_cast<int32_t>(0x12)
static ::UnityEngine::RenderTextureFormat const RGInt;

/// @brief Field RInt value: static_cast<int32_t>(0x13)
static ::UnityEngine::RenderTextureFormat const RInt;

/// @brief Field BGRA32 value: static_cast<int32_t>(0x14)
static ::UnityEngine::RenderTextureFormat const BGRA32;

/// @brief Field RGB111110Float value: static_cast<int32_t>(0x16)
static ::UnityEngine::RenderTextureFormat const RGB111110Float;

/// @brief Field RG32 value: static_cast<int32_t>(0x17)
static ::UnityEngine::RenderTextureFormat const RG32;

/// @brief Field RGBAUShort value: static_cast<int32_t>(0x18)
static ::UnityEngine::RenderTextureFormat const RGBAUShort;

/// @brief Field RG16 value: static_cast<int32_t>(0x19)
static ::UnityEngine::RenderTextureFormat const RG16;

/// @brief Field BGRA10101010_XR value: static_cast<int32_t>(0x1a)
static ::UnityEngine::RenderTextureFormat const BGRA10101010_XR;

/// @brief Field BGR101010_XR value: static_cast<int32_t>(0x1b)
static ::UnityEngine::RenderTextureFormat const BGR101010_XR;

/// @brief Field R16 value: static_cast<int32_t>(0x1c)
static ::UnityEngine::RenderTextureFormat const R16;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTextureFormat_Unwrapped () const noexcept {
return std::bit_cast<__RenderTextureFormat_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTextureFormat(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderTextureFormat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderTextureFormat()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureFormat, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureFormat, "UnityEngine", "RenderTextureFormat");
