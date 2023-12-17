#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextCoreSettings)
namespace UnityEngine {
struct Color;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::TextCoreSettings);
// Type: UnityEngine.UIElements.UIR::TextCoreSettings
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7415))
// CS Name: ::UnityEngine.UIElements.UIR::TextCoreSettings
struct CORDL_TYPE TextCoreSettings : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field faceColor offset 0x0
 __declspec(property(get=__get_faceColor, put=__set_faceColor)) ::UnityEngine::Color  faceColor;

/// @brief Field outlineColor offset 0x10
 __declspec(property(get=__get_outlineColor, put=__set_outlineColor)) ::UnityEngine::Color  outlineColor;

/// @brief Field outlineWidth offset 0x20
 __declspec(property(get=__get_outlineWidth, put=__set_outlineWidth)) float_t  outlineWidth;

/// @brief Field underlayColor offset 0x24
 __declspec(property(get=__get_underlayColor, put=__set_underlayColor)) ::UnityEngine::Color  underlayColor;

/// @brief Field underlayOffset offset 0x34
 __declspec(property(get=__get_underlayOffset, put=__set_underlayOffset)) ::UnityEngine::Vector2  underlayOffset;

/// @brief Field underlaySoftness offset 0x3c
 __declspec(property(get=__get_underlaySoftness, put=__set_underlaySoftness)) float_t  underlaySoftness;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*() ;

constexpr void __set_faceColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_faceColor() ;

constexpr ::UnityEngine::Color const& __get_faceColor() const;

constexpr void __set_outlineColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_outlineColor() ;

constexpr ::UnityEngine::Color const& __get_outlineColor() const;

constexpr void __set_outlineWidth(float_t  value) ;

constexpr float_t& __get_outlineWidth() ;

constexpr float_t const& __get_outlineWidth() const;

constexpr void __set_underlayColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_underlayColor() ;

constexpr ::UnityEngine::Color const& __get_underlayColor() const;

constexpr void __set_underlayOffset(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_underlayOffset() ;

constexpr ::UnityEngine::Vector2 const& __get_underlayOffset() const;

constexpr void __set_underlaySoftness(float_t  value) ;

constexpr float_t& __get_underlaySoftness() ;

constexpr float_t const& __get_underlaySoftness() const;

/// @brief Method Equals addr 0x2dcc738 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2dcc7c8 size 0xe8 virtual true final true
inline bool Equals(::UnityEngine::UIElements::UIR::TextCoreSettings  other) ;

/// @brief Method GetHashCode addr 0x2dcc8b0 size 0x198 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "faceColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "outlineColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "outlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "underlayColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "underlayOffset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "underlaySoftness", ty: "float_t", modifiers: "", def_value: None }]
constexpr TextCoreSettings(::UnityEngine::Color  faceColor, ::UnityEngine::Color  outlineColor, float_t  outlineWidth, ::UnityEngine::Color  underlayColor, ::UnityEngine::Vector2  underlayOffset, float_t  underlaySoftness) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextCoreSettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextCoreSettings()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextCoreSettings, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextCoreSettings, "UnityEngine.UIElements.UIR", "TextCoreSettings");
