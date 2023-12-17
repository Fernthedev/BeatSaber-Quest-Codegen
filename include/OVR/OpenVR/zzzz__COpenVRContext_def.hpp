#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(COpenVRContext)
// Forward declare root types
namespace OVR::OpenVR {
struct COpenVRContext;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::COpenVRContext);
// Type: OVR.OpenVR::COpenVRContext
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8727))
// CS Name: ::OVR.OpenVR::COpenVRContext
struct CORDL_TYPE COpenVRContext : public ::bs_hook::ValueTypeWrapper<0x80> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field m_pVRSystem offset 0x0
 __declspec(property(get=__get_m_pVRSystem, put=__set_m_pVRSystem)) ::cordl_internals::intptr_t  m_pVRSystem;

/// @brief Field m_pVRChaperone offset 0x8
 __declspec(property(get=__get_m_pVRChaperone, put=__set_m_pVRChaperone)) ::cordl_internals::intptr_t  m_pVRChaperone;

/// @brief Field m_pVRChaperoneSetup offset 0x10
 __declspec(property(get=__get_m_pVRChaperoneSetup, put=__set_m_pVRChaperoneSetup)) ::cordl_internals::intptr_t  m_pVRChaperoneSetup;

/// @brief Field m_pVRCompositor offset 0x18
 __declspec(property(get=__get_m_pVRCompositor, put=__set_m_pVRCompositor)) ::cordl_internals::intptr_t  m_pVRCompositor;

/// @brief Field m_pVROverlay offset 0x20
 __declspec(property(get=__get_m_pVROverlay, put=__set_m_pVROverlay)) ::cordl_internals::intptr_t  m_pVROverlay;

/// @brief Field m_pVRResources offset 0x28
 __declspec(property(get=__get_m_pVRResources, put=__set_m_pVRResources)) ::cordl_internals::intptr_t  m_pVRResources;

/// @brief Field m_pVRRenderModels offset 0x30
 __declspec(property(get=__get_m_pVRRenderModels, put=__set_m_pVRRenderModels)) ::cordl_internals::intptr_t  m_pVRRenderModels;

/// @brief Field m_pVRExtendedDisplay offset 0x38
 __declspec(property(get=__get_m_pVRExtendedDisplay, put=__set_m_pVRExtendedDisplay)) ::cordl_internals::intptr_t  m_pVRExtendedDisplay;

/// @brief Field m_pVRSettings offset 0x40
 __declspec(property(get=__get_m_pVRSettings, put=__set_m_pVRSettings)) ::cordl_internals::intptr_t  m_pVRSettings;

/// @brief Field m_pVRApplications offset 0x48
 __declspec(property(get=__get_m_pVRApplications, put=__set_m_pVRApplications)) ::cordl_internals::intptr_t  m_pVRApplications;

/// @brief Field m_pVRTrackedCamera offset 0x50
 __declspec(property(get=__get_m_pVRTrackedCamera, put=__set_m_pVRTrackedCamera)) ::cordl_internals::intptr_t  m_pVRTrackedCamera;

/// @brief Field m_pVRScreenshots offset 0x58
 __declspec(property(get=__get_m_pVRScreenshots, put=__set_m_pVRScreenshots)) ::cordl_internals::intptr_t  m_pVRScreenshots;

/// @brief Field m_pVRDriverManager offset 0x60
 __declspec(property(get=__get_m_pVRDriverManager, put=__set_m_pVRDriverManager)) ::cordl_internals::intptr_t  m_pVRDriverManager;

/// @brief Field m_pVRInput offset 0x68
 __declspec(property(get=__get_m_pVRInput, put=__set_m_pVRInput)) ::cordl_internals::intptr_t  m_pVRInput;

/// @brief Field m_pVRIOBuffer offset 0x70
 __declspec(property(get=__get_m_pVRIOBuffer, put=__set_m_pVRIOBuffer)) ::cordl_internals::intptr_t  m_pVRIOBuffer;

/// @brief Field m_pVRSpatialAnchors offset 0x78
 __declspec(property(get=__get_m_pVRSpatialAnchors, put=__set_m_pVRSpatialAnchors)) ::cordl_internals::intptr_t  m_pVRSpatialAnchors;

constexpr void __set_m_pVRSystem(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRSystem() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRSystem() const;

constexpr void __set_m_pVRChaperone(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRChaperone() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRChaperone() const;

constexpr void __set_m_pVRChaperoneSetup(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRChaperoneSetup() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRChaperoneSetup() const;

constexpr void __set_m_pVRCompositor(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRCompositor() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRCompositor() const;

constexpr void __set_m_pVROverlay(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVROverlay() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVROverlay() const;

constexpr void __set_m_pVRResources(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRResources() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRResources() const;

constexpr void __set_m_pVRRenderModels(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRRenderModels() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRRenderModels() const;

constexpr void __set_m_pVRExtendedDisplay(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRExtendedDisplay() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRExtendedDisplay() const;

constexpr void __set_m_pVRSettings(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRSettings() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRSettings() const;

constexpr void __set_m_pVRApplications(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRApplications() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRApplications() const;

constexpr void __set_m_pVRTrackedCamera(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRTrackedCamera() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRTrackedCamera() const;

constexpr void __set_m_pVRScreenshots(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRScreenshots() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRScreenshots() const;

constexpr void __set_m_pVRDriverManager(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRDriverManager() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRDriverManager() const;

constexpr void __set_m_pVRInput(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRInput() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRInput() const;

constexpr void __set_m_pVRIOBuffer(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRIOBuffer() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRIOBuffer() const;

constexpr void __set_m_pVRSpatialAnchors(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pVRSpatialAnchors() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pVRSpatialAnchors() const;

// Ctor Parameters [CppParam { name: "m_pVRSystem", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRChaperone", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRChaperoneSetup", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRCompositor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVROverlay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRResources", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRRenderModels", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRExtendedDisplay", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRSettings", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRApplications", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRTrackedCamera", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRScreenshots", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRDriverManager", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRInput", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRIOBuffer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pVRSpatialAnchors", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr COpenVRContext(::cordl_internals::intptr_t  m_pVRSystem, ::cordl_internals::intptr_t  m_pVRChaperone, ::cordl_internals::intptr_t  m_pVRChaperoneSetup, ::cordl_internals::intptr_t  m_pVRCompositor, ::cordl_internals::intptr_t  m_pVROverlay, ::cordl_internals::intptr_t  m_pVRResources, ::cordl_internals::intptr_t  m_pVRRenderModels, ::cordl_internals::intptr_t  m_pVRExtendedDisplay, ::cordl_internals::intptr_t  m_pVRSettings, ::cordl_internals::intptr_t  m_pVRApplications, ::cordl_internals::intptr_t  m_pVRTrackedCamera, ::cordl_internals::intptr_t  m_pVRScreenshots, ::cordl_internals::intptr_t  m_pVRDriverManager, ::cordl_internals::intptr_t  m_pVRInput, ::cordl_internals::intptr_t  m_pVRIOBuffer, ::cordl_internals::intptr_t  m_pVRSpatialAnchors) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit COpenVRContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x80>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 COpenVRContext()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::COpenVRContext, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::COpenVRContext, "OVR.OpenVR", "COpenVRContext");
