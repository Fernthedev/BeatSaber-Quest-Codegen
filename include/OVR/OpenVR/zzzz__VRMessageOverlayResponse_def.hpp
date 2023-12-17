#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRMessageOverlayResponse)
// Forward declare root types
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRMessageOverlayResponse);
// Type: OVR.OpenVR::VRMessageOverlayResponse
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8627))
// CS Name: ::OVR.OpenVR::VRMessageOverlayResponse
struct CORDL_TYPE VRMessageOverlayResponse : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VRMessageOverlayResponse_Unwrapped
enum struct __VRMessageOverlayResponse_Unwrapped : int32_t {
__E_ButtonPress_0 = static_cast<int32_t>(0x0),
__E_ButtonPress_1 = static_cast<int32_t>(0x1),
__E_ButtonPress_2 = static_cast<int32_t>(0x2),
__E_ButtonPress_3 = static_cast<int32_t>(0x3),
__E_CouldntFindSystemOverlay = static_cast<int32_t>(0x4),
__E_CouldntFindOrCreateClientOverlay = static_cast<int32_t>(0x5),
__E_ApplicationQuit = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ButtonPress_0 value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_0;

/// @brief Field ButtonPress_1 value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_1;

/// @brief Field ButtonPress_2 value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_2;

/// @brief Field ButtonPress_3 value: static_cast<int32_t>(0x3)
static ::OVR::OpenVR::VRMessageOverlayResponse const ButtonPress_3;

/// @brief Field CouldntFindSystemOverlay value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::VRMessageOverlayResponse const CouldntFindSystemOverlay;

/// @brief Field CouldntFindOrCreateClientOverlay value: static_cast<int32_t>(0x5)
static ::OVR::OpenVR::VRMessageOverlayResponse const CouldntFindOrCreateClientOverlay;

/// @brief Field ApplicationQuit value: static_cast<int32_t>(0x6)
static ::OVR::OpenVR::VRMessageOverlayResponse const ApplicationQuit;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VRMessageOverlayResponse_Unwrapped () const noexcept {
return std::bit_cast<__VRMessageOverlayResponse_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRMessageOverlayResponse(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRMessageOverlayResponse(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRMessageOverlayResponse()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRMessageOverlayResponse, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRMessageOverlayResponse, "OVR.OpenVR", "VRMessageOverlayResponse");
