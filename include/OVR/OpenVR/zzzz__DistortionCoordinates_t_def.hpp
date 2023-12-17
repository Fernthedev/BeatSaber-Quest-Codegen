#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DistortionCoordinates_t)
// Forward declare root types
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::DistortionCoordinates_t);
// Type: OVR.OpenVR::DistortionCoordinates_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8656))
// CS Name: ::OVR.OpenVR::DistortionCoordinates_t
struct CORDL_TYPE DistortionCoordinates_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field rfRed0 offset 0x0
 __declspec(property(get=__get_rfRed0, put=__set_rfRed0)) float_t  rfRed0;

/// @brief Field rfRed1 offset 0x4
 __declspec(property(get=__get_rfRed1, put=__set_rfRed1)) float_t  rfRed1;

/// @brief Field rfGreen0 offset 0x8
 __declspec(property(get=__get_rfGreen0, put=__set_rfGreen0)) float_t  rfGreen0;

/// @brief Field rfGreen1 offset 0xc
 __declspec(property(get=__get_rfGreen1, put=__set_rfGreen1)) float_t  rfGreen1;

/// @brief Field rfBlue0 offset 0x10
 __declspec(property(get=__get_rfBlue0, put=__set_rfBlue0)) float_t  rfBlue0;

/// @brief Field rfBlue1 offset 0x14
 __declspec(property(get=__get_rfBlue1, put=__set_rfBlue1)) float_t  rfBlue1;

constexpr void __set_rfRed0(float_t  value) ;

constexpr float_t& __get_rfRed0() ;

constexpr float_t const& __get_rfRed0() const;

constexpr void __set_rfRed1(float_t  value) ;

constexpr float_t& __get_rfRed1() ;

constexpr float_t const& __get_rfRed1() const;

constexpr void __set_rfGreen0(float_t  value) ;

constexpr float_t& __get_rfGreen0() ;

constexpr float_t const& __get_rfGreen0() const;

constexpr void __set_rfGreen1(float_t  value) ;

constexpr float_t& __get_rfGreen1() ;

constexpr float_t const& __get_rfGreen1() const;

constexpr void __set_rfBlue0(float_t  value) ;

constexpr float_t& __get_rfBlue0() ;

constexpr float_t const& __get_rfBlue0() const;

constexpr void __set_rfBlue1(float_t  value) ;

constexpr float_t& __get_rfBlue1() ;

constexpr float_t const& __get_rfBlue1() const;

// Ctor Parameters [CppParam { name: "rfRed0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfRed1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfGreen0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfGreen1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfBlue0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfBlue1", ty: "float_t", modifiers: "", def_value: None }]
constexpr DistortionCoordinates_t(float_t  rfRed0, float_t  rfRed1, float_t  rfGreen0, float_t  rfGreen1, float_t  rfBlue0, float_t  rfBlue1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DistortionCoordinates_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DistortionCoordinates_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::DistortionCoordinates_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::DistortionCoordinates_t, "OVR.OpenVR", "DistortionCoordinates_t");
