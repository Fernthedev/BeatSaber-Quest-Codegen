#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LinearColor)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LinearColor);
// Type: UnityEngine.Experimental.GlobalIllumination::LinearColor
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10390))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LinearColor
struct CORDL_TYPE LinearColor : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_red offset 0x0
 __declspec(property(get=__get_m_red, put=__set_m_red)) float_t  m_red;

/// @brief Field m_green offset 0x4
 __declspec(property(get=__get_m_green, put=__set_m_green)) float_t  m_green;

/// @brief Field m_blue offset 0x8
 __declspec(property(get=__get_m_blue, put=__set_m_blue)) float_t  m_blue;

/// @brief Field m_intensity offset 0xc
 __declspec(property(get=__get_m_intensity, put=__set_m_intensity)) float_t  m_intensity;

 __declspec(property(get=get_red, put=set_red)) float_t  red;

 __declspec(property(get=get_green, put=set_green)) float_t  green;

 __declspec(property(get=get_blue, put=set_blue)) float_t  blue;

constexpr void __set_m_red(float_t  value) ;

constexpr float_t& __get_m_red() ;

constexpr float_t const& __get_m_red() const;

constexpr void __set_m_green(float_t  value) ;

constexpr float_t& __get_m_green() ;

constexpr float_t const& __get_m_green() const;

constexpr void __set_m_blue(float_t  value) ;

constexpr float_t& __get_m_blue() ;

constexpr float_t const& __get_m_blue() const;

constexpr void __set_m_intensity(float_t  value) ;

constexpr float_t& __get_m_intensity() ;

constexpr float_t const& __get_m_intensity() const;

/// @brief Method get_red addr 0x2cf1f08 size 0x8 virtual false final false
inline float_t get_red() ;

/// @brief Method set_red addr 0x2cf1f10 size 0xb4 virtual false final false
inline void set_red(float_t  value) ;

/// @brief Method get_green addr 0x2cf1fc4 size 0x8 virtual false final false
inline float_t get_green() ;

/// @brief Method set_green addr 0x2cf1fcc size 0xb4 virtual false final false
inline void set_green(float_t  value) ;

/// @brief Method get_blue addr 0x2cf2080 size 0x8 virtual false final false
inline float_t get_blue() ;

/// @brief Method set_blue addr 0x2cf2088 size 0xb4 virtual false final false
inline void set_blue(float_t  value) ;

/// @brief Method Convert addr 0x2cf213c size 0x338 virtual false final false
static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(::UnityEngine::Color  color, float_t  intensity) ;

/// @brief Method Black addr 0x2cf2474 size 0x14 virtual false final false
static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor Black() ;

// Ctor Parameters [CppParam { name: "m_red", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_green", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_blue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_intensity", ty: "float_t", modifiers: "", def_value: None }]
constexpr LinearColor(float_t  m_red, float_t  m_green, float_t  m_blue, float_t  m_intensity) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LinearColor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LinearColor()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
