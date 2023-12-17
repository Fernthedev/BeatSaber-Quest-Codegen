#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraClearFlags)
// Forward declare root types
namespace UnityEngine {
struct CameraClearFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CameraClearFlags);
// Type: UnityEngine::CameraClearFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10107))
// CS Name: ::UnityEngine::CameraClearFlags
struct CORDL_TYPE CameraClearFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CameraClearFlags_Unwrapped
enum struct __CameraClearFlags_Unwrapped : int32_t {
__E_Skybox = static_cast<int32_t>(0x1),
__E_Color = static_cast<int32_t>(0x2),
__E_SolidColor = static_cast<int32_t>(0x2),
__E_Depth = static_cast<int32_t>(0x3),
__E_Nothing = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Skybox value: static_cast<int32_t>(0x1)
static ::UnityEngine::CameraClearFlags const Skybox;

/// @brief Field Color value: static_cast<int32_t>(0x2)
static ::UnityEngine::CameraClearFlags const Color;

/// @brief Field SolidColor value: static_cast<int32_t>(0x2)
static ::UnityEngine::CameraClearFlags const SolidColor;

/// @brief Field Depth value: static_cast<int32_t>(0x3)
static ::UnityEngine::CameraClearFlags const Depth;

/// @brief Field Nothing value: static_cast<int32_t>(0x4)
static ::UnityEngine::CameraClearFlags const Nothing;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraClearFlags_Unwrapped () const noexcept {
return std::bit_cast<__CameraClearFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CameraClearFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CameraClearFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CameraClearFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CameraClearFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CameraClearFlags, "UnityEngine", "CameraClearFlags");
