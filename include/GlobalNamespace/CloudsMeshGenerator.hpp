// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CloudsMeshGenerator
  class CloudsMeshGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CloudsMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator*, "", "CloudsMeshGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: CloudsMeshGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudsMeshGenerator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CloudsMeshGenerator::Cloud
    struct Cloud;
    // Nested type: ::GlobalNamespace::CloudsMeshGenerator::Ring
    struct Ring;
    // Nested type: ::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius
    struct ProhibitedRadius;
    // Nested type: ::GlobalNamespace::CloudsMeshGenerator::RadiusChunk
    struct RadiusChunk;
    // Size: 0x28
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: CloudsMeshGenerator/Cloud
    // [TokenAttribute] Offset: FFFFFFFF
    struct Cloud/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Mesh precisionOpaqueMesh
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Mesh* precisionOpaqueMesh;
      // Field size check
      static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
      // public UnityEngine.Mesh lowPolyMesh
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Mesh* lowPolyMesh;
      // Field size check
      static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
      // public System.Single sizeModifier
      // Size: 0x4
      // Offset: 0x10
      float sizeModifier;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single bottomThreshold
      // Size: 0x4
      // Offset: 0x14
      float bottomThreshold;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 weight
      // Size: 0x4
      // Offset: 0x18
      int weight;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // [HeaderAttribute] Offset: 0x10F834C
      // public System.Int32 precisionVertexCount
      // Size: 0x4
      // Offset: 0x1C
      int precisionVertexCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 lowPolyVertexCount
      // Size: 0x4
      // Offset: 0x20
      int lowPolyVertexCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 generatedCount
      // Size: 0x4
      // Offset: 0x24
      int generatedCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Cloud
      constexpr Cloud(::UnityEngine::Mesh* precisionOpaqueMesh_ = {}, ::UnityEngine::Mesh* lowPolyMesh_ = {}, float sizeModifier_ = {}, float bottomThreshold_ = {}, int weight_ = {}, int precisionVertexCount_ = {}, int lowPolyVertexCount_ = {}, int generatedCount_ = {}) noexcept : precisionOpaqueMesh{precisionOpaqueMesh_}, lowPolyMesh{lowPolyMesh_}, sizeModifier{sizeModifier_}, bottomThreshold{bottomThreshold_}, weight{weight_}, precisionVertexCount{precisionVertexCount_}, lowPolyVertexCount{lowPolyVertexCount_}, generatedCount{generatedCount_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Mesh precisionOpaqueMesh
      [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_precisionOpaqueMesh();
      // Get instance field reference: public UnityEngine.Mesh lowPolyMesh
      [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_lowPolyMesh();
      // Get instance field reference: public System.Single sizeModifier
      [[deprecated("Use field access instead!")]] float& dyn_sizeModifier();
      // Get instance field reference: public System.Single bottomThreshold
      [[deprecated("Use field access instead!")]] float& dyn_bottomThreshold();
      // Get instance field reference: public System.Int32 weight
      [[deprecated("Use field access instead!")]] int& dyn_weight();
      // Get instance field reference: public System.Int32 precisionVertexCount
      [[deprecated("Use field access instead!")]] int& dyn_precisionVertexCount();
      // Get instance field reference: public System.Int32 lowPolyVertexCount
      [[deprecated("Use field access instead!")]] int& dyn_lowPolyVertexCount();
      // Get instance field reference: public System.Int32 generatedCount
      [[deprecated("Use field access instead!")]] int& dyn_generatedCount();
    }; // CloudsMeshGenerator/Cloud
    #pragma pack(pop)
    static check_size<sizeof(CloudsMeshGenerator::Cloud), 36 + sizeof(int)> __GlobalNamespace_CloudsMeshGenerator_CloudSizeCheck;
    static_assert(sizeof(CloudsMeshGenerator::Cloud) == 0x28);
    // Size: 0x1C
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: CloudsMeshGenerator/Ring
    // [TokenAttribute] Offset: FFFFFFFF
    struct Ring/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single radius
      // Size: 0x4
      // Offset: 0x0
      float radius;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single normalizedRadius
      // Size: 0x4
      // Offset: 0x4
      float normalizedRadius;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Int32 meshCount
      // Size: 0x4
      // Offset: 0x8
      int meshCount;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: meshCount and: cloudIDs
      char __padding2[0x4] = {};
      // public System.Int32[] cloudIDs
      // Size: 0x8
      // Offset: 0x10
      ::ArrayW<int> cloudIDs;
      // Field size check
      static_assert(sizeof(::ArrayW<int>) == 0x8);
      // public System.Single sizeMultiplier
      // Size: 0x4
      // Offset: 0x18
      float sizeMultiplier;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: Ring
      constexpr Ring(float radius_ = {}, float normalizedRadius_ = {}, int meshCount_ = {}, ::ArrayW<int> cloudIDs_ = ::ArrayW<int>(static_cast<void*>(nullptr)), float sizeMultiplier_ = {}) noexcept : radius{radius_}, normalizedRadius{normalizedRadius_}, meshCount{meshCount_}, cloudIDs{cloudIDs_}, sizeMultiplier{sizeMultiplier_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single radius
      [[deprecated("Use field access instead!")]] float& dyn_radius();
      // Get instance field reference: public System.Single normalizedRadius
      [[deprecated("Use field access instead!")]] float& dyn_normalizedRadius();
      // Get instance field reference: public System.Int32 meshCount
      [[deprecated("Use field access instead!")]] int& dyn_meshCount();
      // Get instance field reference: public System.Int32[] cloudIDs
      [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_cloudIDs();
      // Get instance field reference: public System.Single sizeMultiplier
      [[deprecated("Use field access instead!")]] float& dyn_sizeMultiplier();
    }; // CloudsMeshGenerator/Ring
    #pragma pack(pop)
    static check_size<sizeof(CloudsMeshGenerator::Ring), 24 + sizeof(float)> __GlobalNamespace_CloudsMeshGenerator_RingSizeCheck;
    static_assert(sizeof(CloudsMeshGenerator::Ring) == 0x1C);
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: CloudsMeshGenerator/ProhibitedRadius
    // [TokenAttribute] Offset: FFFFFFFF
    struct ProhibitedRadius/*, public ::System::ValueType*/ {
      public:
      public:
      // [NullAllowed] Offset: 0x10F8384
      // public UnityEngine.Transform transform
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Transform* transform;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // public System.Single distance
      // Size: 0x4
      // Offset: 0x8
      float distance;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // [MinAttribute] Offset: 0x10F8394
      // public System.Single radius
      // Size: 0x4
      // Offset: 0xC
      float radius;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: ProhibitedRadius
      constexpr ProhibitedRadius(::UnityEngine::Transform* transform_ = {}, float distance_ = {}, float radius_ = {}) noexcept : transform{transform_}, distance{distance_}, radius{radius_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Transform transform
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
      // Get instance field reference: public System.Single distance
      [[deprecated("Use field access instead!")]] float& dyn_distance();
      // Get instance field reference: public System.Single radius
      [[deprecated("Use field access instead!")]] float& dyn_radius();
    }; // CloudsMeshGenerator/ProhibitedRadius
    #pragma pack(pop)
    static check_size<sizeof(CloudsMeshGenerator::ProhibitedRadius), 12 + sizeof(float)> __GlobalNamespace_CloudsMeshGenerator_ProhibitedRadiusSizeCheck;
    static_assert(sizeof(CloudsMeshGenerator::ProhibitedRadius) == 0x10);
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: CloudsMeshGenerator/RadiusChunk
    // [TokenAttribute] Offset: FFFFFFFF
    struct RadiusChunk/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Single normalizedStart
      // Size: 0x4
      // Offset: 0x0
      float normalizedStart;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single normalizedEnd
      // Size: 0x4
      // Offset: 0x4
      float normalizedEnd;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single absoluteStart
      // Size: 0x4
      // Offset: 0x8
      float absoluteStart;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single absoluteEnd
      // Size: 0x4
      // Offset: 0xC
      float absoluteEnd;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: RadiusChunk
      constexpr RadiusChunk(float normalizedStart_ = {}, float normalizedEnd_ = {}, float absoluteStart_ = {}, float absoluteEnd_ = {}) noexcept : normalizedStart{normalizedStart_}, normalizedEnd{normalizedEnd_}, absoluteStart{absoluteStart_}, absoluteEnd{absoluteEnd_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Single normalizedStart
      [[deprecated("Use field access instead!")]] float& dyn_normalizedStart();
      // Get instance field reference: public System.Single normalizedEnd
      [[deprecated("Use field access instead!")]] float& dyn_normalizedEnd();
      // Get instance field reference: public System.Single absoluteStart
      [[deprecated("Use field access instead!")]] float& dyn_absoluteStart();
      // Get instance field reference: public System.Single absoluteEnd
      [[deprecated("Use field access instead!")]] float& dyn_absoluteEnd();
    }; // CloudsMeshGenerator/RadiusChunk
    #pragma pack(pop)
    static check_size<sizeof(CloudsMeshGenerator::RadiusChunk), 12 + sizeof(float)> __GlobalNamespace_CloudsMeshGenerator_RadiusChunkSizeCheck;
    static_assert(sizeof(CloudsMeshGenerator::RadiusChunk) == 0x10);
    public:
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private System.String _meshName
    // Size: 0x8
    // Offset: 0x20
    ::StringW meshName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [HeaderAttribute] Offset: 0x10DFB28
    // private System.Boolean _pauseGenerator
    // Size: 0x1
    // Offset: 0x28
    bool pauseGenerator;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [HeaderAttribute] Offset: 0x10DFB74
    // private System.Boolean _bottomPushEnabled
    // Size: 0x1
    // Offset: 0x29
    bool bottomPushEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bottomPushEnabled and: bottomPushDistance
    char __padding3[0x2] = {};
    // [DrawIfAttribute] Offset: 0x10DFBC0
    // private System.Single _bottomPushDistance
    // Size: 0x4
    // Offset: 0x2C
    float bottomPushDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x10DFC68
    // private UnityEngine.Vector2 _bottomScaleTopBottom
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Vector2 bottomScaleTopBottom;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [DrawIfAttribute] Offset: 0x10DFD10
    // private System.Single _bottomHorizontalScale
    // Size: 0x4
    // Offset: 0x38
    float bottomHorizontalScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x10DFDB8
    // private System.Boolean _drawRingGizmos
    // Size: 0x1
    // Offset: 0x3C
    bool drawRingGizmos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: drawRingGizmos and: prohibitedRadii
    char __padding7[0x3] = {};
    // private CloudsMeshGenerator/ProhibitedRadius[] _prohibitedRadii
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius> prohibitedRadii;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>) == 0x8);
    // [HeaderAttribute] Offset: 0x10DFE14
    // private UnityEngine.Vector2 _meshSize
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Vector2 meshSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [RangeAttribute] Offset: 0x10DFE60
    // private System.Single _sizeRandomness
    // Size: 0x4
    // Offset: 0x50
    float sizeRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x10DFEA0
    // private System.Single _ratioRandomness
    // Size: 0x4
    // Offset: 0x54
    float ratioRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x10DFEE0
    // [TooltipAttribute] Offset: 0x10DFEE0
    // [RangeAttribute] Offset: 0x10DFEE0
    // private System.Single _perMeshRadiusOffset
    // Size: 0x4
    // Offset: 0x58
    float perMeshRadiusOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: perMeshRadiusOffset and: possibleColors
    char __padding12[0x4] = {};
    // private UnityEngine.Gradient _possibleColors
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Gradient* possibleColors;
    // Field size check
    static_assert(sizeof(::UnityEngine::Gradient*) == 0x8);
    // [RangeAttribute] Offset: 0x10DFF80
    // private System.Int32 _randomSeed
    // Size: 0x4
    // Offset: 0x68
    int randomSeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _heightRandomness
    // Size: 0x4
    // Offset: 0x6C
    float heightRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _ringRotationRandomness
    // Size: 0x4
    // Offset: 0x70
    float ringRotationRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10DFFE4
    // private System.Int32 _ringCount
    // Size: 0x4
    // Offset: 0x74
    int ringCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _meshesPerRadius
    // Size: 0x4
    // Offset: 0x78
    float meshesPerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x10E0030
    // private UnityEngine.Vector2 _radiusCloseFar
    // Size: 0x8
    // Offset: 0x7C
    ::UnityEngine::Vector2 radiusCloseFar;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _sizeCloseFar
    // Size: 0x8
    // Offset: 0x84
    ::UnityEngine::Vector2 sizeCloseFar;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // Padding between fields: sizeCloseFar and: heightCloseFar
    char __padding20[0x4] = {};
    // private UnityEngine.AnimationCurve _heightCloseFar
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::AnimationCurve* heightCloseFar;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _lowPolyThreshold
    // Size: 0x4
    // Offset: 0x98
    float lowPolyThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0x10E00AC
    // private System.Boolean _flipNormals
    // Size: 0x1
    // Offset: 0x9C
    bool flipNormals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _curveMesh
    // Size: 0x1
    // Offset: 0x9D
    bool curveMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: curveMesh and: clouds
    char __padding24[0x2] = {};
    // private CloudsMeshGenerator/Cloud[] _clouds
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::Cloud> clouds;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CloudsMeshGenerator::Cloud>) == 0x8);
    // [HeaderAttribute] Offset: 0x10E0118
    // private System.Int32 _meshCount
    // Size: 0x4
    // Offset: 0xA8
    int meshCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _vertexCount
    // Size: 0x4
    // Offset: 0xAC
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Mesh _generatedMesh
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Mesh* generatedMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Bounds _meshBounds
    // Size: 0x18
    // Offset: 0xB8
    ::UnityEngine::Bounds meshBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    // private CloudsMeshGenerator/RadiusChunk[] _radiusChunks
    // Size: 0x8
    // Offset: 0xD0
    ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::RadiusChunk> radiusChunks;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CloudsMeshGenerator::RadiusChunk>) == 0x8);
    // private CloudsMeshGenerator/Ring[] _rings
    // Size: 0x8
    // Offset: 0xD8
    ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::Ring> rings;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CloudsMeshGenerator::Ring>) == 0x8);
    // private CloudsMeshGenerator/ProhibitedRadius[] _sortedProhibitedRadii
    // Size: 0x8
    // Offset: 0xE0
    ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius> sortedProhibitedRadii;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private System.String _meshName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__meshName();
    // Get instance field reference: private System.Boolean _pauseGenerator
    [[deprecated("Use field access instead!")]] bool& dyn__pauseGenerator();
    // Get instance field reference: private System.Boolean _bottomPushEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__bottomPushEnabled();
    // Get instance field reference: private System.Single _bottomPushDistance
    [[deprecated("Use field access instead!")]] float& dyn__bottomPushDistance();
    // Get instance field reference: private UnityEngine.Vector2 _bottomScaleTopBottom
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__bottomScaleTopBottom();
    // Get instance field reference: private System.Single _bottomHorizontalScale
    [[deprecated("Use field access instead!")]] float& dyn__bottomHorizontalScale();
    // Get instance field reference: private System.Boolean _drawRingGizmos
    [[deprecated("Use field access instead!")]] bool& dyn__drawRingGizmos();
    // Get instance field reference: private CloudsMeshGenerator/ProhibitedRadius[] _prohibitedRadii
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>& dyn__prohibitedRadii();
    // Get instance field reference: private UnityEngine.Vector2 _meshSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__meshSize();
    // Get instance field reference: private System.Single _sizeRandomness
    [[deprecated("Use field access instead!")]] float& dyn__sizeRandomness();
    // Get instance field reference: private System.Single _ratioRandomness
    [[deprecated("Use field access instead!")]] float& dyn__ratioRandomness();
    // Get instance field reference: private System.Single _perMeshRadiusOffset
    [[deprecated("Use field access instead!")]] float& dyn__perMeshRadiusOffset();
    // Get instance field reference: private UnityEngine.Gradient _possibleColors
    [[deprecated("Use field access instead!")]] ::UnityEngine::Gradient*& dyn__possibleColors();
    // Get instance field reference: private System.Int32 _randomSeed
    [[deprecated("Use field access instead!")]] int& dyn__randomSeed();
    // Get instance field reference: private System.Single _heightRandomness
    [[deprecated("Use field access instead!")]] float& dyn__heightRandomness();
    // Get instance field reference: private System.Single _ringRotationRandomness
    [[deprecated("Use field access instead!")]] float& dyn__ringRotationRandomness();
    // Get instance field reference: private System.Int32 _ringCount
    [[deprecated("Use field access instead!")]] int& dyn__ringCount();
    // Get instance field reference: private System.Single _meshesPerRadius
    [[deprecated("Use field access instead!")]] float& dyn__meshesPerRadius();
    // Get instance field reference: private UnityEngine.Vector2 _radiusCloseFar
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__radiusCloseFar();
    // Get instance field reference: private UnityEngine.Vector2 _sizeCloseFar
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__sizeCloseFar();
    // Get instance field reference: private UnityEngine.AnimationCurve _heightCloseFar
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__heightCloseFar();
    // Get instance field reference: private System.Single _lowPolyThreshold
    [[deprecated("Use field access instead!")]] float& dyn__lowPolyThreshold();
    // Get instance field reference: private System.Boolean _flipNormals
    [[deprecated("Use field access instead!")]] bool& dyn__flipNormals();
    // Get instance field reference: private System.Boolean _curveMesh
    [[deprecated("Use field access instead!")]] bool& dyn__curveMesh();
    // Get instance field reference: private CloudsMeshGenerator/Cloud[] _clouds
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::Cloud>& dyn__clouds();
    // Get instance field reference: private System.Int32 _meshCount
    [[deprecated("Use field access instead!")]] int& dyn__meshCount();
    // Get instance field reference: private System.Int32 _vertexCount
    [[deprecated("Use field access instead!")]] int& dyn__vertexCount();
    // Get instance field reference: private UnityEngine.Mesh _generatedMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn__generatedMesh();
    // Get instance field reference: private UnityEngine.Bounds _meshBounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn__meshBounds();
    // Get instance field reference: private CloudsMeshGenerator/RadiusChunk[] _radiusChunks
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::RadiusChunk>& dyn__radiusChunks();
    // Get instance field reference: private CloudsMeshGenerator/Ring[] _rings
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::Ring>& dyn__rings();
    // Get instance field reference: private CloudsMeshGenerator/ProhibitedRadius[] _sortedProhibitedRadii
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>& dyn__sortedProhibitedRadii();
    // public System.Void .ctor()
    // Offset: 0x135FEAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudsMeshGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CloudsMeshGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudsMeshGenerator*, creationType>()));
    }
  }; // CloudsMeshGenerator
  #pragma pack(pop)
  static check_size<sizeof(CloudsMeshGenerator), 224 + sizeof(::ArrayW<::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>)> __GlobalNamespace_CloudsMeshGeneratorSizeCheck;
  static_assert(sizeof(CloudsMeshGenerator) == 0xE8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator::RadiusChunk, "", "CloudsMeshGenerator/RadiusChunk");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius, "", "CloudsMeshGenerator/ProhibitedRadius");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator::Ring, "", "CloudsMeshGenerator/Ring");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator::Cloud, "", "CloudsMeshGenerator/Cloud");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CloudsMeshGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
