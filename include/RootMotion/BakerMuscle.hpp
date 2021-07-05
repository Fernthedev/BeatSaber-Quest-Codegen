// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerMuscle
  class BakerMuscle : public ::Il2CppObject {
    public:
    // public UnityEngine.AnimationCurve curve
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Int32 muscleIndex
    // Size: 0x4
    // Offset: 0x18
    int muscleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: muscleIndex and: propertyName
    char __padding1[0x4] = {};
    // private System.String propertyName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* propertyName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: BakerMuscle
    BakerMuscle(UnityEngine::AnimationCurve* curve_ = {}, int muscleIndex_ = {}, ::Il2CppString* propertyName_ = {}) noexcept : curve{curve_}, muscleIndex{muscleIndex_}, propertyName{propertyName_} {}
    // public System.Void .ctor(System.Int32 muscleIndex)
    // Offset: 0x1CA4610
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerMuscle* New_ctor(int muscleIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::BakerMuscle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerMuscle*, creationType>(muscleIndex)));
    }
    // private System.String MuscleNameToPropertyName(System.String n)
    // Offset: 0x1CA4680
    ::Il2CppString* MuscleNameToPropertyName(::Il2CppString* n);
    // public System.Void MultiplyLength(UnityEngine.AnimationCurve curve, System.Single mlp)
    // Offset: 0x1CA4D68
    void MultiplyLength(UnityEngine::AnimationCurve* curve, float mlp);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip, System.Single maxError, System.Single lengthMlp)
    // Offset: 0x1CA4E1C
    void SetCurves(UnityEngine::AnimationClip*& clip, float maxError, float lengthMlp);
    // public System.Void Reset()
    // Offset: 0x1CA4D08
    void Reset();
    // public System.Void SetKeyframe(System.Single time, System.Single[] muscles)
    // Offset: 0x1CA4F00
    void SetKeyframe(float time, ::Array<float>* muscles);
    // public System.Void SetLoopFrame(System.Single time)
    // Offset: 0x1CA4F48
    void SetLoopFrame(float time);
  }; // RootMotion.BakerMuscle
  #pragma pack(pop)
  static check_size<sizeof(BakerMuscle), 32 + sizeof(::Il2CppString*)> __RootMotion_BakerMuscleSizeCheck;
  static_assert(sizeof(BakerMuscle) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BakerMuscle*, "RootMotion", "BakerMuscle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BakerMuscle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::BakerMuscle::MuscleNameToPropertyName
// Il2CppName: MuscleNameToPropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (RootMotion::BakerMuscle::*)(::Il2CppString*)>(&RootMotion::BakerMuscle::MuscleNameToPropertyName)> {
  const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "MuscleNameToPropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::MultiplyLength
// Il2CppName: MultiplyLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(UnityEngine::AnimationCurve*, float)>(&RootMotion::BakerMuscle::MultiplyLength)> {
  const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* mlp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "MultiplyLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, mlp});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::SetCurves
// Il2CppName: SetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(UnityEngine::AnimationClip*&, float, float)>(&RootMotion::BakerMuscle::SetCurves)> {
  const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lengthMlp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "SetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, maxError, lengthMlp});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)()>(&RootMotion::BakerMuscle::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::SetKeyframe
// Il2CppName: SetKeyframe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(float, ::Array<float>*)>(&RootMotion::BakerMuscle::SetKeyframe)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* muscles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "SetKeyframe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, muscles});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::SetLoopFrame
// Il2CppName: SetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(float)>(&RootMotion::BakerMuscle::SetLoopFrame)> {
  const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "SetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
