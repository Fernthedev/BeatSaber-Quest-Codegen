#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_ComponentState_t)
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_ComponentState_t);
// Type: OVR.OpenVR::RenderModel_ComponentState_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8711))
// CS Name: ::OVR.OpenVR::RenderModel_ComponentState_t
struct CORDL_TYPE RenderModel_ComponentState_t : public ::bs_hook::ValueTypeWrapper<0x64> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x64};

/// @brief Field mTrackingToComponentRenderModel offset 0x0
 __declspec(property(get=__get_mTrackingToComponentRenderModel, put=__set_mTrackingToComponentRenderModel)) ::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentRenderModel;

/// @brief Field mTrackingToComponentLocal offset 0x30
 __declspec(property(get=__get_mTrackingToComponentLocal, put=__set_mTrackingToComponentLocal)) ::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentLocal;

/// @brief Field uProperties offset 0x60
 __declspec(property(get=__get_uProperties, put=__set_uProperties)) uint32_t  uProperties;

constexpr void __set_mTrackingToComponentRenderModel(::OVR::OpenVR::HmdMatrix34_t  value) ;

constexpr ::OVR::OpenVR::HmdMatrix34_t& __get_mTrackingToComponentRenderModel() ;

constexpr ::OVR::OpenVR::HmdMatrix34_t const& __get_mTrackingToComponentRenderModel() const;

constexpr void __set_mTrackingToComponentLocal(::OVR::OpenVR::HmdMatrix34_t  value) ;

constexpr ::OVR::OpenVR::HmdMatrix34_t& __get_mTrackingToComponentLocal() ;

constexpr ::OVR::OpenVR::HmdMatrix34_t const& __get_mTrackingToComponentLocal() const;

constexpr void __set_uProperties(uint32_t  value) ;

constexpr uint32_t& __get_uProperties() ;

constexpr uint32_t const& __get_uProperties() const;

// Ctor Parameters [CppParam { name: "mTrackingToComponentRenderModel", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "mTrackingToComponentLocal", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: None }, CppParam { name: "uProperties", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RenderModel_ComponentState_t(::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentRenderModel, ::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentLocal, uint32_t  uProperties) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderModel_ComponentState_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x64>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderModel_ComponentState_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_ComponentState_t, 0x64>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_ComponentState_t, "OVR.OpenVR", "RenderModel_ComponentState_t");
