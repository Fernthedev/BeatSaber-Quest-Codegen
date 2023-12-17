#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PyramidBloomMainEffectSO)
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
struct __PyramidBloomRendererSO__Pass;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class PyramidBloomMainEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PyramidBloomMainEffectSO);
// Type: ::PyramidBloomMainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15295))
// CS Name: ::PyramidBloomMainEffectSO*
class CORDL_TYPE PyramidBloomMainEffectSO : public ::GlobalNamespace::MainEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::GlobalNamespace::MainEffectSO)]{};

/// @brief Field _bloomRenderer offset 0x18
 __declspec(property(get=__get__bloomRenderer, put=__set__bloomRenderer)) ::GlobalNamespace::PyramidBloomRendererSO*  _bloomRenderer;

/// @brief Field _bloomFog offset 0x20
 __declspec(property(get=__get__bloomFog, put=__set__bloomFog)) ::GlobalNamespace::BloomFogSO*  _bloomFog;

/// @brief Field _fadeShader offset 0x28
 __declspec(property(get=__get__fadeShader, put=__set__fadeShader)) ::UnityEngine::Shader*  _fadeShader;

/// @brief Field _mainEffectShader offset 0x30
 __declspec(property(get=__get__mainEffectShader, put=__set__mainEffectShader)) ::UnityEngine::Shader*  _mainEffectShader;

/// @brief Field _bloomBlendFactor offset 0x38
 __declspec(property(get=__get__bloomBlendFactor, put=__set__bloomBlendFactor)) float_t  _bloomBlendFactor;

/// @brief Field _bloomRadius offset 0x3c
 __declspec(property(get=__get__bloomRadius, put=__set__bloomRadius)) float_t  _bloomRadius;

/// @brief Field _bloomIntensity offset 0x40
 __declspec(property(get=__get__bloomIntensity, put=__set__bloomIntensity)) float_t  _bloomIntensity;

/// @brief Field _downBloomIntensityOffset offset 0x44
 __declspec(property(get=__get__downBloomIntensityOffset, put=__set__downBloomIntensityOffset)) float_t  _downBloomIntensityOffset;

/// @brief Field _pyramidWeightsParam offset 0x48
 __declspec(property(get=__get__pyramidWeightsParam, put=__set__pyramidWeightsParam)) float_t  _pyramidWeightsParam;

/// @brief Field _alphaWeights offset 0x4c
 __declspec(property(get=__get__alphaWeights, put=__set__alphaWeights)) float_t  _alphaWeights;

/// @brief Field _preFilterPass offset 0x50
 __declspec(property(get=__get__preFilterPass, put=__set__preFilterPass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _preFilterPass;

/// @brief Field _downsamplePass offset 0x54
 __declspec(property(get=__get__downsamplePass, put=__set__downsamplePass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _downsamplePass;

/// @brief Field _upsamplePass offset 0x58
 __declspec(property(get=__get__upsamplePass, put=__set__upsamplePass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _upsamplePass;

/// @brief Field _finalUpsamplePass offset 0x5c
 __declspec(property(get=__get__finalUpsamplePass, put=__set__finalUpsamplePass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _finalUpsamplePass;

/// @brief Field _bloomTextureWidth offset 0x60
 __declspec(property(get=__get__bloomTextureWidth, put=__set__bloomTextureWidth)) int32_t  _bloomTextureWidth;

/// @brief Field _baseColorBoost offset 0x64
 __declspec(property(get=__get__baseColorBoost, put=__set__baseColorBoost)) float_t  _baseColorBoost;

/// @brief Field _baseColorBoostThreshold offset 0x68
 __declspec(property(get=__get__baseColorBoostThreshold, put=__set__baseColorBoostThreshold)) float_t  _baseColorBoostThreshold;

/// @brief Field _fadeMaterial offset 0x70
 __declspec(property(get=__get__fadeMaterial, put=__set__fadeMaterial)) ::UnityEngine::Material*  _fadeMaterial;

/// @brief Field _mainEffectMaterial offset 0x78
 __declspec(property(get=__get__mainEffectMaterial, put=__set__mainEffectMaterial)) ::UnityEngine::Material*  _mainEffectMaterial;

 __declspec(property(get=get_hasPostProcessEffect)) bool  hasPostProcessEffect;

constexpr void __set__bloomRenderer(::GlobalNamespace::PyramidBloomRendererSO*  value) ;

constexpr ::GlobalNamespace::PyramidBloomRendererSO* __get__bloomRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PyramidBloomRendererSO*> __get__bloomRenderer() const;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO*  value) ;

constexpr ::GlobalNamespace::BloomFogSO* __get__bloomFog() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> __get__bloomFog() const;

constexpr void __set__fadeShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get__fadeShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get__fadeShader() const;

constexpr void __set__mainEffectShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get__mainEffectShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get__mainEffectShader() const;

constexpr void __set__bloomBlendFactor(float_t  value) ;

constexpr float_t& __get__bloomBlendFactor() ;

constexpr float_t const& __get__bloomBlendFactor() const;

constexpr void __set__bloomRadius(float_t  value) ;

constexpr float_t& __get__bloomRadius() ;

constexpr float_t const& __get__bloomRadius() const;

constexpr void __set__bloomIntensity(float_t  value) ;

constexpr float_t& __get__bloomIntensity() ;

constexpr float_t const& __get__bloomIntensity() const;

constexpr void __set__downBloomIntensityOffset(float_t  value) ;

constexpr float_t& __get__downBloomIntensityOffset() ;

constexpr float_t const& __get__downBloomIntensityOffset() const;

constexpr void __set__pyramidWeightsParam(float_t  value) ;

constexpr float_t& __get__pyramidWeightsParam() ;

constexpr float_t const& __get__pyramidWeightsParam() const;

constexpr void __set__alphaWeights(float_t  value) ;

constexpr float_t& __get__alphaWeights() ;

constexpr float_t const& __get__alphaWeights() const;

constexpr void __set__preFilterPass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__preFilterPass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__preFilterPass() const;

constexpr void __set__downsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__downsamplePass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__downsamplePass() const;

constexpr void __set__upsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__upsamplePass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__upsamplePass() const;

constexpr void __set__finalUpsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__finalUpsamplePass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__finalUpsamplePass() const;

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

constexpr void __set__fadeMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__fadeMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__fadeMaterial() const;

constexpr void __set__mainEffectMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__mainEffectMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__mainEffectMaterial() const;

/// @brief Method get_hasPostProcessEffect addr 0x2808be4 size 0x8 virtual true final false
inline bool get_hasPostProcessEffect() ;

/// @brief Method OnEnable addr 0x2808bec size 0x1c virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2808d2c size 0x30 virtual false final false
inline void OnDisable() ;

/// @brief Method LazyInitializeMaterials addr 0x2808c08 size 0x124 virtual false final false
inline void LazyInitializeMaterials() ;

/// @brief Method PreRender addr 0x2808d5c size 0x64 virtual true final false
inline void PreRender() ;

/// @brief Method Render addr 0x2808dc0 size 0x27c virtual true final false
inline void Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest, float_t  fade) ;

static inline ::GlobalNamespace::PyramidBloomMainEffectSO* New_ctor() ;

/// @brief Method .ctor addr 0x280903c size 0x3c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PyramidBloomMainEffectSO(PyramidBloomMainEffectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PyramidBloomMainEffectSO(PyramidBloomMainEffectSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PyramidBloomMainEffectSO()  = default;
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PyramidBloomMainEffectSO, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PyramidBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PyramidBloomMainEffectSO*, "", "PyramidBloomMainEffectSO");
