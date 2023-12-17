#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RenderModel_Vertex_t)
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_Vertex_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_Vertex_t);
// Type: OVR.OpenVR::RenderModel_Vertex_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8712))
// CS Name: ::OVR.OpenVR::RenderModel_Vertex_t
struct CORDL_TYPE RenderModel_Vertex_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field vPosition offset 0x0
 __declspec(property(get=__get_vPosition, put=__set_vPosition)) ::OVR::OpenVR::HmdVector3_t  vPosition;

/// @brief Field vNormal offset 0xc
 __declspec(property(get=__get_vNormal, put=__set_vNormal)) ::OVR::OpenVR::HmdVector3_t  vNormal;

/// @brief Field rfTextureCoord0 offset 0x18
 __declspec(property(get=__get_rfTextureCoord0, put=__set_rfTextureCoord0)) float_t  rfTextureCoord0;

/// @brief Field rfTextureCoord1 offset 0x1c
 __declspec(property(get=__get_rfTextureCoord1, put=__set_rfTextureCoord1)) float_t  rfTextureCoord1;

constexpr void __set_vPosition(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vPosition() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vPosition() const;

constexpr void __set_vNormal(::OVR::OpenVR::HmdVector3_t  value) ;

constexpr ::OVR::OpenVR::HmdVector3_t& __get_vNormal() ;

constexpr ::OVR::OpenVR::HmdVector3_t const& __get_vNormal() const;

constexpr void __set_rfTextureCoord0(float_t  value) ;

constexpr float_t& __get_rfTextureCoord0() ;

constexpr float_t const& __get_rfTextureCoord0() const;

constexpr void __set_rfTextureCoord1(float_t  value) ;

constexpr float_t& __get_rfTextureCoord1() ;

constexpr float_t const& __get_rfTextureCoord1() const;

// Ctor Parameters [CppParam { name: "vPosition", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "rfTextureCoord0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfTextureCoord1", ty: "float_t", modifiers: "", def_value: None }]
constexpr RenderModel_Vertex_t(::OVR::OpenVR::HmdVector3_t  vPosition, ::OVR::OpenVR::HmdVector3_t  vNormal, float_t  rfTextureCoord0, float_t  rfTextureCoord1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderModel_Vertex_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderModel_Vertex_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_Vertex_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_Vertex_t, "OVR.OpenVR", "RenderModel_Vertex_t");
