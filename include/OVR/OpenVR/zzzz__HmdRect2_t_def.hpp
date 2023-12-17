#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HmdRect2_t)
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct HmdRect2_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdRect2_t);
// Type: OVR.OpenVR::HmdRect2_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8655))
// CS Name: ::OVR.OpenVR::HmdRect2_t
struct CORDL_TYPE HmdRect2_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field vTopLeft offset 0x0
 __declspec(property(get=__get_vTopLeft, put=__set_vTopLeft)) ::OVR::OpenVR::HmdVector2_t  vTopLeft;

/// @brief Field vBottomRight offset 0x8
 __declspec(property(get=__get_vBottomRight, put=__set_vBottomRight)) ::OVR::OpenVR::HmdVector2_t  vBottomRight;

constexpr void __set_vTopLeft(::OVR::OpenVR::HmdVector2_t  value) ;

constexpr ::OVR::OpenVR::HmdVector2_t& __get_vTopLeft() ;

constexpr ::OVR::OpenVR::HmdVector2_t const& __get_vTopLeft() const;

constexpr void __set_vBottomRight(::OVR::OpenVR::HmdVector2_t  value) ;

constexpr ::OVR::OpenVR::HmdVector2_t& __get_vBottomRight() ;

constexpr ::OVR::OpenVR::HmdVector2_t const& __get_vBottomRight() const;

// Ctor Parameters [CppParam { name: "vTopLeft", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "vBottomRight", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }]
constexpr HmdRect2_t(::OVR::OpenVR::HmdVector2_t  vTopLeft, ::OVR::OpenVR::HmdVector2_t  vBottomRight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HmdRect2_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HmdRect2_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdRect2_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdRect2_t, "OVR.OpenVR", "HmdRect2_t");
