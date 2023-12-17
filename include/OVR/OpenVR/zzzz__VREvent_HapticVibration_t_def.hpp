#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_HapticVibration_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_HapticVibration_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_HapticVibration_t);
// Type: OVR.OpenVR::VREvent_HapticVibration_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8687))
// CS Name: ::OVR.OpenVR::VREvent_HapticVibration_t
struct CORDL_TYPE VREvent_HapticVibration_t : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field containerHandle offset 0x0
 __declspec(property(get=__get_containerHandle, put=__set_containerHandle)) uint64_t  containerHandle;

/// @brief Field componentHandle offset 0x8
 __declspec(property(get=__get_componentHandle, put=__set_componentHandle)) uint64_t  componentHandle;

/// @brief Field fDurationSeconds offset 0x10
 __declspec(property(get=__get_fDurationSeconds, put=__set_fDurationSeconds)) float_t  fDurationSeconds;

/// @brief Field fFrequency offset 0x14
 __declspec(property(get=__get_fFrequency, put=__set_fFrequency)) float_t  fFrequency;

/// @brief Field fAmplitude offset 0x18
 __declspec(property(get=__get_fAmplitude, put=__set_fAmplitude)) float_t  fAmplitude;

constexpr void __set_containerHandle(uint64_t  value) ;

constexpr uint64_t& __get_containerHandle() ;

constexpr uint64_t const& __get_containerHandle() const;

constexpr void __set_componentHandle(uint64_t  value) ;

constexpr uint64_t& __get_componentHandle() ;

constexpr uint64_t const& __get_componentHandle() const;

constexpr void __set_fDurationSeconds(float_t  value) ;

constexpr float_t& __get_fDurationSeconds() ;

constexpr float_t const& __get_fDurationSeconds() const;

constexpr void __set_fFrequency(float_t  value) ;

constexpr float_t& __get_fFrequency() ;

constexpr float_t const& __get_fFrequency() const;

constexpr void __set_fAmplitude(float_t  value) ;

constexpr float_t& __get_fAmplitude() ;

constexpr float_t const& __get_fAmplitude() const;

// Ctor Parameters [CppParam { name: "containerHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "componentHandle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "fDurationSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fAmplitude", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_HapticVibration_t(uint64_t  containerHandle, uint64_t  componentHandle, float_t  fDurationSeconds, float_t  fFrequency, float_t  fAmplitude) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_HapticVibration_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_HapticVibration_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_HapticVibration_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_HapticVibration_t, "OVR.OpenVR", "VREvent_HapticVibration_t");
