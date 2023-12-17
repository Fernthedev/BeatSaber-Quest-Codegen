#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderHints)
// Forward declare root types
namespace UnityEngine::UIElements {
struct RenderHints;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::RenderHints);
// Type: UnityEngine.UIElements::RenderHints
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6865))
// CS Name: ::UnityEngine.UIElements::RenderHints
struct CORDL_TYPE RenderHints : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderHints_Unwrapped
enum struct __RenderHints_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_GroupTransform = static_cast<int32_t>(0x1),
__E_BoneTransform = static_cast<int32_t>(0x2),
__E_ClipWithScissors = static_cast<int32_t>(0x4),
__E_MaskContainer = static_cast<int32_t>(0x8),
__E_DynamicColor = static_cast<int32_t>(0x10),
__E_DirtyOffset = static_cast<int32_t>(0x5),
__E_DirtyGroupTransform = static_cast<int32_t>(0x20),
__E_DirtyBoneTransform = static_cast<int32_t>(0x40),
__E_DirtyClipWithScissors = static_cast<int32_t>(0x80),
__E_DirtyMaskContainer = static_cast<int32_t>(0x100),
__E_DirtyAll = static_cast<int32_t>(0x1e0),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::RenderHints const None;

/// @brief Field GroupTransform value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::RenderHints const GroupTransform;

/// @brief Field BoneTransform value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::RenderHints const BoneTransform;

/// @brief Field ClipWithScissors value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::RenderHints const ClipWithScissors;

/// @brief Field MaskContainer value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::RenderHints const MaskContainer;

/// @brief Field DynamicColor value: static_cast<int32_t>(0x10)
static ::UnityEngine::UIElements::RenderHints const DynamicColor;

/// @brief Field DirtyOffset value: static_cast<int32_t>(0x5)
static ::UnityEngine::UIElements::RenderHints const DirtyOffset;

/// @brief Field DirtyGroupTransform value: static_cast<int32_t>(0x20)
static ::UnityEngine::UIElements::RenderHints const DirtyGroupTransform;

/// @brief Field DirtyBoneTransform value: static_cast<int32_t>(0x40)
static ::UnityEngine::UIElements::RenderHints const DirtyBoneTransform;

/// @brief Field DirtyClipWithScissors value: static_cast<int32_t>(0x80)
static ::UnityEngine::UIElements::RenderHints const DirtyClipWithScissors;

/// @brief Field DirtyMaskContainer value: static_cast<int32_t>(0x100)
static ::UnityEngine::UIElements::RenderHints const DirtyMaskContainer;

/// @brief Field DirtyAll value: static_cast<int32_t>(0x1e0)
static ::UnityEngine::UIElements::RenderHints const DirtyAll;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderHints_Unwrapped () const noexcept {
return std::bit_cast<__RenderHints_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderHints(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderHints(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderHints()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RenderHints, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RenderHints, "UnityEngine.UIElements", "RenderHints");
