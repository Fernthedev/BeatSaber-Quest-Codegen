#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderShaderHelper)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
class SliderController;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderShaderHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderShaderHelper);
// Type: ::SliderShaderHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4826))
// CS Name: ::SliderShaderHelper*
class CORDL_TYPE SliderShaderHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_colorPropertyId(int32_t  value) ;

static inline int32_t getStaticF_colorPropertyId() ;

static inline void setStaticF_saberAttractionPointPropertyId(int32_t  value) ;

static inline int32_t getStaticF_saberAttractionPointPropertyId() ;

static inline void setStaticF_timeSinceHeadNoteJumpPropertyId(int32_t  value) ;

static inline int32_t getStaticF_timeSinceHeadNoteJumpPropertyId() ;

static inline void setStaticF_headNoteJumpDataPropertyId(int32_t  value) ;

static inline int32_t getStaticF_headNoteJumpDataPropertyId() ;

static inline void setStaticF_tailNoteJumpDataPropertyId(int32_t  value) ;

static inline int32_t getStaticF_tailNoteJumpDataPropertyId() ;

static inline void setStaticF_jumpSpeedPropertyId(int32_t  value) ;

static inline int32_t getStaticF_jumpSpeedPropertyId() ;

static inline void setStaticF_jumpDistancePropertyId(int32_t  value) ;

static inline int32_t getStaticF_jumpDistancePropertyId() ;

static inline void setStaticF_randomPropertyId(int32_t  value) ;

static inline int32_t getStaticF_randomPropertyId() ;

static inline void setStaticF_headFadeLengthPropertyId(int32_t  value) ;

static inline int32_t getStaticF_headFadeLengthPropertyId() ;

static inline void setStaticF_tailFadeLengthPropertyId(int32_t  value) ;

static inline int32_t getStaticF_tailFadeLengthPropertyId() ;

static inline void setStaticF_sliderZLengthPropertyId(int32_t  value) ;

static inline int32_t getStaticF_sliderZLengthPropertyId() ;

static inline void setStaticF_sliderLengthPropertyId(int32_t  value) ;

static inline int32_t getStaticF_sliderLengthPropertyId() ;

static inline void setStaticF_tailHeadNoteJumpOffsetDifferencePropertyId(int32_t  value) ;

static inline int32_t getStaticF_tailHeadNoteJumpOffsetDifferencePropertyId() ;

static inline void setStaticF_saberAttractionMultiplier(int32_t  value) ;

static inline int32_t getStaticF_saberAttractionMultiplier() ;

/// @brief Method SetTimeSinceHeadNoteJump addr 0x2395278 size 0x7c virtual false final false
static inline void SetTimeSinceHeadNoteJump(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, float_t  time) ;

/// @brief Method SetTailHeadNoteJumpOffsetDifference addr 0x23952f4 size 0x7c virtual false final false
static inline void SetTailHeadNoteJumpOffsetDifference(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, float_t  tailHeadNoteJumpOffsetDifference) ;

/// @brief Method SetSaberAttractionPoint addr 0x2395370 size 0x98 virtual false final false
static inline void SetSaberAttractionPoint(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::Vector3  attractPoint) ;

/// @brief Method EnableSaberAttraction addr 0x23923c4 size 0x88 virtual false final false
static inline void EnableSaberAttraction(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, bool  enableSaberAttraction) ;

/// @brief Method SetColor addr 0x2395408 size 0x9c virtual false final false
static inline void SetColor(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::Color  color) ;

/// @brief Method SetInitialProperties addr 0x23954a4 size 0x260 virtual false final false
static inline void SetInitialProperties(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::Color  sliderColor, float_t  headNoteGravity, float_t  tailNoteGravity, float_t  noteJumpMovementSpeed, float_t  jumpDistance, float_t  sliderZLength, float_t  sliderLength, bool  hasHeadNote, bool  hasTailNote, float_t  randomValue) ;

/// @brief Method SetInitialProperties addr 0x239087c size 0x158 virtual false final false
static inline void SetInitialProperties(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::GlobalNamespace::SliderController*  sliderController, float_t  noteJumpMovementSpeed) ;

/// @brief Method UpdateMaterialPropertyBlock addr 0x2391940 size 0x160 virtual false final false
static inline void UpdateMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::GlobalNamespace::SliderController*  sliderController, float_t  timeSinceHeadNoteJump, float_t  jumpOffsetY) ;

// Ctor Parameters [CppParam { name: "", ty: "SliderShaderHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderShaderHelper(SliderShaderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderShaderHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderShaderHelper(SliderShaderHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderShaderHelper()  = default;
public:


// Fields

// Static field colorPropertyId

// Static field saberAttractionPointPropertyId

// Static field timeSinceHeadNoteJumpPropertyId

// Static field headNoteJumpDataPropertyId

// Static field tailNoteJumpDataPropertyId

// Static field jumpSpeedPropertyId

// Static field jumpDistancePropertyId

// Static field randomPropertyId

// Static field headFadeLengthPropertyId

// Static field tailFadeLengthPropertyId

// Static field sliderZLengthPropertyId

// Static field sliderLengthPropertyId

// Static field tailHeadNoteJumpOffsetDifferencePropertyId

// Static field saberAttractionMultiplier


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderShaderHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderShaderHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderShaderHelper*, "", "SliderShaderHelper");
