#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutData)
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements {
struct Position;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct LayoutData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::LayoutData);
// Type: UnityEngine.UIElements::LayoutData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7357))
// CS Name: ::UnityEngine.UIElements::LayoutData
struct CORDL_TYPE LayoutData : public ::bs_hook::ValueTypeWrapper<0xd0> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field alignContent offset 0x0
 __declspec(property(get=__get_alignContent, put=__set_alignContent)) ::UnityEngine::UIElements::Align  alignContent;

/// @brief Field alignItems offset 0x4
 __declspec(property(get=__get_alignItems, put=__set_alignItems)) ::UnityEngine::UIElements::Align  alignItems;

/// @brief Field alignSelf offset 0x8
 __declspec(property(get=__get_alignSelf, put=__set_alignSelf)) ::UnityEngine::UIElements::Align  alignSelf;

/// @brief Field borderBottomWidth offset 0xc
 __declspec(property(get=__get_borderBottomWidth, put=__set_borderBottomWidth)) float_t  borderBottomWidth;

/// @brief Field borderLeftWidth offset 0x10
 __declspec(property(get=__get_borderLeftWidth, put=__set_borderLeftWidth)) float_t  borderLeftWidth;

/// @brief Field borderRightWidth offset 0x14
 __declspec(property(get=__get_borderRightWidth, put=__set_borderRightWidth)) float_t  borderRightWidth;

/// @brief Field borderTopWidth offset 0x18
 __declspec(property(get=__get_borderTopWidth, put=__set_borderTopWidth)) float_t  borderTopWidth;

/// @brief Field bottom offset 0x1c
 __declspec(property(get=__get_bottom, put=__set_bottom)) ::UnityEngine::UIElements::Length  bottom;

/// @brief Field display offset 0x24
 __declspec(property(get=__get_display, put=__set_display)) ::UnityEngine::UIElements::DisplayStyle  display;

/// @brief Field flexBasis offset 0x28
 __declspec(property(get=__get_flexBasis, put=__set_flexBasis)) ::UnityEngine::UIElements::Length  flexBasis;

/// @brief Field flexDirection offset 0x30
 __declspec(property(get=__get_flexDirection, put=__set_flexDirection)) ::UnityEngine::UIElements::FlexDirection  flexDirection;

/// @brief Field flexGrow offset 0x34
 __declspec(property(get=__get_flexGrow, put=__set_flexGrow)) float_t  flexGrow;

/// @brief Field flexShrink offset 0x38
 __declspec(property(get=__get_flexShrink, put=__set_flexShrink)) float_t  flexShrink;

/// @brief Field flexWrap offset 0x3c
 __declspec(property(get=__get_flexWrap, put=__set_flexWrap)) ::UnityEngine::UIElements::Wrap  flexWrap;

/// @brief Field height offset 0x40
 __declspec(property(get=__get_height, put=__set_height)) ::UnityEngine::UIElements::Length  height;

/// @brief Field justifyContent offset 0x48
 __declspec(property(get=__get_justifyContent, put=__set_justifyContent)) ::UnityEngine::UIElements::Justify  justifyContent;

/// @brief Field left offset 0x4c
 __declspec(property(get=__get_left, put=__set_left)) ::UnityEngine::UIElements::Length  left;

/// @brief Field marginBottom offset 0x54
 __declspec(property(get=__get_marginBottom, put=__set_marginBottom)) ::UnityEngine::UIElements::Length  marginBottom;

/// @brief Field marginLeft offset 0x5c
 __declspec(property(get=__get_marginLeft, put=__set_marginLeft)) ::UnityEngine::UIElements::Length  marginLeft;

/// @brief Field marginRight offset 0x64
 __declspec(property(get=__get_marginRight, put=__set_marginRight)) ::UnityEngine::UIElements::Length  marginRight;

/// @brief Field marginTop offset 0x6c
 __declspec(property(get=__get_marginTop, put=__set_marginTop)) ::UnityEngine::UIElements::Length  marginTop;

/// @brief Field maxHeight offset 0x74
 __declspec(property(get=__get_maxHeight, put=__set_maxHeight)) ::UnityEngine::UIElements::Length  maxHeight;

/// @brief Field maxWidth offset 0x7c
 __declspec(property(get=__get_maxWidth, put=__set_maxWidth)) ::UnityEngine::UIElements::Length  maxWidth;

/// @brief Field minHeight offset 0x84
 __declspec(property(get=__get_minHeight, put=__set_minHeight)) ::UnityEngine::UIElements::Length  minHeight;

/// @brief Field minWidth offset 0x8c
 __declspec(property(get=__get_minWidth, put=__set_minWidth)) ::UnityEngine::UIElements::Length  minWidth;

/// @brief Field paddingBottom offset 0x94
 __declspec(property(get=__get_paddingBottom, put=__set_paddingBottom)) ::UnityEngine::UIElements::Length  paddingBottom;

/// @brief Field paddingLeft offset 0x9c
 __declspec(property(get=__get_paddingLeft, put=__set_paddingLeft)) ::UnityEngine::UIElements::Length  paddingLeft;

/// @brief Field paddingRight offset 0xa4
 __declspec(property(get=__get_paddingRight, put=__set_paddingRight)) ::UnityEngine::UIElements::Length  paddingRight;

/// @brief Field paddingTop offset 0xac
 __declspec(property(get=__get_paddingTop, put=__set_paddingTop)) ::UnityEngine::UIElements::Length  paddingTop;

/// @brief Field position offset 0xb4
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::UIElements::Position  position;

/// @brief Field right offset 0xb8
 __declspec(property(get=__get_right, put=__set_right)) ::UnityEngine::UIElements::Length  right;

/// @brief Field top offset 0xc0
 __declspec(property(get=__get_top, put=__set_top)) ::UnityEngine::UIElements::Length  top;

/// @brief Field width offset 0xc8
 __declspec(property(get=__get_width, put=__set_width)) ::UnityEngine::UIElements::Length  width;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>"
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>*() ;

constexpr void __set_alignContent(::UnityEngine::UIElements::Align  value) ;

constexpr ::UnityEngine::UIElements::Align& __get_alignContent() ;

constexpr ::UnityEngine::UIElements::Align const& __get_alignContent() const;

constexpr void __set_alignItems(::UnityEngine::UIElements::Align  value) ;

constexpr ::UnityEngine::UIElements::Align& __get_alignItems() ;

constexpr ::UnityEngine::UIElements::Align const& __get_alignItems() const;

constexpr void __set_alignSelf(::UnityEngine::UIElements::Align  value) ;

constexpr ::UnityEngine::UIElements::Align& __get_alignSelf() ;

constexpr ::UnityEngine::UIElements::Align const& __get_alignSelf() const;

constexpr void __set_borderBottomWidth(float_t  value) ;

constexpr float_t& __get_borderBottomWidth() ;

constexpr float_t const& __get_borderBottomWidth() const;

constexpr void __set_borderLeftWidth(float_t  value) ;

constexpr float_t& __get_borderLeftWidth() ;

constexpr float_t const& __get_borderLeftWidth() const;

constexpr void __set_borderRightWidth(float_t  value) ;

constexpr float_t& __get_borderRightWidth() ;

constexpr float_t const& __get_borderRightWidth() const;

constexpr void __set_borderTopWidth(float_t  value) ;

constexpr float_t& __get_borderTopWidth() ;

constexpr float_t const& __get_borderTopWidth() const;

constexpr void __set_bottom(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_bottom() ;

constexpr ::UnityEngine::UIElements::Length const& __get_bottom() const;

constexpr void __set_display(::UnityEngine::UIElements::DisplayStyle  value) ;

constexpr ::UnityEngine::UIElements::DisplayStyle& __get_display() ;

constexpr ::UnityEngine::UIElements::DisplayStyle const& __get_display() const;

constexpr void __set_flexBasis(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_flexBasis() ;

constexpr ::UnityEngine::UIElements::Length const& __get_flexBasis() const;

constexpr void __set_flexDirection(::UnityEngine::UIElements::FlexDirection  value) ;

constexpr ::UnityEngine::UIElements::FlexDirection& __get_flexDirection() ;

constexpr ::UnityEngine::UIElements::FlexDirection const& __get_flexDirection() const;

constexpr void __set_flexGrow(float_t  value) ;

constexpr float_t& __get_flexGrow() ;

constexpr float_t const& __get_flexGrow() const;

constexpr void __set_flexShrink(float_t  value) ;

constexpr float_t& __get_flexShrink() ;

constexpr float_t const& __get_flexShrink() const;

constexpr void __set_flexWrap(::UnityEngine::UIElements::Wrap  value) ;

constexpr ::UnityEngine::UIElements::Wrap& __get_flexWrap() ;

constexpr ::UnityEngine::UIElements::Wrap const& __get_flexWrap() const;

constexpr void __set_height(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_height() ;

constexpr ::UnityEngine::UIElements::Length const& __get_height() const;

constexpr void __set_justifyContent(::UnityEngine::UIElements::Justify  value) ;

constexpr ::UnityEngine::UIElements::Justify& __get_justifyContent() ;

constexpr ::UnityEngine::UIElements::Justify const& __get_justifyContent() const;

constexpr void __set_left(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_left() ;

constexpr ::UnityEngine::UIElements::Length const& __get_left() const;

constexpr void __set_marginBottom(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_marginBottom() ;

constexpr ::UnityEngine::UIElements::Length const& __get_marginBottom() const;

constexpr void __set_marginLeft(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_marginLeft() ;

constexpr ::UnityEngine::UIElements::Length const& __get_marginLeft() const;

constexpr void __set_marginRight(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_marginRight() ;

constexpr ::UnityEngine::UIElements::Length const& __get_marginRight() const;

constexpr void __set_marginTop(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_marginTop() ;

constexpr ::UnityEngine::UIElements::Length const& __get_marginTop() const;

constexpr void __set_maxHeight(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_maxHeight() ;

constexpr ::UnityEngine::UIElements::Length const& __get_maxHeight() const;

constexpr void __set_maxWidth(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_maxWidth() ;

constexpr ::UnityEngine::UIElements::Length const& __get_maxWidth() const;

constexpr void __set_minHeight(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_minHeight() ;

constexpr ::UnityEngine::UIElements::Length const& __get_minHeight() const;

constexpr void __set_minWidth(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_minWidth() ;

constexpr ::UnityEngine::UIElements::Length const& __get_minWidth() const;

constexpr void __set_paddingBottom(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_paddingBottom() ;

constexpr ::UnityEngine::UIElements::Length const& __get_paddingBottom() const;

constexpr void __set_paddingLeft(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_paddingLeft() ;

constexpr ::UnityEngine::UIElements::Length const& __get_paddingLeft() const;

constexpr void __set_paddingRight(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_paddingRight() ;

constexpr ::UnityEngine::UIElements::Length const& __get_paddingRight() const;

constexpr void __set_paddingTop(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_paddingTop() ;

constexpr ::UnityEngine::UIElements::Length const& __get_paddingTop() const;

constexpr void __set_position(::UnityEngine::UIElements::Position  value) ;

constexpr ::UnityEngine::UIElements::Position& __get_position() ;

constexpr ::UnityEngine::UIElements::Position const& __get_position() const;

constexpr void __set_right(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_right() ;

constexpr ::UnityEngine::UIElements::Length const& __get_right() const;

constexpr void __set_top(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_top() ;

constexpr ::UnityEngine::UIElements::Length const& __get_top() const;

constexpr void __set_width(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_width() ;

constexpr ::UnityEngine::UIElements::Length const& __get_width() const;

/// @brief Method Copy addr 0x2e83a84 size 0x1c virtual true final true
inline ::UnityEngine::UIElements::LayoutData Copy() ;

/// @brief Method CopyFrom addr 0x2e83aa0 size 0x14 virtual true final true
inline void CopyFrom(ByRef<::UnityEngine::UIElements::LayoutData>  other) ;

/// @brief Method op_Equality addr 0x2e83ab4 size 0x280 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::LayoutData  lhs, ::UnityEngine::UIElements::LayoutData  rhs) ;

/// @brief Method Equals addr 0x2e83d34 size 0x4c virtual true final true
inline bool Equals(::UnityEngine::UIElements::LayoutData  other) ;

/// @brief Method Equals addr 0x2e83d80 size 0xa8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e83e28 size 0x264 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "alignContent", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None }, CppParam { name: "alignItems", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None }, CppParam { name: "alignSelf", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None }, CppParam { name: "borderBottomWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "borderLeftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "borderRightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "borderTopWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "display", ty: "::UnityEngine::UIElements::DisplayStyle", modifiers: "", def_value: None }, CppParam { name: "flexBasis", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "flexDirection", ty: "::UnityEngine::UIElements::FlexDirection", modifiers: "", def_value: None }, CppParam { name: "flexGrow", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flexShrink", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flexWrap", ty: "::UnityEngine::UIElements::Wrap", modifiers: "", def_value: None }, CppParam { name: "height", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "justifyContent", ty: "::UnityEngine::UIElements::Justify", modifiers: "", def_value: None }, CppParam { name: "left", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginBottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginTop", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "maxHeight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "maxWidth", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "minHeight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "minWidth", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingBottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingLeft", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingRight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingTop", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::UIElements::Position", modifiers: "", def_value: None }, CppParam { name: "right", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "top", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
constexpr LayoutData(::UnityEngine::UIElements::Align  alignContent, ::UnityEngine::UIElements::Align  alignItems, ::UnityEngine::UIElements::Align  alignSelf, float_t  borderBottomWidth, float_t  borderLeftWidth, float_t  borderRightWidth, float_t  borderTopWidth, ::UnityEngine::UIElements::Length  bottom, ::UnityEngine::UIElements::DisplayStyle  display, ::UnityEngine::UIElements::Length  flexBasis, ::UnityEngine::UIElements::FlexDirection  flexDirection, float_t  flexGrow, float_t  flexShrink, ::UnityEngine::UIElements::Wrap  flexWrap, ::UnityEngine::UIElements::Length  height, ::UnityEngine::UIElements::Justify  justifyContent, ::UnityEngine::UIElements::Length  left, ::UnityEngine::UIElements::Length  marginBottom, ::UnityEngine::UIElements::Length  marginLeft, ::UnityEngine::UIElements::Length  marginRight, ::UnityEngine::UIElements::Length  marginTop, ::UnityEngine::UIElements::Length  maxHeight, ::UnityEngine::UIElements::Length  maxWidth, ::UnityEngine::UIElements::Length  minHeight, ::UnityEngine::UIElements::Length  minWidth, ::UnityEngine::UIElements::Length  paddingBottom, ::UnityEngine::UIElements::Length  paddingLeft, ::UnityEngine::UIElements::Length  paddingRight, ::UnityEngine::UIElements::Length  paddingTop, ::UnityEngine::UIElements::Position  position, ::UnityEngine::UIElements::Length  right, ::UnityEngine::UIElements::Length  top, ::UnityEngine::UIElements::Length  width) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LayoutData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xd0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LayoutData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LayoutData, 0xd0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LayoutData, "UnityEngine.UIElements", "LayoutData");
