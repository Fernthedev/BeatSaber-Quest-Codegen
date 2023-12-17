#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMaterialData)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMaterialData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMaterialData);
// Type: ::OVRMaterialData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7566))
// CS Name: ::OVRMaterialData
struct CORDL_TYPE OVRMaterialData : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field shader offset 0x0
 __declspec(property(get=__get_shader, put=__set_shader)) ::UnityEngine::Shader*  shader;

/// @brief Field textureId offset 0x8
 __declspec(property(get=__get_textureId, put=__set_textureId)) int32_t  textureId;

/// @brief Field texture offset 0x10
 __declspec(property(get=__get_texture, put=__set_texture)) ::GlobalNamespace::OVRTextureData  texture;

/// @brief Field baseColorFactor offset 0x30
 __declspec(property(get=__get_baseColorFactor, put=__set_baseColorFactor)) ::UnityEngine::Color  baseColorFactor;

constexpr void __set_shader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_shader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_shader() const;

constexpr void __set_textureId(int32_t  value) ;

constexpr int32_t& __get_textureId() ;

constexpr int32_t const& __get_textureId() const;

constexpr void __set_texture(::GlobalNamespace::OVRTextureData  value) ;

constexpr ::GlobalNamespace::OVRTextureData& __get_texture() ;

constexpr ::GlobalNamespace::OVRTextureData const& __get_texture() const;

constexpr void __set_baseColorFactor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_baseColorFactor() ;

constexpr ::UnityEngine::Color const& __get_baseColorFactor() const;

// Ctor Parameters [CppParam { name: "shader", ty: "::UnityEngine::Shader*", modifiers: "", def_value: None }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::GlobalNamespace::OVRTextureData", modifiers: "", def_value: None }, CppParam { name: "baseColorFactor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr OVRMaterialData(::UnityEngine::Shader*  shader, int32_t  textureId, ::GlobalNamespace::OVRTextureData  texture, ::UnityEngine::Color  baseColorFactor) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRMaterialData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRMaterialData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMaterialData, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMaterialData, "", "OVRMaterialData");
