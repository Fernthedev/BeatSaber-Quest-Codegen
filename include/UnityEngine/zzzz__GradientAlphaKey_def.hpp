#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GradientAlphaKey)
// Forward declare root types
namespace UnityEngine {
struct GradientAlphaKey;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GradientAlphaKey);
// Type: UnityEngine::GradientAlphaKey
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10255))
// CS Name: ::UnityEngine::GradientAlphaKey
struct CORDL_TYPE GradientAlphaKey : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field alpha offset 0x0
 __declspec(property(get=__get_alpha, put=__set_alpha)) float_t  alpha;

/// @brief Field time offset 0x4
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

constexpr void __set_alpha(float_t  value) ;

constexpr float_t& __get_alpha() ;

constexpr float_t const& __get_alpha() const;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

/// @brief Method .ctor addr 0x2cdd61c size 0x8 virtual false final false
inline void _ctor(float_t  alpha, float_t  time) ;

// Ctor Parameters [CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
constexpr GradientAlphaKey(float_t  alpha, float_t  time) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GradientAlphaKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GradientAlphaKey()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GradientAlphaKey, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientAlphaKey, "UnityEngine", "GradientAlphaKey");
