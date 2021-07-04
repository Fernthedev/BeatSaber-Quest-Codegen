// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray2D
  struct Ray2D;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Ray2DExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Ray2DExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Ray2DExtensions
    Ray2DExtensions() noexcept {}
    // static public System.Int32 CircleIntersections(UnityEngine.Ray2D ray, UnityEngine.Vector2 circleCenter, System.Single radius, System.Single[] distances)
    // Offset: 0x1251EF4
    static int CircleIntersections(UnityEngine::Ray2D ray, UnityEngine::Vector2 circleCenter, float radius, ::Array<float>* distances);
  }; // Ray2DExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Ray2DExtensions*, "", "Ray2DExtensions");
// Writing includes for template specializations
#include "UnityEngine/Ray2D.hpp"
#include "UnityEngine/Vector2.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Ray2DExtensions::CircleIntersections
// Il2CppName: CircleIntersections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::Ray2D, UnityEngine::Vector2, float, ::Array<float>*)>(&GlobalNamespace::Ray2DExtensions::CircleIntersections)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Ray2DExtensions*), "CircleIntersections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray2D>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector2>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<::Array<float>*>()});
  }
};
