#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexFlags)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::VertexFlags);
// Type: UnityEngine.UIElements.UIR::VertexFlags
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7440))
// CS Name: ::UnityEngine.UIElements.UIR::VertexFlags
struct CORDL_TYPE VertexFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VertexFlags_Unwrapped
enum struct __VertexFlags_Unwrapped : int32_t {
__E_IsSolid = static_cast<int32_t>(0x0),
__E_IsText = static_cast<int32_t>(0x1),
__E_IsTextured = static_cast<int32_t>(0x2),
__E_IsDynamic = static_cast<int32_t>(0x3),
__E_IsSvgGradients = static_cast<int32_t>(0x4),
__E_LastType = static_cast<int32_t>(0xa),
__E_IsGraphViewEdge = static_cast<int32_t>(0xa),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field IsSolid value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::UIR::VertexFlags const IsSolid;

/// @brief Field IsText value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::UIR::VertexFlags const IsText;

/// @brief Field IsTextured value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::UIR::VertexFlags const IsTextured;

/// @brief Field IsDynamic value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::UIR::VertexFlags const IsDynamic;

/// @brief Field IsSvgGradients value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::UIR::VertexFlags const IsSvgGradients;

/// @brief Field LastType value: static_cast<int32_t>(0xa)
static ::UnityEngine::UIElements::UIR::VertexFlags const LastType;

/// @brief Field IsGraphViewEdge value: static_cast<int32_t>(0xa)
static ::UnityEngine::UIElements::UIR::VertexFlags const IsGraphViewEdge;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexFlags_Unwrapped () const noexcept {
return std::bit_cast<__VertexFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VertexFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VertexFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VertexFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VertexFlags, "UnityEngine.UIElements.UIR", "VertexFlags");
