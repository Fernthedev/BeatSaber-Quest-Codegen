#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETrackingResult)
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackingResult;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETrackingResult);
// Type: OVR.OpenVR::ETrackingResult
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8583))
// CS Name: ::OVR.OpenVR::ETrackingResult
struct CORDL_TYPE ETrackingResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ETrackingResult_Unwrapped
enum struct __ETrackingResult_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x1),
__E_Calibrating_InProgress = static_cast<int32_t>(0x64),
__E_Calibrating_OutOfRange = static_cast<int32_t>(0x65),
__E_Running_OK = static_cast<int32_t>(0xc8),
__E_Running_OutOfRange = static_cast<int32_t>(0xc9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Uninitialized value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::ETrackingResult const Uninitialized;

/// @brief Field Calibrating_InProgress value: static_cast<int32_t>(0x64)
static ::OVR::OpenVR::ETrackingResult const Calibrating_InProgress;

/// @brief Field Calibrating_OutOfRange value: static_cast<int32_t>(0x65)
static ::OVR::OpenVR::ETrackingResult const Calibrating_OutOfRange;

/// @brief Field Running_OK value: static_cast<int32_t>(0xc8)
static ::OVR::OpenVR::ETrackingResult const Running_OK;

/// @brief Field Running_OutOfRange value: static_cast<int32_t>(0xc9)
static ::OVR::OpenVR::ETrackingResult const Running_OutOfRange;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackingResult_Unwrapped () const noexcept {
return std::bit_cast<__ETrackingResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackingResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ETrackingResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ETrackingResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETrackingResult, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackingResult, "OVR.OpenVR", "ETrackingResult");
