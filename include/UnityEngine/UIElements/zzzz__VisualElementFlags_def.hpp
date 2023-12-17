#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementFlags)
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualElementFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualElementFlags);
// Type: UnityEngine.UIElements::VisualElementFlags
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6822))
// CS Name: ::UnityEngine.UIElements::VisualElementFlags
struct CORDL_TYPE VisualElementFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualElementFlags_Unwrapped
enum struct __VisualElementFlags_Unwrapped : int32_t {
__E_WorldTransformDirty = static_cast<int32_t>(0x1),
__E_WorldTransformInverseDirty = static_cast<int32_t>(0x2),
__E_WorldClipDirty = static_cast<int32_t>(0x4),
__E_BoundingBoxDirty = static_cast<int32_t>(0x8),
__E_WorldBoundingBoxDirty = static_cast<int32_t>(0x10),
__E_LayoutManual = static_cast<int32_t>(0x20),
__E_CompositeRoot = static_cast<int32_t>(0x40),
__E_RequireMeasureFunction = static_cast<int32_t>(0x80),
__E_EnableViewDataPersistence = static_cast<int32_t>(0x100),
__E_DisableClipping = static_cast<int32_t>(0x200),
__E_NeedsAttachToPanelEvent = static_cast<int32_t>(0x400),
__E_HierarchyDisplayed = static_cast<int32_t>(0x800),
__E_StyleInitialized = static_cast<int32_t>(0x1000),
__E_Init = static_cast<int32_t>(0x81f),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field WorldTransformDirty value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformDirty;

/// @brief Field WorldTransformInverseDirty value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformInverseDirty;

/// @brief Field WorldClipDirty value: static_cast<int32_t>(0x4)
static ::UnityEngine::UIElements::VisualElementFlags const WorldClipDirty;

/// @brief Field BoundingBoxDirty value: static_cast<int32_t>(0x8)
static ::UnityEngine::UIElements::VisualElementFlags const BoundingBoxDirty;

/// @brief Field WorldBoundingBoxDirty value: static_cast<int32_t>(0x10)
static ::UnityEngine::UIElements::VisualElementFlags const WorldBoundingBoxDirty;

/// @brief Field LayoutManual value: static_cast<int32_t>(0x20)
static ::UnityEngine::UIElements::VisualElementFlags const LayoutManual;

/// @brief Field CompositeRoot value: static_cast<int32_t>(0x40)
static ::UnityEngine::UIElements::VisualElementFlags const CompositeRoot;

/// @brief Field RequireMeasureFunction value: static_cast<int32_t>(0x80)
static ::UnityEngine::UIElements::VisualElementFlags const RequireMeasureFunction;

/// @brief Field EnableViewDataPersistence value: static_cast<int32_t>(0x100)
static ::UnityEngine::UIElements::VisualElementFlags const EnableViewDataPersistence;

/// @brief Field DisableClipping value: static_cast<int32_t>(0x200)
static ::UnityEngine::UIElements::VisualElementFlags const DisableClipping;

/// @brief Field NeedsAttachToPanelEvent value: static_cast<int32_t>(0x400)
static ::UnityEngine::UIElements::VisualElementFlags const NeedsAttachToPanelEvent;

/// @brief Field HierarchyDisplayed value: static_cast<int32_t>(0x800)
static ::UnityEngine::UIElements::VisualElementFlags const HierarchyDisplayed;

/// @brief Field StyleInitialized value: static_cast<int32_t>(0x1000)
static ::UnityEngine::UIElements::VisualElementFlags const StyleInitialized;

/// @brief Field Init value: static_cast<int32_t>(0x81f)
static ::UnityEngine::UIElements::VisualElementFlags const Init;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualElementFlags_Unwrapped () const noexcept {
return std::bit_cast<__VisualElementFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VisualElementFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VisualElementFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VisualElementFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFlags, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFlags, "UnityEngine.UIElements", "VisualElementFlags");
