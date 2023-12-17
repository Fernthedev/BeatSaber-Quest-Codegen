#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(TextColorGradient)
namespace UnityEngine::TextCore::Text {
struct ColorGradientMode;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextColorGradient);
// Type: UnityEngine.TextCore.Text::TextColorGradient
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722)), TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13723))
// CS Name: ::UnityEngine.TextCore.Text::TextColorGradient*
class CORDL_TYPE TextColorGradient : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field k_DefaultColorMode value: static_cast<int32_t>(0x3)
static ::UnityEngine::TextCore::Text::ColorGradientMode const k_DefaultColorMode;

/// @brief Field colorMode offset 0x18
 __declspec(property(get=__get_colorMode, put=__set_colorMode)) ::UnityEngine::TextCore::Text::ColorGradientMode  colorMode;

/// @brief Field topLeft offset 0x1c
 __declspec(property(get=__get_topLeft, put=__set_topLeft)) ::UnityEngine::Color  topLeft;

/// @brief Field topRight offset 0x2c
 __declspec(property(get=__get_topRight, put=__set_topRight)) ::UnityEngine::Color  topRight;

/// @brief Field bottomLeft offset 0x3c
 __declspec(property(get=__get_bottomLeft, put=__set_bottomLeft)) ::UnityEngine::Color  bottomLeft;

/// @brief Field bottomRight offset 0x4c
 __declspec(property(get=__get_bottomRight, put=__set_bottomRight)) ::UnityEngine::Color  bottomRight;

constexpr void __set_colorMode(::UnityEngine::TextCore::Text::ColorGradientMode  value) ;

constexpr ::UnityEngine::TextCore::Text::ColorGradientMode& __get_colorMode() ;

constexpr ::UnityEngine::TextCore::Text::ColorGradientMode const& __get_colorMode() const;

constexpr void __set_topLeft(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_topLeft() ;

constexpr ::UnityEngine::Color const& __get_topLeft() const;

constexpr void __set_topRight(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_topRight() ;

constexpr ::UnityEngine::Color const& __get_topRight() const;

constexpr void __set_bottomLeft(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_bottomLeft() ;

constexpr ::UnityEngine::Color const& __get_bottomLeft() const;

constexpr void __set_bottomRight(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_bottomRight() ;

constexpr ::UnityEngine::Color const& __get_bottomRight() const;

static inline void setStaticF_k_DefaultColor(::UnityEngine::Color  value) ;

static inline ::UnityEngine::Color getStaticF_k_DefaultColor() ;

static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor() ;

/// @brief Method .ctor addr 0x2d4a530 size 0x9c virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor(::UnityEngine::Color  color) ;

/// @brief Method .ctor addr 0x2d4a5cc size 0x6c virtual false final false
inline void _ctor(::UnityEngine::Color  color) ;

static inline ::UnityEngine::TextCore::Text::TextColorGradient* New_ctor(::UnityEngine::Color  color0, ::UnityEngine::Color  color1, ::UnityEngine::Color  color2, ::UnityEngine::Color  color3) ;

/// @brief Method .ctor addr 0x2d4a638 size 0xa4 virtual false final false
inline void _ctor(::UnityEngine::Color  color0, ::UnityEngine::Color  color1, ::UnityEngine::Color  color2, ::UnityEngine::Color  color3) ;

// Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextColorGradient(TextColorGradient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextColorGradient(TextColorGradient const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextColorGradient()  = default;
public:


// Fields

// Static field k_DefaultColor


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextColorGradient, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextColorGradient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextColorGradient*, "UnityEngine.TextCore.Text", "TextColorGradient");
