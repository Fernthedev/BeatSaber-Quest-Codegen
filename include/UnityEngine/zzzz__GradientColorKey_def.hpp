#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GradientColorKey)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct GradientColorKey;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GradientColorKey);
// Type: UnityEngine::GradientColorKey
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10254))
// CS Name: ::UnityEngine::GradientColorKey
struct CORDL_TYPE GradientColorKey : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field color offset 0x0
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field time offset 0x10
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

/// @brief Method .ctor addr 0x2cdd60c size 0x10 virtual false final false
inline void _ctor(::UnityEngine::Color  col, float_t  time) ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
constexpr GradientColorKey(::UnityEngine::Color  color, float_t  time) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GradientColorKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GradientColorKey()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GradientColorKey, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientColorKey, "UnityEngine", "GradientColorKey");
