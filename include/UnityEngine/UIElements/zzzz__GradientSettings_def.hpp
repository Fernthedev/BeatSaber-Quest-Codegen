#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GradientSettings)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct GradientType;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
struct AddressMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct GradientSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::GradientSettings);
// Type: UnityEngine.UIElements::GradientSettings
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6805))
// CS Name: ::UnityEngine.UIElements::GradientSettings
struct CORDL_TYPE GradientSettings : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field gradientType offset 0x0
 __declspec(property(get=__get_gradientType, put=__set_gradientType)) ::UnityEngine::UIElements::GradientType  gradientType;

/// @brief Field addressMode offset 0x4
 __declspec(property(get=__get_addressMode, put=__set_addressMode)) ::UnityEngine::UIElements::AddressMode  addressMode;

/// @brief Field radialFocus offset 0x8
 __declspec(property(get=__get_radialFocus, put=__set_radialFocus)) ::UnityEngine::Vector2  radialFocus;

/// @brief Field location offset 0x10
 __declspec(property(get=__get_location, put=__set_location)) ::UnityEngine::RectInt  location;

constexpr void __set_gradientType(::UnityEngine::UIElements::GradientType  value) ;

constexpr ::UnityEngine::UIElements::GradientType& __get_gradientType() ;

constexpr ::UnityEngine::UIElements::GradientType const& __get_gradientType() const;

constexpr void __set_addressMode(::UnityEngine::UIElements::AddressMode  value) ;

constexpr ::UnityEngine::UIElements::AddressMode& __get_addressMode() ;

constexpr ::UnityEngine::UIElements::AddressMode const& __get_addressMode() const;

constexpr void __set_radialFocus(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_radialFocus() ;

constexpr ::UnityEngine::Vector2 const& __get_radialFocus() const;

constexpr void __set_location(::UnityEngine::RectInt  value) ;

constexpr ::UnityEngine::RectInt& __get_location() ;

constexpr ::UnityEngine::RectInt const& __get_location() const;

// Ctor Parameters [CppParam { name: "gradientType", ty: "::UnityEngine::UIElements::GradientType", modifiers: "", def_value: None }, CppParam { name: "addressMode", ty: "::UnityEngine::UIElements::AddressMode", modifiers: "", def_value: None }, CppParam { name: "radialFocus", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "location", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None }]
constexpr GradientSettings(::UnityEngine::UIElements::GradientType  gradientType, ::UnityEngine::UIElements::AddressMode  addressMode, ::UnityEngine::Vector2  radialFocus, ::UnityEngine::RectInt  location) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GradientSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GradientSettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GradientSettings, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GradientSettings, "UnityEngine.UIElements", "GradientSettings");
