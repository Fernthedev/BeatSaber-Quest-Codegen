#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Noise3DTexturesGenerator)
namespace UnityEngine {
class Texture3D;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialPropertyNameCouple;
}
namespace UnityEngine {
struct Color32;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialTextureParamsCouple;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class Noise3DTexturesGenerator;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialPropertyNameCouple;
}
namespace GlobalNamespace {
struct __Noise3DTexturesGenerator__MaterialTextureParamsCouple;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Noise3DTexturesGenerator);
MARK_VAL_T(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple);
MARK_VAL_T(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple);
// Type: ::MaterialTextureParamsCouple
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15300))
// CS Name: ::Noise3DTexturesGenerator::MaterialTextureParamsCouple
struct CORDL_TYPE __Noise3DTexturesGenerator__MaterialTextureParamsCouple : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field globalPropertyName offset 0x0
 __declspec(property(get=__get_globalPropertyName, put=__set_globalPropertyName)) ::StringW  globalPropertyName;

/// @brief Field materialPropertyNameCouples offset 0x8
 __declspec(property(get=__get_materialPropertyNameCouples, put=__set_materialPropertyNameCouples)) ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>  materialPropertyNameCouples;

constexpr void __set_globalPropertyName(::StringW  value) ;

constexpr ::StringW& __get_globalPropertyName() ;

constexpr ::StringW const& __get_globalPropertyName() const;

constexpr void __set_materialPropertyNameCouples(::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>& __get_materialPropertyNameCouples() ;

constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*> const& __get_materialPropertyNameCouples() const;

// Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "materialPropertyNameCouples", ty: "::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>", modifiers: "", def_value: None }]
constexpr __Noise3DTexturesGenerator__MaterialTextureParamsCouple(::StringW  globalPropertyName, ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>  materialPropertyNameCouples) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Noise3DTexturesGenerator__MaterialTextureParamsCouple(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Noise3DTexturesGenerator__MaterialTextureParamsCouple()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MaterialPropertyNameCouple
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15301))
// CS Name: ::Noise3DTexturesGenerator::MaterialPropertyNameCouple
struct CORDL_TYPE __Noise3DTexturesGenerator__MaterialPropertyNameCouple : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field texturePropertyName offset 0x0
 __declspec(property(get=__get_texturePropertyName, put=__set_texturePropertyName)) ::StringW  texturePropertyName;

/// @brief Field material offset 0x8
 __declspec(property(get=__get_material, put=__set_material)) ::UnityEngine::Material*  material;

constexpr void __set_texturePropertyName(::StringW  value) ;

constexpr ::StringW& __get_texturePropertyName() ;

constexpr ::StringW const& __get_texturePropertyName() const;

constexpr void __set_material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_material() const;

// Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: None }]
constexpr __Noise3DTexturesGenerator__MaterialPropertyNameCouple(::StringW  texturePropertyName, ::UnityEngine::Material*  material) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Noise3DTexturesGenerator__MaterialPropertyNameCouple(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Noise3DTexturesGenerator__MaterialPropertyNameCouple()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Noise3DTexturesGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15302))
// CS Name: ::Noise3DTexturesGenerator*
class CORDL_TYPE Noise3DTexturesGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaterialPropertyNameCouple = ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple;

using MaterialTextureParamsCouple = ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _data offset 0x18
 __declspec(property(get=__get__data, put=__set__data)) ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>  _data;

constexpr void __set__data(::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>& __get__data() ;

constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> const& __get__data() const;

static inline void setStaticF__texture(::UnityEngine::Texture3D*  value) ;

static inline ::UnityEngine::Texture3D* getStaticF__texture() ;

/// @brief Method Awake addr 0x280afac size 0x210 virtual false final false
inline void Awake() ;

/// @brief Method CreateNoisePixels addr 0x280b1bc size 0x324 virtual false final false
static inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> CreateNoisePixels(int32_t  width, int32_t  height, int32_t  depth, float_t  scale, int32_t  repeat, float_t  contrast) ;

static inline ::GlobalNamespace::Noise3DTexturesGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x280b4e0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Noise3DTexturesGenerator(Noise3DTexturesGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Noise3DTexturesGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Noise3DTexturesGenerator(Noise3DTexturesGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Noise3DTexturesGenerator()  = default;
public:


// Fields

// Static field _texture


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Noise3DTexturesGenerator, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Noise3DTexturesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Noise3DTexturesGenerator*, "", "Noise3DTexturesGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, "", "Noise3DTexturesGenerator/MaterialPropertyNameCouple");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, "", "Noise3DTexturesGenerator/MaterialTextureParamsCouple");
