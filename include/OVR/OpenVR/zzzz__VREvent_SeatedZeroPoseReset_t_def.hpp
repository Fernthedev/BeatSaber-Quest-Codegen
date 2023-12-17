#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VREvent_SeatedZeroPoseReset_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_SeatedZeroPoseReset_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t);
// Type: OVR.OpenVR::VREvent_SeatedZeroPoseReset_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8679))
// CS Name: ::OVR.OpenVR::VREvent_SeatedZeroPoseReset_t
struct CORDL_TYPE VREvent_SeatedZeroPoseReset_t : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field bResetBySystemMenu offset 0x0
 __declspec(property(get=__get_bResetBySystemMenu, put=__set_bResetBySystemMenu)) bool  bResetBySystemMenu;

constexpr void __set_bResetBySystemMenu(bool  value) ;

constexpr bool& __get_bResetBySystemMenu() ;

constexpr bool const& __get_bResetBySystemMenu() const;

// Ctor Parameters [CppParam { name: "bResetBySystemMenu", ty: "bool", modifiers: "", def_value: None }]
constexpr VREvent_SeatedZeroPoseReset_t(bool  bResetBySystemMenu) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VREvent_SeatedZeroPoseReset_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VREvent_SeatedZeroPoseReset_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, 0x1>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, "OVR.OpenVR", "VREvent_SeatedZeroPoseReset_t");
