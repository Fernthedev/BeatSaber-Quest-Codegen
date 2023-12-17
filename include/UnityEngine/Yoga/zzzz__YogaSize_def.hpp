#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(YogaSize)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaSize);
// Type: UnityEngine.Yoga::YogaSize
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15366))
// CS Name: ::UnityEngine.Yoga::YogaSize
struct CORDL_TYPE YogaSize : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field width offset 0x0
 __declspec(property(get=__get_width, put=__set_width)) float_t  width;

/// @brief Field height offset 0x4
 __declspec(property(get=__get_height, put=__set_height)) float_t  height;

constexpr void __set_width(float_t  value) ;

constexpr float_t& __get_width() ;

constexpr float_t const& __get_width() const;

constexpr void __set_height(float_t  value) ;

constexpr float_t& __get_height() ;

constexpr float_t const& __get_height() const;

// Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
constexpr YogaSize(float_t  width, float_t  height) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YogaSize(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YogaSize()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaSize, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaSize, "UnityEngine.Yoga", "YogaSize");
