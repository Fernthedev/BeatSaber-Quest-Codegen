// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: E24AD0
  // [AddComponentMenu] Offset: E24AD0
  class RotationLimitPolygonal : public RootMotion::FinalIK::RotationLimit {
    public:
    // Nested type: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone
    class ReachCone;
    // Nested type: RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint
    class LimitPoint;
    // [RangeAttribute] Offset: 0xE27790
    // public System.Single twistLimit
    // Size: 0x4
    // Offset: 0x38
    float twistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE277AC
    // public System.Int32 smoothIterations
    // Size: 0x4
    // Offset: 0x3C
    int smoothIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.LimitPoint[] points
    // Size: 0x8
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* points;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>*) == 0x8);
    // public UnityEngine.Vector3[] P
    // Size: 0x8
    // Offset: 0x48
    ::Array<UnityEngine::Vector3>* P;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // public RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.ReachCone[] reachCones
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>* reachCones;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>*) == 0x8);
    // Creating value type constructor for type: RotationLimitPolygonal
    RotationLimitPolygonal(float twistLimit_ = {}, int smoothIterations_ = {}, ::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* points_ = {}, ::Array<UnityEngine::Vector3>* P_ = {}, ::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>* reachCones_ = {}) noexcept : twistLimit{twistLimit_}, smoothIterations{smoothIterations_}, points{points_}, P{P_}, reachCones{reachCones_} {}
    // Get instance field: public System.Single twistLimit
    float _get_twistLimit();
    // Set instance field: public System.Single twistLimit
    void _set_twistLimit(float value);
    // Get instance field: public System.Int32 smoothIterations
    int _get_smoothIterations();
    // Set instance field: public System.Int32 smoothIterations
    void _set_smoothIterations(int value);
    // Get instance field: public RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.LimitPoint[] points
    ::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* _get_points();
    // Set instance field: public RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.LimitPoint[] points
    void _set_points(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* value);
    // Get instance field: public UnityEngine.Vector3[] P
    ::Array<UnityEngine::Vector3>* _get_P();
    // Set instance field: public UnityEngine.Vector3[] P
    void _set_P(::Array<UnityEngine::Vector3>* value);
    // Get instance field: public RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.ReachCone[] reachCones
    ::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>* _get_reachCones();
    // Set instance field: public RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.ReachCone[] reachCones
    void _set_reachCones(::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>* value);
    // private System.Void OpenUserManual()
    // Offset: 0x1ADDBC4
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1ADDC10
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1ADDC5C
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1ADDCA8
    void ASThread();
    // public System.Void SetLimitPoints(RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.LimitPoint[] points)
    // Offset: 0x1ADDCF4
    void SetLimitPoints(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>* points);
    // private System.Void Start()
    // Offset: 0x1ADE2D0
    void Start();
    // public System.Void ResetToDefault()
    // Offset: 0x1ADE888
    void ResetToDefault();
    // public System.Void BuildReachCones()
    // Offset: 0x1ADDD90
    void BuildReachCones();
    // private UnityEngine.Vector3[] SmoothPoints()
    // Offset: 0x1ADECD0
    ::Array<UnityEngine::Vector3>* SmoothPoints();
    // private System.Single GetScalar(System.Int32 k)
    // Offset: 0x1ADF5A8
    float GetScalar(int k);
    // private UnityEngine.Vector3 PointToTangentPlane(UnityEngine.Vector3 p, System.Single r)
    // Offset: 0x1ADF5EC
    UnityEngine::Vector3 PointToTangentPlane(UnityEngine::Vector3 p, float r);
    // private UnityEngine.Vector3 TangentPointToSphere(UnityEngine.Vector3 q, System.Single r)
    // Offset: 0x1ADF734
    UnityEngine::Vector3 TangentPointToSphere(UnityEngine::Vector3 q, float r);
    // private UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x1ADE550
    UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation);
    // private System.Int32 GetReachCone(UnityEngine.Vector3 L)
    // Offset: 0x1ADF8C4
    int GetReachCone(UnityEngine::Vector3 L);
    // public System.Void .ctor()
    // Offset: 0x1ADFA74
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
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1ADE1D8
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
  }; // RootMotion.FinalIK.RotationLimitPolygonal
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitPolygonal), 80 + sizeof(::Array<RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*>*)> __RootMotion_FinalIK_RotationLimitPolygonalSizeCheck;
  static_assert(sizeof(RotationLimitPolygonal) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitPolygonal*, "RootMotion.FinalIK", "RotationLimitPolygonal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::SetLimitPoints
// Il2CppName: SetLimitPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)(::Array<RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*>*)>(&RootMotion::FinalIK::RotationLimitPolygonal::SetLimitPoints)> {
  static const MethodInfo* get() {
    static auto* points = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "RotationLimitPolygonal/LimitPoint"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "SetLimitPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{points});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ResetToDefault
// Il2CppName: ResetToDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ResetToDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "ResetToDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::BuildReachCones
// Il2CppName: BuildReachCones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::BuildReachCones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "BuildReachCones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::SmoothPoints
// Il2CppName: SmoothPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (RootMotion::FinalIK::RotationLimitPolygonal::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::SmoothPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "SmoothPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::GetScalar
// Il2CppName: GetScalar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::RotationLimitPolygonal::*)(int)>(&RootMotion::FinalIK::RotationLimitPolygonal::GetScalar)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "GetScalar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::PointToTangentPlane
// Il2CppName: PointToTangentPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::RotationLimitPolygonal::PointToTangentPlane)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "PointToTangentPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, r});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::TangentPointToSphere
// Il2CppName: TangentPointToSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Vector3, float)>(&RootMotion::FinalIK::RotationLimitPolygonal::TangentPointToSphere)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "TangentPointToSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, r});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::LimitSwing
// Il2CppName: LimitSwing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitPolygonal::LimitSwing)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "LimitSwing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::GetReachCone
// Il2CppName: GetReachCone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RotationLimitPolygonal::GetReachCone)> {
  static const MethodInfo* get() {
    static auto* L = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "GetReachCone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{L});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitPolygonal::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitPolygonal::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
