#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualData)
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::VisualData);
// Type: UnityEngine.UIElements::VisualData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7361))
// CS Name: ::UnityEngine.UIElements::VisualData
struct CORDL_TYPE VisualData : public ::bs_hook::ValueTypeWrapper<0x98> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field backgroundColor offset 0x0
 __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

/// @brief Field backgroundImage offset 0x10
 __declspec(property(get=__get_backgroundImage, put=__set_backgroundImage)) ::UnityEngine::UIElements::Background  backgroundImage;

/// @brief Field borderBottomColor offset 0x30
 __declspec(property(get=__get_borderBottomColor, put=__set_borderBottomColor)) ::UnityEngine::Color  borderBottomColor;

/// @brief Field borderBottomLeftRadius offset 0x40
 __declspec(property(get=__get_borderBottomLeftRadius, put=__set_borderBottomLeftRadius)) ::UnityEngine::UIElements::Length  borderBottomLeftRadius;

/// @brief Field borderBottomRightRadius offset 0x48
 __declspec(property(get=__get_borderBottomRightRadius, put=__set_borderBottomRightRadius)) ::UnityEngine::UIElements::Length  borderBottomRightRadius;

/// @brief Field borderLeftColor offset 0x50
 __declspec(property(get=__get_borderLeftColor, put=__set_borderLeftColor)) ::UnityEngine::Color  borderLeftColor;

/// @brief Field borderRightColor offset 0x60
 __declspec(property(get=__get_borderRightColor, put=__set_borderRightColor)) ::UnityEngine::Color  borderRightColor;

/// @brief Field borderTopColor offset 0x70
 __declspec(property(get=__get_borderTopColor, put=__set_borderTopColor)) ::UnityEngine::Color  borderTopColor;

/// @brief Field borderTopLeftRadius offset 0x80
 __declspec(property(get=__get_borderTopLeftRadius, put=__set_borderTopLeftRadius)) ::UnityEngine::UIElements::Length  borderTopLeftRadius;

/// @brief Field borderTopRightRadius offset 0x88
 __declspec(property(get=__get_borderTopRightRadius, put=__set_borderTopRightRadius)) ::UnityEngine::UIElements::Length  borderTopRightRadius;

/// @brief Field opacity offset 0x90
 __declspec(property(get=__get_opacity, put=__set_opacity)) float_t  opacity;

/// @brief Field overflow offset 0x94
 __declspec(property(get=__get_overflow, put=__set_overflow)) ::UnityEngine::UIElements::OverflowInternal  overflow;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>"
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::VisualData>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::VisualData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::VisualData>*() ;

constexpr void __set_backgroundColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_backgroundColor() ;

constexpr ::UnityEngine::Color const& __get_backgroundColor() const;

constexpr void __set_backgroundImage(::UnityEngine::UIElements::Background  value) ;

constexpr ::UnityEngine::UIElements::Background& __get_backgroundImage() ;

constexpr ::UnityEngine::UIElements::Background const& __get_backgroundImage() const;

constexpr void __set_borderBottomColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_borderBottomColor() ;

constexpr ::UnityEngine::Color const& __get_borderBottomColor() const;

constexpr void __set_borderBottomLeftRadius(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_borderBottomLeftRadius() ;

constexpr ::UnityEngine::UIElements::Length const& __get_borderBottomLeftRadius() const;

constexpr void __set_borderBottomRightRadius(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_borderBottomRightRadius() ;

constexpr ::UnityEngine::UIElements::Length const& __get_borderBottomRightRadius() const;

constexpr void __set_borderLeftColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_borderLeftColor() ;

constexpr ::UnityEngine::Color const& __get_borderLeftColor() const;

constexpr void __set_borderRightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_borderRightColor() ;

constexpr ::UnityEngine::Color const& __get_borderRightColor() const;

constexpr void __set_borderTopColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_borderTopColor() ;

constexpr ::UnityEngine::Color const& __get_borderTopColor() const;

constexpr void __set_borderTopLeftRadius(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_borderTopLeftRadius() ;

constexpr ::UnityEngine::UIElements::Length const& __get_borderTopLeftRadius() const;

constexpr void __set_borderTopRightRadius(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_borderTopRightRadius() ;

constexpr ::UnityEngine::UIElements::Length const& __get_borderTopRightRadius() const;

constexpr void __set_opacity(float_t  value) ;

constexpr float_t& __get_opacity() ;

constexpr float_t const& __get_opacity() const;

constexpr void __set_overflow(::UnityEngine::UIElements::OverflowInternal  value) ;

constexpr ::UnityEngine::UIElements::OverflowInternal& __get_overflow() ;

constexpr ::UnityEngine::UIElements::OverflowInternal const& __get_overflow() const;

/// @brief Method Copy addr 0x2e84ae0 size 0x1c virtual true final true
inline ::UnityEngine::UIElements::VisualData Copy() ;

/// @brief Method CopyFrom addr 0x2e84afc size 0x14 virtual true final true
inline void CopyFrom(ByRef<::UnityEngine::UIElements::VisualData>  other) ;

/// @brief Method op_Equality addr 0x2e84b10 size 0x1ec virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::VisualData  lhs, ::UnityEngine::UIElements::VisualData  rhs) ;

/// @brief Method Equals addr 0x2e84cfc size 0x4c virtual true final true
inline bool Equals(::UnityEngine::UIElements::VisualData  other) ;

/// @brief Method Equals addr 0x2e84d48 size 0xa8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e84df0 size 0x280 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "backgroundImage", ty: "::UnityEngine::UIElements::Background", modifiers: "", def_value: None }, CppParam { name: "borderBottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderBottomLeftRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderBottomRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderLeftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderRightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "borderTopLeftRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "borderTopRightRadius", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "opacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: None }]
constexpr VisualData(::UnityEngine::Color  backgroundColor, ::UnityEngine::UIElements::Background  backgroundImage, ::UnityEngine::Color  borderBottomColor, ::UnityEngine::UIElements::Length  borderBottomLeftRadius, ::UnityEngine::UIElements::Length  borderBottomRightRadius, ::UnityEngine::Color  borderLeftColor, ::UnityEngine::Color  borderRightColor, ::UnityEngine::Color  borderTopColor, ::UnityEngine::UIElements::Length  borderTopLeftRadius, ::UnityEngine::UIElements::Length  borderTopRightRadius, float_t  opacity, ::UnityEngine::UIElements::OverflowInternal  overflow) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VisualData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x98>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VisualData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualData, 0x98>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualData, "UnityEngine.UIElements", "VisualData");
