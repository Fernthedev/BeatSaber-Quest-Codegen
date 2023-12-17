#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(D3D12TextureData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct D3D12TextureData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::D3D12TextureData_t);
// Type: OVR.OpenVR::D3D12TextureData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8665))
// CS Name: ::OVR.OpenVR::D3D12TextureData_t
struct CORDL_TYPE D3D12TextureData_t : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_pResource offset 0x0
 __declspec(property(get=__get_m_pResource, put=__set_m_pResource)) ::cordl_internals::intptr_t  m_pResource;

/// @brief Field m_pCommandQueue offset 0x8
 __declspec(property(get=__get_m_pCommandQueue, put=__set_m_pCommandQueue)) ::cordl_internals::intptr_t  m_pCommandQueue;

/// @brief Field m_nNodeMask offset 0x10
 __declspec(property(get=__get_m_nNodeMask, put=__set_m_nNodeMask)) uint32_t  m_nNodeMask;

constexpr void __set_m_pResource(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pResource() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pResource() const;

constexpr void __set_m_pCommandQueue(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pCommandQueue() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pCommandQueue() const;

constexpr void __set_m_nNodeMask(uint32_t  value) ;

constexpr uint32_t& __get_m_nNodeMask() ;

constexpr uint32_t const& __get_m_nNodeMask() const;

// Ctor Parameters [CppParam { name: "m_pResource", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_pCommandQueue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_nNodeMask", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr D3D12TextureData_t(::cordl_internals::intptr_t  m_pResource, ::cordl_internals::intptr_t  m_pCommandQueue, uint32_t  m_nNodeMask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit D3D12TextureData_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 D3D12TextureData_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::D3D12TextureData_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::D3D12TextureData_t, "OVR.OpenVR", "D3D12TextureData_t");
