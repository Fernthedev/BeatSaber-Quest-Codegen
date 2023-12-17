#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRVulkanTextureData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VRVulkanTextureData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRVulkanTextureData_t);
// Type: OVR.OpenVR::VRVulkanTextureData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8664))
// CS Name: ::OVR.OpenVR::VRVulkanTextureData_t
struct CORDL_TYPE VRVulkanTextureData_t : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_nImage offset 0x0
 __declspec(property(get=__get_m_nImage, put=__set_m_nImage)) uint64_t  m_nImage;

/// @brief Field m_pDevice offset 0x8
 __declspec(property(get=__get_m_pDevice, put=__set_m_pDevice)) ::cordl_internals::intptr_t  m_pDevice;

/// @brief Field m_pPhysicalDevice offset 0x10
 __declspec(property(get=__get_m_pPhysicalDevice, put=__set_m_pPhysicalDevice)) ::cordl_internals::intptr_t  m_pPhysicalDevice;

/// @brief Field m_pInstance offset 0x18
 __declspec(property(get=__get_m_pInstance, put=__set_m_pInstance)) ::cordl_internals::intptr_t  m_pInstance;

/// @brief Field m_pQueue offset 0x20
 __declspec(property(get=__get_m_pQueue, put=__set_m_pQueue)) ::cordl_internals::intptr_t  m_pQueue;

/// @brief Field m_nQueueFamilyIndex offset 0x28
 __declspec(property(get=__get_m_nQueueFamilyIndex, put=__set_m_nQueueFamilyIndex)) uint32_t  m_nQueueFamilyIndex;

/// @brief Field m_nWidth offset 0x2c
 __declspec(property(get=__get_m_nWidth, put=__set_m_nWidth)) uint32_t  m_nWidth;

/// @brief Field m_nHeight offset 0x30
 __declspec(property(get=__get_m_nHeight, put=__set_m_nHeight)) uint32_t  m_nHeight;

/// @brief Field m_nFormat offset 0x34
 __declspec(property(get=__get_m_nFormat, put=__set_m_nFormat)) uint32_t  m_nFormat;

/// @brief Field m_nSampleCount offset 0x38
 __declspec(property(get=__get_m_nSampleCount, put=__set_m_nSampleCount)) uint32_t  m_nSampleCount;

constexpr void __set_m_nImage(uint64_t  value) ;

constexpr uint64_t& __get_m_nImage() ;

constexpr uint64_t const& __get_m_nImage() const;

constexpr void __set_m_pDevice(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pDevice() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pDevice() const;

constexpr void __set_m_pPhysicalDevice(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pPhysicalDevice() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pPhysicalDevice() const;

constexpr void __set_m_pInstance(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pInstance() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pInstance() const;

constexpr void __set_m_pQueue(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pQueue() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pQueue() const;

constexpr void __set_m_nQueueFamilyIndex(uint32_t  value) ;

constexpr uint32_t& __get_m_nQueueFamilyIndex() ;

constexpr uint32_t const& __get_m_nQueueFamilyIndex() const;

constexpr void __set_m_nWidth(uint32_t  value) ;

constexpr uint32_t& __get_m_nWidth() ;

constexpr uint32_t const& __get_m_nWidth() const;

constexpr void __set_m_nHeight(uint32_t  value) ;

constexpr uint32_t& __get_m_nHeight() ;

constexpr uint32_t const& __get_m_nHeight() const;

constexpr void __set_m_nFormat(uint32_t  value) ;

constexpr uint32_t& __get_m_nFormat() ;

constexpr uint32_t const& __get_m_nFormat() const;

constexpr void __set_m_nSampleCount(uint32_t  value) ;

constexpr uint32_t& __get_m_nSampleCount() ;

constexpr uint32_t const& __get_m_nSampleCount() const;

// Ctor Parameters [CppParam { name: "m_nImage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_pDevice", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pPhysicalDevice", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pQueue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_nQueueFamilyIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nWidth", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFormat", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nSampleCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VRVulkanTextureData_t(uint64_t  m_nImage, ::cordl_internals::intptr_t  m_pDevice, ::cordl_internals::intptr_t  m_pPhysicalDevice, ::cordl_internals::intptr_t  m_pInstance, ::cordl_internals::intptr_t  m_pQueue, uint32_t  m_nQueueFamilyIndex, uint32_t  m_nWidth, uint32_t  m_nHeight, uint32_t  m_nFormat, uint32_t  m_nSampleCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VRVulkanTextureData_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VRVulkanTextureData_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRVulkanTextureData_t, 0x40>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRVulkanTextureData_t, "OVR.OpenVR", "VRVulkanTextureData_t");
