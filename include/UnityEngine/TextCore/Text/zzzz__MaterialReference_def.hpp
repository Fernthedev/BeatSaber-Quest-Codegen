#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialReference)
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::MaterialReference);
// Type: UnityEngine.TextCore.Text::MaterialReference
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13697))
// CS Name: ::UnityEngine.TextCore.Text::MaterialReference
struct CORDL_TYPE MaterialReference : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field index offset 0x0
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field fontAsset offset 0x8
 __declspec(property(get=__get_fontAsset, put=__set_fontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  fontAsset;

/// @brief Field spriteAsset offset 0x10
 __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset)) ::UnityEngine::TextCore::Text::SpriteAsset*  spriteAsset;

/// @brief Field material offset 0x18
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

/// @brief Field isDefaultMaterial offset 0x20
 __declspec(property(get=__get_isDefaultMaterial, put=__set_isDefaultMaterial)) bool  isDefaultMaterial;

/// @brief Field isFallbackMaterial offset 0x21
 __declspec(property(get=__get_isFallbackMaterial, put=__set_isFallbackMaterial)) bool  isFallbackMaterial;

/// @brief Field fallbackMaterial offset 0x28
 __declspec(property(get=__get_fallbackMaterial, put=__set_fallbackMaterial)) ::UnityEngine::Material*  fallbackMaterial;

/// @brief Field padding offset 0x30
 __declspec(property(get=__get_padding, put=__set_padding)) float_t  padding;

/// @brief Field referenceCount offset 0x34
 __declspec(property(get=__get_referenceCount, put=__set_referenceCount)) int32_t  referenceCount;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_fontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_fontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_fontAsset() const;

constexpr void __set_spriteAsset(::UnityEngine::TextCore::Text::SpriteAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset* __get_spriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> __get_spriteAsset() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

constexpr void __set_isDefaultMaterial(bool  value) ;

constexpr bool& __get_isDefaultMaterial() ;

constexpr bool const& __get_isDefaultMaterial() const;

constexpr void __set_isFallbackMaterial(bool  value) ;

constexpr bool& __get_isFallbackMaterial() ;

constexpr bool const& __get_isFallbackMaterial() const;

constexpr void __set_fallbackMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_fallbackMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_fallbackMaterial() const;

constexpr void __set_padding(float_t  value) ;

constexpr float_t& __get_padding() ;

constexpr float_t const& __get_padding() const;

constexpr void __set_referenceCount(int32_t  value) ;

constexpr int32_t& __get_referenceCount() ;

constexpr int32_t const& __get_referenceCount() const;

/// @brief Method .ctor addr 0x2d43078 size 0x7c virtual false final false
inline void _ctor(int32_t  index, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset*  spriteAsset, ::UnityEngine::Material*  material, float_t  padding) ;

/// @brief Method AddMaterialReference addr 0x2d430f4 size 0x20c virtual false final false
static inline int32_t AddMaterialReference(::UnityEngine::Material*  material, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ByRef<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>>  materialReferences, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  materialReferenceIndexLookup) ;

/// @brief Method AddMaterialReference addr 0x2d43300 size 0x1d8 virtual false final false
static inline int32_t AddMaterialReference(::UnityEngine::Material*  material, ::UnityEngine::TextCore::Text::SpriteAsset*  spriteAsset, ByRef<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>>  materialReferences, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  materialReferenceIndexLookup) ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty: "::UnityEngine::TextCore::Text::SpriteAsset*", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "isDefaultMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isFallbackMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fallbackMaterial", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaterialReference(int32_t  index, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset, ::UnityEngine::TextCore::Text::SpriteAsset*  spriteAsset, ::UnityEngine::Material*  material, bool  isDefaultMaterial, bool  isFallbackMaterial, ::UnityEngine::Material*  fallbackMaterial, float_t  padding, int32_t  referenceCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MaterialReference(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MaterialReference()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::MaterialReference, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MaterialReference, "UnityEngine.TextCore.Text", "MaterialReference");
