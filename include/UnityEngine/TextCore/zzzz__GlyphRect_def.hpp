#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphRect)
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::GlyphRect);
// Type: UnityEngine.TextCore::GlyphRect
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15528))
// CS Name: ::UnityEngine.TextCore::GlyphRect
struct CORDL_TYPE GlyphRect : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_X offset 0x0
 __declspec(property(get=__get_m_X, put=__set_m_X)) int32_t  m_X;

/// @brief Field m_Y offset 0x4
 __declspec(property(get=__get_m_Y, put=__set_m_Y)) int32_t  m_Y;

/// @brief Field m_Width offset 0x8
 __declspec(property(get=__get_m_Width, put=__set_m_Width)) int32_t  m_Width;

/// @brief Field m_Height offset 0xc
 __declspec(property(get=__get_m_Height, put=__set_m_Height)) int32_t  m_Height;

 __declspec(property(get=get_x)) int32_t  x;

 __declspec(property(get=get_y)) int32_t  y;

 __declspec(property(get=get_width)) int32_t  width;

 __declspec(property(get=get_height)) int32_t  height;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::GlyphRect>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::GlyphRect>*() ;

constexpr void __set_m_X(int32_t  value) ;

constexpr int32_t& __get_m_X() ;

constexpr int32_t const& __get_m_X() const;

constexpr void __set_m_Y(int32_t  value) ;

constexpr int32_t& __get_m_Y() ;

constexpr int32_t const& __get_m_Y() const;

constexpr void __set_m_Width(int32_t  value) ;

constexpr int32_t& __get_m_Width() ;

constexpr int32_t const& __get_m_Width() const;

constexpr void __set_m_Height(int32_t  value) ;

constexpr int32_t& __get_m_Height() ;

constexpr int32_t const& __get_m_Height() const;

static inline void setStaticF_s_ZeroGlyphRect(::UnityEngine::TextCore::GlyphRect  value) ;

static inline ::UnityEngine::TextCore::GlyphRect getStaticF_s_ZeroGlyphRect() ;

/// @brief Method get_x addr 0x2d205b8 size 0x8 virtual false final false
inline int32_t get_x() ;

/// @brief Method get_y addr 0x2d205c0 size 0x8 virtual false final false
inline int32_t get_y() ;

/// @brief Method get_width addr 0x2d205c8 size 0x8 virtual false final false
inline int32_t get_width() ;

/// @brief Method get_height addr 0x2d205d0 size 0x8 virtual false final false
inline int32_t get_height() ;

/// @brief Method get_zero addr 0x2d205d8 size 0x58 virtual false final false
static inline ::UnityEngine::TextCore::GlyphRect get_zero() ;

/// @brief Method .ctor addr 0x2d20630 size 0xc virtual false final false
inline void _ctor(int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method GetHashCode addr 0x2d2063c size 0x64 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2d206a0 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2d20718 size 0x94 virtual true final true
inline bool Equals(::UnityEngine::TextCore::GlyphRect  other) ;

// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphRect(int32_t  m_X, int32_t  m_Y, int32_t  m_Width, int32_t  m_Height) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphRect(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphRect()  = default;


// Fields

// Static field s_ZeroGlyphRect


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::GlyphRect, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphRect, "UnityEngine.TextCore", "GlyphRect");
