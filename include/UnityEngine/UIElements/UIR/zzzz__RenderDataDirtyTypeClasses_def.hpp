#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderDataDirtyTypeClasses)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses);
// Type: UnityEngine.UIElements.UIR::RenderDataDirtyTypeClasses
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7395))
// CS Name: ::UnityEngine.UIElements.UIR::RenderDataDirtyTypeClasses
struct CORDL_TYPE RenderDataDirtyTypeClasses : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderDataDirtyTypeClasses_Unwrapped
enum struct __RenderDataDirtyTypeClasses_Unwrapped : int32_t {
__E_Clipping = static_cast<int32_t>(0x0),
__E_Opacity = static_cast<int32_t>(0x1),
__E_Color = static_cast<int32_t>(0x2),
__E_TransformSize = static_cast<int32_t>(0x3),
__E_Visuals = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Clipping value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Clipping;

/// @brief Field Opacity value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Opacity;

/// @brief Field Color value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Color;

/// @brief Field TransformSize value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const TransformSize;

/// @brief Field Visuals value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Visuals;

/// @brief Field Count value: static_cast<int32_t>(0x5)
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Count;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderDataDirtyTypeClasses_Unwrapped () const noexcept {
return std::bit_cast<__RenderDataDirtyTypeClasses_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderDataDirtyTypeClasses(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderDataDirtyTypeClasses(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderDataDirtyTypeClasses()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, "UnityEngine.UIElements.UIR", "RenderDataDirtyTypeClasses");
