#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_VertexDataUpdateFlags)
// Forward declare root types
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_VertexDataUpdateFlags);
// Type: TMPro::TMP_VertexDataUpdateFlags
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12316))
// CS Name: ::TMPro::TMP_VertexDataUpdateFlags
struct CORDL_TYPE TMP_VertexDataUpdateFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TMP_VertexDataUpdateFlags_Unwrapped
enum struct __TMP_VertexDataUpdateFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Vertices = static_cast<int32_t>(0x1),
__E_Uv0 = static_cast<int32_t>(0x2),
__E_Uv2 = static_cast<int32_t>(0x4),
__E_Uv4 = static_cast<int32_t>(0x8),
__E_Colors32 = static_cast<int32_t>(0x10),
__E_All = static_cast<int32_t>(0xff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::TMPro::TMP_VertexDataUpdateFlags const None;

/// @brief Field Vertices value: static_cast<int32_t>(0x1)
static ::TMPro::TMP_VertexDataUpdateFlags const Vertices;

/// @brief Field Uv0 value: static_cast<int32_t>(0x2)
static ::TMPro::TMP_VertexDataUpdateFlags const Uv0;

/// @brief Field Uv2 value: static_cast<int32_t>(0x4)
static ::TMPro::TMP_VertexDataUpdateFlags const Uv2;

/// @brief Field Uv4 value: static_cast<int32_t>(0x8)
static ::TMPro::TMP_VertexDataUpdateFlags const Uv4;

/// @brief Field Colors32 value: static_cast<int32_t>(0x10)
static ::TMPro::TMP_VertexDataUpdateFlags const Colors32;

/// @brief Field All value: static_cast<int32_t>(0xff)
static ::TMPro::TMP_VertexDataUpdateFlags const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_VertexDataUpdateFlags_Unwrapped () const noexcept {
return std::bit_cast<__TMP_VertexDataUpdateFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_VertexDataUpdateFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_VertexDataUpdateFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_VertexDataUpdateFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_VertexDataUpdateFlags, 0x4>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_VertexDataUpdateFlags, "TMPro", "TMP_VertexDataUpdateFlags");
