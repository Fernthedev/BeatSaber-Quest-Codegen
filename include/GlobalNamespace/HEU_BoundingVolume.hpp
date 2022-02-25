// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HEU_BoundingVolume
  class HEU_BoundingVolume;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::HEU_BoundingVolume);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_BoundingVolume*, "", "HEU_BoundingVolume");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HEU_BoundingVolume
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_BoundingVolume : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Collider get_BoundingCollider()
    // Offset: 0x1630130
    UnityEngine::Collider* get_BoundingCollider();
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllIntersectingObjects()
    // Offset: 0x1630180
    System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllIntersectingObjects();
    // public System.Void .ctor()
    // Offset: 0x16303E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_BoundingVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HEU_BoundingVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_BoundingVolume*, creationType>()));
    }
  }; // HEU_BoundingVolume
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HEU_BoundingVolume::get_BoundingCollider
// Il2CppName: get_BoundingCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Collider* (GlobalNamespace::HEU_BoundingVolume::*)()>(&GlobalNamespace::HEU_BoundingVolume::get_BoundingCollider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_BoundingVolume*), "get_BoundingCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_BoundingVolume::GetAllIntersectingObjects
// Il2CppName: GetAllIntersectingObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::GameObject*>* (GlobalNamespace::HEU_BoundingVolume::*)()>(&GlobalNamespace::HEU_BoundingVolume::GetAllIntersectingObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_BoundingVolume*), "GetAllIntersectingObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_BoundingVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
