#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(IntersectionMaskCircle_t)
// Forward declare root types
namespace OVR::OpenVR {
struct IntersectionMaskCircle_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::IntersectionMaskCircle_t);
// Type: OVR.OpenVR::IntersectionMaskCircle_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8709))
// CS Name: ::OVR.OpenVR::IntersectionMaskCircle_t
struct CORDL_TYPE IntersectionMaskCircle_t : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_flCenterX offset 0x0
 __declspec(property(get=__get_m_flCenterX, put=__set_m_flCenterX)) float_t  m_flCenterX;

/// @brief Field m_flCenterY offset 0x4
 __declspec(property(get=__get_m_flCenterY, put=__set_m_flCenterY)) float_t  m_flCenterY;

/// @brief Field m_flRadius offset 0x8
 __declspec(property(get=__get_m_flRadius, put=__set_m_flRadius)) float_t  m_flRadius;

constexpr void __set_m_flCenterX(float_t  value) ;

constexpr float_t& __get_m_flCenterX() ;

constexpr float_t const& __get_m_flCenterX() const;

constexpr void __set_m_flCenterY(float_t  value) ;

constexpr float_t& __get_m_flCenterY() ;

constexpr float_t const& __get_m_flCenterY() const;

constexpr void __set_m_flRadius(float_t  value) ;

constexpr float_t& __get_m_flRadius() ;

constexpr float_t const& __get_m_flRadius() const;

// Ctor Parameters [CppParam { name: "m_flCenterX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCenterY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flRadius", ty: "float_t", modifiers: "", def_value: None }]
constexpr IntersectionMaskCircle_t(float_t  m_flCenterX, float_t  m_flCenterY, float_t  m_flRadius) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IntersectionMaskCircle_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IntersectionMaskCircle_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IntersectionMaskCircle_t, 0xc>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IntersectionMaskCircle_t, "OVR.OpenVR", "IntersectionMaskCircle_t");
