#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HiddenAreaMesh_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HiddenAreaMesh_t);
// Type: OVR.OpenVR::HiddenAreaMesh_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8694))
// CS Name: ::OVR.OpenVR::HiddenAreaMesh_t
struct CORDL_TYPE HiddenAreaMesh_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pVertexData offset 0x0
 __declspec(property(get=__get_pVertexData, put=__set_pVertexData)) ::cordl_internals::intptr_t  pVertexData;

/// @brief Field unTriangleCount offset 0x8
 __declspec(property(get=__get_unTriangleCount, put=__set_unTriangleCount)) uint32_t  unTriangleCount;

constexpr void __set_pVertexData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_pVertexData() ;

constexpr ::cordl_internals::intptr_t const& __get_pVertexData() const;

constexpr void __set_unTriangleCount(uint32_t  value) ;

constexpr uint32_t& __get_unTriangleCount() ;

constexpr uint32_t const& __get_unTriangleCount() const;

// Ctor Parameters [CppParam { name: "pVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HiddenAreaMesh_t(::cordl_internals::intptr_t  pVertexData, uint32_t  unTriangleCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HiddenAreaMesh_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HiddenAreaMesh_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HiddenAreaMesh_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HiddenAreaMesh_t, "OVR.OpenVR", "HiddenAreaMesh_t");
