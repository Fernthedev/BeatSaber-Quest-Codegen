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
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NoteBasicCutInfoHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBasicCutInfoHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NoteBasicCutInfoHelper
    NoteBasicCutInfoHelper() noexcept {}
    // static field const value: static private System.Single kMinBladeSpeedForCut
    static constexpr const float kMinBladeSpeedForCut = 2;
    // Get static field: static private System.Single kMinBladeSpeedForCut
    static float _get_kMinBladeSpeedForCut();
    // Set static field: static private System.Single kMinBladeSpeedForCut
    static void _set_kMinBladeSpeedForCut(float value);
    // static public System.Void GetBasicCutInfo(UnityEngine.Transform noteTransform, ColorType colorType, NoteCutDirection cutDirection, SaberType saberType, System.Single saberBladeSpeed, UnityEngine.Vector3 cutDirVec, System.Single cutAngleTolerance, out System.Boolean directionOK, out System.Boolean speedOK, out System.Boolean saberTypeOK, out System.Single cutDirDeviation, out System.Single cutDirAngle)
    // Offset: 0x237B428
    static void GetBasicCutInfo(UnityEngine::Transform* noteTransform, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, float cutAngleTolerance, ByRef<bool> directionOK, ByRef<bool> speedOK, ByRef<bool> saberTypeOK, ByRef<float> cutDirDeviation, ByRef<float> cutDirAngle);
  }; // NoteBasicCutInfoHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteBasicCutInfoHelper*, "", "NoteBasicCutInfoHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteBasicCutInfoHelper::GetBasicCutInfo
// Il2CppName: GetBasicCutInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*, GlobalNamespace::ColorType, GlobalNamespace::NoteCutDirection, GlobalNamespace::SaberType, float, UnityEngine::Vector3, float, ByRef<bool>, ByRef<bool>, ByRef<bool>, ByRef<float>, ByRef<float>)>(&GlobalNamespace::NoteBasicCutInfoHelper::GetBasicCutInfo)> {
  static const MethodInfo* get() {
    static auto* noteTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    static auto* cutDirection = &::il2cpp_utils::GetClassFromName("", "NoteCutDirection")->byval_arg;
    static auto* saberType = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    static auto* saberBladeSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutDirVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutAngleTolerance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* directionOK = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* speedOK = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* saberTypeOK = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* cutDirDeviation = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* cutDirAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteBasicCutInfoHelper*), "GetBasicCutInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteTransform, colorType, cutDirection, saberType, saberBladeSpeed, cutDirVec, cutAngleTolerance, directionOK, speedOK, saberTypeOK, cutDirDeviation, cutDirAngle});
  }
};
