#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KawaseBloomMainEffectSO)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class KawaseBloomMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KawaseBloomMainEffectSO);
// Type: ::KawaseBloomMainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15289))
// CS Name: ::KawaseBloomMainEffectSO*
class CORDL_TYPE KawaseBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::MainEffectSO)]{};

/// @brief Field _kawaseBlurRenderer offset 0x18
 __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer)) ::GlobalNamespace::KawaseBlurRendererSO*  _kawaseBlurRenderer;

/// @brief Field _mainEffectShader offset 0x20
 __declspec(property(get=__get__mainEffectShader, put=__set__mainEffectShader)) ::UnityEngine::Shader*  _mainEffectShader;

/// @brief Field _bloomIntensity offset 0x28
 __declspec(property(get=__get__bloomIntensity, put=__set__bloomIntensity)) float_t  _bloomIntensity;

/// @brief Field _bloomIterations offset 0x2c
 __declspec(property(get=__get__bloomIterations, put=__set__bloomIterations)) int32_t  _bloomIterations;

/// @brief Field _bloomBoost offset 0x30
 __declspec(property(get=__get__bloomBoost, put=__set__bloomBoost)) float_t  _bloomBoost;

/// @brief Field _bloomAlphaWeights offset 0x34
 __declspec(property(get=__get__bloomAlphaWeights, put=__set__bloomAlphaWeights)) float_t  _bloomAlphaWeights;

/// @brief Field _bloomTextureWidth offset 0x38
 __declspec(property(get=__get__bloomTextureWidth, put=__set__bloomTextureWidth)) int32_t  _bloomTextureWidth;

/// @brief Field _baseColorBoost offset 0x3c
 __declspec(property(get=__get__baseColorBoost, put=__set__baseColorBoost)) float_t  _baseColorBoost;

/// @brief Field _baseColorBoostThreshold offset 0x40
 __declspec(property(get=__get__baseColorBoostThreshold, put=__set__baseColorBoostThreshold)) float_t  _baseColorBoostThreshold;

/// @brief Field _mainEffectMaterial offset 0x48
 __declspec(property(get=__get__mainEffectMaterial, put=__set__mainEffectMaterial)) ::UnityEngine::Material*  _mainEffectMaterial;

 __declspec(property(get=get_hasPostProcessEffect)) bool  hasPostProcessEffect;

constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO*  value) ;

constexpr ::GlobalNamespace::KawaseBlurRendererSO* __get__kawaseBlurRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> __get__kawaseBlurRenderer() const;

constexpr void __set__mainEffectShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get__mainEffectShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get__mainEffectShader() const;

constexpr void __set__bloomIntensity(float_t  value) ;

constexpr float_t& __get__bloomIntensity() ;

constexpr float_t const& __get__bloomIntensity() const;

constexpr void __set__bloomIterations(int32_t  value) ;

constexpr int32_t& __get__bloomIterations() ;

constexpr int32_t const& __get__bloomIterations() const;

constexpr void __set__bloomBoost(float_t  value) ;

constexpr float_t& __get__bloomBoost() ;

constexpr float_t const& __get__bloomBoost() const;

constexpr void __set__bloomAlphaWeights(float_t  value) ;

constexpr float_t& __get__bloomAlphaWeights() ;

constexpr float_t const& __get__bloomAlphaWeights() const;

constexpr void __set__bloomTextureWidth(int32_t  value) ;

constexpr int32_t& __get__bloomTextureWidth() ;

constexpr int32_t const& __get__bloomTextureWidth() const;

constexpr void __set__baseColorBoost(float_t  value) ;

constexpr float_t& __get__baseColorBoost() ;

constexpr float_t const& __get__baseColorBoost() const;

constexpr void __set__baseColorBoostThreshold(float_t  value) ;

constexpr float_t& __get__baseColorBoostThreshold() ;

constexpr float_t const& __get__baseColorBoostThreshold() const;

static inline void setStaticF__bloomTexID(int32_t  value) ;

static inline int32_t getStaticF__bloomTexID() ;

static inline void setStaticF__bloomIntensityID(int32_t  value) ;

static inline int32_t getStaticF__bloomIntensityID() ;

static inline void setStaticF__fadeID(int32_t  value) ;

static inline int32_t getStaticF__fadeID() ;

constexpr void __set__mainEffectMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__mainEffectMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__mainEffectMaterial() const;

/// @brief Method get_hasPostProcessEffect addr 0x2807db4 size 0x8 virtual true final false
inline bool get_hasPostProcessEffect() ;

/// @brief Method OnEnable addr 0x2807dbc size 0x1c virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2807e94 size 0x20 virtual false final false
inline void OnDisable() ;

/// @brief Method LazyInitializeMaterials addr 0x2807dd8 size 0xbc virtual false final false
inline void LazyInitializeMaterials() ;

/// @brief Method PreRender addr 0x2807eb4 size 0x64 virtual true final false
inline void PreRender() ;

/// @brief Method Render addr 0x2807fa0 size 0x210 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, float_t  fade) ;

static inline ::GlobalNamespace::KawaseBloomMainEffectSO* New_ctor() ;

/// @brief Method .ctor addr 0x28081b0 size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KawaseBloomMainEffectSO(KawaseBloomMainEffectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KawaseBloomMainEffectSO(KawaseBloomMainEffectSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KawaseBloomMainEffectSO()  = default;
public:


// Fields

// Static field _bloomTexID

// Static field _bloomIntensityID

// Static field _fadeID


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KawaseBloomMainEffectSO, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KawaseBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KawaseBloomMainEffectSO*, "", "KawaseBloomMainEffectSO");
