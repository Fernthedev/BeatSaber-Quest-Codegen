#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlueNoiseDithering)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BlueNoiseDithering;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlueNoiseDithering);
// Type: ::BlueNoiseDithering
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14493))
// CS Name: ::BlueNoiseDithering*
class CORDL_TYPE BlueNoiseDithering : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _noiseTexture offset 0x18
 __declspec(property(get=__get__noiseTexture, put=__set__noiseTexture)) ::UnityEngine::Texture2D*  _noiseTexture;

constexpr void __set__noiseTexture(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get__noiseTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get__noiseTexture() const;

static inline void setStaticF__noiseParamsID(int32_t  value) ;

static inline int32_t getStaticF__noiseParamsID() ;

static inline void setStaticF__globalNoiseTextureID(int32_t  value) ;

static inline int32_t getStaticF__globalNoiseTextureID() ;

/// @brief Method SetBlueNoiseShaderParams addr 0x210ad48 size 0xec virtual false final false
inline void SetBlueNoiseShaderParams(int32_t  cameraPixelWidth, int32_t  cameraPixelHeight) ;

static inline ::GlobalNamespace::BlueNoiseDithering* New_ctor() ;

/// @brief Method .ctor addr 0x210ae34 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDithering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlueNoiseDithering(BlueNoiseDithering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDithering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlueNoiseDithering(BlueNoiseDithering const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BlueNoiseDithering()  = default;
public:


// Fields

// Static field _noiseParamsID

// Static field _globalNoiseTextureID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlueNoiseDithering, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlueNoiseDithering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlueNoiseDithering*, "", "BlueNoiseDithering");
