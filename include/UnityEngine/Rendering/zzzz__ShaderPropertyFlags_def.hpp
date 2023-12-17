#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderPropertyFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderPropertyFlags);
// Type: UnityEngine.Rendering::ShaderPropertyFlags
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10372))
// CS Name: ::UnityEngine.Rendering::ShaderPropertyFlags
struct CORDL_TYPE ShaderPropertyFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShaderPropertyFlags_Unwrapped
enum struct __ShaderPropertyFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HideInInspector = static_cast<int32_t>(0x1),
__E_PerRendererData = static_cast<int32_t>(0x2),
__E_NoScaleOffset = static_cast<int32_t>(0x4),
__E_Normal = static_cast<int32_t>(0x8),
__E_HDR = static_cast<int32_t>(0x10),
__E_Gamma = static_cast<int32_t>(0x20),
__E_NonModifiableTextureData = static_cast<int32_t>(0x40),
__E_MainTexture = static_cast<int32_t>(0x80),
__E_MainColor = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::ShaderPropertyFlags const None;

/// @brief Field HideInInspector value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::ShaderPropertyFlags const HideInInspector;

/// @brief Field PerRendererData value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::ShaderPropertyFlags const PerRendererData;

/// @brief Field NoScaleOffset value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::ShaderPropertyFlags const NoScaleOffset;

/// @brief Field Normal value: static_cast<int32_t>(0x8)
static ::UnityEngine::Rendering::ShaderPropertyFlags const Normal;

/// @brief Field HDR value: static_cast<int32_t>(0x10)
static ::UnityEngine::Rendering::ShaderPropertyFlags const HDR;

/// @brief Field Gamma value: static_cast<int32_t>(0x20)
static ::UnityEngine::Rendering::ShaderPropertyFlags const Gamma;

/// @brief Field NonModifiableTextureData value: static_cast<int32_t>(0x40)
static ::UnityEngine::Rendering::ShaderPropertyFlags const NonModifiableTextureData;

/// @brief Field MainTexture value: static_cast<int32_t>(0x80)
static ::UnityEngine::Rendering::ShaderPropertyFlags const MainTexture;

/// @brief Field MainColor value: static_cast<int32_t>(0x100)
static ::UnityEngine::Rendering::ShaderPropertyFlags const MainColor;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ShaderPropertyFlags_Unwrapped () const noexcept {
return std::bit_cast<__ShaderPropertyFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShaderPropertyFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ShaderPropertyFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ShaderPropertyFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderPropertyFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderPropertyFlags, "UnityEngine.Rendering", "ShaderPropertyFlags");
