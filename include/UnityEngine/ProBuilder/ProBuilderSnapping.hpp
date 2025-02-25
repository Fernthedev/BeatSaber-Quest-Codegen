// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vector3Mask
  struct Vector3Mask;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ProBuilderSnapping
  // [TokenAttribute] Offset: FFFFFFFF
  class ProBuilderSnapping : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ProBuilderSnapping
    ProBuilderSnapping() noexcept {}
    // Get static field: static private System.Single k_MaxRaySnapDistance
    static float _get_k_MaxRaySnapDistance();
    // Set static field: static private System.Single k_MaxRaySnapDistance
    static void _set_k_MaxRaySnapDistance(float value);
    // static public UnityEngine.Vector3 SnapValue(UnityEngine.Vector3 vertex, System.Single snpVal)
    // Offset: 0x1508610
    static UnityEngine::Vector3 SnapValue(UnityEngine::Vector3 vertex, float snpVal);
    // static public System.Single SnapValue(System.Single val, System.Single snpVal)
    // Offset: 0x1508824
    static float SnapValue(float val, float snpVal);
    // static public UnityEngine.Vector3 SnapValue(UnityEngine.Vector3 vertex, UnityEngine.Vector3 snap)
    // Offset: 0x1508938
    static UnityEngine::Vector3 SnapValue(UnityEngine::Vector3 vertex, UnityEngine::Vector3 snap);
    // static public System.Void SnapVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes, UnityEngine.Vector3 snap)
    // Offset: 0x1508C14
    static void SnapVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indexes, UnityEngine::Vector3 snap);
    // static UnityEngine.Vector3 GetSnappingMaskBasedOnNormalVector(UnityEngine.Vector3 normal)
    // Offset: 0x1508F78
    static UnityEngine::Vector3 GetSnappingMaskBasedOnNormalVector(UnityEngine::Vector3 normal);
    // static UnityEngine.Vector3 SnapValueOnRay(UnityEngine.Ray ray, System.Single distance, System.Single snap, UnityEngine.ProBuilder.Vector3Mask mask)
    // Offset: 0x15090B0
    static UnityEngine::Vector3 SnapValueOnRay(UnityEngine::Ray ray, float distance, float snap, UnityEngine::ProBuilder::Vector3Mask mask);
  }; // UnityEngine.ProBuilder.ProBuilderSnapping
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProBuilderSnapping*, "UnityEngine.ProBuilder", "ProBuilderSnapping");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue
// Il2CppName: SnapValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, float)>(&UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue)> {
  static const MethodInfo* get() {
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* snpVal = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderSnapping*), "SnapValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertex, snpVal});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue
// Il2CppName: SnapValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snpVal = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderSnapping*), "SnapValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val, snpVal});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue
// Il2CppName: SnapValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue)> {
  static const MethodInfo* get() {
    static auto* vertex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* snap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderSnapping*), "SnapValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertex, snap});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderSnapping::SnapVertices
// Il2CppName: SnapVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::IEnumerable_1<int>*, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::ProBuilderSnapping::SnapVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* snap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderSnapping*), "SnapVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, snap});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderSnapping::GetSnappingMaskBasedOnNormalVector
// Il2CppName: GetSnappingMaskBasedOnNormalVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3)>(&UnityEngine::ProBuilder::ProBuilderSnapping::GetSnappingMaskBasedOnNormalVector)> {
  static const MethodInfo* get() {
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderSnapping*), "GetSnappingMaskBasedOnNormalVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normal});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ProBuilderSnapping::SnapValueOnRay
// Il2CppName: SnapValueOnRay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Ray, float, float, UnityEngine::ProBuilder::Vector3Mask)>(&UnityEngine::ProBuilder::ProBuilderSnapping::SnapValueOnRay)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* snap = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vector3Mask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ProBuilderSnapping*), "SnapValueOnRay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance, snap, mask});
  }
};
