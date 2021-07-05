// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ICanvasRaycastFilter
  class ICanvasRaycastFilter {
    public:
    // Creating value type constructor for type: ICanvasRaycastFilter
    ICanvasRaycastFilter() noexcept {}
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0xFFFFFFFF
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
  }; // UnityEngine.ICanvasRaycastFilter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ICanvasRaycastFilter*, "UnityEngine", "ICanvasRaycastFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ICanvasRaycastFilter::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ICanvasRaycastFilter::*)(UnityEngine::Vector2, UnityEngine::Camera*)>(&UnityEngine::ICanvasRaycastFilter::IsRaycastLocationValid)> {
  const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ICanvasRaycastFilter*), "IsRaycastLocationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
