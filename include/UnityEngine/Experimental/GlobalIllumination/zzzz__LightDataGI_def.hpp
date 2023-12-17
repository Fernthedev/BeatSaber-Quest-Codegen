#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightDataGI)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LightDataGI);
// Type: UnityEngine.Experimental.GlobalIllumination::LightDataGI
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10397))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LightDataGI
struct CORDL_TYPE LightDataGI : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field instanceID offset 0x0
 __declspec(property(get=__get_instanceID, put=__set_instanceID)) int32_t  instanceID;

/// @brief Field cookieID offset 0x4
 __declspec(property(get=__get_cookieID, put=__set_cookieID)) int32_t  cookieID;

/// @brief Field cookieScale offset 0x8
 __declspec(property(get=__get_cookieScale, put=__set_cookieScale)) float_t  cookieScale;

/// @brief Field color offset 0xc
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color;

/// @brief Field indirectColor offset 0x1c
 __declspec(property(get=__get_indirectColor, put=__set_indirectColor)) ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor;

/// @brief Field orientation offset 0x2c
 __declspec(property(get=__get_orientation, put=__set_orientation)) ::UnityEngine::Quaternion  orientation;

/// @brief Field position offset 0x3c
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field range offset 0x48
 __declspec(property(get=__get_range, put=__set_range)) float_t  range;

/// @brief Field coneAngle offset 0x4c
 __declspec(property(get=__get_coneAngle, put=__set_coneAngle)) float_t  coneAngle;

/// @brief Field innerConeAngle offset 0x50
 __declspec(property(get=__get_innerConeAngle, put=__set_innerConeAngle)) float_t  innerConeAngle;

/// @brief Field shape0 offset 0x54
 __declspec(property(get=__get_shape0, put=__set_shape0)) float_t  shape0;

/// @brief Field shape1 offset 0x58
 __declspec(property(get=__get_shape1, put=__set_shape1)) float_t  shape1;

/// @brief Field type offset 0x5c
 __declspec(property(get=__get_type, put=__set_type)) ::UnityEngine::Experimental::GlobalIllumination::LightType  type;

/// @brief Field mode offset 0x5d
 __declspec(property(get=__get_mode, put=__set_mode)) ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode;

/// @brief Field shadow offset 0x5e
 __declspec(property(get=__get_shadow, put=__set_shadow)) uint8_t  shadow;

/// @brief Field falloff offset 0x5f
 __declspec(property(get=__get_falloff, put=__set_falloff)) ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff;

constexpr void __set_instanceID(int32_t  value) ;

constexpr int32_t& __get_instanceID() ;

constexpr int32_t const& __get_instanceID() const;

constexpr void __set_cookieID(int32_t  value) ;

constexpr int32_t& __get_cookieID() ;

constexpr int32_t const& __get_cookieID() const;

constexpr void __set_cookieScale(float_t  value) ;

constexpr float_t& __get_cookieScale() ;

constexpr float_t const& __get_cookieScale() const;

constexpr void __set_color(::UnityEngine::Experimental::GlobalIllumination::LinearColor  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor& __get_color() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor const& __get_color() const;

constexpr void __set_indirectColor(::UnityEngine::Experimental::GlobalIllumination::LinearColor  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor& __get_indirectColor() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LinearColor const& __get_indirectColor() const;

constexpr void __set_orientation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_orientation() ;

constexpr ::UnityEngine::Quaternion const& __get_orientation() const;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_range(float_t  value) ;

constexpr float_t& __get_range() ;

constexpr float_t const& __get_range() const;

constexpr void __set_coneAngle(float_t  value) ;

constexpr float_t& __get_coneAngle() ;

constexpr float_t const& __get_coneAngle() const;

constexpr void __set_innerConeAngle(float_t  value) ;

constexpr float_t& __get_innerConeAngle() ;

constexpr float_t const& __get_innerConeAngle() const;

constexpr void __set_shape0(float_t  value) ;

constexpr float_t& __get_shape0() ;

constexpr float_t const& __get_shape0() const;

constexpr void __set_shape1(float_t  value) ;

constexpr float_t& __get_shape1() ;

constexpr float_t const& __get_shape1() const;

constexpr void __set_type(::UnityEngine::Experimental::GlobalIllumination::LightType  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType& __get_type() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightType const& __get_type() const;

constexpr void __set_mode(::UnityEngine::Experimental::GlobalIllumination::LightMode  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode& __get_mode() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::LightMode const& __get_mode() const;

constexpr void __set_shadow(uint8_t  value) ;

constexpr uint8_t& __get_shadow() ;

constexpr uint8_t const& __get_shadow() const;

constexpr void __set_falloff(::UnityEngine::Experimental::GlobalIllumination::FalloffType  value) ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType& __get_falloff() ;

constexpr ::UnityEngine::Experimental::GlobalIllumination::FalloffType const& __get_falloff() const;

/// @brief Method Init addr 0x2cf2488 size 0x68 virtual false final false
inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight>  light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method Init addr 0x2cf24f0 size 0x70 virtual false final false
inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight>  light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method Init addr 0x2cf2560 size 0x78 virtual false final false
inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight>  light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method Init addr 0x2cf25d8 size 0x70 virtual false final false
inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight>  light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method Init addr 0x2cf2648 size 0x70 virtual false final false
inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight>  light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie>  cookie) ;

/// @brief Method InitNoBake addr 0x2cf26b8 size 0x10 virtual false final false
inline void InitNoBake(int32_t  lightInstanceID) ;

// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookieID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookieScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shape0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shape1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::UnityEngine::Experimental::GlobalIllumination::LightType", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
constexpr LightDataGI(int32_t  instanceID, int32_t  cookieID, float_t  cookieScale, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor  indirectColor, ::UnityEngine::Quaternion  orientation, ::UnityEngine::Vector3  position, float_t  range, float_t  coneAngle, float_t  innerConeAngle, float_t  shape0, float_t  shape1, ::UnityEngine::Experimental::GlobalIllumination::LightType  type, ::UnityEngine::Experimental::GlobalIllumination::LightMode  mode, uint8_t  shadow, ::UnityEngine::Experimental::GlobalIllumination::FalloffType  falloff) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LightDataGI(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LightDataGI()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightDataGI, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, "UnityEngine.Experimental.GlobalIllumination", "LightDataGI");
