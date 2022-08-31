// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: PhysicsRaycasterWithCache
  class PhysicsRaycasterWithCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::PhysicsRaycasterWithCache);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::PhysicsRaycasterWithCache*, "VRUIControls", "PhysicsRaycasterWithCache");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.PhysicsRaycasterWithCache
  // [TokenAttribute] Offset: FFFFFFFF
  class PhysicsRaycasterWithCache : public ::Il2CppObject {
    public:
    // Nested type: ::VRUIControls::PhysicsRaycasterWithCache::CachedRaycast
    struct CachedRaycast;
    // Size: 0x50
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: VRUIControls.PhysicsRaycasterWithCache/VRUIControls.CachedRaycast
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct CachedRaycast/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.Boolean wasHit
      // Size: 0x1
      // Offset: 0x0
      bool wasHit;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: wasHit and: ray
      char __padding0[0x3] = {};
      // public readonly UnityEngine.Ray ray
      // Size: 0x18
      // Offset: 0x4
      ::UnityEngine::Ray ray;
      // Field size check
      static_assert(sizeof(::UnityEngine::Ray) == 0x18);
      // public readonly UnityEngine.RaycastHit hitInfo
      // Size: 0x2C
      // Offset: 0x1C
      ::UnityEngine::RaycastHit hitInfo;
      // Field size check
      static_assert(sizeof(::UnityEngine::RaycastHit) == 0x2C);
      // public readonly System.Single maxDistance
      // Size: 0x4
      // Offset: 0x48
      float maxDistance;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Int32 layerMask
      // Size: 0x4
      // Offset: 0x4C
      int layerMask;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CachedRaycast
      constexpr CachedRaycast(bool wasHit_ = {}, ::UnityEngine::Ray ray_ = {}, ::UnityEngine::RaycastHit hitInfo_ = {}, float maxDistance_ = {}, int layerMask_ = {}) noexcept : wasHit{wasHit_}, ray{ray_}, hitInfo{hitInfo_}, maxDistance{maxDistance_}, layerMask{layerMask_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Boolean wasHit
      [[deprecated("Use field access instead!")]] bool& dyn_wasHit();
      // Get instance field reference: public readonly UnityEngine.Ray ray
      [[deprecated("Use field access instead!")]] ::UnityEngine::Ray& dyn_ray();
      // Get instance field reference: public readonly UnityEngine.RaycastHit hitInfo
      [[deprecated("Use field access instead!")]] ::UnityEngine::RaycastHit& dyn_hitInfo();
      // Get instance field reference: public readonly System.Single maxDistance
      [[deprecated("Use field access instead!")]] float& dyn_maxDistance();
      // Get instance field reference: public readonly System.Int32 layerMask
      [[deprecated("Use field access instead!")]] int& dyn_layerMask();
      // public System.Void .ctor(System.Boolean wasHit, UnityEngine.Ray ray, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
      // Offset: 0x2A92000
      // ABORTED: conflicts with another method.  CachedRaycast(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float maxDistance, int layerMask);
    }; // VRUIControls.PhysicsRaycasterWithCache/VRUIControls.CachedRaycast
    #pragma pack(pop)
    static check_size<sizeof(PhysicsRaycasterWithCache::CachedRaycast), 76 + sizeof(int)> __VRUIControls_PhysicsRaycasterWithCache_CachedRaycastSizeCheck;
    static_assert(sizeof(PhysicsRaycasterWithCache::CachedRaycast) == 0x50);
    public:
    // private readonly System.Collections.Generic.List`1<VRUIControls.PhysicsRaycasterWithCache/VRUIControls.CachedRaycast> _cachedRaycasts
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>* cachedRaycasts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>*) == 0x8);
    // private System.Int32 _lastFrameCount
    // Size: 0x4
    // Offset: 0x18
    int lastFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.List`1<VRUIControls.PhysicsRaycasterWithCache/VRUIControls.CachedRaycast> _cachedRaycasts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>*& dyn__cachedRaycasts();
    // Get instance field reference: private System.Int32 _lastFrameCount
    [[deprecated("Use field access instead!")]] int& dyn__lastFrameCount();
    // public System.Void .ctor()
    // Offset: 0x2A92040
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsRaycasterWithCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::PhysicsRaycasterWithCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsRaycasterWithCache*, creationType>()));
    }
    // public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x2A91B9C
    bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float maxDistance, int layerMask);
  }; // VRUIControls.PhysicsRaycasterWithCache
  #pragma pack(pop)
  static check_size<sizeof(PhysicsRaycasterWithCache), 24 + sizeof(int)> __VRUIControls_PhysicsRaycasterWithCacheSizeCheck;
  static_assert(sizeof(PhysicsRaycasterWithCache) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::PhysicsRaycasterWithCache::CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::PhysicsRaycasterWithCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::PhysicsRaycasterWithCache::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::PhysicsRaycasterWithCache::*)(::UnityEngine::Ray, ByRef<::UnityEngine::RaycastHit>, float, int)>(&VRUIControls::PhysicsRaycasterWithCache::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* hitInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->this_arg;
    static auto* maxDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::PhysicsRaycasterWithCache*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, hitInfo, maxDistance, layerMask});
  }
};
