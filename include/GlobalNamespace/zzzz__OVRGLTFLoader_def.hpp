#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFLoader)
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace GlobalNamespace {
struct OVRGLTFScene;
}
namespace System::IO {
class Stream;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
namespace GlobalNamespace {
class __OVRGLTFLoader____c__DisplayClass30_0;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace GlobalNamespace {
struct OVRMeshData;
}
namespace GlobalNamespace {
struct OVRMeshAttributes;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace GlobalNamespace {
struct OVRChunkType;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
struct OVRMaterialData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFLoader;
}
namespace GlobalNamespace {
class __OVRGLTFLoader____c__DisplayClass30_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFLoader);
MARK_REF_PTR_T(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0);
// Type: ::<>c__DisplayClass30_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7570))
// CS Name: ::OVRGLTFLoader::<>c__DisplayClass30_0*
class CORDL_TYPE __OVRGLTFLoader____c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRGLTFLoader*  __4__this;

/// @brief Field matData offset 0x18
 __declspec(property(get=__get_matData, put=__set_matData)) ::GlobalNamespace::OVRMaterialData  matData;

constexpr void __set___4__this(::GlobalNamespace::OVRGLTFLoader*  value) ;

constexpr ::GlobalNamespace::OVRGLTFLoader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGLTFLoader*> __get___4__this() const;

constexpr void __set_matData(::GlobalNamespace::OVRMaterialData  value) ;

constexpr ::GlobalNamespace::OVRMaterialData& __get_matData() ;

constexpr ::GlobalNamespace::OVRMaterialData const& __get_matData() const;

static inline ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0* New_ctor() ;

/// @brief Method .ctor addr 0x2725bf8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ProcessMesh>b__0 addr 0x2727780 size 0x1c virtual false final false
inline void _ProcessMesh_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRGLTFLoader____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRGLTFLoader____c__DisplayClass30_0(__OVRGLTFLoader____c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRGLTFLoader____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRGLTFLoader____c__DisplayClass30_0(__OVRGLTFLoader____c__DisplayClass30_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRGLTFLoader____c__DisplayClass30_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRGLTFLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7571))
// CS Name: ::OVRGLTFLoader*
class CORDL_TYPE OVRGLTFLoader : public ::System::Object {
public:
// Declarations
using __c__DisplayClass30_0 = ::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field m_jsonData offset 0x10
 __declspec(property(get=__get_m_jsonData, put=__set_m_jsonData)) ::OVRSimpleJSON::JSONNode*  m_jsonData;

/// @brief Field m_glbStream offset 0x18
 __declspec(property(get=__get_m_glbStream, put=__set_m_glbStream)) ::System::IO::Stream*  m_glbStream;

/// @brief Field m_binaryChunk offset 0x20
 __declspec(property(get=__get_m_binaryChunk, put=__set_m_binaryChunk)) ::GlobalNamespace::OVRBinaryChunk  m_binaryChunk;

/// @brief Field m_Nodes offset 0x38
 __declspec(property(get=__get_m_Nodes, put=__set_m_Nodes)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  m_Nodes;

/// @brief Field m_InputAnimationNodes offset 0x40
 __declspec(property(get=__get_m_InputAnimationNodes, put=__set_m_InputAnimationNodes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  m_InputAnimationNodes;

/// @brief Field m_AnimationLookup offset 0x48
 __declspec(property(get=__get_m_AnimationLookup, put=__set_m_AnimationLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  m_AnimationLookup;

/// @brief Field m_morphTargetHandlers offset 0x50
 __declspec(property(get=__get_m_morphTargetHandlers, put=__set_m_morphTargetHandlers)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  m_morphTargetHandlers;

/// @brief Field m_Shader offset 0x58
 __declspec(property(get=__get_m_Shader, put=__set_m_Shader)) ::UnityEngine::Shader*  m_Shader;

/// @brief Field m_AlphaBlendShader offset 0x60
 __declspec(property(get=__get_m_AlphaBlendShader, put=__set_m_AlphaBlendShader)) ::UnityEngine::Shader*  m_AlphaBlendShader;

/// @brief Field m_TextureQuality offset 0x68
 __declspec(property(get=__get_m_TextureQuality, put=__set_m_TextureQuality)) ::GlobalNamespace::OVRTextureQualityFiltering  m_TextureQuality;

/// @brief Field m_TextureMipmapBias offset 0x6c
 __declspec(property(get=__get_m_TextureMipmapBias, put=__set_m_TextureMipmapBias)) float_t  m_TextureMipmapBias;

/// @brief Field textureUriHandler offset 0x70
 __declspec(property(get=__get_textureUriHandler, put=__set_textureUriHandler)) ::System::Func_3<::StringW,::UnityEngine::Material*,::UnityEngine::Texture2D*>*  textureUriHandler;

constexpr void __set_m_jsonData(::OVRSimpleJSON::JSONNode*  value) ;

constexpr ::OVRSimpleJSON::JSONNode* __get_m_jsonData() ;

constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> __get_m_jsonData() const;

constexpr void __set_m_glbStream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_m_glbStream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_m_glbStream() const;

constexpr void __set_m_binaryChunk(::GlobalNamespace::OVRBinaryChunk  value) ;

constexpr ::GlobalNamespace::OVRBinaryChunk& __get_m_binaryChunk() ;

constexpr ::GlobalNamespace::OVRBinaryChunk const& __get_m_binaryChunk() const;

constexpr void __set_m_Nodes(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get_m_Nodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get_m_Nodes() const;

constexpr void __set_m_InputAnimationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>* __get_m_InputAnimationNodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*> __get_m_InputAnimationNodes() const;

constexpr void __set_m_AnimationLookup(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>* __get_m_AnimationLookup() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*,::Array<::GlobalNamespace::OVRGLTFAnimatinonNode*>*>>*> __get_m_AnimationLookup() const;

constexpr void __set_m_morphTargetHandlers(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* __get_m_morphTargetHandlers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*> __get_m_morphTargetHandlers() const;

constexpr void __set_m_Shader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_m_Shader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_m_Shader() const;

constexpr void __set_m_AlphaBlendShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_m_AlphaBlendShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_m_AlphaBlendShader() const;

constexpr void __set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering  value) ;

constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __get_m_TextureQuality() ;

constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __get_m_TextureQuality() const;

constexpr void __set_m_TextureMipmapBias(float_t  value) ;

constexpr float_t& __get_m_TextureMipmapBias() ;

constexpr float_t const& __get_m_TextureMipmapBias() const;

static inline void setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnitySpace() ;

static inline void setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_GLTFToUnityTangent() ;

static inline void setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_GLTFToUnitySpace_Rotation() ;

static inline void setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::OVRGLTFInputNode>* getStaticF_InputNodeNameMap() ;

constexpr void __set_textureUriHandler(::System::Func_3<::StringW,::UnityEngine::Material*,::UnityEngine::Texture2D*>*  value) ;

constexpr ::System::Func_3<::StringW,::UnityEngine::Material*,::UnityEngine::Texture2D*>* __get_textureUriHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::StringW,::UnityEngine::Material*,::UnityEngine::Texture2D*>*> __get_textureUriHandler() const;

static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::StringW  fileName) ;

/// @brief Method .ctor addr 0x2722f30 size 0x38 virtual false final false
inline void _ctor(::StringW  fileName) ;

static inline ::GlobalNamespace::OVRGLTFLoader* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x2722f68 size 0x88 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method LoadGLB addr 0x2722ff0 size 0x638 virtual false final false
inline ::GlobalNamespace::OVRGLTFScene LoadGLB(bool  supportAnimation, bool  loadMips) ;

/// @brief Method SetModelShader addr 0x2723e14 size 0x8 virtual false final false
inline void SetModelShader(::UnityEngine::Shader*  shader) ;

/// @brief Method SetModelAlphaBlendShader addr 0x2723e1c size 0x8 virtual false final false
inline void SetModelAlphaBlendShader(::UnityEngine::Shader*  shader) ;

/// @brief Method SetTextureQualityFiltering addr 0x2723e24 size 0x8 virtual false final false
inline void SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering  loadedTexturesQuality) ;

/// @brief Method SetMipMapBias addr 0x2723e2c size 0x1c virtual false final false
inline void SetMipMapBias(float_t  loadedTexturesMipmapBiasing) ;

/// @brief Method DetectTextureQuality addr 0x2723e48 size 0xc0 virtual false final false
static inline ::GlobalNamespace::OVRTextureQualityFiltering DetectTextureQuality(ByRef<::UnityEngine::Texture2D*>  srcTexture) ;

/// @brief Method ApplyTextureQuality addr 0x2723f08 size 0x174 virtual false final false
static inline void ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering  qualityLevel, ByRef<::UnityEngine::Texture2D*>  destTexture) ;

/// @brief Method ValidateGLB addr 0x2723628 size 0x208 virtual false final false
inline bool ValidateGLB(::System::IO::Stream*  glbStream) ;

/// @brief Method ReadChunk addr 0x2723830 size 0xac virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadChunk(::System::IO::Stream*  glbStream, ::GlobalNamespace::OVRChunkType  type) ;

/// @brief Method ValidateChunk addr 0x27238dc size 0x148 virtual false final false
inline bool ValidateChunk(::System::IO::Stream*  glbStream, ::GlobalNamespace::OVRChunkType  type, ByRef<uint32_t>  chunkLength) ;

/// @brief Method LoadGLTF addr 0x2723a24 size 0x3f0 virtual false final false
inline int32_t LoadGLTF(bool  supportAnimation, bool  loadMips) ;

/// @brief Method ProcessNode addr 0x272407c size 0x918 virtual false final false
inline void ProcessNode(::OVRSimpleJSON::JSONNode*  node, int32_t  nodeId, bool  loadMips) ;

/// @brief Method ProcessMesh addr 0x2724eac size 0x938 virtual false final false
inline ::GlobalNamespace::OVRMeshData ProcessMesh(::OVRSimpleJSON::JSONNode*  meshNode, bool  loadMips) ;

/// @brief Method FlipTraingleIndices addr 0x2726460 size 0x6c virtual false final false
static inline void FlipTraingleIndices(ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  indices) ;

/// @brief Method ReadMeshAttributes addr 0x27264cc size 0xb8c virtual false final false
inline ::GlobalNamespace::OVRMeshAttributes ReadMeshAttributes(::OVRSimpleJSON::JSONNode*  jsonAttributes, int32_t  totalVertexCount, int32_t  vertexOffset) ;

/// @brief Method ProcessSkin addr 0x27257e4 size 0x414 virtual false final false
inline void ProcessSkin(::OVRSimpleJSON::JSONNode*  skinNode, ::UnityEngine::SkinnedMeshRenderer*  renderer) ;

/// @brief Method ProcessMaterial addr 0x2725c00 size 0x388 virtual false final false
inline ::GlobalNamespace::OVRMaterialData ProcessMaterial(int32_t  matId) ;

/// @brief Method ProcessTexture addr 0x2725f88 size 0x4d8 virtual false final false
inline ::GlobalNamespace::OVRTextureData ProcessTexture(int32_t  textureId) ;

/// @brief Method TranscodeTexture addr 0x27272cc size 0xb4 virtual false final false
inline void TranscodeTexture(ByRef<::GlobalNamespace::OVRTextureData>  textureData) ;

/// @brief Method CreateUnityMaterial addr 0x2727058 size 0x274 virtual false final false
inline ::UnityEngine::Material* CreateUnityMaterial(::GlobalNamespace::OVRMaterialData  matData, bool  loadMips) ;

/// @brief Method GetInputNodeType addr 0x2727380 size 0x1c4 virtual false final false
inline ::GlobalNamespace::OVRGLTFInputNode GetInputNodeType(::StringW  name) ;

/// @brief Method ProcessAnimations addr 0x2724994 size 0x518 virtual false final false
inline void ProcessAnimations() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRGLTFLoader(OVRGLTFLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRGLTFLoader(OVRGLTFLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRGLTFLoader()  = default;
public:


// Fields

// Static field GLTFToUnitySpace

// Static field GLTFToUnityTangent

// Static field GLTFToUnitySpace_Rotation

// Static field InputNodeNameMap


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFLoader, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFLoader*, "", "OVRGLTFLoader");
NEED_NO_BOX(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRGLTFLoader____c__DisplayClass30_0*, "", "OVRGLTFLoader/<>c__DisplayClass30_0");
