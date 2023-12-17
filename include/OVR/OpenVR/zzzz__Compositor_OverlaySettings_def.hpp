#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor_OverlaySettings)
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_OverlaySettings;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Compositor_OverlaySettings);
// Type: OVR.OpenVR::Compositor_OverlaySettings
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8698))
// CS Name: ::OVR.OpenVR::Compositor_OverlaySettings
struct CORDL_TYPE Compositor_OverlaySettings : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field size offset 0x0
 __declspec(property(get=__get_size, put=__set_size)) uint32_t  size;

/// @brief Field curved offset 0x4
 __declspec(property(get=__get_curved, put=__set_curved)) bool  curved;

/// @brief Field antialias offset 0x5
 __declspec(property(get=__get_antialias, put=__set_antialias)) bool  antialias;

/// @brief Field scale offset 0x8
 __declspec(property(get=__get_scale, put=__set_scale)) float_t  scale;

/// @brief Field distance offset 0xc
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field alpha offset 0x10
 __declspec(property(get=__get_alpha, put=__set_alpha)) float_t  alpha;

/// @brief Field uOffset offset 0x14
 __declspec(property(get=__get_uOffset, put=__set_uOffset)) float_t  uOffset;

/// @brief Field vOffset offset 0x18
 __declspec(property(get=__get_vOffset, put=__set_vOffset)) float_t  vOffset;

/// @brief Field uScale offset 0x1c
 __declspec(property(get=__get_uScale, put=__set_uScale)) float_t  uScale;

/// @brief Field vScale offset 0x20
 __declspec(property(get=__get_vScale, put=__set_vScale)) float_t  vScale;

/// @brief Field gridDivs offset 0x24
 __declspec(property(get=__get_gridDivs, put=__set_gridDivs)) float_t  gridDivs;

/// @brief Field gridWidth offset 0x28
 __declspec(property(get=__get_gridWidth, put=__set_gridWidth)) float_t  gridWidth;

/// @brief Field gridScale offset 0x2c
 __declspec(property(get=__get_gridScale, put=__set_gridScale)) float_t  gridScale;

/// @brief Field transform offset 0x30
 __declspec(property(get=__get_transform, put=__set_transform)) ::OVR::OpenVR::HmdMatrix44_t  transform;

constexpr void __set_size(uint32_t  value) ;

constexpr uint32_t& __get_size() ;

constexpr uint32_t const& __get_size() const;

constexpr void __set_curved(bool  value) ;

constexpr bool& __get_curved() ;

constexpr bool const& __get_curved() const;

constexpr void __set_antialias(bool  value) ;

constexpr bool& __get_antialias() ;

constexpr bool const& __get_antialias() const;

constexpr void __set_scale(float_t  value) ;

constexpr float_t& __get_scale() ;

constexpr float_t const& __get_scale() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_alpha(float_t  value) ;

constexpr float_t& __get_alpha() ;

constexpr float_t const& __get_alpha() const;

constexpr void __set_uOffset(float_t  value) ;

constexpr float_t& __get_uOffset() ;

constexpr float_t const& __get_uOffset() const;

constexpr void __set_vOffset(float_t  value) ;

constexpr float_t& __get_vOffset() ;

constexpr float_t const& __get_vOffset() const;

constexpr void __set_uScale(float_t  value) ;

constexpr float_t& __get_uScale() ;

constexpr float_t const& __get_uScale() const;

constexpr void __set_vScale(float_t  value) ;

constexpr float_t& __get_vScale() ;

constexpr float_t const& __get_vScale() const;

constexpr void __set_gridDivs(float_t  value) ;

constexpr float_t& __get_gridDivs() ;

constexpr float_t const& __get_gridDivs() const;

constexpr void __set_gridWidth(float_t  value) ;

constexpr float_t& __get_gridWidth() ;

constexpr float_t const& __get_gridWidth() const;

constexpr void __set_gridScale(float_t  value) ;

constexpr float_t& __get_gridScale() ;

constexpr float_t const& __get_gridScale() const;

constexpr void __set_transform(::OVR::OpenVR::HmdMatrix44_t  value) ;

constexpr ::OVR::OpenVR::HmdMatrix44_t& __get_transform() ;

constexpr ::OVR::OpenVR::HmdMatrix44_t const& __get_transform() const;

// Ctor Parameters [CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "curved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "antialias", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridDivs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: None }]
constexpr Compositor_OverlaySettings(uint32_t  size, bool  curved, bool  antialias, float_t  scale, float_t  distance, float_t  alpha, float_t  uOffset, float_t  vOffset, float_t  uScale, float_t  vScale, float_t  gridDivs, float_t  gridWidth, float_t  gridScale, ::OVR::OpenVR::HmdMatrix44_t  transform) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Compositor_OverlaySettings(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Compositor_OverlaySettings()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Compositor_OverlaySettings, 0x70>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_OverlaySettings, "OVR.OpenVR", "Compositor_OverlaySettings");
