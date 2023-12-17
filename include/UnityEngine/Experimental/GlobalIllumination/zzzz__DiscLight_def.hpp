#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscLight)
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::DiscLight);
// Type: UnityEngine.Experimental.GlobalIllumination::DiscLight
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10395))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::DiscLight
struct CORDL_TYPE DiscLight : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field instanceID offset 0x0
 __declspec(property(get=__get_instanceID, put=__set_instanceID)) int32_t  instanceID;

/// @brief Field shadow offset 0x4
 __declspec(property(get=__get_shadow, put=__set_shadow)) bool  shadow;

/// @brief Field mode offset 0x5
 __declspec(property(get=__get_mode, put=__set_mode)) ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode;

/// @brief Field position offset 0x8
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field orientation offset 0x14
 __declspec(property(get=__get_orientation, put=__set_orientation)) ::UnityEngine::Quaternion  orientation;

/// @brief Field color offset 0x24
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color;

/// @brief Field indirectColor offset 0x34
 __declspec(property(get=__get_indirectColor, put=__set_indirectColor)) ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor;

/// @brief Field range offset 0x44
 __declspec(property(get=__get_range, put=__set_range)) float_t  range;

/// @brief Field radius offset 0x48
 __declspec(property(get=__get_radius, put=__set_radius)) float_t  radius;

/// @brief Field falloff offset 0x4c
 __declspec(property(get=__get_falloff, put=__set_falloff)) ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff;

constexpr void __set_instanceID(int32_t  value) ;

constexpr int32_t& __get_instanceID() ;

constexpr int32_t const& __get_instanceID() const;

constexpr void __set_shadow(bool  value) ;

constexpr bool& __get_shadow() ;

constexpr bool const& __get_shadow() const;

constexpr void __set_mode(::UnityEngine::Experimental::GlobalIllumination::LightMode  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode& __get_mode() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode const& __get_mode() const;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_orientation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_orientation() ;

constexpr ::UnityEngine::Quaternion const& __get_orientation() const;

constexpr void __set_color(::UnityEngine::Experimental::GlobalIllumination::LinearColor  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor& __get_color() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor const& __get_color() const;

constexpr void __set_indirectColor(::UnityEngine::Experimental::GlobalIllumination::LinearColor  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor& __get_indirectColor() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor const& __get_indirectColor() const;

constexpr void __set_range(float_t  value) ;

constexpr float_t& __get_range() ;

constexpr float_t const& __get_range() const;

constexpr void __set_radius(float_t  value) ;

constexpr float_t& __get_radius() ;

constexpr float_t const& __get_radius() const;

constexpr void __set_falloff(::UnityEngine::Experimental::GlobalIllumination::FalloffType  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType& __get_falloff() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType const& __get_falloff() const;

// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
constexpr DiscLight(int32_t  instanceID, bool  shadow, ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor, float_t  range, float_t  radius, ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DiscLight(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DiscLight()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::DiscLight, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::DiscLight, "UnityEngine.Experimental.GlobalIllumination", "DiscLight");
