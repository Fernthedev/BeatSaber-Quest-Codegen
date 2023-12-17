#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomPrePassBloomTextureEffectSO)
namespace GlobalNamespace {
struct __PyramidBloomRendererSO__Pass;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBloomTextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
// Type: ::BloomPrePassBloomTextureEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14470))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15312))
// CS Name: ::BloomPrePassBloomTextureEffectSO*
class CORDL_TYPE BloomPrePassBloomTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::GlobalNamespace::BloomPrePassEffectSO)]{};

/// @brief Field _radius offset 0x2c
 __declspec(property(get=__get__radius, put=__set__radius)) float_t  _radius;

/// @brief Field _intensity offset 0x30
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _downBloomIntensityOffset offset 0x34
 __declspec(property(get=__get__downBloomIntensityOffset, put=__set__downBloomIntensityOffset)) float_t  _downBloomIntensityOffset;

/// @brief Field _uniformPyramidWeights offset 0x38
 __declspec(property(get=__get__uniformPyramidWeights, put=__set__uniformPyramidWeights)) bool  _uniformPyramidWeights;

/// @brief Field _pyramidWeightsParam offset 0x3c
 __declspec(property(get=__get__pyramidWeightsParam, put=__set__pyramidWeightsParam)) float_t  _pyramidWeightsParam;

/// @brief Field _firstUpsampleBrightness offset 0x40
 __declspec(property(get=__get__firstUpsampleBrightness, put=__set__firstUpsampleBrightness)) float_t  _firstUpsampleBrightness;

/// @brief Field _finalUpsampleBrightness offset 0x44
 __declspec(property(get=__get__finalUpsampleBrightness, put=__set__finalUpsampleBrightness)) float_t  _finalUpsampleBrightness;

/// @brief Field _prefilterPass offset 0x48
 __declspec(property(get=__get__prefilterPass, put=__set__prefilterPass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _prefilterPass;

/// @brief Field _downsamplePass offset 0x4c
 __declspec(property(get=__get__downsamplePass, put=__set__downsamplePass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _downsamplePass;

/// @brief Field _upsamplePass offset 0x50
 __declspec(property(get=__get__upsamplePass, put=__set__upsamplePass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _upsamplePass;

/// @brief Field _finalUpsamplePass offset 0x54
 __declspec(property(get=__get__finalUpsamplePass, put=__set__finalUpsamplePass)) ::GlobalNamespace::__PyramidBloomRendererSO__Pass  _finalUpsamplePass;

/// @brief Field _bloomRenderer offset 0x58
 __declspec(property(get=__get__bloomRenderer, put=__set__bloomRenderer)) ::GlobalNamespace::PyramidBloomRendererSO*  _bloomRenderer;

/// @brief Field _bloomFog offset 0x60
 __declspec(property(get=__get__bloomFog, put=__set__bloomFog)) ::GlobalNamespace::BloomFogSO*  _bloomFog;

 __declspec(property(get=get_toneMapping)) ::GlobalNamespace::ToneMapping  toneMapping;

constexpr void __set__radius(float_t  value) ;

constexpr float_t& __get__radius() ;

constexpr float_t const& __get__radius() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__downBloomIntensityOffset(float_t  value) ;

constexpr float_t& __get__downBloomIntensityOffset() ;

constexpr float_t const& __get__downBloomIntensityOffset() const;

constexpr void __set__uniformPyramidWeights(bool  value) ;

constexpr bool& __get__uniformPyramidWeights() ;

constexpr bool const& __get__uniformPyramidWeights() const;

constexpr void __set__pyramidWeightsParam(float_t  value) ;

constexpr float_t& __get__pyramidWeightsParam() ;

constexpr float_t const& __get__pyramidWeightsParam() const;

constexpr void __set__firstUpsampleBrightness(float_t  value) ;

constexpr float_t& __get__firstUpsampleBrightness() ;

constexpr float_t const& __get__firstUpsampleBrightness() const;

constexpr void __set__finalUpsampleBrightness(float_t  value) ;

constexpr float_t& __get__finalUpsampleBrightness() ;

constexpr float_t const& __get__finalUpsampleBrightness() const;

constexpr void __set__prefilterPass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__prefilterPass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__prefilterPass() const;

constexpr void __set__downsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__downsamplePass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__downsamplePass() const;

constexpr void __set__upsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__upsamplePass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__upsamplePass() const;

constexpr void __set__finalUpsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass  value) ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& __get__finalUpsamplePass() ;

constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& __get__finalUpsamplePass() const;

constexpr void __set__bloomRenderer(::GlobalNamespace::PyramidBloomRendererSO*  value) ;

constexpr ::GlobalNamespace::PyramidBloomRendererSO* __get__bloomRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PyramidBloomRendererSO*> __get__bloomRenderer() const;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO*  value) ;

constexpr ::GlobalNamespace::BloomFogSO* __get__bloomFog() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> __get__bloomFog() const;

/// @brief Method get_toneMapping addr 0x280c20c size 0x20 virtual true final false
inline ::GlobalNamespace::ToneMapping get_toneMapping() ;

/// @brief Method Render addr 0x280c22c size 0x6c virtual true final false
inline void Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

static inline ::GlobalNamespace::BloomPrePassBloomTextureEffectSO* New_ctor() ;

/// @brief Method .ctor addr 0x280c298 size 0x3c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassBloomTextureEffectSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBloomTextureEffectSO, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBloomTextureEffectSO*, "", "BloomPrePassBloomTextureEffectSO");
