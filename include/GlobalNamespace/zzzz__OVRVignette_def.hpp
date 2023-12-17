#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVignette)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
struct __OVRVignette__FalloffType;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
struct __OVRVignette__MeshComplexityLevel;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct __Camera__StereoscopicEye;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRVignette__FalloffType;
}
namespace GlobalNamespace {
struct __OVRVignette__MeshComplexityLevel;
}
namespace GlobalNamespace {
class OVRVignette;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRVignette__FalloffType);
MARK_VAL_T(::GlobalNamespace::__OVRVignette__MeshComplexityLevel);
MARK_REF_PTR_T(::GlobalNamespace::OVRVignette);
// Type: ::MeshComplexityLevel
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8185))
// CS Name: ::OVRVignette::MeshComplexityLevel
struct CORDL_TYPE __OVRVignette__MeshComplexityLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRVignette__MeshComplexityLevel_Unwrapped
enum struct ____OVRVignette__MeshComplexityLevel_Unwrapped : int32_t {
__E_VerySimple = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_Detailed = static_cast<int32_t>(0x3),
__E_VeryDetailed = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field VerySimple value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const VerySimple;

/// @brief Field Simple value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const Simple;

/// @brief Field Normal value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const Normal;

/// @brief Field Detailed value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const Detailed;

/// @brief Field VeryDetailed value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const VeryDetailed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRVignette__MeshComplexityLevel_Unwrapped () const noexcept {
return std::bit_cast<____OVRVignette__MeshComplexityLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRVignette__MeshComplexityLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRVignette__MeshComplexityLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRVignette__MeshComplexityLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVignette__MeshComplexityLevel, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FalloffType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8186))
// CS Name: ::OVRVignette::FalloffType
struct CORDL_TYPE __OVRVignette__FalloffType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRVignette__FalloffType_Unwrapped
enum struct ____OVRVignette__FalloffType_Unwrapped : int32_t {
__E_Linear = static_cast<int32_t>(0x0),
__E_Quadratic = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Linear value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRVignette__FalloffType const Linear;

/// @brief Field Quadratic value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRVignette__FalloffType const Quadratic;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRVignette__FalloffType_Unwrapped () const noexcept {
return std::bit_cast<____OVRVignette__FalloffType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRVignette__FalloffType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRVignette__FalloffType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRVignette__FalloffType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVignette__FalloffType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRVignette
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8187))
// CS Name: ::OVRVignette*
class CORDL_TYPE OVRVignette : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FalloffType = ::GlobalNamespace::__OVRVignette__FalloffType;

using MeshComplexityLevel = ::GlobalNamespace::__OVRVignette__MeshComplexityLevel;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field VignetteShader offset 0x18
 __declspec(property(get=__get_VignetteShader, put=__set_VignetteShader)) ::UnityEngine::Shader*  VignetteShader;

/// @brief Field MeshComplexity offset 0x20
 __declspec(property(get=__get_MeshComplexity, put=__set_MeshComplexity)) ::GlobalNamespace::__OVRVignette__MeshComplexityLevel  MeshComplexity;

/// @brief Field Falloff offset 0x24
 __declspec(property(get=__get_Falloff, put=__set_Falloff)) ::GlobalNamespace::__OVRVignette__FalloffType  Falloff;

/// @brief Field VignetteFieldOfView offset 0x28
 __declspec(property(get=__get_VignetteFieldOfView, put=__set_VignetteFieldOfView)) float_t  VignetteFieldOfView;

/// @brief Field VignetteAspectRatio offset 0x2c
 __declspec(property(get=__get_VignetteAspectRatio, put=__set_VignetteAspectRatio)) float_t  VignetteAspectRatio;

/// @brief Field VignetteFalloffDegrees offset 0x30
 __declspec(property(get=__get_VignetteFalloffDegrees, put=__set_VignetteFalloffDegrees)) float_t  VignetteFalloffDegrees;

/// @brief Field VignetteColor offset 0x34
 __declspec(property(get=__get_VignetteColor, put=__set_VignetteColor)) ::UnityEngine::Color  VignetteColor;

/// @brief Field _Camera offset 0x48
 __declspec(property(get=__get__Camera, put=__set__Camera)) ::UnityEngine::Camera*  _Camera;

/// @brief Field _OpaqueMeshFilter offset 0x50
 __declspec(property(get=__get__OpaqueMeshFilter, put=__set__OpaqueMeshFilter)) ::UnityEngine::MeshFilter*  _OpaqueMeshFilter;

/// @brief Field _TransparentMeshFilter offset 0x58
 __declspec(property(get=__get__TransparentMeshFilter, put=__set__TransparentMeshFilter)) ::UnityEngine::MeshFilter*  _TransparentMeshFilter;

/// @brief Field _OpaqueMeshRenderer offset 0x60
 __declspec(property(get=__get__OpaqueMeshRenderer, put=__set__OpaqueMeshRenderer)) ::UnityEngine::MeshRenderer*  _OpaqueMeshRenderer;

/// @brief Field _TransparentMeshRenderer offset 0x68
 __declspec(property(get=__get__TransparentMeshRenderer, put=__set__TransparentMeshRenderer)) ::UnityEngine::MeshRenderer*  _TransparentMeshRenderer;

/// @brief Field _OpaqueMesh offset 0x70
 __declspec(property(get=__get__OpaqueMesh, put=__set__OpaqueMesh)) ::UnityEngine::Mesh*  _OpaqueMesh;

/// @brief Field _TransparentMesh offset 0x78
 __declspec(property(get=__get__TransparentMesh, put=__set__TransparentMesh)) ::UnityEngine::Mesh*  _TransparentMesh;

/// @brief Field _OpaqueMaterial offset 0x80
 __declspec(property(get=__get__OpaqueMaterial, put=__set__OpaqueMaterial)) ::UnityEngine::Material*  _OpaqueMaterial;

/// @brief Field _TransparentMaterial offset 0x88
 __declspec(property(get=__get__TransparentMaterial, put=__set__TransparentMaterial)) ::UnityEngine::Material*  _TransparentMaterial;

/// @brief Field _ShaderScaleAndOffset0Property offset 0x90
 __declspec(property(get=__get__ShaderScaleAndOffset0Property, put=__set__ShaderScaleAndOffset0Property)) int32_t  _ShaderScaleAndOffset0Property;

/// @brief Field _ShaderScaleAndOffset1Property offset 0x94
 __declspec(property(get=__get__ShaderScaleAndOffset1Property, put=__set__ShaderScaleAndOffset1Property)) int32_t  _ShaderScaleAndOffset1Property;

/// @brief Field _TransparentScaleAndOffset0 offset 0x98
 __declspec(property(get=__get__TransparentScaleAndOffset0, put=__set__TransparentScaleAndOffset0)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _TransparentScaleAndOffset0;

/// @brief Field _TransparentScaleAndOffset1 offset 0xa0
 __declspec(property(get=__get__TransparentScaleAndOffset1, put=__set__TransparentScaleAndOffset1)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _TransparentScaleAndOffset1;

/// @brief Field _OpaqueScaleAndOffset0 offset 0xa8
 __declspec(property(get=__get__OpaqueScaleAndOffset0, put=__set__OpaqueScaleAndOffset0)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _OpaqueScaleAndOffset0;

/// @brief Field _OpaqueScaleAndOffset1 offset 0xb0
 __declspec(property(get=__get__OpaqueScaleAndOffset1, put=__set__OpaqueScaleAndOffset1)) ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  _OpaqueScaleAndOffset1;

/// @brief Field _OpaqueVignetteVisible offset 0xb8
 __declspec(property(get=__get__OpaqueVignetteVisible, put=__set__OpaqueVignetteVisible)) bool  _OpaqueVignetteVisible;

/// @brief Field _TransparentVignetteVisible offset 0xb9
 __declspec(property(get=__get__TransparentVignetteVisible, put=__set__TransparentVignetteVisible)) bool  _TransparentVignetteVisible;

static inline void setStaticF_QUADRATIC_FALLOFF(::StringW  value) ;

static inline ::StringW getStaticF_QUADRATIC_FALLOFF() ;

constexpr void __set_VignetteShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_VignetteShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_VignetteShader() const;

constexpr void __set_MeshComplexity(::GlobalNamespace::__OVRVignette__MeshComplexityLevel  value) ;

constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel& __get_MeshComplexity() ;

constexpr ::GlobalNamespace::__OVRVignette__MeshComplexityLevel const& __get_MeshComplexity() const;

constexpr void __set_Falloff(::GlobalNamespace::__OVRVignette__FalloffType  value) ;

constexpr ::GlobalNamespace::__OVRVignette__FalloffType& __get_Falloff() ;

constexpr ::GlobalNamespace::__OVRVignette__FalloffType const& __get_Falloff() const;

constexpr void __set_VignetteFieldOfView(float_t  value) ;

constexpr float_t& __get_VignetteFieldOfView() ;

constexpr float_t const& __get_VignetteFieldOfView() const;

constexpr void __set_VignetteAspectRatio(float_t  value) ;

constexpr float_t& __get_VignetteAspectRatio() ;

constexpr float_t const& __get_VignetteAspectRatio() const;

constexpr void __set_VignetteFalloffDegrees(float_t  value) ;

constexpr float_t& __get_VignetteFalloffDegrees() ;

constexpr float_t const& __get_VignetteFalloffDegrees() const;

constexpr void __set_VignetteColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_VignetteColor() ;

constexpr ::UnityEngine::Color const& __get_VignetteColor() const;

constexpr void __set__Camera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__Camera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__Camera() const;

constexpr void __set__OpaqueMeshFilter(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get__OpaqueMeshFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get__OpaqueMeshFilter() const;

constexpr void __set__TransparentMeshFilter(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get__TransparentMeshFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get__TransparentMeshFilter() const;

constexpr void __set__OpaqueMeshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__OpaqueMeshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__OpaqueMeshRenderer() const;

constexpr void __set__TransparentMeshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__TransparentMeshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__TransparentMeshRenderer() const;

constexpr void __set__OpaqueMesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__OpaqueMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__OpaqueMesh() const;

constexpr void __set__TransparentMesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__TransparentMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__TransparentMesh() const;

constexpr void __set__OpaqueMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__OpaqueMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__OpaqueMaterial() const;

constexpr void __set__TransparentMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__TransparentMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__TransparentMaterial() const;

constexpr void __set__ShaderScaleAndOffset0Property(int32_t  value) ;

constexpr int32_t& __get__ShaderScaleAndOffset0Property() ;

constexpr int32_t const& __get__ShaderScaleAndOffset0Property() const;

constexpr void __set__ShaderScaleAndOffset1Property(int32_t  value) ;

constexpr int32_t& __get__ShaderScaleAndOffset1Property() ;

constexpr int32_t const& __get__ShaderScaleAndOffset1Property() const;

constexpr void __set__TransparentScaleAndOffset0(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get__TransparentScaleAndOffset0() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get__TransparentScaleAndOffset0() const;

constexpr void __set__TransparentScaleAndOffset1(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get__TransparentScaleAndOffset1() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get__TransparentScaleAndOffset1() const;

constexpr void __set__OpaqueScaleAndOffset0(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get__OpaqueScaleAndOffset0() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get__OpaqueScaleAndOffset0() const;

constexpr void __set__OpaqueScaleAndOffset1(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& __get__OpaqueScaleAndOffset1() ;

constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& __get__OpaqueScaleAndOffset1() const;

constexpr void __set__OpaqueVignetteVisible(bool  value) ;

constexpr bool& __get__OpaqueVignetteVisible() ;

constexpr bool const& __get__OpaqueVignetteVisible() const;

constexpr void __set__TransparentVignetteVisible(bool  value) ;

constexpr bool& __get__TransparentVignetteVisible() ;

constexpr bool const& __get__TransparentVignetteVisible() const;

/// @brief Method GetTriangleCount addr 0x27c4414 size 0x24 virtual false final false
inline int32_t GetTriangleCount() ;

/// @brief Method BuildMeshes addr 0x27c4438 size 0x688 virtual false final false
inline void BuildMeshes() ;

/// @brief Method BuildMaterials addr 0x27c4ac0 size 0x3a8 virtual false final false
inline void BuildMaterials() ;

/// @brief Method OnEnable addr 0x27c4e68 size 0xa4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x27c4f0c size 0xac virtual false final false
inline void OnDisable() ;

/// @brief Method Awake addr 0x27c4ff0 size 0x314 virtual false final false
inline void Awake() ;

/// @brief Method GetTanFovAndOffsetForStereoEye addr 0x27c5304 size 0x1f8 virtual false final false
inline void GetTanFovAndOffsetForStereoEye(::UnityEngine::__Camera__StereoscopicEye  eye, ByRef<float_t>  tanFovX, ByRef<float_t>  tanFovY, ByRef<float_t>  offsetX, ByRef<float_t>  offsetY) ;

/// @brief Method GetTanFovAndOffsetForMonoEye addr 0x27c54fc size 0x8c virtual false final false
inline void GetTanFovAndOffsetForMonoEye(ByRef<float_t>  tanFovX, ByRef<float_t>  tanFovY, ByRef<float_t>  offsetX, ByRef<float_t>  offsetY) ;

/// @brief Method VisibilityTest addr 0x27c5588 size 0x34 virtual false final false
inline bool VisibilityTest(float_t  scaleX, float_t  scaleY, float_t  offsetX, float_t  offsetY) ;

/// @brief Method Update addr 0x27c55bc size 0x370 virtual false final false
inline void Update() ;

/// @brief Method EnableRenderers addr 0x27c592c size 0x38 virtual false final false
inline void EnableRenderers() ;

/// @brief Method DisableRenderers addr 0x27c4fb8 size 0x38 virtual false final false
inline void DisableRenderers() ;

/// @brief Method OnPreCull addr 0x27c5964 size 0x4 virtual false final false
inline void OnPreCull() ;

/// @brief Method OnPostRender addr 0x27c5968 size 0x4 virtual false final false
inline void OnPostRender() ;

/// @brief Method OnBeginCameraRendering addr 0x27c596c size 0x8c virtual false final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

static inline ::GlobalNamespace::OVRVignette* New_ctor() ;

/// @brief Method .ctor addr 0x27c59f8 size 0xa4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRVignette", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRVignette(OVRVignette && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRVignette", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRVignette(OVRVignette const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRVignette()  = default;
public:


// Fields

// Static field QUADRATIC_FALLOFF


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVignette, 0xc0>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVignette__FalloffType, "", "OVRVignette/FalloffType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVignette__MeshComplexityLevel, "", "OVRVignette/MeshComplexityLevel");
NEED_NO_BOX(::GlobalNamespace::OVRVignette);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVignette*, "", "OVRVignette");
