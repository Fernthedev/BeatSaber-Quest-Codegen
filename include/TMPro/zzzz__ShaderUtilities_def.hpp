#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderUtilities)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace TMPro {
class ShaderUtilities;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::ShaderUtilities);
// Type: TMPro::ShaderUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12416))
// CS Name: ::TMPro::ShaderUtilities*
class CORDL_TYPE ShaderUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_ID_MainTex(int32_t  value) ;

static inline int32_t getStaticF_ID_MainTex() ;

static inline void setStaticF_ID_FaceTex(int32_t  value) ;

static inline int32_t getStaticF_ID_FaceTex() ;

static inline void setStaticF_ID_FaceColor(int32_t  value) ;

static inline int32_t getStaticF_ID_FaceColor() ;

static inline void setStaticF_ID_FaceDilate(int32_t  value) ;

static inline int32_t getStaticF_ID_FaceDilate() ;

static inline void setStaticF_ID_Shininess(int32_t  value) ;

static inline int32_t getStaticF_ID_Shininess() ;

static inline void setStaticF_ID_UnderlayColor(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlayColor() ;

static inline void setStaticF_ID_UnderlayOffsetX(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlayOffsetX() ;

static inline void setStaticF_ID_UnderlayOffsetY(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlayOffsetY() ;

static inline void setStaticF_ID_UnderlayDilate(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlayDilate() ;

static inline void setStaticF_ID_UnderlaySoftness(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlaySoftness() ;

static inline void setStaticF_ID_UnderlayOffset(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlayOffset() ;

static inline void setStaticF_ID_UnderlayIsoPerimeter(int32_t  value) ;

static inline int32_t getStaticF_ID_UnderlayIsoPerimeter() ;

static inline void setStaticF_ID_WeightNormal(int32_t  value) ;

static inline int32_t getStaticF_ID_WeightNormal() ;

static inline void setStaticF_ID_WeightBold(int32_t  value) ;

static inline int32_t getStaticF_ID_WeightBold() ;

static inline void setStaticF_ID_OutlineTex(int32_t  value) ;

static inline int32_t getStaticF_ID_OutlineTex() ;

static inline void setStaticF_ID_OutlineWidth(int32_t  value) ;

static inline int32_t getStaticF_ID_OutlineWidth() ;

static inline void setStaticF_ID_OutlineSoftness(int32_t  value) ;

static inline int32_t getStaticF_ID_OutlineSoftness() ;

static inline void setStaticF_ID_OutlineColor(int32_t  value) ;

static inline int32_t getStaticF_ID_OutlineColor() ;

static inline void setStaticF_ID_Outline2Color(int32_t  value) ;

static inline int32_t getStaticF_ID_Outline2Color() ;

static inline void setStaticF_ID_Outline2Width(int32_t  value) ;

static inline int32_t getStaticF_ID_Outline2Width() ;

static inline void setStaticF_ID_Padding(int32_t  value) ;

static inline int32_t getStaticF_ID_Padding() ;

static inline void setStaticF_ID_GradientScale(int32_t  value) ;

static inline int32_t getStaticF_ID_GradientScale() ;

static inline void setStaticF_ID_ScaleX(int32_t  value) ;

static inline int32_t getStaticF_ID_ScaleX() ;

static inline void setStaticF_ID_ScaleY(int32_t  value) ;

static inline int32_t getStaticF_ID_ScaleY() ;

static inline void setStaticF_ID_PerspectiveFilter(int32_t  value) ;

static inline int32_t getStaticF_ID_PerspectiveFilter() ;

static inline void setStaticF_ID_Sharpness(int32_t  value) ;

static inline int32_t getStaticF_ID_Sharpness() ;

static inline void setStaticF_ID_TextureWidth(int32_t  value) ;

static inline int32_t getStaticF_ID_TextureWidth() ;

static inline void setStaticF_ID_TextureHeight(int32_t  value) ;

static inline int32_t getStaticF_ID_TextureHeight() ;

static inline void setStaticF_ID_BevelAmount(int32_t  value) ;

static inline int32_t getStaticF_ID_BevelAmount() ;

static inline void setStaticF_ID_GlowColor(int32_t  value) ;

static inline int32_t getStaticF_ID_GlowColor() ;

static inline void setStaticF_ID_GlowOffset(int32_t  value) ;

static inline int32_t getStaticF_ID_GlowOffset() ;

static inline void setStaticF_ID_GlowPower(int32_t  value) ;

static inline int32_t getStaticF_ID_GlowPower() ;

static inline void setStaticF_ID_GlowOuter(int32_t  value) ;

static inline int32_t getStaticF_ID_GlowOuter() ;

static inline void setStaticF_ID_GlowInner(int32_t  value) ;

static inline int32_t getStaticF_ID_GlowInner() ;

static inline void setStaticF_ID_LightAngle(int32_t  value) ;

static inline int32_t getStaticF_ID_LightAngle() ;

static inline void setStaticF_ID_EnvMap(int32_t  value) ;

static inline int32_t getStaticF_ID_EnvMap() ;

static inline void setStaticF_ID_EnvMatrix(int32_t  value) ;

static inline int32_t getStaticF_ID_EnvMatrix() ;

static inline void setStaticF_ID_EnvMatrixRotation(int32_t  value) ;

static inline int32_t getStaticF_ID_EnvMatrixRotation() ;

static inline void setStaticF_ID_MaskCoord(int32_t  value) ;

static inline int32_t getStaticF_ID_MaskCoord() ;

static inline void setStaticF_ID_ClipRect(int32_t  value) ;

static inline int32_t getStaticF_ID_ClipRect() ;

static inline void setStaticF_ID_MaskSoftnessX(int32_t  value) ;

static inline int32_t getStaticF_ID_MaskSoftnessX() ;

static inline void setStaticF_ID_MaskSoftnessY(int32_t  value) ;

static inline int32_t getStaticF_ID_MaskSoftnessY() ;

static inline void setStaticF_ID_VertexOffsetX(int32_t  value) ;

static inline int32_t getStaticF_ID_VertexOffsetX() ;

static inline void setStaticF_ID_VertexOffsetY(int32_t  value) ;

static inline int32_t getStaticF_ID_VertexOffsetY() ;

static inline void setStaticF_ID_UseClipRect(int32_t  value) ;

static inline int32_t getStaticF_ID_UseClipRect() ;

static inline void setStaticF_ID_StencilID(int32_t  value) ;

static inline int32_t getStaticF_ID_StencilID() ;

static inline void setStaticF_ID_StencilOp(int32_t  value) ;

static inline int32_t getStaticF_ID_StencilOp() ;

static inline void setStaticF_ID_StencilComp(int32_t  value) ;

static inline int32_t getStaticF_ID_StencilComp() ;

static inline void setStaticF_ID_StencilReadMask(int32_t  value) ;

static inline int32_t getStaticF_ID_StencilReadMask() ;

static inline void setStaticF_ID_StencilWriteMask(int32_t  value) ;

static inline int32_t getStaticF_ID_StencilWriteMask() ;

static inline void setStaticF_ID_ShaderFlags(int32_t  value) ;

static inline int32_t getStaticF_ID_ShaderFlags() ;

static inline void setStaticF_ID_ScaleRatio_A(int32_t  value) ;

static inline int32_t getStaticF_ID_ScaleRatio_A() ;

static inline void setStaticF_ID_ScaleRatio_B(int32_t  value) ;

static inline int32_t getStaticF_ID_ScaleRatio_B() ;

static inline void setStaticF_ID_ScaleRatio_C(int32_t  value) ;

static inline int32_t getStaticF_ID_ScaleRatio_C() ;

static inline void setStaticF_Keyword_Bevel(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_Bevel() ;

static inline void setStaticF_Keyword_Glow(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_Glow() ;

static inline void setStaticF_Keyword_Underlay(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_Underlay() ;

static inline void setStaticF_Keyword_Ratios(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_Ratios() ;

static inline void setStaticF_Keyword_MASK_SOFT(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_MASK_SOFT() ;

static inline void setStaticF_Keyword_MASK_HARD(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_MASK_HARD() ;

static inline void setStaticF_Keyword_MASK_TEX(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_MASK_TEX() ;

static inline void setStaticF_Keyword_Outline(::StringW  value) ;

static inline ::StringW getStaticF_Keyword_Outline() ;

static inline void setStaticF_ShaderTag_ZTestMode(::StringW  value) ;

static inline ::StringW getStaticF_ShaderTag_ZTestMode() ;

static inline void setStaticF_ShaderTag_CullMode(::StringW  value) ;

static inline ::StringW getStaticF_ShaderTag_CullMode() ;

static inline void setStaticF_m_clamp(float_t  value) ;

static inline float_t getStaticF_m_clamp() ;

static inline void setStaticF_isInitialized(bool  value) ;

static inline bool getStaticF_isInitialized() ;

static inline void setStaticF_k_ShaderRef_MobileSDF(::UnityEngine::Shader*  value) ;

static inline ::UnityEngine::Shader* getStaticF_k_ShaderRef_MobileSDF() ;

static inline void setStaticF_k_ShaderRef_MobileBitmap(::UnityEngine::Shader*  value) ;

static inline ::UnityEngine::Shader* getStaticF_k_ShaderRef_MobileBitmap() ;

/// @brief Method get_ShaderRef_MobileSDF addr 0x2c40648 size 0xfc virtual false final false
static inline ::UnityEngine::Shader* get_ShaderRef_MobileSDF() ;

/// @brief Method get_ShaderRef_MobileBitmap addr 0x2c40744 size 0xfc virtual false final false
static inline ::UnityEngine::Shader* get_ShaderRef_MobileBitmap() ;

/// @brief Method GetShaderPropertyIDs addr 0x2c39ed0 size 0xaec virtual false final false
static inline void GetShaderPropertyIDs() ;

/// @brief Method UpdateShaderRatios addr 0x2c409d0 size 0x45c virtual false final false
static inline void UpdateShaderRatios(::UnityEngine::Material*  mat) ;

/// @brief Method GetFontExtent addr 0x2c40e2c size 0x44 virtual false final false
static inline ::UnityEngine::Vector4 GetFontExtent(::UnityEngine::Material*  material) ;

/// @brief Method IsMaskingEnabled addr 0x2c40e70 size 0x19c virtual false final false
static inline bool IsMaskingEnabled(::UnityEngine::Material*  material) ;

/// @brief Method GetPadding addr 0x2c4100c size 0x6a8 virtual false final false
static inline float_t GetPadding(::UnityEngine::Material*  material, bool  enableExtraPadding, bool  isBold) ;

/// @brief Method GetPadding addr 0x2c416b4 size 0x880 virtual false final false
static inline float_t GetPadding(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  materials, bool  enableExtraPadding, bool  isBold) ;

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderUtilities(ShaderUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderUtilities(ShaderUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ShaderUtilities()  = default;
public:


// Fields

// Static field ID_MainTex

// Static field ID_FaceTex

// Static field ID_FaceColor

// Static field ID_FaceDilate

// Static field ID_Shininess

// Static field ID_UnderlayColor

// Static field ID_UnderlayOffsetX

// Static field ID_UnderlayOffsetY

// Static field ID_UnderlayDilate

// Static field ID_UnderlaySoftness

// Static field ID_UnderlayOffset

// Static field ID_UnderlayIsoPerimeter

// Static field ID_WeightNormal

// Static field ID_WeightBold

// Static field ID_OutlineTex

// Static field ID_OutlineWidth

// Static field ID_OutlineSoftness

// Static field ID_OutlineColor

// Static field ID_Outline2Color

// Static field ID_Outline2Width

// Static field ID_Padding

// Static field ID_GradientScale

// Static field ID_ScaleX

// Static field ID_ScaleY

// Static field ID_PerspectiveFilter

// Static field ID_Sharpness

// Static field ID_TextureWidth

// Static field ID_TextureHeight

// Static field ID_BevelAmount

// Static field ID_GlowColor

// Static field ID_GlowOffset

// Static field ID_GlowPower

// Static field ID_GlowOuter

// Static field ID_GlowInner

// Static field ID_LightAngle

// Static field ID_EnvMap

// Static field ID_EnvMatrix

// Static field ID_EnvMatrixRotation

// Static field ID_MaskCoord

// Static field ID_ClipRect

// Static field ID_MaskSoftnessX

// Static field ID_MaskSoftnessY

// Static field ID_VertexOffsetX

// Static field ID_VertexOffsetY

// Static field ID_UseClipRect

// Static field ID_StencilID

// Static field ID_StencilOp

// Static field ID_StencilComp

// Static field ID_StencilReadMask

// Static field ID_StencilWriteMask

// Static field ID_ShaderFlags

// Static field ID_ScaleRatio_A

// Static field ID_ScaleRatio_B

// Static field ID_ScaleRatio_C

// Static field Keyword_Bevel

// Static field Keyword_Glow

// Static field Keyword_Underlay

// Static field Keyword_Ratios

// Static field Keyword_MASK_SOFT

// Static field Keyword_MASK_HARD

// Static field Keyword_MASK_TEX

// Static field Keyword_Outline

// Static field ShaderTag_ZTestMode

// Static field ShaderTag_CullMode

// Static field m_clamp

// Static field isInitialized

// Static field k_ShaderRef_MobileSDF

// Static field k_ShaderRef_MobileBitmap


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::ShaderUtilities, 0x10>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::ShaderUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ShaderUtilities*, "TMPro", "ShaderUtilities");
