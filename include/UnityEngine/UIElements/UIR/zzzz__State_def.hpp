#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(State)
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct State;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::State);
// Type: UnityEngine.UIElements.UIR::State
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7441))
// CS Name: ::UnityEngine.UIElements.UIR::State
struct CORDL_TYPE State : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field material offset 0x0
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field font offset 0x8
 __declspec(property(get=__get_font, put=__set_font)) ::UnityEngine::Texture*  font;

/// @brief Field fontTexSDFScale offset 0x10
 __declspec(property(get=__get_fontTexSDFScale, put=__set_fontTexSDFScale)) float_t  fontTexSDFScale;

/// @brief Field texture offset 0x14
 __declspec(property(get=__get_texture, put=__set_texture)) ::UnityEngine::UIElements::TextureId  texture;

/// @brief Field stencilRef offset 0x18
 __declspec(property(get=__get_stencilRef, put=__set_stencilRef)) int32_t  stencilRef;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_font(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_font() const;

constexpr void __set_fontTexSDFScale(float_t  value) ;

constexpr float_t& __get_fontTexSDFScale() ;

constexpr float_t const& __get_fontTexSDFScale() const;

constexpr void __set_texture(::UnityEngine::UIElements::TextureId  value) ;

constexpr ::UnityEngine::UIElements::TextureId& __get_texture() ;

constexpr ::UnityEngine::UIElements::TextureId const& __get_texture() const;

constexpr void __set_stencilRef(int32_t  value) ;

constexpr int32_t& __get_stencilRef() ;

constexpr int32_t const& __get_stencilRef() const;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: None }]
constexpr State(::UnityEngine::Material*  material, ::UnityEngine::Texture*  font, float_t  fontTexSDFScale, ::UnityEngine::UIElements::TextureId  texture, int32_t  stencilRef) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit State(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 State()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::State, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::State, "UnityEngine.UIElements.UIR", "State");
