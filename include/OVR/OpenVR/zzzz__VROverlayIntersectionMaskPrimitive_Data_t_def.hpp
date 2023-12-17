#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionMaskPrimitive_Data_t)
namespace OVR::OpenVR {
struct IntersectionMaskRectangle_t;
}
namespace OVR::OpenVR {
struct IntersectionMaskCircle_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_Data_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t);
// Type: OVR.OpenVR::VROverlayIntersectionMaskPrimitive_Data_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8643))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionMaskPrimitive_Data_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_Data_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Rectangle offset 0x0
 __declspec(property(get=__get_m_Rectangle, put=__set_m_Rectangle)) ::OVR::OpenVR::IntersectionMaskRectangle_t  m_Rectangle;

/// @brief Field m_Circle offset 0x0
 __declspec(property(get=__get_m_Circle, put=__set_m_Circle)) ::OVR::OpenVR::IntersectionMaskCircle_t  m_Circle;

constexpr void __set_m_Rectangle(::OVR::OpenVR::IntersectionMaskRectangle_t  value) ;

constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t& __get_m_Rectangle() ;

constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t const& __get_m_Rectangle() const;

constexpr void __set_m_Circle(::OVR::OpenVR::IntersectionMaskCircle_t  value) ;

constexpr ::OVR::OpenVR::IntersectionMaskCircle_t& __get_m_Circle() ;

constexpr ::OVR::OpenVR::IntersectionMaskCircle_t const& __get_m_Circle() const;

// Ctor Parameters [CppParam { name: "m_Rectangle", ty: "::OVR::OpenVR::IntersectionMaskRectangle_t", modifiers: "", def_value: None }, CppParam { name: "m_Circle", ty: "::OVR::OpenVR::IntersectionMaskCircle_t", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionMaskPrimitive_Data_t(::OVR::OpenVR::IntersectionMaskRectangle_t  m_Rectangle, ::OVR::OpenVR::IntersectionMaskCircle_t  m_Circle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VROverlayIntersectionMaskPrimitive_Data_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VROverlayIntersectionMaskPrimitive_Data_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_Data_t");
