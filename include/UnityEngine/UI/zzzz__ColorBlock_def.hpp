#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorBlock)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ColorBlock;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::ColorBlock);
// Type: UnityEngine.UI::ColorBlock
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13023))
// CS Name: ::UnityEngine.UI::ColorBlock
struct CORDL_TYPE ColorBlock : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field m_NormalColor offset 0x0
 __declspec(property(get=__get_m_NormalColor, put=__set_m_NormalColor)) ::UnityEngine::Color  m_NormalColor;

/// @brief Field m_HighlightedColor offset 0x10
 __declspec(property(get=__get_m_HighlightedColor, put=__set_m_HighlightedColor)) ::UnityEngine::Color  m_HighlightedColor;

/// @brief Field m_PressedColor offset 0x20
 __declspec(property(get=__get_m_PressedColor, put=__set_m_PressedColor)) ::UnityEngine::Color  m_PressedColor;

/// @brief Field m_SelectedColor offset 0x30
 __declspec(property(get=__get_m_SelectedColor, put=__set_m_SelectedColor)) ::UnityEngine::Color  m_SelectedColor;

/// @brief Field m_DisabledColor offset 0x40
 __declspec(property(get=__get_m_DisabledColor, put=__set_m_DisabledColor)) ::UnityEngine::Color  m_DisabledColor;

/// @brief Field m_ColorMultiplier offset 0x50
 __declspec(property(get=__get_m_ColorMultiplier, put=__set_m_ColorMultiplier)) float_t  m_ColorMultiplier;

/// @brief Field m_FadeDuration offset 0x54
 __declspec(property(get=__get_m_FadeDuration, put=__set_m_FadeDuration)) float_t  m_FadeDuration;

 __declspec(property(get=get_normalColor, put=set_normalColor)) ::UnityEngine::Color  normalColor;

 __declspec(property(get=get_highlightedColor, put=set_highlightedColor)) ::UnityEngine::Color  highlightedColor;

 __declspec(property(get=get_pressedColor, put=set_pressedColor)) ::UnityEngine::Color  pressedColor;

 __declspec(property(get=get_selectedColor, put=set_selectedColor)) ::UnityEngine::Color  selectedColor;

 __declspec(property(get=get_disabledColor, put=set_disabledColor)) ::UnityEngine::Color  disabledColor;

 __declspec(property(get=get_colorMultiplier, put=set_colorMultiplier)) float_t  colorMultiplier;

 __declspec(property(get=get_fadeDuration, put=set_fadeDuration)) float_t  fadeDuration;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::ColorBlock>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UI::ColorBlock>*() ;

constexpr void __set_m_NormalColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_NormalColor() ;

constexpr ::UnityEngine::Color const& __get_m_NormalColor() const;

constexpr void __set_m_HighlightedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_HighlightedColor() ;

constexpr ::UnityEngine::Color const& __get_m_HighlightedColor() const;

constexpr void __set_m_PressedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_PressedColor() ;

constexpr ::UnityEngine::Color const& __get_m_PressedColor() const;

constexpr void __set_m_SelectedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_SelectedColor() ;

constexpr ::UnityEngine::Color const& __get_m_SelectedColor() const;

constexpr void __set_m_DisabledColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_DisabledColor() ;

constexpr ::UnityEngine::Color const& __get_m_DisabledColor() const;

constexpr void __set_m_ColorMultiplier(float_t  value) ;

constexpr float_t& __get_m_ColorMultiplier() ;

constexpr float_t const& __get_m_ColorMultiplier() const;

constexpr void __set_m_FadeDuration(float_t  value) ;

constexpr float_t& __get_m_FadeDuration() ;

constexpr float_t const& __get_m_FadeDuration() const;

static inline void setStaticF_defaultColorBlock(::UnityEngine::UI::ColorBlock  value) ;

static inline ::UnityEngine::UI::ColorBlock getStaticF_defaultColorBlock() ;

/// @brief Method get_normalColor addr 0x2d52e14 size 0xc virtual false final false
inline ::UnityEngine::Color get_normalColor() ;

/// @brief Method set_normalColor addr 0x2d52e20 size 0xc virtual false final false
inline void set_normalColor(::UnityEngine::Color  value) ;

/// @brief Method get_highlightedColor addr 0x2d52e2c size 0xc virtual false final false
inline ::UnityEngine::Color get_highlightedColor() ;

/// @brief Method set_highlightedColor addr 0x2d52e38 size 0xc virtual false final false
inline void set_highlightedColor(::UnityEngine::Color  value) ;

/// @brief Method get_pressedColor addr 0x2d52e44 size 0xc virtual false final false
inline ::UnityEngine::Color get_pressedColor() ;

/// @brief Method set_pressedColor addr 0x2d52e50 size 0xc virtual false final false
inline void set_pressedColor(::UnityEngine::Color  value) ;

/// @brief Method get_selectedColor addr 0x2d52e5c size 0xc virtual false final false
inline ::UnityEngine::Color get_selectedColor() ;

/// @brief Method set_selectedColor addr 0x2d52e68 size 0xc virtual false final false
inline void set_selectedColor(::UnityEngine::Color  value) ;

/// @brief Method get_disabledColor addr 0x2d52e74 size 0xc virtual false final false
inline ::UnityEngine::Color get_disabledColor() ;

/// @brief Method set_disabledColor addr 0x2d52e80 size 0xc virtual false final false
inline void set_disabledColor(::UnityEngine::Color  value) ;

/// @brief Method get_colorMultiplier addr 0x2d52e8c size 0x8 virtual false final false
inline float_t get_colorMultiplier() ;

/// @brief Method set_colorMultiplier addr 0x2d52e94 size 0x8 virtual false final false
inline void set_colorMultiplier(float_t  value) ;

/// @brief Method get_fadeDuration addr 0x2d52e9c size 0x8 virtual false final false
inline float_t get_fadeDuration() ;

/// @brief Method set_fadeDuration addr 0x2d52ea4 size 0x8 virtual false final false
inline void set_fadeDuration(float_t  value) ;

/// @brief Method Equals addr 0x2d52f28 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2d52fb8 size 0x124 virtual true final true
inline bool Equals(::UnityEngine::UI::ColorBlock  other) ;

/// @brief Method op_Equality addr 0x2d530dc size 0x34 virtual false final false
static inline bool op_Equality(::UnityEngine::UI::ColorBlock  point1, ::UnityEngine::UI::ColorBlock  point2) ;

/// @brief Method op_Inequality addr 0x2d53110 size 0x38 virtual false final false
static inline bool op_Inequality(::UnityEngine::UI::ColorBlock  point1, ::UnityEngine::UI::ColorBlock  point2) ;

/// @brief Method GetHashCode addr 0x2d53148 size 0x6c virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_NormalColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_HighlightedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_PressedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_SelectedColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_DisabledColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_FadeDuration", ty: "float_t", modifiers: "", def_value: None }]
constexpr ColorBlock(::UnityEngine::Color  m_NormalColor, ::UnityEngine::Color  m_HighlightedColor, ::UnityEngine::Color  m_PressedColor, ::UnityEngine::Color  m_SelectedColor, ::UnityEngine::Color  m_DisabledColor, float_t  m_ColorMultiplier, float_t  m_FadeDuration) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorBlock(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorBlock()  = default;


// Fields

// Static field defaultColorBlock


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ColorBlock, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ColorBlock, "UnityEngine.UI", "ColorBlock");
