// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_GeometryUtility
  class HEU_GeometryUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeometryUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeometryUtility*, "HoudiniEngineUnity", "HEU_GeometryUtility");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_GeometryUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_GeometryUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector2[] GeneratePerTriangle(UnityEngine.Mesh meshSrc)
    // Offset: 0x191CBE8
    static ::ArrayW<::UnityEngine::Vector2> GeneratePerTriangle(::UnityEngine::Mesh* meshSrc);
    // static public System.Void GenerateSecondaryUVSet(UnityEngine.Mesh meshsrc)
    // Offset: 0x191CC3C
    static void GenerateSecondaryUVSet(::UnityEngine::Mesh* meshsrc);
    // static public System.Void CalculateMeshTangents(UnityEngine.Mesh mesh)
    // Offset: 0x191CC88
    static void CalculateMeshTangents(::UnityEngine::Mesh* mesh);
    // static public UnityEngine.Mesh GenerateCubeMeshFromPoints(UnityEngine.Vector3[] points, UnityEngine.Color[] pointsColor, System.Single size)
    // Offset: 0x191D2A8
    static ::UnityEngine::Mesh* GenerateCubeMeshFromPoints(::ArrayW<::UnityEngine::Vector3> points, ::ArrayW<::UnityEngine::Color> pointsColor, float size);
    // static public System.String GetInstanceOutputName(System.String partName, System.String[] userPrefix, System.Int32 index)
    // Offset: 0x191DD70
    static ::StringW GetInstanceOutputName(::StringW partName, ::ArrayW<::StringW> userPrefix, int index);
  }; // HoudiniEngineUnity.HEU_GeometryUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeometryUtility::GeneratePerTriangle
// Il2CppName: GeneratePerTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)(::UnityEngine::Mesh*)>(&HoudiniEngineUnity::HEU_GeometryUtility::GeneratePerTriangle)> {
  static const MethodInfo* get() {
    static auto* meshSrc = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeometryUtility*), "GeneratePerTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshSrc});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeometryUtility::GenerateSecondaryUVSet
// Il2CppName: GenerateSecondaryUVSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*)>(&HoudiniEngineUnity::HEU_GeometryUtility::GenerateSecondaryUVSet)> {
  static const MethodInfo* get() {
    static auto* meshsrc = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeometryUtility*), "GenerateSecondaryUVSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshsrc});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeometryUtility::CalculateMeshTangents
// Il2CppName: CalculateMeshTangents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh*)>(&HoudiniEngineUnity::HEU_GeometryUtility::CalculateMeshTangents)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeometryUtility*), "CalculateMeshTangents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeometryUtility::GenerateCubeMeshFromPoints
// Il2CppName: GenerateCubeMeshFromPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Color>, float)>(&HoudiniEngineUnity::HEU_GeometryUtility::GenerateCubeMeshFromPoints)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* pointsColor = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeometryUtility*), "GenerateCubeMeshFromPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points, pointsColor, size});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_GeometryUtility::GetInstanceOutputName
// Il2CppName: GetInstanceOutputName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::StringW>, int)>(&HoudiniEngineUnity::HEU_GeometryUtility::GetInstanceOutputName)> {
  static const MethodInfo* get() {
    static auto* partName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userPrefix = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_GeometryUtility*), "GetInstanceOutputName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partName, userPrefix, index});
  }
};
