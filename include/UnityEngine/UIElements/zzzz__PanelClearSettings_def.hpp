#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PanelClearSettings)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelClearSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelClearSettings);
// Type: UnityEngine.UIElements::PanelClearSettings
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6866))
// CS Name: ::UnityEngine.UIElements::PanelClearSettings
struct CORDL_TYPE PanelClearSettings : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field clearDepthStencil offset 0x0
 __declspec(property(get=__get_clearDepthStencil, put=__set_clearDepthStencil)) bool  clearDepthStencil;

/// @brief Field clearColor offset 0x1
 __declspec(property(get=__get_clearColor, put=__set_clearColor)) bool  clearColor;

/// @brief Field color offset 0x4
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

constexpr void __set_clearDepthStencil(bool  value) ;

constexpr bool& __get_clearDepthStencil() ;

constexpr bool const& __get_clearDepthStencil() const;

constexpr void __set_clearColor(bool  value) ;

constexpr bool& __get_clearColor() ;

constexpr bool const& __get_clearColor() const;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

// Ctor Parameters [CppParam { name: "clearDepthStencil", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clearColor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr PanelClearSettings(bool  clearDepthStencil, bool  clearColor, ::UnityEngine::Color  color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PanelClearSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PanelClearSettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelClearSettings, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelClearSettings, "UnityEngine.UIElements", "PanelClearSettings");
