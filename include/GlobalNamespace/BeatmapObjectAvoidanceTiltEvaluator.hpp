// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectAvoidanceTiltEvaluator
  class BeatmapObjectAvoidanceTiltEvaluator : public ::Il2CppObject {
    public:
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private readonly UnityEngine.Vector2 _gravity
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Vector2 gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private readonly UnityEngine.Vector2 _normalizedGravity
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 normalizedGravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private readonly BezierSplineEvaluator _bezierSplineEvaluator
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private System.Single _currentAcceleration
    // Size: 0x4
    // Offset: 0x30
    float currentAcceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatmapObjectAvoidanceTiltEvaluator
    BeatmapObjectAvoidanceTiltEvaluator(GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, UnityEngine::Vector2 gravity_ = {}, UnityEngine::Vector2 normalizedGravity_ = {}, GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator_ = {}, float currentAcceleration_ = {}) noexcept : audioTimeSource{audioTimeSource_}, gravity{gravity_}, normalizedGravity{normalizedGravity_}, bezierSplineEvaluator{bezierSplineEvaluator_}, currentAcceleration{currentAcceleration_} {}
    // static field const value: static private System.Single kLookAheadTime
    static constexpr const float kLookAheadTime = 0.2;
    // Get static field: static private System.Single kLookAheadTime
    static float _get_kLookAheadTime();
    // Set static field: static private System.Single kLookAheadTime
    static void _set_kLookAheadTime(float value);
    // public System.Void .ctor(IAudioTimeSource audioTimeSource, BezierSplineEvaluator bezierSplineEvaluator, UnityEngine.Vector2 gravity)
    // Offset: 0x1104338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectAvoidanceTiltEvaluator* New_ctor(GlobalNamespace::IAudioTimeSource* audioTimeSource, GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator, UnityEngine::Vector2 gravity) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectAvoidanceTiltEvaluator*, creationType>(audioTimeSource, bezierSplineEvaluator, gravity)));
    }
    // public System.Single GetTiltAngle()
    // Offset: 0x110439C
    float GetTiltAngle();
  }; // BeatmapObjectAvoidanceTiltEvaluator
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectAvoidanceTiltEvaluator), 48 + sizeof(float)> __GlobalNamespace_BeatmapObjectAvoidanceTiltEvaluatorSizeCheck;
  static_assert(sizeof(BeatmapObjectAvoidanceTiltEvaluator) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*, "", "BeatmapObjectAvoidanceTiltEvaluator");
// Writing includes for template specializations
#include "GlobalNamespace/IAudioTimeSource.hpp"
#include "GlobalNamespace/BezierSplineEvaluator.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle
// Il2CppName: GetTiltAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)()>(&GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*), "GetTiltAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
