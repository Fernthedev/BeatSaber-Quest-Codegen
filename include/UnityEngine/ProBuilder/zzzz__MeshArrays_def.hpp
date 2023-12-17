#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshArrays)
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::MeshArrays);
// Type: UnityEngine.ProBuilder::MeshArrays
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12166))
// CS Name: ::UnityEngine.ProBuilder::MeshArrays
struct CORDL_TYPE MeshArrays : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshArrays_Unwrapped
enum struct __MeshArrays_Unwrapped : int32_t {
__E_Position = static_cast<int32_t>(0x1),
__E_Texture0 = static_cast<int32_t>(0x2),
__E_Texture1 = static_cast<int32_t>(0x4),
__E_Lightmap = static_cast<int32_t>(0x4),
__E_Texture2 = static_cast<int32_t>(0x8),
__E_Texture3 = static_cast<int32_t>(0x10),
__E_Color = static_cast<int32_t>(0x20),
__E_Normal = static_cast<int32_t>(0x40),
__E_Tangent = static_cast<int32_t>(0x80),
__E_All = static_cast<int32_t>(0xff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Position value: static_cast<int32_t>(0x1)
static ::UnityEngine::ProBuilder::MeshArrays const Position;

/// @brief Field Texture0 value: static_cast<int32_t>(0x2)
static ::UnityEngine::ProBuilder::MeshArrays const Texture0;

/// @brief Field Texture1 value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::MeshArrays const Texture1;

/// @brief Field Lightmap value: static_cast<int32_t>(0x4)
static ::UnityEngine::ProBuilder::MeshArrays const Lightmap;

/// @brief Field Texture2 value: static_cast<int32_t>(0x8)
static ::UnityEngine::ProBuilder::MeshArrays const Texture2;

/// @brief Field Texture3 value: static_cast<int32_t>(0x10)
static ::UnityEngine::ProBuilder::MeshArrays const Texture3;

/// @brief Field Color value: static_cast<int32_t>(0x20)
static ::UnityEngine::ProBuilder::MeshArrays const Color;

/// @brief Field Normal value: static_cast<int32_t>(0x40)
static ::UnityEngine::ProBuilder::MeshArrays const Normal;

/// @brief Field Tangent value: static_cast<int32_t>(0x80)
static ::UnityEngine::ProBuilder::MeshArrays const Tangent;

/// @brief Field All value: static_cast<int32_t>(0xff)
static ::UnityEngine::ProBuilder::MeshArrays const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshArrays_Unwrapped () const noexcept {
return std::bit_cast<__MeshArrays_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshArrays(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MeshArrays(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MeshArrays()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::MeshArrays, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshArrays, "UnityEngine.ProBuilder", "MeshArrays");
