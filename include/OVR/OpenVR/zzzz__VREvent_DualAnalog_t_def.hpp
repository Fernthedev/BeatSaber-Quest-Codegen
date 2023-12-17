#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_DualAnalog_t)
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_DualAnalog_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_DualAnalog_t);
// Type: OVR.OpenVR::VREvent_DualAnalog_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8686))
// CS Name: ::OVR.OpenVR::VREvent_DualAnalog_t
struct CORDL_TYPE VREvent_DualAnalog_t : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) float_t  x;

/// @brief Field y offset 0x4
 __declspec(property(get=__get_y, put=__set_y)) float_t  y;

/// @brief Field transformedX offset 0x8
 __declspec(property(get=__get_transformedX, put=__set_transformedX)) float_t  transformedX;

/// @brief Field transformedY offset 0xc
 __declspec(property(get=__get_transformedY, put=__set_transformedY)) float_t  transformedY;

/// @brief Field which offset 0x10
 __declspec(property(get=__get_which, put=__set_which)) ::OVR::OpenVR::EDualAnalogWhich  which;

constexpr void __set_x(float_t  value) ;

constexpr float_t& __get_x() ;

constexpr float_t const& __get_x() const;

constexpr void __set_y(float_t  value) ;

constexpr float_t& __get_y() ;

constexpr float_t const& __get_y() const;

constexpr void __set_transformedX(float_t  value) ;

constexpr float_t& __get_transformedX() ;

constexpr float_t const& __get_transformedX() const;

constexpr void __set_transformedY(float_t  value) ;

constexpr float_t& __get_transformedY() ;

constexpr float_t const& __get_transformedY() const;

constexpr void __set_which(::OVR::OpenVR::EDualAnalogWhich  value) ;

constexpr ::OVR::OpenVR::EDualAnalogWhich& __get_which() ;

constexpr ::OVR::OpenVR::EDualAnalogWhich const& __get_which() const;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transformedX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transformedY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "which", ty: "::OVR::OpenVR::EDualAnalogWhich", modifiers: "", def_value: None }]
constexpr VREvent_DualAnalog_t(float_t  x, float_t  y, float_t  transformedX, float_t  transformedY, ::OVR::OpenVR::EDualAnalogWhich  which) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_DualAnalog_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_DualAnalog_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_DualAnalog_t, 0x14>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_DualAnalog_t, "OVR.OpenVR", "VREvent_DualAnalog_t");
