#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RenderModel_ControllerMode_State_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_ControllerMode_State_t);
// Type: OVR.OpenVR::RenderModel_ControllerMode_State_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8717))
// CS Name: ::OVR.OpenVR::RenderModel_ControllerMode_State_t
struct CORDL_TYPE RenderModel_ControllerMode_State_t : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field bScrollWheelVisible offset 0x0
 __declspec(property(get=__get_bScrollWheelVisible, put=__set_bScrollWheelVisible)) bool  bScrollWheelVisible;

constexpr void __set_bScrollWheelVisible(bool  value) ;

constexpr bool& __get_bScrollWheelVisible() ;

constexpr bool const& __get_bScrollWheelVisible() const;

// Ctor Parameters [CppParam { name: "bScrollWheelVisible", ty: "bool", modifiers: "", def_value: None }]
constexpr RenderModel_ControllerMode_State_t(bool  bScrollWheelVisible) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderModel_ControllerMode_State_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderModel_ControllerMode_State_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_ControllerMode_State_t, 0x1>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_ControllerMode_State_t, "OVR.OpenVR", "RenderModel_ControllerMode_State_t");
