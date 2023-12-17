#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BuiltinMaterials)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class BuiltinMaterials;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::BuiltinMaterials);
// Type: UnityEngine.ProBuilder::BuiltinMaterials
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12106))
// CS Name: ::UnityEngine.ProBuilder::BuiltinMaterials*
class CORDL_TYPE BuiltinMaterials : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field faceShader offset 0x0
static constexpr ::ConstString  faceShader{u"Hidden/ProBuilder/FaceHighlight"};

/// @brief Field lineShader offset 0x0
static constexpr ::ConstString  lineShader{u"Hidden/ProBuilder/LineBillboard"};

/// @brief Field lineShaderMetal offset 0x0
static constexpr ::ConstString  lineShaderMetal{u"Hidden/ProBuilder/LineBillboardMetal"};

/// @brief Field pointShader offset 0x0
static constexpr ::ConstString  pointShader{u"Hidden/ProBuilder/PointBillboard"};

/// @brief Field wireShader offset 0x0
static constexpr ::ConstString  wireShader{u"Hidden/ProBuilder/FaceHighlight"};

/// @brief Field dotShader offset 0x0
static constexpr ::ConstString  dotShader{u"Hidden/ProBuilder/VertexShader"};

static inline void setStaticF_s_IsInitialized(bool  value) ;

static inline bool getStaticF_s_IsInitialized() ;

static inline void setStaticF_previewColor(::UnityEngine::Color  value) ;

static inline ::UnityEngine::Color getStaticF_previewColor() ;

static inline void setStaticF_s_SelectionPickerShader(::UnityEngine::Shader*  value) ;

static inline ::UnityEngine::Shader* getStaticF_s_SelectionPickerShader() ;

static inline void setStaticF_s_GeometryShadersSupported(bool  value) ;

static inline bool getStaticF_s_GeometryShadersSupported() ;

static inline void setStaticF_s_DefaultMaterial(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_DefaultMaterial() ;

static inline void setStaticF_s_FacePickerMaterial(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_FacePickerMaterial() ;

static inline void setStaticF_s_VertexPickerMaterial(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_VertexPickerMaterial() ;

static inline void setStaticF_s_EdgePickerMaterial(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_EdgePickerMaterial() ;

static inline void setStaticF_s_UnityDefaultDiffuse(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_UnityDefaultDiffuse() ;

static inline void setStaticF_s_UnlitVertexColorMaterial(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_UnlitVertexColorMaterial() ;

static inline void setStaticF_s_ShapePreviewMaterial(::UnityEngine::Material*  value) ;

static inline ::UnityEngine::Material* getStaticF_s_ShapePreviewMaterial() ;

static inline void setStaticF_k_EdgePickerMaterial(::StringW  value) ;

static inline ::StringW getStaticF_k_EdgePickerMaterial() ;

static inline void setStaticF_k_FacePickerMaterial(::StringW  value) ;

static inline ::StringW getStaticF_k_FacePickerMaterial() ;

static inline void setStaticF_k_VertexPickerMaterial(::StringW  value) ;

static inline ::StringW getStaticF_k_VertexPickerMaterial() ;

static inline void setStaticF_k_EdgePickerShader(::StringW  value) ;

static inline ::StringW getStaticF_k_EdgePickerShader() ;

static inline void setStaticF_k_FacePickerShader(::StringW  value) ;

static inline ::StringW getStaticF_k_FacePickerShader() ;

static inline void setStaticF_k_VertexPickerShader(::StringW  value) ;

static inline ::StringW getStaticF_k_VertexPickerShader() ;

/// @brief Method Init addr 0x2b3a9bc size 0x6a0 virtual false final false
static inline void Init() ;

/// @brief Method get_geometryShadersSupported addr 0x2b3b2cc size 0x5c virtual false final false
static inline bool get_geometryShadersSupported() ;

/// @brief Method get_defaultMaterial addr 0x2b3b328 size 0x5c virtual false final false
static inline ::UnityEngine::Material* get_defaultMaterial() ;

/// @brief Method get_selectionPickerShader addr 0x2b3b384 size 0x5c virtual false final false
static inline ::UnityEngine::Shader* get_selectionPickerShader() ;

/// @brief Method get_facePickerMaterial addr 0x2b3b3e0 size 0x5c virtual false final false
static inline ::UnityEngine::Material* get_facePickerMaterial() ;

/// @brief Method get_vertexPickerMaterial addr 0x2b3b43c size 0x5c virtual false final false
static inline ::UnityEngine::Material* get_vertexPickerMaterial() ;

/// @brief Method get_edgePickerMaterial addr 0x2b3b498 size 0x5c virtual false final false
static inline ::UnityEngine::Material* get_edgePickerMaterial() ;

/// @brief Method get_triggerMaterial addr 0x2b3b4f4 size 0x108 virtual false final false
static inline ::UnityEngine::Material* get_triggerMaterial() ;

/// @brief Method get_colliderMaterial addr 0x2b3b5fc size 0x108 virtual false final false
static inline ::UnityEngine::Material* get_colliderMaterial() ;

/// @brief Method get_noDrawMaterial addr 0x2b3b704 size 0x108 virtual false final false
static inline ::UnityEngine::Material* get_noDrawMaterial() ;

/// @brief Method GetLegacyDiffuse addr 0x2b3b80c size 0x2a0 virtual false final false
static inline ::UnityEngine::Material* GetLegacyDiffuse() ;

/// @brief Method GetDefaultMaterial addr 0x2b3b05c size 0x1f0 virtual false final false
static inline ::UnityEngine::Material* GetDefaultMaterial() ;

/// @brief Method get_unlitVertexColor addr 0x2b3baac size 0x5c virtual false final false
static inline ::UnityEngine::Material* get_unlitVertexColor() ;

/// @brief Method get_ShapePreviewMaterial addr 0x2b3bb08 size 0x5c virtual false final false
static inline ::UnityEngine::Material* get_ShapePreviewMaterial() ;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BuiltinMaterials(BuiltinMaterials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinMaterials", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuiltinMaterials(BuiltinMaterials const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BuiltinMaterials()  = default;
public:


// Fields

// Static field s_IsInitialized

// Static field previewColor

// Static field s_SelectionPickerShader

// Static field s_GeometryShadersSupported

// Static field s_DefaultMaterial

// Static field s_FacePickerMaterial

// Static field s_VertexPickerMaterial

// Static field s_EdgePickerMaterial

// Static field s_UnityDefaultDiffuse

// Static field s_UnlitVertexColorMaterial

// Static field s_ShapePreviewMaterial

// Static field k_EdgePickerMaterial

// Static field k_FacePickerMaterial

// Static field k_VertexPickerMaterial

// Static field k_EdgePickerShader

// Static field k_FacePickerShader

// Static field k_VertexPickerShader


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BuiltinMaterials, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::BuiltinMaterials);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BuiltinMaterials*, "UnityEngine.ProBuilder", "BuiltinMaterials");
