#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectionPickerRenderer)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer____c__DisplayClass19_0;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer____c;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer__ISelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Texture2D;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer__SelectionPickerRendererHDRP;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer__SelectionPickerRendererStandard;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine {
class Shader;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer__ISelectionPickerRenderer;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer__SelectionPickerRendererHDRP;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer__SelectionPickerRendererStandard;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer____c;
}
namespace UnityEngine::ProBuilder {
class __SelectionPickerRenderer____c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SelectionPickerRenderer);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0);
// Type: ::ISelectionPickerRenderer
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12185))
// CS Name: ::SelectionPickerRenderer::ISelectionPickerRenderer*
class CORDL_TYPE __SelectionPickerRenderer__ISelectionPickerRenderer {
public:
// Declarations
/// @brief Method RenderLookupTexture addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Texture2D* RenderLookupTexture(::UnityEngine::Camera*  camera, ::UnityEngine::Shader*  shader, ::StringW  tag, int32_t  width, int32_t  height) ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer__ISelectionPickerRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectionPickerRenderer__ISelectionPickerRenderer(__SelectionPickerRenderer__ISelectionPickerRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer__ISelectionPickerRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectionPickerRenderer__ISelectionPickerRenderer(__SelectionPickerRenderer__ISelectionPickerRenderer const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::SelectionPickerRendererHDRP
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12186))
// CS Name: ::SelectionPickerRenderer::SelectionPickerRendererHDRP*
class CORDL_TYPE __SelectionPickerRenderer__SelectionPickerRendererHDRP : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer"
constexpr operator  ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*() noexcept;

/// @brief Method RenderLookupTexture addr 0x2b6991c size 0x8 virtual true final true
inline ::UnityEngine::Texture2D* RenderLookupTexture(::UnityEngine::Camera*  camera, ::UnityEngine::Shader*  shader, ::StringW  tag, int32_t  width, int32_t  height) ;

static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP* New_ctor() ;

/// @brief Method .ctor addr 0x2b69924 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer__SelectionPickerRendererHDRP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectionPickerRenderer__SelectionPickerRendererHDRP(__SelectionPickerRenderer__SelectionPickerRendererHDRP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer__SelectionPickerRendererHDRP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectionPickerRenderer__SelectionPickerRendererHDRP(__SelectionPickerRenderer__SelectionPickerRendererHDRP const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SelectionPickerRenderer__SelectionPickerRendererHDRP()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: ::SelectionPickerRendererStandard
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12187))
// CS Name: ::SelectionPickerRenderer::SelectionPickerRendererStandard*
class CORDL_TYPE __SelectionPickerRenderer__SelectionPickerRendererStandard : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer"
constexpr operator  ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*() noexcept;

/// @brief Method RenderLookupTexture addr 0x2b6992c size 0x414 virtual true final true
inline ::UnityEngine::Texture2D* RenderLookupTexture(::UnityEngine::Camera*  camera, ::UnityEngine::Shader*  shader, ::StringW  tag, int32_t  width, int32_t  height) ;

static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard* New_ctor() ;

/// @brief Method .ctor addr 0x2b69d40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer__SelectionPickerRendererStandard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectionPickerRenderer__SelectionPickerRendererStandard(__SelectionPickerRenderer__SelectionPickerRendererStandard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer__SelectionPickerRendererStandard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectionPickerRenderer__SelectionPickerRendererStandard(__SelectionPickerRenderer__SelectionPickerRendererStandard const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SelectionPickerRenderer__SelectionPickerRendererStandard()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass19_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12188))
// CS Name: ::SelectionPickerRenderer::<>c__DisplayClass19_0*
class CORDL_TYPE __SelectionPickerRenderer____c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field positions offset 0x10
 __declspec(property(get=__get_positions, put=__set_positions)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions;

/// @brief Field sharedVertices offset 0x18
 __declspec(property(get=__get_sharedVertices, put=__set_sharedVertices)) ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*,::Array<::UnityEngine::ProBuilder::SharedVertex*>*>  sharedVertices;

constexpr void __set_positions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_positions() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_positions() const;

constexpr void __set_sharedVertices(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*,::Array<::UnityEngine::ProBuilder::SharedVertex*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*,::Array<::UnityEngine::ProBuilder::SharedVertex*>*>& __get_sharedVertices() ;

constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*,::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const& __get_sharedVertices() const;

static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0* New_ctor() ;

/// @brief Method .ctor addr 0x2b69d48 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PickVerticesInRect>b__0 addr 0x2b69d50 size 0x68 virtual false final false
inline int32_t _PickVerticesInRect_b__0(int32_t  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectionPickerRenderer____c__DisplayClass19_0(__SelectionPickerRenderer____c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectionPickerRenderer____c__DisplayClass19_0(__SelectionPickerRenderer____c__DisplayClass19_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SelectionPickerRenderer____c__DisplayClass19_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12189))
// CS Name: ::SelectionPickerRenderer::<>c*
class CORDL_TYPE __SelectionPickerRenderer____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*  value) ;

static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c* getStaticF___9() ;

static inline void setStaticF___9__24_0(::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__24_0() ;

static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b69efc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GenerateFacePickingObjects>b__24_0 addr 0x2b69f04 size 0x18 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _GenerateFacePickingObjects_b__24_0(::UnityEngine::ProBuilder::Face*  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SelectionPickerRenderer____c(__SelectionPickerRenderer____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SelectionPickerRenderer____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SelectionPickerRenderer____c(__SelectionPickerRenderer____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SelectionPickerRenderer____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__24_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__SelectionPickerRenderer____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SelectionPickerRenderer
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12190))
// CS Name: ::UnityEngine.ProBuilder::SelectionPickerRenderer*
class CORDL_TYPE SelectionPickerRenderer : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c;

using __c__DisplayClass19_0 = ::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0;

using SelectionPickerRendererStandard = ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard;

using SelectionPickerRendererHDRP = ::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP;

using ISelectionPickerRenderer = ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field k_FacePickerOcclusionTintUniform offset 0x0
static constexpr ::ConstString  k_FacePickerOcclusionTintUniform{u"_Tint"};

/// @brief Field k_PickerHashNone offset 0x0
static constexpr uint32_t  k_PickerHashNone{static_cast<uint32_t>(0xffc00100u)};

/// @brief Field k_PickerHashMin offset 0x0
static constexpr uint32_t  k_PickerHashMin{static_cast<uint32_t>(0xffffc001u)};

/// @brief Field k_PickerHashMax offset 0x0
static constexpr uint32_t  k_PickerHashMax{static_cast<uint32_t>(0xffffffc0u)};

/// @brief Field k_MinEdgePixelsForValidSelection offset 0x0
static constexpr uint32_t  k_MinEdgePixelsForValidSelection{static_cast<uint32_t>(0x1010101u)};

static inline void setStaticF_k_Blackf(::UnityEngine::Color  value) ;

static inline ::UnityEngine::Color getStaticF_k_Blackf() ;

static inline void setStaticF_k_Whitef(::UnityEngine::Color  value) ;

static inline ::UnityEngine::Color getStaticF_k_Whitef() ;

static inline void setStaticF_s_Initialized(bool  value) ;

static inline bool getStaticF_s_Initialized() ;

static inline void setStaticF_s_PickerRenderer(::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*  value) ;

static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer* getStaticF_s_PickerRenderer() ;

static inline void setStaticF_s_RenderTextureFormat(::UnityEngine::RenderTextureFormat  value) ;

static inline ::UnityEngine::RenderTextureFormat getStaticF_s_RenderTextureFormat() ;

static inline void setStaticF_s_PreferredFormats(::ArrayW<::UnityEngine::RenderTextureFormat,::Array<::UnityEngine::RenderTextureFormat>*>  value) ;

static inline ::ArrayW<::UnityEngine::RenderTextureFormat,::Array<::UnityEngine::RenderTextureFormat>*> getStaticF_s_PreferredFormats() ;

/// @brief Method get_renderTextureFormat addr 0x2b67228 size 0x15c virtual false final false
static inline ::UnityEngine::RenderTextureFormat get_renderTextureFormat() ;

/// @brief Method get_textureFormat addr 0x2b67384 size 0x8 virtual false final false
static inline ::UnityEngine::TextureFormat get_textureFormat() ;

/// @brief Method get_pickerRenderer addr 0x2b6738c size 0xd8 virtual false final false
static inline ::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer* get_pickerRenderer() ;

/// @brief Method PickFacesInRect addr 0x2b65980 size 0x5e4 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(::UnityEngine::Camera*  camera, ::UnityEngine::Rect  pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, int32_t  renderTextureWidth, int32_t  renderTextureHeight) ;

/// @brief Method PickVerticesInRect addr 0x2b64084 size 0x9b8 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::System::Collections::Generic::HashSet_1<int32_t>*>* PickVerticesInRect(::UnityEngine::Camera*  camera, ::UnityEngine::Rect  pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, bool  doDepthTest, int32_t  renderTextureWidth, int32_t  renderTextureHeight) ;

/// @brief Method PickEdgesInRect addr 0x2b667ac size 0x7a0 virtual false final false
static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(::UnityEngine::Camera*  camera, ::UnityEngine::Rect  pickerRect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, bool  doDepthTest, int32_t  renderTextureWidth, int32_t  renderTextureHeight) ;

/// @brief Method RenderSelectionPickerTexture addr 0x2b6746c size 0x24c virtual false final false
static inline ::UnityEngine::Texture2D* RenderSelectionPickerTexture(::UnityEngine::Camera*  camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::UnityEngine::ProBuilder::Face*>>*>  map, int32_t  width, int32_t  height) ;

/// @brief Method RenderSelectionPickerTexture addr 0x2b6773c size 0x2e0 virtual false final false
static inline ::UnityEngine::Texture2D* RenderSelectionPickerTexture(::UnityEngine::Camera*  camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, bool  doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,int32_t>>*>  map, int32_t  width, int32_t  height) ;

/// @brief Method RenderSelectionPickerTexture addr 0x2b67a1c size 0x2e0 virtual false final false
static inline ::UnityEngine::Texture2D* RenderSelectionPickerTexture(::UnityEngine::Camera*  camera, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, bool  doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::UnityEngine::ProBuilder::Edge>>*>  map, int32_t  width, int32_t  height) ;

/// @brief Method GenerateFacePickingObjects addr 0x2b67cfc size 0x590 virtual false final false
static inline ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> GenerateFacePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::UnityEngine::ProBuilder::Face*>>*>  map) ;

/// @brief Method GenerateVertexPickingObjects addr 0x2b6828c size 0x480 virtual false final false
static inline void GenerateVertexPickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, bool  doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,int32_t>>*>  map, ByRef<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>  depthObjects, ByRef<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>  pickerObjects) ;

/// @brief Method GenerateEdgePickingObjects addr 0x2b6870c size 0x480 virtual false final false
static inline void GenerateEdgePickingObjects(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*  selection, bool  doDepthTest, ByRef<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::UnityEngine::ProBuilder::Edge>>*>  map, ByRef<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>  depthObjects, ByRef<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>  pickerObjects) ;

/// @brief Method BuildVertexMesh addr 0x2b68c14 size 0x76c virtual false final false
static inline ::UnityEngine::Mesh* BuildVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  pb, ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,int32_t>>*  map, ByRef<uint32_t>  index) ;

/// @brief Method BuildEdgeMesh addr 0x2b69380 size 0x4dc virtual false final false
static inline ::UnityEngine::Mesh* BuildEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  pb, ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::ProBuilderMesh*,::UnityEngine::ProBuilder::Edge>>*  map, ByRef<uint32_t>  index) ;

/// @brief Method DecodeRGBA addr 0x2b676b8 size 0x84 virtual false final false
static inline uint32_t DecodeRGBA(::UnityEngine::Color32  color) ;

/// @brief Method EncodeRGBA addr 0x2b68b8c size 0x88 virtual false final false
static inline ::UnityEngine::Color32 EncodeRGBA(uint32_t  hash) ;

/// @brief Method ShouldUseHDRP addr 0x2b67464 size 0x8 virtual false final false
static inline bool ShouldUseHDRP() ;

// Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectionPickerRenderer(SelectionPickerRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectionPickerRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectionPickerRenderer(SelectionPickerRenderer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectionPickerRenderer()  = default;
public:


// Fields

// Static field k_Blackf

// Static field k_Whitef

// Static field s_Initialized

// Static field s_PickerRenderer

// Static field s_RenderTextureFormat

// Static field s_PreferredFormats


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SelectionPickerRenderer, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer");
NEED_NO_BOX(::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__SelectionPickerRenderer__ISelectionPickerRenderer*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/ISelectionPickerRenderer");
NEED_NO_BOX(::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererHDRP*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererHDRP");
NEED_NO_BOX(::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__SelectionPickerRenderer__SelectionPickerRendererStandard*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/SelectionPickerRendererStandard");
NEED_NO_BOX(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__SelectionPickerRenderer____c__DisplayClass19_0*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c__DisplayClass19_0");
