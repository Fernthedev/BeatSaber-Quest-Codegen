// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: RotateSaberBySwingDirection
  class RotateSaberBySwingDirection : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform[] _transformsToRotate
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Transform*>* transformsToRotate;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xE13FD4
    // private System.Single _rotationSpeed
    // Size: 0x4
    // Offset: 0x20
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _returnSpeed
    // Size: 0x4
    // Offset: 0x24
    float returnSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _speedThreshold
    // Size: 0x4
    // Offset: 0x28
    float speedThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xE14040
    // private System.Single _angleRoundTo
    // Size: 0x4
    // Offset: 0x2C
    float angleRoundTo;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _sameAngleRange
    // Size: 0x4
    // Offset: 0x30
    float sameAngleRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _blockAnglesOver90
    // Size: 0x1
    // Offset: 0x34
    bool blockAnglesOver90;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: blockAnglesOver90 and: angleDifferenceCurve
    char __padding6[0x3] = {};
    // [TooltipAttribute] Offset: 0xE140AC
    // private UnityEngine.AnimationCurve _angleDifferenceCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* angleDifferenceCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [HeaderAttribute] Offset: 0xE140F8
    // private System.Single _delayBeforeReturn
    // Size: 0x4
    // Offset: 0x40
    float delayBeforeReturn;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _keepDownwardMultiplier
    // Size: 0x4
    // Offset: 0x44
    float keepDownwardMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _downwardAngleThreshold
    // Size: 0x4
    // Offset: 0x48
    float downwardAngleThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _swingDir
    // Size: 0xC
    // Offset: 0x4C
    UnityEngine::Vector3 swingDir;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _currentAngle
    // Size: 0x4
    // Offset: 0x58
    float currentAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastSignificantChange
    // Size: 0x4
    // Offset: 0x5C
    float lastSignificantChange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastRecordedAngle
    // Size: 0x4
    // Offset: 0x60
    float lastRecordedAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastRecordedSpeed
    // Size: 0x4
    // Offset: 0x64
    float lastRecordedSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _lastRecorderPosition
    // Size: 0xC
    // Offset: 0x68
    UnityEngine::Vector3 lastRecorderPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: RotateSaberBySwingDirection
    RotateSaberBySwingDirection(::Array<UnityEngine::Transform*>* transformsToRotate_ = {}, float rotationSpeed_ = {}, float returnSpeed_ = {}, float speedThreshold_ = {}, float angleRoundTo_ = {}, float sameAngleRange_ = {}, bool blockAnglesOver90_ = {}, UnityEngine::AnimationCurve* angleDifferenceCurve_ = {}, float delayBeforeReturn_ = {}, float keepDownwardMultiplier_ = {}, float downwardAngleThreshold_ = {}, UnityEngine::Vector3 swingDir_ = {}, float currentAngle_ = {}, float lastSignificantChange_ = {}, float lastRecordedAngle_ = {}, float lastRecordedSpeed_ = {}, UnityEngine::Vector3 lastRecorderPosition_ = {}) noexcept : transformsToRotate{transformsToRotate_}, rotationSpeed{rotationSpeed_}, returnSpeed{returnSpeed_}, speedThreshold{speedThreshold_}, angleRoundTo{angleRoundTo_}, sameAngleRange{sameAngleRange_}, blockAnglesOver90{blockAnglesOver90_}, angleDifferenceCurve{angleDifferenceCurve_}, delayBeforeReturn{delayBeforeReturn_}, keepDownwardMultiplier{keepDownwardMultiplier_}, downwardAngleThreshold{downwardAngleThreshold_}, swingDir{swingDir_}, currentAngle{currentAngle_}, lastSignificantChange{lastSignificantChange_}, lastRecordedAngle{lastRecordedAngle_}, lastRecordedSpeed{lastRecordedSpeed_}, lastRecorderPosition{lastRecorderPosition_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void LateUpdate()
    // Offset: 0x10B30D4
    void LateUpdate();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x10B3604
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x10B3710
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotateSaberBySwingDirection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RotateSaberBySwingDirection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotateSaberBySwingDirection*, creationType>()));
    }
  }; // RotateSaberBySwingDirection
  #pragma pack(pop)
  static check_size<sizeof(RotateSaberBySwingDirection), 104 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_RotateSaberBySwingDirectionSizeCheck;
  static_assert(sizeof(RotateSaberBySwingDirection) == 0x74);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RotateSaberBySwingDirection*, "", "RotateSaberBySwingDirection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RotateSaberBySwingDirection::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateSaberBySwingDirection::*)()>(&GlobalNamespace::RotateSaberBySwingDirection::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateSaberBySwingDirection*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateSaberBySwingDirection::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateSaberBySwingDirection::*)()>(&GlobalNamespace::RotateSaberBySwingDirection::OnDrawGizmosSelected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateSaberBySwingDirection*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateSaberBySwingDirection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
