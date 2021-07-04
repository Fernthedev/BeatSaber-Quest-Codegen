// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
    // Offset: 0x23491BC
    static void GetBasicCutInfo(UnityEngine::Transform* noteTransform, GlobalNamespace::ColorType colorType, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::SaberType saberType, float saberBladeSpeed, UnityEngine::Vector3 cutDirVec, float cutAngleTolerance, bool& directionOK, bool& speedOK, bool& saberTypeOK, float& cutDirDeviation, float& cutDirAngle);
  }; // NoteBasicCutInfoHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteBasicCutInfoHelper*, "", "NoteBasicCutInfoHelper");
// Writing includes for template specializations
#include "UnityEngine/Transform.hpp"
#include "GlobalNamespace/ColorType.hpp"
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "GlobalNamespace/SaberType.hpp"
#include "UnityEngine/Vector3.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteBasicCutInfoHelper::GetBasicCutInfo
// Il2CppName: GetBasicCutInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*, GlobalNamespace::ColorType, GlobalNamespace::NoteCutDirection, GlobalNamespace::SaberType, float, UnityEngine::Vector3, float, bool&, bool&, bool&, float&, float&)>(&GlobalNamespace::NoteBasicCutInfoHelper::GetBasicCutInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteBasicCutInfoHelper*), "GetBasicCutInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::ColorType>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteCutDirection>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::SaberType>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<bool&>(), ::il2cpp_utils::ExtractIndependentType<bool&>(), ::il2cpp_utils::ExtractIndependentType<bool&>(), ::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
