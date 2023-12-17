#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_TouchPadMove_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_TouchPadMove_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_TouchPadMove_t);
// Type: OVR.OpenVR::VREvent_TouchPadMove_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8669))
// CS Name: ::OVR.OpenVR::VREvent_TouchPadMove_t
struct CORDL_TYPE VREvent_TouchPadMove_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field bFingerDown offset 0x0
 __declspec(property(get=__get_bFingerDown, put=__set_bFingerDown)) bool  bFingerDown;

/// @brief Field flSecondsFingerDown offset 0x4
 __declspec(property(get=__get_flSecondsFingerDown, put=__set_flSecondsFingerDown)) float_t  flSecondsFingerDown;

/// @brief Field fValueXFirst offset 0x8
 __declspec(property(get=__get_fValueXFirst, put=__set_fValueXFirst)) float_t  fValueXFirst;

/// @brief Field fValueYFirst offset 0xc
 __declspec(property(get=__get_fValueYFirst, put=__set_fValueYFirst)) float_t  fValueYFirst;

/// @brief Field fValueXRaw offset 0x10
 __declspec(property(get=__get_fValueXRaw, put=__set_fValueXRaw)) float_t  fValueXRaw;

/// @brief Field fValueYRaw offset 0x14
 __declspec(property(get=__get_fValueYRaw, put=__set_fValueYRaw)) float_t  fValueYRaw;

constexpr void __set_bFingerDown(bool  value) ;

constexpr bool& __get_bFingerDown() ;

constexpr bool const& __get_bFingerDown() const;

constexpr void __set_flSecondsFingerDown(float_t  value) ;

constexpr float_t& __get_flSecondsFingerDown() ;

constexpr float_t const& __get_flSecondsFingerDown() const;

constexpr void __set_fValueXFirst(float_t  value) ;

constexpr float_t& __get_fValueXFirst() ;

constexpr float_t const& __get_fValueXFirst() const;

constexpr void __set_fValueYFirst(float_t  value) ;

constexpr float_t& __get_fValueYFirst() ;

constexpr float_t const& __get_fValueYFirst() const;

constexpr void __set_fValueXRaw(float_t  value) ;

constexpr float_t& __get_fValueXRaw() ;

constexpr float_t const& __get_fValueXRaw() const;

constexpr void __set_fValueYRaw(float_t  value) ;

constexpr float_t& __get_fValueYRaw() ;

constexpr float_t const& __get_fValueYRaw() const;

// Ctor Parameters [CppParam { name: "bFingerDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flSecondsFingerDown", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueXFirst", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueYFirst", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueXRaw", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fValueYRaw", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_TouchPadMove_t(bool  bFingerDown, float_t  flSecondsFingerDown, float_t  fValueXFirst, float_t  fValueYFirst, float_t  fValueXRaw, float_t  fValueYRaw) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_TouchPadMove_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_TouchPadMove_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_TouchPadMove_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_TouchPadMove_t, "OVR.OpenVR", "VREvent_TouchPadMove_t");
