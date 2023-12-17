#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cookie)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::Cookie);
// Type: UnityEngine.Experimental.GlobalIllumination::Cookie
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10396))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::Cookie
struct CORDL_TYPE Cookie : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field instanceID offset 0x0
 __declspec(property(get=__get_instanceID, put=__set_instanceID)) int32_t  instanceID;

/// @brief Field scale offset 0x4
 __declspec(property(get=__get_scale, put=__set_scale)) float_t  scale;

/// @brief Field sizes offset 0x8
 __declspec(property(get=__get_sizes, put=__set_sizes)) ::UnityEngine::Vector2  sizes;

constexpr void __set_instanceID(int32_t  value) ;

constexpr int32_t& __get_instanceID() ;

constexpr int32_t const& __get_instanceID() const;

constexpr void __set_scale(float_t  value) ;

constexpr float_t& __get_scale() ;

constexpr float_t const& __get_scale() const;

constexpr void __set_sizes(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_sizes() ;

constexpr ::UnityEngine::Vector2 const& __get_sizes() const;

// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Cookie(int32_t  instanceID, float_t  scale, ::UnityEngine::Vector2  sizes) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Cookie(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Cookie()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::Cookie, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Cookie, "UnityEngine.Experimental.GlobalIllumination", "Cookie");
