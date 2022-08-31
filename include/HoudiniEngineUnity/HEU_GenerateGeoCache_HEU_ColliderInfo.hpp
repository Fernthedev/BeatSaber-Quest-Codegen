// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_GenerateGeoCache
#include "HoudiniEngineUnity/HEU_GenerateGeoCache.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo*, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_GenerateGeoCache::HEU_ColliderInfo : public ::Il2CppObject {
    public:
    // Nested type: ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType
    struct ColliderType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ColliderType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ColliderType
      constexpr ColliderType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType NONE
      static constexpr const int NONE = 0;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType NONE
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_NONE();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType NONE
      static void _set_NONE(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType BOX
      static constexpr const int BOX = 1;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType BOX
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_BOX();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType BOX
      static void _set_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SPHERE
      static constexpr const int SPHERE = 2;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SPHERE
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_SPHERE();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SPHERE
      static void _set_SPHERE(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType MESH
      static constexpr const int MESH = 3;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType MESH
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_MESH();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType MESH
      static void _set_MESH(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_BOX
      static constexpr const int SIMPLE_BOX = 4;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_BOX
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_SIMPLE_BOX();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_BOX
      static void _set_SIMPLE_BOX(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_SPHERE
      static constexpr const int SIMPLE_SPHERE = 5;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_SPHERE
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_SIMPLE_SPHERE();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_SPHERE
      static void _set_SIMPLE_SPHERE(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // static field const value: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_CAPSULE
      static constexpr const int SIMPLE_CAPSULE = 6;
      // Get static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_CAPSULE
      static ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType _get_SIMPLE_CAPSULE();
      // Set static field: static public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType SIMPLE_CAPSULE
      static void _set_SIMPLE_CAPSULE(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType
    #pragma pack(pop)
    static check_size<sizeof(HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_GenerateGeoCache_HEU_ColliderInfo_ColliderTypeSizeCheck;
    static_assert(sizeof(HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType) == 0x4);
    public:
    // public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType _colliderType
    // Size: 0x4
    // Offset: 0x10
    ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType colliderType;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType) == 0x4);
    // public UnityEngine.Vector3 _colliderCenter
    // Size: 0xC
    // Offset: 0x14
    ::UnityEngine::Vector3 colliderCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 _colliderSize
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 colliderSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single _colliderRadius
    // Size: 0x4
    // Offset: 0x2C
    float colliderRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _convexCollider
    // Size: 0x1
    // Offset: 0x30
    bool convexCollider;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: convexCollider and: collisionGroupName
    char __padding4[0x7] = {};
    // public System.String _collisionGroupName
    // Size: 0x8
    // Offset: 0x38
    ::StringW collisionGroupName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Vector3[] _collisionVertices
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Vector3> collisionVertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public System.Int32[] _collisionIndices
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<int> collisionIndices;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public UnityEngine.MeshTopology _meshTopology
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::MeshTopology meshTopology;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshTopology) == 0x4);
    // public System.Boolean _isTrigger
    // Size: 0x1
    // Offset: 0x54
    bool isTrigger;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo/HoudiniEngineUnity.ColliderType _colliderType
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType& dyn__colliderType();
    // Get instance field reference: public UnityEngine.Vector3 _colliderCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__colliderCenter();
    // Get instance field reference: public UnityEngine.Vector3 _colliderSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__colliderSize();
    // Get instance field reference: public System.Single _colliderRadius
    [[deprecated("Use field access instead!")]] float& dyn__colliderRadius();
    // Get instance field reference: public System.Boolean _convexCollider
    [[deprecated("Use field access instead!")]] bool& dyn__convexCollider();
    // Get instance field reference: public System.String _collisionGroupName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__collisionGroupName();
    // Get instance field reference: public UnityEngine.Vector3[] _collisionVertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__collisionVertices();
    // Get instance field reference: public System.Int32[] _collisionIndices
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__collisionIndices();
    // Get instance field reference: public UnityEngine.MeshTopology _meshTopology
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshTopology& dyn__meshTopology();
    // Get instance field reference: public System.Boolean _isTrigger
    [[deprecated("Use field access instead!")]] bool& dyn__isTrigger();
    // public System.Void .ctor()
    // Offset: 0x17AABB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_GenerateGeoCache::HEU_ColliderInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_GenerateGeoCache::HEU_ColliderInfo*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_GenerateGeoCache/HoudiniEngineUnity.HEU_ColliderInfo
  #pragma pack(pop)
  static check_size<sizeof(HEU_GenerateGeoCache::HEU_ColliderInfo), 84 + sizeof(bool)> __HoudiniEngineUnity_HEU_GenerateGeoCache_HEU_ColliderInfoSizeCheck;
  static_assert(sizeof(HEU_GenerateGeoCache::HEU_ColliderInfo) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo/ColliderType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GenerateGeoCache::HEU_ColliderInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
