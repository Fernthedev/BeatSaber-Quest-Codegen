#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassDoubleKawaseBlurTextureEffectSO)
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct __KawaseBlurRendererSO__KernelSize;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassDoubleKawaseBlurTextureEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO);
// Type: ::BloomPrePassDoubleKawaseBlurTextureEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14470))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15313))
// CS Name: ::BloomPrePassDoubleKawaseBlurTextureEffectSO*
class CORDL_TYPE BloomPrePassDoubleKawaseBlurTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::BloomPrePassEffectSO)]{};

/// @brief Field _bloom1KernelSize offset 0x2c
 __declspec(property(get=__get__bloom1KernelSize, put=__set__bloom1KernelSize)) ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize  _bloom1KernelSize;

/// @brief Field _bloom1Boost offset 0x30
 __declspec(property(get=__get__bloom1Boost, put=__set__bloom1Boost)) float_t  _bloom1Boost;

/// @brief Field _bloom2KernelSize offset 0x34
 __declspec(property(get=__get__bloom2KernelSize, put=__set__bloom2KernelSize)) ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize  _bloom2KernelSize;

/// @brief Field _bloom2Boost offset 0x38
 __declspec(property(get=__get__bloom2Boost, put=__set__bloom2Boost)) float_t  _bloom2Boost;

/// @brief Field _bloom2Alpha offset 0x3c
 __declspec(property(get=__get__bloom2Alpha, put=__set__bloom2Alpha)) float_t  _bloom2Alpha;

/// @brief Field _downsample offset 0x40
 __declspec(property(get=__get__downsample, put=__set__downsample)) int32_t  _downsample;

/// @brief Field _gammaCorrection offset 0x44
 __declspec(property(get=__get__gammaCorrection, put=__set__gammaCorrection)) bool  _gammaCorrection;

/// @brief Field _kawaseBlurRenderer offset 0x48
 __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer)) ::GlobalNamespace::KawaseBlurRendererSO*  _kawaseBlurRenderer;

constexpr void __set__bloom1KernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize  value) ;

constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __get__bloom1KernelSize() ;

constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __get__bloom1KernelSize() const;

constexpr void __set__bloom1Boost(float_t  value) ;

constexpr float_t& __get__bloom1Boost() ;

constexpr float_t const& __get__bloom1Boost() const;

constexpr void __set__bloom2KernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize  value) ;

constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __get__bloom2KernelSize() ;

constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __get__bloom2KernelSize() const;

constexpr void __set__bloom2Boost(float_t  value) ;

constexpr float_t& __get__bloom2Boost() ;

constexpr float_t const& __get__bloom2Boost() const;

constexpr void __set__bloom2Alpha(float_t  value) ;

constexpr float_t& __get__bloom2Alpha() ;

constexpr float_t const& __get__bloom2Alpha() const;

constexpr void __set__downsample(int32_t  value) ;

constexpr int32_t& __get__downsample() ;

constexpr int32_t const& __get__downsample() const;

constexpr void __set__gammaCorrection(bool  value) ;

constexpr bool& __get__gammaCorrection() ;

constexpr bool const& __get__gammaCorrection() const;

constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO*  value) ;

constexpr ::GlobalNamespace::KawaseBlurRendererSO* __get__kawaseBlurRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> __get__kawaseBlurRenderer() const;

/// @brief Method Render addr 0x280c2d4 size 0x38 virtual true final false
inline void Render(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

static inline ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO* New_ctor() ;

/// @brief Method .ctor addr 0x280c30c size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassDoubleKawaseBlurTextureEffectSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassDoubleKawaseBlurTextureEffectSO(BloomPrePassDoubleKawaseBlurTextureEffectSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassDoubleKawaseBlurTextureEffectSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassDoubleKawaseBlurTextureEffectSO(BloomPrePassDoubleKawaseBlurTextureEffectSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomPrePassDoubleKawaseBlurTextureEffectSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*, "", "BloomPrePassDoubleKawaseBlurTextureEffectSO");
