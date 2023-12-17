#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Video3DLayout)
// Forward declare root types
namespace UnityEngine::Video {
struct Video3DLayout;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Video::Video3DLayout);
// Type: UnityEngine.Video::Video3DLayout
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16077))
// CS Name: ::UnityEngine.Video::Video3DLayout
struct CORDL_TYPE Video3DLayout : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Video3DLayout_Unwrapped
enum struct __Video3DLayout_Unwrapped : int32_t {
__E_No3D = static_cast<int32_t>(0x0),
__E_SideBySide3D = static_cast<int32_t>(0x1),
__E_OverUnder3D = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field No3D value: static_cast<int32_t>(0x0)
static ::UnityEngine::Video::Video3DLayout const No3D;

/// @brief Field SideBySide3D value: static_cast<int32_t>(0x1)
static ::UnityEngine::Video::Video3DLayout const SideBySide3D;

/// @brief Field OverUnder3D value: static_cast<int32_t>(0x2)
static ::UnityEngine::Video::Video3DLayout const OverUnder3D;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Video3DLayout_Unwrapped () const noexcept {
return std::bit_cast<__Video3DLayout_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Video3DLayout(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Video3DLayout(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Video3DLayout()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::Video3DLayout, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::Video3DLayout, "UnityEngine.Video", "Video3DLayout");
