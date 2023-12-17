#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererSO)
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
struct __MirrorRendererSO__CameraTransformData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
struct __MirrorRendererSO__CameraTransformData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirrorRendererSO);
MARK_VAL_T(::GlobalNamespace::__MirrorRendererSO__CameraTransformData);
// Type: ::CameraTransformData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15297))
// CS Name: ::MirrorRendererSO::CameraTransformData
struct CORDL_TYPE __MirrorRendererSO__CameraTransformData : public ::bs_hook::ValueTypeWrapper<0x24> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field position offset 0x0
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation offset 0xc
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field fov offset 0x1c
 __declspec(property(get=__get_fov, put=__set_fov)) float_t  fov;

/// @brief Field stereoEnabled offset 0x20
 __declspec(property(get=__get_stereoEnabled, put=__set_stereoEnabled)) bool  stereoEnabled;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::__MirrorRendererSO__CameraTransformData>*() ;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

constexpr void __set_fov(float_t  value) ;

constexpr float_t& __get_fov() ;

constexpr float_t const& __get_fov() const;

constexpr void __set_stereoEnabled(bool  value) ;

constexpr bool& __get_stereoEnabled() ;

constexpr bool const& __get_stereoEnabled() const;

/// @brief Method Equals addr 0x280aacc size 0xa4 virtual true final true
inline bool Equals(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  other) ;

/// @brief Method Equals addr 0x280ab70 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x280ac00 size 0xf0 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x280acf0 size 0x30 virtual false final false
static inline bool op_Equality(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  left, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  right) ;

/// @brief Method op_Inequality addr 0x280ad20 size 0x34 virtual false final false
static inline bool op_Inequality(::GlobalNamespace::__MirrorRendererSO__CameraTransformData  left, ::GlobalNamespace::__MirrorRendererSO__CameraTransformData  right) ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "stereoEnabled", ty: "bool", modifiers: "", def_value: None }]
constexpr __MirrorRendererSO__CameraTransformData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  fov, bool  stereoEnabled) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MirrorRendererSO__CameraTransformData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x24>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MirrorRendererSO__CameraTransformData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MirrorRendererSO__CameraTransformData, 0x24>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MirrorRendererSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15298))
// CS Name: ::MirrorRendererSO*
class CORDL_TYPE MirrorRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using CameraTransformData = ::GlobalNamespace::__MirrorRendererSO__CameraTransformData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field kWaterLayer offset 0x0
static constexpr int32_t  kWaterLayer{static_cast<int32_t>(0x4)};

/// @brief Field _reflectLayers offset 0x18
 __declspec(property(get=__get__reflectLayers, put=__set__reflectLayers)) ::UnityEngine::LayerMask  _reflectLayers;

/// @brief Field _stereoTextureWidth offset 0x1c
 __declspec(property(get=__get__stereoTextureWidth, put=__set__stereoTextureWidth)) int32_t  _stereoTextureWidth;

/// @brief Field _stereoTextureHeight offset 0x20
 __declspec(property(get=__get__stereoTextureHeight, put=__set__stereoTextureHeight)) int32_t  _stereoTextureHeight;

/// @brief Field _monoTextureWidth offset 0x24
 __declspec(property(get=__get__monoTextureWidth, put=__set__monoTextureWidth)) int32_t  _monoTextureWidth;

/// @brief Field _monoTextureHeight offset 0x28
 __declspec(property(get=__get__monoTextureHeight, put=__set__monoTextureHeight)) int32_t  _monoTextureHeight;

/// @brief Field _maxAntiAliasing offset 0x2c
 __declspec(property(get=__get__maxAntiAliasing, put=__set__maxAntiAliasing)) int32_t  _maxAntiAliasing;

/// @brief Field _disableDepthTexture offset 0x30
 __declspec(property(get=__get__disableDepthTexture, put=__set__disableDepthTexture)) bool  _disableDepthTexture;

/// @brief Field _enableBloomPrePass offset 0x31
 __declspec(property(get=__get__enableBloomPrePass, put=__set__enableBloomPrePass)) bool  _enableBloomPrePass;

/// @brief Field _bloomPrePassRenderer offset 0x38
 __declspec(property(get=__get__bloomPrePassRenderer, put=__set__bloomPrePassRenderer)) ::GlobalNamespace::BloomPrePassRendererSO*  _bloomPrePassRenderer;

/// @brief Field _bloomPrePassEffect offset 0x40
 __declspec(property(get=__get__bloomPrePassEffect, put=__set__bloomPrePassEffect)) ::GlobalNamespace::BloomPrePassEffectSO*  _bloomPrePassEffect;

/// @brief Field _clearDepthShader offset 0x48
 __declspec(property(get=__get__clearDepthShader, put=__set__clearDepthShader)) ::UnityEngine::Shader*  _clearDepthShader;

/// @brief Field _bloomPrePassRenderTexture offset 0x50
 __declspec(property(get=__get__bloomPrePassRenderTexture, put=__set__bloomPrePassRenderTexture)) ::UnityEngine::RenderTexture*  _bloomPrePassRenderTexture;

/// @brief Field _mirrorCamera offset 0x58
 __declspec(property(get=__get__mirrorCamera, put=__set__mirrorCamera)) ::UnityEngine::Camera*  _mirrorCamera;

/// @brief Field _antialiasing offset 0x60
 __declspec(property(get=__get__antialiasing, put=__set__antialiasing)) int32_t  _antialiasing;

/// @brief Field _renderTextures offset 0x68
 __declspec(property(get=__get__renderTextures, put=__set__renderTextures)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture*>*  _renderTextures;

/// @brief Field kLeftRect offset 0x70
 __declspec(property(get=__get_kLeftRect, put=__set_kLeftRect)) ::UnityEngine::Rect  kLeftRect;

/// @brief Field kRightRect offset 0x80
 __declspec(property(get=__get_kRightRect, put=__set_kRightRect)) ::UnityEngine::Rect  kRightRect;

/// @brief Field kFullRect offset 0x90
 __declspec(property(get=__get_kFullRect, put=__set_kFullRect)) ::UnityEngine::Rect  kFullRect;

constexpr void __set__reflectLayers(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get__reflectLayers() ;

constexpr ::UnityEngine::LayerMask const& __get__reflectLayers() const;

constexpr void __set__stereoTextureWidth(int32_t  value) ;

constexpr int32_t& __get__stereoTextureWidth() ;

constexpr int32_t const& __get__stereoTextureWidth() const;

constexpr void __set__stereoTextureHeight(int32_t  value) ;

constexpr int32_t& __get__stereoTextureHeight() ;

constexpr int32_t const& __get__stereoTextureHeight() const;

constexpr void __set__monoTextureWidth(int32_t  value) ;

constexpr int32_t& __get__monoTextureWidth() ;

constexpr int32_t const& __get__monoTextureWidth() const;

constexpr void __set__monoTextureHeight(int32_t  value) ;

constexpr int32_t& __get__monoTextureHeight() ;

constexpr int32_t const& __get__monoTextureHeight() const;

constexpr void __set__maxAntiAliasing(int32_t  value) ;

constexpr int32_t& __get__maxAntiAliasing() ;

constexpr int32_t const& __get__maxAntiAliasing() const;

constexpr void __set__disableDepthTexture(bool  value) ;

constexpr bool& __get__disableDepthTexture() ;

constexpr bool const& __get__disableDepthTexture() const;

constexpr void __set__enableBloomPrePass(bool  value) ;

constexpr bool& __get__enableBloomPrePass() ;

constexpr bool const& __get__enableBloomPrePass() const;

constexpr void __set__bloomPrePassRenderer(::GlobalNamespace::BloomPrePassRendererSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassRendererSO* __get__bloomPrePassRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassRendererSO*> __get__bloomPrePassRenderer() const;

constexpr void __set__bloomPrePassEffect(::GlobalNamespace::BloomPrePassEffectSO*  value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectSO* __get__bloomPrePassEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassEffectSO*> __get__bloomPrePassEffect() const;

constexpr void __set__clearDepthShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get__clearDepthShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get__clearDepthShader() const;

constexpr void __set__bloomPrePassRenderTexture(::UnityEngine::RenderTexture*  value) ;

constexpr ::UnityEngine::RenderTexture* __get__bloomPrePassRenderTexture() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> __get__bloomPrePassRenderTexture() const;

constexpr void __set__mirrorCamera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__mirrorCamera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__mirrorCamera() const;

constexpr void __set__antialiasing(int32_t  value) ;

constexpr int32_t& __get__antialiasing() ;

constexpr int32_t const& __get__antialiasing() const;

constexpr void __set__renderTextures(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture*>* __get__renderTextures() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__MirrorRendererSO__CameraTransformData,::UnityEngine::RenderTexture*>*> __get__renderTextures() const;

constexpr void __set_kLeftRect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_kLeftRect() ;

constexpr ::UnityEngine::Rect const& __get_kLeftRect() const;

constexpr void __set_kRightRect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_kRightRect() ;

constexpr ::UnityEngine::Rect const& __get_kRightRect() const;

constexpr void __set_kFullRect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_kFullRect() ;

constexpr ::UnityEngine::Rect const& __get_kFullRect() const;

/// @brief Method OnValidate addr 0x2809f74 size 0x4 virtual false final false
inline void OnValidate() ;

/// @brief Method Awake addr 0x2809fec size 0x4 virtual false final false
inline void Awake() ;

/// @brief Method ValidateParams addr 0x2809f78 size 0x74 virtual false final false
inline void ValidateParams() ;

/// @brief Method Init addr 0x2809ff0 size 0x18 virtual false final false
inline void Init(::UnityEngine::LayerMask  reflectLayers, int32_t  stereoTextureWidth, int32_t  stereoTextureHeight, int32_t  monoTextureWidth, int32_t  monoTextureHeight, int32_t  maxAntiAliasing, bool  enableBloomPrePass) ;

/// @brief Method PrepareForNextFrame addr 0x28092dc size 0x18c virtual false final false
inline void PrepareForNextFrame() ;

/// @brief Method RenderMirrorTexture addr 0x28096fc size 0x808 virtual false final false
inline ::UnityEngine::Texture* RenderMirrorTexture(::UnityEngine::Vector3  reflectionPlanePos, ::UnityEngine::Vector3  reflectionPlaneNormal) ;

/// @brief Method RenderMirror addr 0x280a3d0 size 0x270 virtual false final false
inline void RenderMirror(::UnityEngine::Vector3  camPosition, ::UnityEngine::Quaternion  camRotation, ::UnityEngine::Matrix4x4  camProjectionMatrix, ::UnityEngine::Rect  screenRect, ::UnityEngine::Vector3  reclectionPlanePos, ::UnityEngine::Vector3  reflectionPlaneNormal) ;

/// @brief Method OnDisable addr 0x280a76c size 0x224 virtual false final false
inline void OnDisable() ;

/// @brief Method CreateOrUpdateMirrorCamera addr 0x280a008 size 0x2b4 virtual false final false
inline void CreateOrUpdateMirrorCamera(::UnityEngine::Camera*  currentCamera, ::UnityEngine::RenderTexture*  renderTexture) ;

/// @brief Method Plane addr 0x280a2bc size 0x2c virtual false final false
static inline ::UnityEngine::Vector4 Plane(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal) ;

/// @brief Method CameraSpacePlane addr 0x280a640 size 0x12c virtual false final false
static inline ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Matrix4x4  worldToCameraMatrix, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal) ;

/// @brief Method CalculateReflectionMatrix addr 0x280a2e8 size 0xe8 virtual false final false
static inline ::UnityEngine::Matrix4x4 CalculateReflectionMatrix(::UnityEngine::Vector4  plane) ;

static inline ::GlobalNamespace::MirrorRendererSO* New_ctor() ;

/// @brief Method .ctor addr 0x280a990 size 0x13c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MirrorRendererSO(MirrorRendererSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MirrorRendererSO(MirrorRendererSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MirrorRendererSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirrorRendererSO, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirrorRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererSO*, "", "MirrorRendererSO");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MirrorRendererSO__CameraTransformData, "", "MirrorRendererSO/CameraTransformData");
