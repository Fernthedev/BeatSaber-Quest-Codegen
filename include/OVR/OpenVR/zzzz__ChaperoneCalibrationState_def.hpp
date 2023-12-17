#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChaperoneCalibrationState)
// Forward declare root types
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ChaperoneCalibrationState);
// Type: OVR.OpenVR::ChaperoneCalibrationState
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8619))
// CS Name: ::OVR.OpenVR::ChaperoneCalibrationState
struct CORDL_TYPE ChaperoneCalibrationState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChaperoneCalibrationState_Unwrapped
enum struct __ChaperoneCalibrationState_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x64),
__E_Warning_BaseStationMayHaveMoved = static_cast<int32_t>(0x65),
__E_Warning_BaseStationRemoved = static_cast<int32_t>(0x66),
__E_Warning_SeatedBoundsInvalid = static_cast<int32_t>(0x67),
__E_Error = static_cast<int32_t>(0xc8),
__E_Error_BaseStationUninitialized = static_cast<int32_t>(0xc9),
__E_Error_BaseStationConflict = static_cast<int32_t>(0xca),
__E_Error_PlayAreaInvalid = static_cast<int32_t>(0xcb),
__E_Error_CollisionBoundsInvalid = static_cast<int32_t>(0xcc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::ChaperoneCalibrationState const OK;

/// @brief Field Warning value: static_cast<int32_t>(0x64)
static ::OVR::OpenVR::ChaperoneCalibrationState const Warning;

/// @brief Field Warning_BaseStationMayHaveMoved value: static_cast<int32_t>(0x65)
static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationMayHaveMoved;

/// @brief Field Warning_BaseStationRemoved value: static_cast<int32_t>(0x66)
static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationRemoved;

/// @brief Field Warning_SeatedBoundsInvalid value: static_cast<int32_t>(0x67)
static ::OVR::OpenVR::ChaperoneCalibrationState const Warning_SeatedBoundsInvalid;

/// @brief Field Error value: static_cast<int32_t>(0xc8)
static ::OVR::OpenVR::ChaperoneCalibrationState const Error;

/// @brief Field Error_BaseStationUninitialized value: static_cast<int32_t>(0xc9)
static ::OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationUninitialized;

/// @brief Field Error_BaseStationConflict value: static_cast<int32_t>(0xca)
static ::OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationConflict;

/// @brief Field Error_PlayAreaInvalid value: static_cast<int32_t>(0xcb)
static ::OVR::OpenVR::ChaperoneCalibrationState const Error_PlayAreaInvalid;

/// @brief Field Error_CollisionBoundsInvalid value: static_cast<int32_t>(0xcc)
static ::OVR::OpenVR::ChaperoneCalibrationState const Error_CollisionBoundsInvalid;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ChaperoneCalibrationState_Unwrapped () const noexcept {
return std::bit_cast<__ChaperoneCalibrationState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChaperoneCalibrationState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ChaperoneCalibrationState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ChaperoneCalibrationState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ChaperoneCalibrationState, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ChaperoneCalibrationState, "OVR.OpenVR", "ChaperoneCalibrationState");
