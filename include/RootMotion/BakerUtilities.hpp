// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class BakerUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BakerUtilities
    BakerUtilities() noexcept {}
    // static public System.Void ReduceKeyframes(UnityEngine.AnimationCurve curve, System.Single maxError)
    // Offset: 0x1D26114
    static void ReduceKeyframes(UnityEngine::AnimationCurve* curve, float maxError);
    // static public UnityEngine.Keyframe[] GetReducedKeyframes(UnityEngine.AnimationCurve curve, System.Single maxError)
    // Offset: 0x1D275E8
    static ::Array<UnityEngine::Keyframe>* GetReducedKeyframes(UnityEngine::AnimationCurve* curve, float maxError);
    // static public System.Void SetLoopFrame(System.Single time, UnityEngine.AnimationCurve curve)
    // Offset: 0x1D25B28
    static void SetLoopFrame(float time, UnityEngine::AnimationCurve* curve);
    // static public System.Void SetTangentMode(UnityEngine.AnimationCurve curve)
    // Offset: 0x1D2615C
    static void SetTangentMode(UnityEngine::AnimationCurve* curve);
    // static public UnityEngine.Quaternion EnsureQuaternionContinuity(UnityEngine.Quaternion lastQ, UnityEngine.Quaternion q)
    // Offset: 0x1D25660
    static UnityEngine::Quaternion EnsureQuaternionContinuity(UnityEngine::Quaternion lastQ, UnityEngine::Quaternion q);
  }; // RootMotion.BakerUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerUtilities*, "RootMotion", "BakerUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BakerUtilities::ReduceKeyframes
// Il2CppName: ReduceKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AnimationCurve*, float)>(&RootMotion::BakerUtilities::ReduceKeyframes)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "ReduceKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, maxError});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::GetReducedKeyframes
// Il2CppName: GetReducedKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Keyframe>* (*)(UnityEngine::AnimationCurve*, float)>(&RootMotion::BakerUtilities::GetReducedKeyframes)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "GetReducedKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, maxError});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::SetLoopFrame
// Il2CppName: SetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, UnityEngine::AnimationCurve*)>(&RootMotion::BakerUtilities::SetLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "SetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, curve});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::SetTangentMode
// Il2CppName: SetTangentMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AnimationCurve*)>(&RootMotion::BakerUtilities::SetTangentMode)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "SetTangentMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::EnsureQuaternionContinuity
// Il2CppName: EnsureQuaternionContinuity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Quaternion, UnityEngine::Quaternion)>(&RootMotion::BakerUtilities::EnsureQuaternionContinuity)> {
  static const MethodInfo* get() {
    static auto* lastQ = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "EnsureQuaternionContinuity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastQ, q});
  }
};
