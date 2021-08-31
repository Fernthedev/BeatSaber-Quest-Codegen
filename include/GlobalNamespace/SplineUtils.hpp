// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SplineUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class SplineUtils : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SplineUtils
    SplineUtils() noexcept {}
    // static public UnityEngine.Vector3 Interpolate(UnityEngine.Vector3 t0, UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 t1, System.Single f)
    // Offset: 0x108424C
    static UnityEngine::Vector3 Interpolate(UnityEngine::Vector3 t0, UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 t1, float f);
  }; // SplineUtils
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SplineUtils*, "", "SplineUtils");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SplineUtils::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&GlobalNamespace::SplineUtils::Interpolate)> {
  static const MethodInfo* get() {
    static auto* t0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SplineUtils*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t0, p0, p1, t1, f});
  }
};
