#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RareData)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct OverflowClipBox;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine {
struct ScaleMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct RareData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::RareData);
// Type: UnityEngine.UIElements::RareData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7358))
// CS Name: ::UnityEngine.UIElements::RareData
struct CORDL_TYPE RareData : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field cursor offset 0x0
 __declspec(property(get=__get_cursor, put=__set_cursor)) ::UnityEngine::UIElements::Cursor  cursor;

/// @brief Field textOverflow offset 0x18
 __declspec(property(get=__get_textOverflow, put=__set_textOverflow)) ::UnityEngine::UIElements::TextOverflow  textOverflow;

/// @brief Field unityBackgroundImageTintColor offset 0x1c
 __declspec(property(get=__get_unityBackgroundImageTintColor, put=__set_unityBackgroundImageTintColor)) ::UnityEngine::Color  unityBackgroundImageTintColor;

/// @brief Field unityBackgroundScaleMode offset 0x2c
 __declspec(property(get=__get_unityBackgroundScaleMode, put=__set_unityBackgroundScaleMode)) ::UnityEngine::ScaleMode  unityBackgroundScaleMode;

/// @brief Field unityOverflowClipBox offset 0x30
 __declspec(property(get=__get_unityOverflowClipBox, put=__set_unityOverflowClipBox)) ::UnityEngine::UIElements::OverflowClipBox  unityOverflowClipBox;

/// @brief Field unitySliceBottom offset 0x34
 __declspec(property(get=__get_unitySliceBottom, put=__set_unitySliceBottom)) int32_t  unitySliceBottom;

/// @brief Field unitySliceLeft offset 0x38
 __declspec(property(get=__get_unitySliceLeft, put=__set_unitySliceLeft)) int32_t  unitySliceLeft;

/// @brief Field unitySliceRight offset 0x3c
 __declspec(property(get=__get_unitySliceRight, put=__set_unitySliceRight)) int32_t  unitySliceRight;

/// @brief Field unitySliceTop offset 0x40
 __declspec(property(get=__get_unitySliceTop, put=__set_unitySliceTop)) int32_t  unitySliceTop;

/// @brief Field unityTextOverflowPosition offset 0x44
 __declspec(property(get=__get_unityTextOverflowPosition, put=__set_unityTextOverflowPosition)) ::UnityEngine::UIElements::TextOverflowPosition  unityTextOverflowPosition;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>"
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::RareData>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::RareData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::RareData>*() ;

constexpr void __set_cursor(::UnityEngine::UIElements::Cursor  value) ;

constexpr ::UnityEngine::UIElements::Cursor& __get_cursor() ;

constexpr ::UnityEngine::UIElements::Cursor const& __get_cursor() const;

constexpr void __set_textOverflow(::UnityEngine::UIElements::TextOverflow  value) ;

constexpr ::UnityEngine::UIElements::TextOverflow& __get_textOverflow() ;

constexpr ::UnityEngine::UIElements::TextOverflow const& __get_textOverflow() const;

constexpr void __set_unityBackgroundImageTintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_unityBackgroundImageTintColor() ;

constexpr ::UnityEngine::Color const& __get_unityBackgroundImageTintColor() const;

constexpr void __set_unityBackgroundScaleMode(::UnityEngine::ScaleMode  value) ;

constexpr ::UnityEngine::ScaleMode& __get_unityBackgroundScaleMode() ;

constexpr ::UnityEngine::ScaleMode const& __get_unityBackgroundScaleMode() const;

constexpr void __set_unityOverflowClipBox(::UnityEngine::UIElements::OverflowClipBox  value) ;

constexpr ::UnityEngine::UIElements::OverflowClipBox& __get_unityOverflowClipBox() ;

constexpr ::UnityEngine::UIElements::OverflowClipBox const& __get_unityOverflowClipBox() const;

constexpr void __set_unitySliceBottom(int32_t  value) ;

constexpr int32_t& __get_unitySliceBottom() ;

constexpr int32_t const& __get_unitySliceBottom() const;

constexpr void __set_unitySliceLeft(int32_t  value) ;

constexpr int32_t& __get_unitySliceLeft() ;

constexpr int32_t const& __get_unitySliceLeft() const;

constexpr void __set_unitySliceRight(int32_t  value) ;

constexpr int32_t& __get_unitySliceRight() ;

constexpr int32_t const& __get_unitySliceRight() const;

constexpr void __set_unitySliceTop(int32_t  value) ;

constexpr int32_t& __get_unitySliceTop() ;

constexpr int32_t const& __get_unitySliceTop() const;

constexpr void __set_unityTextOverflowPosition(::UnityEngine::UIElements::TextOverflowPosition  value) ;

constexpr ::UnityEngine::UIElements::TextOverflowPosition& __get_unityTextOverflowPosition() ;

constexpr ::UnityEngine::UIElements::TextOverflowPosition const& __get_unityTextOverflowPosition() const;

/// @brief Method Copy addr 0x2e8408c size 0x1c virtual true final true
inline ::UnityEngine::UIElements::RareData Copy() ;

/// @brief Method CopyFrom addr 0x2e840a8 size 0x14 virtual true final true
inline void CopyFrom(ByRef<::UnityEngine::UIElements::RareData>  other) ;

/// @brief Method op_Equality addr 0x2e840bc size 0x120 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::RareData  lhs, ::UnityEngine::UIElements::RareData  rhs) ;

/// @brief Method Equals addr 0x2e841dc size 0x44 virtual true final true
inline bool Equals(::UnityEngine::UIElements::RareData  other) ;

/// @brief Method Equals addr 0x2e84220 size 0xa0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e842c0 size 0xf8 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "cursor", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "textOverflow", ty: "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: None }, CppParam { name: "unityBackgroundImageTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "unityBackgroundScaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name: "unityOverflowClipBox", ty: "::UnityEngine::UIElements::OverflowClipBox", modifiers: "", def_value: None }, CppParam { name: "unitySliceBottom", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceLeft", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceRight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitySliceTop", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unityTextOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: None }]
constexpr RareData(::UnityEngine::UIElements::Cursor  cursor, ::UnityEngine::UIElements::TextOverflow  textOverflow, ::UnityEngine::Color  unityBackgroundImageTintColor, ::UnityEngine::ScaleMode  unityBackgroundScaleMode, ::UnityEngine::UIElements::OverflowClipBox  unityOverflowClipBox, int32_t  unitySliceBottom, int32_t  unitySliceLeft, int32_t  unitySliceRight, int32_t  unitySliceTop, ::UnityEngine::UIElements::TextOverflowPosition  unityTextOverflowPosition) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RareData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RareData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RareData, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RareData, "UnityEngine.UIElements", "RareData");
