#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionMaskPrimitive_t)
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_Data_t;
}
namespace OVR::OpenVR {
struct EVROverlayIntersectionMaskPrimitiveType;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t);
// Type: OVR.OpenVR::VROverlayIntersectionMaskPrimitive_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8710))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionMaskPrimitive_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_t : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_nPrimitiveType offset 0x0
 __declspec(property(get=__get_m_nPrimitiveType, put=__set_m_nPrimitiveType)) ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType  m_nPrimitiveType;

/// @brief Field m_Primitive offset 0x4
 __declspec(property(get=__get_m_Primitive, put=__set_m_Primitive)) ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t  m_Primitive;

constexpr void __set_m_nPrimitiveType(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType  value) ;

constexpr ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType& __get_m_nPrimitiveType() ;

constexpr ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType const& __get_m_nPrimitiveType() const;

constexpr void __set_m_Primitive(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t  value) ;

constexpr ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t& __get_m_Primitive() ;

constexpr ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t const& __get_m_Primitive() const;

// Ctor Parameters [CppParam { name: "m_nPrimitiveType", ty: "::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType", modifiers: "", def_value: None }, CppParam { name: "m_Primitive", ty: "::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t", modifiers: "", def_value: None }]
constexpr VROverlayIntersectionMaskPrimitive_t(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType  m_nPrimitiveType, ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t  m_Primitive) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VROverlayIntersectionMaskPrimitive_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VROverlayIntersectionMaskPrimitive_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, 0x14>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_t");
