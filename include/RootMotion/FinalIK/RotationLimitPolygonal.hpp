// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitPolygonal
  // [HelpURLAttribute] Offset: E07644
  // [AddComponentMenu] Offset: E07644
  class RotationLimitPolygonal : public RootMotion::FinalIK::RotationLimit {
    public:
    // Nested type: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone
    class ReachCone;
    // Nested type: RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint
    class LimitPoint;
    // [RangeAttribute] Offset: 0xE0A304
    // public System.Single twistLimit
    // Size: 0x4
    // Offset: 0x38
    float twistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE0A320
    // public System.Int32 smoothIterations
    // Size: 0x4
    // Offset: 0x3C
    int smoothIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [HideInInspector] Offset: 0xE0A338
    // public RootMotion.FinalIK.RotationLimitPolygonal/LimitPoint[] points
    // Size: 0x8
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* points;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>*) == 0x8);
    // [HideInInspector] Offset: 0xE0A370
    // public UnityEngine.Vector3[] P
    // Size: 0x8
    // Offset: 0x48
    ::Array<UnityEngine::Vector3>* P;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // [HideInInspector] Offset: 0xE0A3A8
    // public RootMotion.FinalIK.RotationLimitPolygonal/ReachCone[] reachCones
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>* reachCones;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>*) == 0x8);
    // Creating value type constructor for type: RotationLimitPolygonal
    RotationLimitPolygonal(float twistLimit_ = {}, int smoothIterations_ = {}, ::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* points_ = {}, ::Array<UnityEngine::Vector3>* P_ = {}, ::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>* reachCones_ = {}) noexcept : twistLimit{twistLimit_}, smoothIterations{smoothIterations_}, points{points_}, P{P_}, reachCones{reachCones_} {}
    // private System.Void OpenUserManual()
    // Offset: 0x1AA6A68
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1AA6AB4
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1AA6B00
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1AA6B4C
    void ASThread();
    // public System.Void SetLimitPoints(RootMotion.FinalIK.RotationLimitPolygonal/LimitPoint[] points)
    // Offset: 0x1AA6B98
    void SetLimitPoints(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* points);
    // private System.Void Start()
    // Offset: 0x1AA7174
    void Start();
    // public System.Void ResetToDefault()
    // Offset: 0x1AA772C
    void ResetToDefault();
    // public System.Void BuildReachCones()
    // Offset: 0x1AA6C34
    void BuildReachCones();
    // private UnityEngine.Vector3[] SmoothPoints()
    // Offset: 0x1AA7B74
    ::Array<UnityEngine::Vector3>* SmoothPoints();
    // private System.Single GetScalar(System.Int32 k)
    // Offset: 0x1AA844C
    float GetScalar(int k);
    // private UnityEngine.Vector3 PointToTangentPlane(UnityEngine.Vector3 p, System.Single r)
    // Offset: 0x1AA8490
    UnityEngine::Vector3 PointToTangentPlane(UnityEngine::Vector3 p, float r);
    // private UnityEngine.Vector3 TangentPointToSphere(UnityEngine.Vector3 q, System.Single r)
    // Offset: 0x1AA85D8
    UnityEngine::Vector3 TangentPointToSphere(UnityEngine::Vector3 q, float r);
    // private UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x1AA73F4
    UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation);
    // private System.Int32 GetReachCone(UnityEngine.Vector3 L)
    // Offset: 0x1AA8768
    int GetReachCone(UnityEngine::Vector3 L);
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1AA707C
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1AA8918
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitPolygonal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RotationLimitPolygonal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitPolygonal*, creationType>()));
    }
  }; // RootMotion.FinalIK.RotationLimitPolygonal
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitPolygonal), 80 + sizeof(::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>*)> __RootMotion_FinalIK_RotationLimitPolygonalSizeCheck;
  static_assert(sizeof(RotationLimitPolygonal) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitPolygonal*, "RootMotion.FinalIK", "RotationLimitPolygonal");
// Writing includes for template specializations
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::OpenUserManual)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::OpenScriptReference)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::SupportGroup)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ASThread)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::SetLimitPoints
// Il2CppName: SetLimitPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>*)>(&RootMotion::FinalIK::RotationLimitPolygonal::SetLimitPoints)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "SetLimitPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ResetToDefault
// Il2CppName: ResetToDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ResetToDefault)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "ResetToDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::BuildReachCones
// Il2CppName: BuildReachCones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::BuildReachCones)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "BuildReachCones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::SmoothPoints
// Il2CppName: SmoothPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::SmoothPoints)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "SmoothPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::GetScalar
// Il2CppName: GetScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::RotationLimitPolygonal::*)(int)>(&RootMotion::FinalIK::RotationLimitPolygonal::GetScalar)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "GetScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::PointToTangentPlane
// Il2CppName: PointToTangentPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::RotationLimitPolygonal::PointToTangentPlane)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "PointToTangentPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::TangentPointToSphere
// Il2CppName: TangentPointToSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::RotationLimitPolygonal::TangentPointToSphere)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "TangentPointToSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::LimitSwing
// Il2CppName: LimitSwing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitPolygonal::LimitSwing)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "LimitSwing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::GetReachCone
// Il2CppName: GetReachCone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RotationLimitPolygonal::GetReachCone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "GetReachCone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitPolygonal::LimitRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
