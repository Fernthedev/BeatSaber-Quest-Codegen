#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderModel_TextureMap_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_TextureMap_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_TextureMap_t);
// Type: OVR.OpenVR::RenderModel_TextureMap_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8713))
// CS Name: ::OVR.OpenVR::RenderModel_TextureMap_t
struct CORDL_TYPE RenderModel_TextureMap_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field unWidth offset 0x0
 __declspec(property(get=__get_unWidth, put=__set_unWidth)) uint16_t  unWidth;

/// @brief Field unHeight offset 0x2
 __declspec(property(get=__get_unHeight, put=__set_unHeight)) uint16_t  unHeight;

/// @brief Field rubTextureMapData offset 0x8
 __declspec(property(get=__get_rubTextureMapData, put=__set_rubTextureMapData)) ::cordl_internals::intptr_t  rubTextureMapData;

constexpr void __set_unWidth(uint16_t  value) ;

constexpr uint16_t& __get_unWidth() ;

constexpr uint16_t const& __get_unWidth() const;

constexpr void __set_unHeight(uint16_t  value) ;

constexpr uint16_t& __get_unHeight() ;

constexpr uint16_t const& __get_unHeight() const;

constexpr void __set_rubTextureMapData(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_rubTextureMapData() ;

constexpr ::cordl_internals::intptr_t const& __get_rubTextureMapData() const;

// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "rubTextureMapData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RenderModel_TextureMap_t(uint16_t  unWidth, uint16_t  unHeight, ::cordl_internals::intptr_t  rubTextureMapData) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderModel_TextureMap_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderModel_TextureMap_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_TextureMap_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_TextureMap_t, "OVR.OpenVR", "RenderModel_TextureMap_t");
