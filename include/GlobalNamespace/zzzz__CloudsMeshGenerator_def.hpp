#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudsMeshGenerator)
namespace GlobalNamespace {
struct __CloudsMeshGenerator__RadiusChunk;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Cloud;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Ring;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__ProhibitedRadius;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CloudsMeshGenerator;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Cloud;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__ProhibitedRadius;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__RadiusChunk;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Ring;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CloudsMeshGenerator);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__Cloud);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__Ring);
// Type: ::Cloud
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3987))
// CS Name: ::CloudsMeshGenerator::Cloud
struct CORDL_TYPE __CloudsMeshGenerator__Cloud : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field precisionOpaqueMesh offset 0x0
 __declspec(property(get=__get_precisionOpaqueMesh, put=__set_precisionOpaqueMesh)) ::UnityEngine::Mesh*  precisionOpaqueMesh;

/// @brief Field lowPolyMesh offset 0x8
 __declspec(property(get=__get_lowPolyMesh, put=__set_lowPolyMesh)) ::UnityEngine::Mesh*  lowPolyMesh;

/// @brief Field sizeModifier offset 0x10
 __declspec(property(get=__get_sizeModifier, put=__set_sizeModifier)) float_t  sizeModifier;

/// @brief Field bottomThreshold offset 0x14
 __declspec(property(get=__get_bottomThreshold, put=__set_bottomThreshold)) float_t  bottomThreshold;

/// @brief Field weight offset 0x18
 __declspec(property(get=__get_weight, put=__set_weight)) int32_t  weight;

/// @brief Field precisionVertexCount offset 0x1c
 __declspec(property(get=__get_precisionVertexCount, put=__set_precisionVertexCount)) int32_t  precisionVertexCount;

/// @brief Field lowPolyVertexCount offset 0x20
 __declspec(property(get=__get_lowPolyVertexCount, put=__set_lowPolyVertexCount)) int32_t  lowPolyVertexCount;

/// @brief Field generatedCount offset 0x24
 __declspec(property(get=__get_generatedCount, put=__set_generatedCount)) int32_t  generatedCount;

constexpr void __set_precisionOpaqueMesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get_precisionOpaqueMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get_precisionOpaqueMesh() const;

constexpr void __set_lowPolyMesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get_lowPolyMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get_lowPolyMesh() const;

constexpr void __set_sizeModifier(float_t  value) ;

constexpr float_t& __get_sizeModifier() ;

constexpr float_t const& __get_sizeModifier() const;

constexpr void __set_bottomThreshold(float_t  value) ;

constexpr float_t& __get_bottomThreshold() ;

constexpr float_t const& __get_bottomThreshold() const;

constexpr void __set_weight(int32_t  value) ;

constexpr int32_t& __get_weight() ;

constexpr int32_t const& __get_weight() const;

constexpr void __set_precisionVertexCount(int32_t  value) ;

constexpr int32_t& __get_precisionVertexCount() ;

constexpr int32_t const& __get_precisionVertexCount() const;

constexpr void __set_lowPolyVertexCount(int32_t  value) ;

constexpr int32_t& __get_lowPolyVertexCount() ;

constexpr int32_t const& __get_lowPolyVertexCount() const;

constexpr void __set_generatedCount(int32_t  value) ;

constexpr int32_t& __get_generatedCount() ;

constexpr int32_t const& __get_generatedCount() const;

// Ctor Parameters [CppParam { name: "precisionOpaqueMesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: None }, CppParam { name: "lowPolyMesh", ty: "::UnityEngine::Mesh*", modifiers: "", def_value: None }, CppParam { name: "sizeModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "precisionVertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lowPolyVertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "generatedCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __CloudsMeshGenerator__Cloud(::UnityEngine::Mesh*  precisionOpaqueMesh, ::UnityEngine::Mesh*  lowPolyMesh, float_t  sizeModifier, float_t  bottomThreshold, int32_t  weight, int32_t  precisionVertexCount, int32_t  lowPolyVertexCount, int32_t  generatedCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CloudsMeshGenerator__Cloud(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CloudsMeshGenerator__Cloud()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__Cloud, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Ring
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3988))
// CS Name: ::CloudsMeshGenerator::Ring
struct CORDL_TYPE __CloudsMeshGenerator__Ring : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field radius offset 0x0
 __declspec(property(get=__get_radius, put=__set_radius)) float_t  radius;

/// @brief Field normalizedRadius offset 0x4
 __declspec(property(get=__get_normalizedRadius, put=__set_normalizedRadius)) float_t  normalizedRadius;

/// @brief Field meshCount offset 0x8
 __declspec(property(get=__get_meshCount, put=__set_meshCount)) int32_t  meshCount;

/// @brief Field cloudIDs offset 0x10
 __declspec(property(get=__get_cloudIDs, put=__set_cloudIDs)) ::ArrayW<int32_t,::Array<int32_t>*>  cloudIDs;

/// @brief Field sizeMultiplier offset 0x18
 __declspec(property(get=__get_sizeMultiplier, put=__set_sizeMultiplier)) float_t  sizeMultiplier;

constexpr void __set_radius(float_t  value) ;

constexpr float_t& __get_radius() ;

constexpr float_t const& __get_radius() const;

constexpr void __set_normalizedRadius(float_t  value) ;

constexpr float_t& __get_normalizedRadius() ;

constexpr float_t const& __get_normalizedRadius() const;

constexpr void __set_meshCount(int32_t  value) ;

constexpr int32_t& __get_meshCount() ;

constexpr int32_t const& __get_meshCount() const;

constexpr void __set_cloudIDs(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_cloudIDs() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_cloudIDs() const;

constexpr void __set_sizeMultiplier(float_t  value) ;

constexpr float_t& __get_sizeMultiplier() ;

constexpr float_t const& __get_sizeMultiplier() const;

// Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normalizedRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cloudIDs", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "sizeMultiplier", ty: "float_t", modifiers: "", def_value: None }]
constexpr __CloudsMeshGenerator__Ring(float_t  radius, float_t  normalizedRadius, int32_t  meshCount, ::ArrayW<int32_t,::Array<int32_t>*>  cloudIDs, float_t  sizeMultiplier) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CloudsMeshGenerator__Ring(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CloudsMeshGenerator__Ring()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__Ring, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ProhibitedRadius
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3989))
// CS Name: ::CloudsMeshGenerator::ProhibitedRadius
struct CORDL_TYPE __CloudsMeshGenerator__ProhibitedRadius : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field transform offset 0x0
 __declspec(property(get=__get_transform, put=__set_transform)) ::UnityEngine::Transform*  transform;

/// @brief Field distance offset 0x8
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field radius offset 0xc
 __declspec(property(get=__get_radius, put=__set_radius)) float_t  radius;

constexpr void __set_transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_transform() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_radius(float_t  value) ;

constexpr float_t& __get_radius() ;

constexpr float_t const& __get_radius() const;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
constexpr __CloudsMeshGenerator__ProhibitedRadius(::UnityEngine::Transform*  transform, float_t  distance, float_t  radius) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CloudsMeshGenerator__ProhibitedRadius(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CloudsMeshGenerator__ProhibitedRadius()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RadiusChunk
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3990))
// CS Name: ::CloudsMeshGenerator::RadiusChunk
struct CORDL_TYPE __CloudsMeshGenerator__RadiusChunk : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field normalizedStart offset 0x0
 __declspec(property(get=__get_normalizedStart, put=__set_normalizedStart)) float_t  normalizedStart;

/// @brief Field normalizedEnd offset 0x4
 __declspec(property(get=__get_normalizedEnd, put=__set_normalizedEnd)) float_t  normalizedEnd;

/// @brief Field absoluteStart offset 0x8
 __declspec(property(get=__get_absoluteStart, put=__set_absoluteStart)) float_t  absoluteStart;

/// @brief Field absoluteEnd offset 0xc
 __declspec(property(get=__get_absoluteEnd, put=__set_absoluteEnd)) float_t  absoluteEnd;

constexpr void __set_normalizedStart(float_t  value) ;

constexpr float_t& __get_normalizedStart() ;

constexpr float_t const& __get_normalizedStart() const;

constexpr void __set_normalizedEnd(float_t  value) ;

constexpr float_t& __get_normalizedEnd() ;

constexpr float_t const& __get_normalizedEnd() const;

constexpr void __set_absoluteStart(float_t  value) ;

constexpr float_t& __get_absoluteStart() ;

constexpr float_t const& __get_absoluteStart() const;

constexpr void __set_absoluteEnd(float_t  value) ;

constexpr float_t& __get_absoluteEnd() ;

constexpr float_t const& __get_absoluteEnd() const;

// Ctor Parameters [CppParam { name: "normalizedStart", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normalizedEnd", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "absoluteStart", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "absoluteEnd", ty: "float_t", modifiers: "", def_value: None }]
constexpr __CloudsMeshGenerator__RadiusChunk(float_t  normalizedStart, float_t  normalizedEnd, float_t  absoluteStart, float_t  absoluteEnd) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CloudsMeshGenerator__RadiusChunk(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CloudsMeshGenerator__RadiusChunk()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CloudsMeshGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3991))
// CS Name: ::CloudsMeshGenerator*
class CORDL_TYPE CloudsMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RadiusChunk = ::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk;

using ProhibitedRadius = ::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius;

using Ring = ::GlobalNamespace::__CloudsMeshGenerator__Ring;

using Cloud = ::GlobalNamespace::__CloudsMeshGenerator__Cloud;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xe8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xe8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _meshFilter offset 0x18
 __declspec(property(get=__get__meshFilter, put=__set__meshFilter)) ::UnityEngine::MeshFilter*  _meshFilter;

/// @brief Field _meshName offset 0x20
 __declspec(property(get=__get__meshName, put=__set__meshName)) ::StringW  _meshName;

/// @brief Field _pauseGenerator offset 0x28
 __declspec(property(get=__get__pauseGenerator, put=__set__pauseGenerator)) bool  _pauseGenerator;

/// @brief Field _bottomPushEnabled offset 0x29
 __declspec(property(get=__get__bottomPushEnabled, put=__set__bottomPushEnabled)) bool  _bottomPushEnabled;

/// @brief Field _bottomPushDistance offset 0x2c
 __declspec(property(get=__get__bottomPushDistance, put=__set__bottomPushDistance)) float_t  _bottomPushDistance;

/// @brief Field _bottomScaleTopBottom offset 0x30
 __declspec(property(get=__get__bottomScaleTopBottom, put=__set__bottomScaleTopBottom)) ::UnityEngine::Vector2  _bottomScaleTopBottom;

/// @brief Field _bottomHorizontalScale offset 0x38
 __declspec(property(get=__get__bottomHorizontalScale, put=__set__bottomHorizontalScale)) float_t  _bottomHorizontalScale;

/// @brief Field _drawRingGizmos offset 0x3c
 __declspec(property(get=__get__drawRingGizmos, put=__set__drawRingGizmos)) bool  _drawRingGizmos;

/// @brief Field _prohibitedRadii offset 0x40
 __declspec(property(get=__get__prohibitedRadii, put=__set__prohibitedRadii)) ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>  _prohibitedRadii;

/// @brief Field _meshSize offset 0x48
 __declspec(property(get=__get__meshSize, put=__set__meshSize)) ::UnityEngine::Vector2  _meshSize;

/// @brief Field _sizeRandomness offset 0x50
 __declspec(property(get=__get__sizeRandomness, put=__set__sizeRandomness)) float_t  _sizeRandomness;

/// @brief Field _ratioRandomness offset 0x54
 __declspec(property(get=__get__ratioRandomness, put=__set__ratioRandomness)) float_t  _ratioRandomness;

/// @brief Field _perMeshRadiusOffset offset 0x58
 __declspec(property(get=__get__perMeshRadiusOffset, put=__set__perMeshRadiusOffset)) float_t  _perMeshRadiusOffset;

/// @brief Field _possibleColors offset 0x60
 __declspec(property(get=__get__possibleColors, put=__set__possibleColors)) ::UnityEngine::Gradient*  _possibleColors;

/// @brief Field _randomSeed offset 0x68
 __declspec(property(get=__get__randomSeed, put=__set__randomSeed)) int32_t  _randomSeed;

/// @brief Field _heightRandomness offset 0x6c
 __declspec(property(get=__get__heightRandomness, put=__set__heightRandomness)) float_t  _heightRandomness;

/// @brief Field _ringRotationRandomness offset 0x70
 __declspec(property(get=__get__ringRotationRandomness, put=__set__ringRotationRandomness)) float_t  _ringRotationRandomness;

/// @brief Field _ringCount offset 0x74
 __declspec(property(get=__get__ringCount, put=__set__ringCount)) int32_t  _ringCount;

/// @brief Field _meshesPerRadius offset 0x78
 __declspec(property(get=__get__meshesPerRadius, put=__set__meshesPerRadius)) float_t  _meshesPerRadius;

/// @brief Field _radiusCloseFar offset 0x7c
 __declspec(property(get=__get__radiusCloseFar, put=__set__radiusCloseFar)) ::UnityEngine::Vector2  _radiusCloseFar;

/// @brief Field _sizeCloseFar offset 0x84
 __declspec(property(get=__get__sizeCloseFar, put=__set__sizeCloseFar)) ::UnityEngine::Vector2  _sizeCloseFar;

/// @brief Field _heightCloseFar offset 0x90
 __declspec(property(get=__get__heightCloseFar, put=__set__heightCloseFar)) ::UnityEngine::AnimationCurve*  _heightCloseFar;

/// @brief Field _lowPolyThreshold offset 0x98
 __declspec(property(get=__get__lowPolyThreshold, put=__set__lowPolyThreshold)) float_t  _lowPolyThreshold;

/// @brief Field _flipNormals offset 0x9c
 __declspec(property(get=__get__flipNormals, put=__set__flipNormals)) bool  _flipNormals;

/// @brief Field _curveMesh offset 0x9d
 __declspec(property(get=__get__curveMesh, put=__set__curveMesh)) bool  _curveMesh;

/// @brief Field _clouds offset 0xa0
 __declspec(property(get=__get__clouds, put=__set__clouds)) ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud,::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*>  _clouds;

/// @brief Field _meshCount offset 0xa8
 __declspec(property(get=__get__meshCount, put=__set__meshCount)) int32_t  _meshCount;

/// @brief Field _vertexCount offset 0xac
 __declspec(property(get=__get__vertexCount, put=__set__vertexCount)) int32_t  _vertexCount;

/// @brief Field _generatedMesh offset 0xb0
 __declspec(property(get=__get__generatedMesh, put=__set__generatedMesh)) ::UnityEngine::Mesh*  _generatedMesh;

/// @brief Field _meshBounds offset 0xb8
 __declspec(property(get=__get__meshBounds, put=__set__meshBounds)) ::UnityEngine::Bounds  _meshBounds;

/// @brief Field _radiusChunks offset 0xd0
 __declspec(property(get=__get__radiusChunks, put=__set__radiusChunks)) ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk,::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*>  _radiusChunks;

/// @brief Field _rings offset 0xd8
 __declspec(property(get=__get__rings, put=__set__rings)) ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring,::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*>  _rings;

/// @brief Field _sortedProhibitedRadii offset 0xe0
 __declspec(property(get=__get__sortedProhibitedRadii, put=__set__sortedProhibitedRadii)) ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>  _sortedProhibitedRadii;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get__meshFilter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get__meshFilter() const;

constexpr void __set__meshName(::StringW  value) ;

constexpr ::StringW& __get__meshName() ;

constexpr ::StringW const& __get__meshName() const;

constexpr void __set__pauseGenerator(bool  value) ;

constexpr bool& __get__pauseGenerator() ;

constexpr bool const& __get__pauseGenerator() const;

constexpr void __set__bottomPushEnabled(bool  value) ;

constexpr bool& __get__bottomPushEnabled() ;

constexpr bool const& __get__bottomPushEnabled() const;

constexpr void __set__bottomPushDistance(float_t  value) ;

constexpr float_t& __get__bottomPushDistance() ;

constexpr float_t const& __get__bottomPushDistance() const;

constexpr void __set__bottomScaleTopBottom(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__bottomScaleTopBottom() ;

constexpr ::UnityEngine::Vector2 const& __get__bottomScaleTopBottom() const;

constexpr void __set__bottomHorizontalScale(float_t  value) ;

constexpr float_t& __get__bottomHorizontalScale() ;

constexpr float_t const& __get__bottomHorizontalScale() const;

constexpr void __set__drawRingGizmos(bool  value) ;

constexpr bool& __get__drawRingGizmos() ;

constexpr bool const& __get__drawRingGizmos() const;

constexpr void __set__prohibitedRadii(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>& __get__prohibitedRadii() ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> const& __get__prohibitedRadii() const;

constexpr void __set__meshSize(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__meshSize() ;

constexpr ::UnityEngine::Vector2 const& __get__meshSize() const;

constexpr void __set__sizeRandomness(float_t  value) ;

constexpr float_t& __get__sizeRandomness() ;

constexpr float_t const& __get__sizeRandomness() const;

constexpr void __set__ratioRandomness(float_t  value) ;

constexpr float_t& __get__ratioRandomness() ;

constexpr float_t const& __get__ratioRandomness() const;

constexpr void __set__perMeshRadiusOffset(float_t  value) ;

constexpr float_t& __get__perMeshRadiusOffset() ;

constexpr float_t const& __get__perMeshRadiusOffset() const;

constexpr void __set__possibleColors(::UnityEngine::Gradient*  value) ;

constexpr ::UnityEngine::Gradient* __get__possibleColors() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> __get__possibleColors() const;

constexpr void __set__randomSeed(int32_t  value) ;

constexpr int32_t& __get__randomSeed() ;

constexpr int32_t const& __get__randomSeed() const;

constexpr void __set__heightRandomness(float_t  value) ;

constexpr float_t& __get__heightRandomness() ;

constexpr float_t const& __get__heightRandomness() const;

constexpr void __set__ringRotationRandomness(float_t  value) ;

constexpr float_t& __get__ringRotationRandomness() ;

constexpr float_t const& __get__ringRotationRandomness() const;

constexpr void __set__ringCount(int32_t  value) ;

constexpr int32_t& __get__ringCount() ;

constexpr int32_t const& __get__ringCount() const;

constexpr void __set__meshesPerRadius(float_t  value) ;

constexpr float_t& __get__meshesPerRadius() ;

constexpr float_t const& __get__meshesPerRadius() const;

constexpr void __set__radiusCloseFar(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__radiusCloseFar() ;

constexpr ::UnityEngine::Vector2 const& __get__radiusCloseFar() const;

constexpr void __set__sizeCloseFar(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__sizeCloseFar() ;

constexpr ::UnityEngine::Vector2 const& __get__sizeCloseFar() const;

constexpr void __set__heightCloseFar(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__heightCloseFar() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__heightCloseFar() const;

constexpr void __set__lowPolyThreshold(float_t  value) ;

constexpr float_t& __get__lowPolyThreshold() ;

constexpr float_t const& __get__lowPolyThreshold() const;

constexpr void __set__flipNormals(bool  value) ;

constexpr bool& __get__flipNormals() ;

constexpr bool const& __get__flipNormals() const;

constexpr void __set__curveMesh(bool  value) ;

constexpr bool& __get__curveMesh() ;

constexpr bool const& __get__curveMesh() const;

constexpr void __set__clouds(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud,::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud,::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*>& __get__clouds() ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud,::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> const& __get__clouds() const;

constexpr void __set__meshCount(int32_t  value) ;

constexpr int32_t& __get__meshCount() ;

constexpr int32_t const& __get__meshCount() const;

constexpr void __set__vertexCount(int32_t  value) ;

constexpr int32_t& __get__vertexCount() ;

constexpr int32_t const& __get__vertexCount() const;

constexpr void __set__generatedMesh(::UnityEngine::Mesh*  value) ;

constexpr ::UnityEngine::Mesh* __get__generatedMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> __get__generatedMesh() const;

constexpr void __set__meshBounds(::UnityEngine::Bounds  value) ;

constexpr ::UnityEngine::Bounds& __get__meshBounds() ;

constexpr ::UnityEngine::Bounds const& __get__meshBounds() const;

constexpr void __set__radiusChunks(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk,::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk,::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*>& __get__radiusChunks() ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk,::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> const& __get__radiusChunks() const;

constexpr void __set__rings(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring,::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring,::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*>& __get__rings() ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring,::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> const& __get__rings() const;

constexpr void __set__sortedProhibitedRadii(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>& __get__sortedProhibitedRadii() ;

constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> const& __get__sortedProhibitedRadii() const;

static inline ::GlobalNamespace::CloudsMeshGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x221dd28 size 0xbc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CloudsMeshGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CloudsMeshGenerator(CloudsMeshGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloudsMeshGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloudsMeshGenerator(CloudsMeshGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CloudsMeshGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CloudsMeshGenerator, 0xe8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CloudsMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator*, "", "CloudsMeshGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__Cloud, "", "CloudsMeshGenerator/Cloud");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, "", "CloudsMeshGenerator/ProhibitedRadius");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, "", "CloudsMeshGenerator/RadiusChunk");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__Ring, "", "CloudsMeshGenerator/Ring");
