#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(IntersectionMaskRectangle_t)
// Forward declare root types
namespace OVR::OpenVR {
struct IntersectionMaskRectangle_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::IntersectionMaskRectangle_t);
// Type: OVR.OpenVR::IntersectionMaskRectangle_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8708))
// CS Name: ::OVR.OpenVR::IntersectionMaskRectangle_t
struct CORDL_TYPE IntersectionMaskRectangle_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_flTopLeftX offset 0x0
 __declspec(property(get=__get_m_flTopLeftX, put=__set_m_flTopLeftX)) float_t  m_flTopLeftX;

/// @brief Field m_flTopLeftY offset 0x4
 __declspec(property(get=__get_m_flTopLeftY, put=__set_m_flTopLeftY)) float_t  m_flTopLeftY;

/// @brief Field m_flWidth offset 0x8
 __declspec(property(get=__get_m_flWidth, put=__set_m_flWidth)) float_t  m_flWidth;

/// @brief Field m_flHeight offset 0xc
 __declspec(property(get=__get_m_flHeight, put=__set_m_flHeight)) float_t  m_flHeight;

constexpr void __set_m_flTopLeftX(float_t  value) ;

constexpr float_t& __get_m_flTopLeftX() ;

constexpr float_t const& __get_m_flTopLeftX() const;

constexpr void __set_m_flTopLeftY(float_t  value) ;

constexpr float_t& __get_m_flTopLeftY() ;

constexpr float_t const& __get_m_flTopLeftY() const;

constexpr void __set_m_flWidth(float_t  value) ;

constexpr float_t& __get_m_flWidth() ;

constexpr float_t const& __get_m_flWidth() const;

constexpr void __set_m_flHeight(float_t  value) ;

constexpr float_t& __get_m_flHeight() ;

constexpr float_t const& __get_m_flHeight() const;

// Ctor Parameters [CppParam { name: "m_flTopLeftX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flTopLeftY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flHeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr IntersectionMaskRectangle_t(float_t  m_flTopLeftX, float_t  m_flTopLeftY, float_t  m_flWidth, float_t  m_flHeight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IntersectionMaskRectangle_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IntersectionMaskRectangle_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IntersectionMaskRectangle_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IntersectionMaskRectangle_t, "OVR.OpenVR", "IntersectionMaskRectangle_t");
