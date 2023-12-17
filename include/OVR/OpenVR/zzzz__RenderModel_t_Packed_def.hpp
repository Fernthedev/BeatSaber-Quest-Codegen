#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_t_Packed)
namespace OVR::OpenVR {
struct RenderModel_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_t_Packed;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_t_Packed);
// Type: OVR.OpenVR::RenderModel_t_Packed
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8716))
// CS Name: ::OVR.OpenVR::RenderModel_t_Packed
struct CORDL_TYPE RenderModel_t_Packed : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field rVertexData offset 0x0
 __declspec(property(get=__get_rVertexData, put=__set_rVertexData)) ::cordl_internals::intptr_t  rVertexData;

/// @brief Field unVertexCount offset 0x8
 __declspec(property(get=__get_unVertexCount, put=__set_unVertexCount)) uint32_t  unVertexCount;

/// @brief Field rIndexData offset 0xc
 __declspec(property(get=__get_rIndexData, put=__set_rIndexData)) ::cordl_internals::intptr_t  rIndexData;

/// @brief Field unTriangleCount offset 0x14
 __declspec(property(get=__get_unTriangleCount, put=__set_unTriangleCount)) uint32_t  unTriangleCount;

/// @brief Field diffuseTextureId offset 0x18
 __declspec(property(get=__get_diffuseTextureId, put=__set_diffuseTextureId)) int32_t  diffuseTextureId;

constexpr void __set_rVertexData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_rVertexData() ;

constexpr ::cordl_internals::intptr_t const& __get_rVertexData() const;

constexpr void __set_unVertexCount(uint32_t  value) ;

constexpr uint32_t& __get_unVertexCount() ;

constexpr uint32_t const& __get_unVertexCount() const;

constexpr void __set_rIndexData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_rIndexData() ;

constexpr ::cordl_internals::intptr_t const& __get_rIndexData() const;

constexpr void __set_unTriangleCount(uint32_t  value) ;

constexpr uint32_t& __get_unTriangleCount() ;

constexpr uint32_t const& __get_unTriangleCount() const;

constexpr void __set_diffuseTextureId(int32_t  value) ;

constexpr int32_t& __get_diffuseTextureId() ;

constexpr int32_t const& __get_diffuseTextureId() const;

/// @brief Method .ctor addr 0x27f67b4 size 0x2c virtual false final false
inline void _ctor(::OVR::OpenVR::RenderModel_t  unpacked) ;

/// @brief Method Unpack addr 0x27f67e0 size 0x24 virtual false final false
inline void Unpack(ByRef<::OVR::OpenVR::RenderModel_t>  unpacked) ;

// Ctor Parameters [CppParam { name: "rVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "rIndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderModel_t_Packed(::cordl_internals::intptr_t  rVertexData, uint32_t  unVertexCount, ::cordl_internals::intptr_t  rIndexData, uint32_t  unTriangleCount, int32_t  diffuseTextureId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderModel_t_Packed(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderModel_t_Packed()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_t_Packed, 0x1c>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_t_Packed, "OVR.OpenVR", "RenderModel_t_Packed");
