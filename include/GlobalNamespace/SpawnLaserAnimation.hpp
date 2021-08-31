// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: SpawnLaserAnimation
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class SpawnLaserAnimation : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _centerThresholdTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* centerThresholdTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _horizontalLasersTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* horizontalLasersTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private TubeBloomPrePassLight _leftHorizontalLaser
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TubeBloomPrePassLight* leftHorizontalLaser;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private TubeBloomPrePassLight _rightHorizontalLaser
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::TubeBloomPrePassLight* rightHorizontalLaser;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // public System.Single _normalizedDistance
    // Size: 0x4
    // Offset: 0x38
    float normalizedDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _alphaMultiplier
    // Size: 0x4
    // Offset: 0x3C
    float alphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _laserLength
    // Size: 0x4
    // Offset: 0x40
    float laserLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _centerDistance
    // Size: 0x4
    // Offset: 0x44
    float centerDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x48
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SpawnLaserAnimation
    SpawnLaserAnimation(UnityEngine::Transform* centerThresholdTransform_ = {}, UnityEngine::Transform* horizontalLasersTransform_ = {}, GlobalNamespace::TubeBloomPrePassLight* leftHorizontalLaser_ = {}, GlobalNamespace::TubeBloomPrePassLight* rightHorizontalLaser_ = {}, float normalizedDistance_ = {}, float alphaMultiplier_ = {}, float laserLength_ = {}, float centerDistance_ = {}, bool initialized_ = {}) noexcept : centerThresholdTransform{centerThresholdTransform_}, horizontalLasersTransform{horizontalLasersTransform_}, leftHorizontalLaser{leftHorizontalLaser_}, rightHorizontalLaser{rightHorizontalLaser_}, normalizedDistance{normalizedDistance_}, alphaMultiplier{alphaMultiplier_}, laserLength{laserLength_}, centerDistance{centerDistance_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: private UnityEngine.Transform _centerThresholdTransform
    UnityEngine::Transform* _get__centerThresholdTransform();
    // Set instance field: private UnityEngine.Transform _centerThresholdTransform
    void _set__centerThresholdTransform(UnityEngine::Transform* value);
    // Get instance field: private UnityEngine.Transform _horizontalLasersTransform
    UnityEngine::Transform* _get__horizontalLasersTransform();
    // Set instance field: private UnityEngine.Transform _horizontalLasersTransform
    void _set__horizontalLasersTransform(UnityEngine::Transform* value);
    // Get instance field: private TubeBloomPrePassLight _leftHorizontalLaser
    GlobalNamespace::TubeBloomPrePassLight* _get__leftHorizontalLaser();
    // Set instance field: private TubeBloomPrePassLight _leftHorizontalLaser
    void _set__leftHorizontalLaser(GlobalNamespace::TubeBloomPrePassLight* value);
    // Get instance field: private TubeBloomPrePassLight _rightHorizontalLaser
    GlobalNamespace::TubeBloomPrePassLight* _get__rightHorizontalLaser();
    // Set instance field: private TubeBloomPrePassLight _rightHorizontalLaser
    void _set__rightHorizontalLaser(GlobalNamespace::TubeBloomPrePassLight* value);
    // Get instance field: public System.Single _normalizedDistance
    float _get__normalizedDistance();
    // Set instance field: public System.Single _normalizedDistance
    void _set__normalizedDistance(float value);
    // Get instance field: public System.Single _alphaMultiplier
    float _get__alphaMultiplier();
    // Set instance field: public System.Single _alphaMultiplier
    void _set__alphaMultiplier(float value);
    // Get instance field: public System.Single _laserLength
    float _get__laserLength();
    // Set instance field: public System.Single _laserLength
    void _set__laserLength(float value);
    // Get instance field: private System.Single _centerDistance
    float _get__centerDistance();
    // Set instance field: private System.Single _centerDistance
    void _set__centerDistance(float value);
    // Get instance field: private System.Boolean _initialized
    bool _get__initialized();
    // Set instance field: private System.Boolean _initialized
    void _set__initialized(bool value);
    // private System.Void InitIfNeeded()
    // Offset: 0x10827D4
    void InitIfNeeded();
    // protected System.Void LateUpdate()
    // Offset: 0x10828A4
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1082A14
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpawnLaserAnimation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpawnLaserAnimation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpawnLaserAnimation*, creationType>()));
    }
  }; // SpawnLaserAnimation
  #pragma pack(pop)
  static check_size<sizeof(SpawnLaserAnimation), 72 + sizeof(bool)> __GlobalNamespace_SpawnLaserAnimationSizeCheck;
  static_assert(sizeof(SpawnLaserAnimation) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnLaserAnimation*, "", "SpawnLaserAnimation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpawnLaserAnimation::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnLaserAnimation::*)()>(&GlobalNamespace::SpawnLaserAnimation::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnLaserAnimation*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnLaserAnimation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnLaserAnimation::*)()>(&GlobalNamespace::SpawnLaserAnimation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpawnLaserAnimation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpawnLaserAnimation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
