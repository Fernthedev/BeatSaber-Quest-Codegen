// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
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
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverLookAt
  class IKSolverLookAt : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverLookAt::LookAtBone
    class LookAtBone;
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/LookAtBone[] spine
    // Size: 0x8
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* spine;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/LookAtBone head
    // Size: 0x8
    // Offset: 0x68
    RootMotion::FinalIK::IKSolverLookAt::LookAtBone* head;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverLookAt::LookAtBone*) == 0x8);
    // public RootMotion.FinalIK.IKSolverLookAt/LookAtBone[] eyes
    // Size: 0x8
    // Offset: 0x70
    ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* eyes;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*) == 0x8);
    // [RangeAttribute] Offset: 0xE09698
    // public System.Single bodyWeight
    // Size: 0x4
    // Offset: 0x78
    float bodyWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE096B0
    // public System.Single headWeight
    // Size: 0x4
    // Offset: 0x7C
    float headWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE096C8
    // public System.Single eyesWeight
    // Size: 0x4
    // Offset: 0x80
    float eyesWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE096E0
    // public System.Single clampWeight
    // Size: 0x4
    // Offset: 0x84
    float clampWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE096F8
    // public System.Single clampWeightHead
    // Size: 0x4
    // Offset: 0x88
    float clampWeightHead;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE09710
    // public System.Single clampWeightEyes
    // Size: 0x4
    // Offset: 0x8C
    float clampWeightEyes;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE09728
    // public System.Int32 clampSmoothing
    // Size: 0x4
    // Offset: 0x90
    int clampSmoothing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: clampSmoothing and: spineWeightCurve
    char __padding10[0x4] = {};
    // public UnityEngine.AnimationCurve spineWeightCurve
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::AnimationCurve* spineWeightCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.Vector3 spineTargetOffset
    // Size: 0xC
    // Offset: 0xA0
    UnityEngine::Vector3 spineTargetOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: spineTargetOffset and: spineForwards
    char __padding12[0x4] = {};
    // protected UnityEngine.Vector3[] spineForwards
    // Size: 0x8
    // Offset: 0xB0
    ::Array<UnityEngine::Vector3>* spineForwards;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // protected UnityEngine.Vector3[] headForwards
    // Size: 0x8
    // Offset: 0xB8
    ::Array<UnityEngine::Vector3>* headForwards;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // protected UnityEngine.Vector3[] eyeForward
    // Size: 0x8
    // Offset: 0xC0
    ::Array<UnityEngine::Vector3>* eyeForward;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: IKSolverLookAt
    IKSolverLookAt(UnityEngine::Transform* target_ = {}, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* spine_ = {}, RootMotion::FinalIK::IKSolverLookAt::LookAtBone* head_ = {}, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>* eyes_ = {}, float bodyWeight_ = {}, float headWeight_ = {}, float eyesWeight_ = {}, float clampWeight_ = {}, float clampWeightHead_ = {}, float clampWeightEyes_ = {}, int clampSmoothing_ = {}, UnityEngine::AnimationCurve* spineWeightCurve_ = {}, UnityEngine::Vector3 spineTargetOffset_ = {}, ::Array<UnityEngine::Vector3>* spineForwards_ = {}, ::Array<UnityEngine::Vector3>* headForwards_ = {}, ::Array<UnityEngine::Vector3>* eyeForward_ = {}) noexcept : target{target_}, spine{spine_}, head{head_}, eyes{eyes_}, bodyWeight{bodyWeight_}, headWeight{headWeight_}, eyesWeight{eyesWeight_}, clampWeight{clampWeight_}, clampWeightHead{clampWeightHead_}, clampWeightEyes{clampWeightEyes_}, clampSmoothing{clampSmoothing_}, spineWeightCurve{spineWeightCurve_}, spineTargetOffset{spineTargetOffset_}, spineForwards{spineForwards_}, headForwards{headForwards_}, eyeForward{eyeForward_} {}
    // public System.Void SetLookAtWeight(System.Single weight)
    // Offset: 0x1BFFEB4
    void SetLookAtWeight(float weight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight)
    // Offset: 0x1BFFF38
    void SetLookAtWeight(float weight, float bodyWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight)
    // Offset: 0x1BFFFE4
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight)
    // Offset: 0x1C000AC
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight)
    // Offset: 0x1C00198
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight);
    // public System.Void SetLookAtWeight(System.Single weight, System.Single bodyWeight, System.Single headWeight, System.Single eyesWeight, System.Single clampWeight, System.Single clampWeightHead, System.Single clampWeightEyes)
    // Offset: 0x1C002A4
    void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
    // public System.Boolean SetChain(UnityEngine.Transform[] spine, UnityEngine.Transform head, UnityEngine.Transform[] eyes, UnityEngine.Transform root)
    // Offset: 0x1C00E68
    bool SetChain(::Array<UnityEngine::Transform*>* spine, UnityEngine::Transform* head, ::Array<UnityEngine::Transform*>* eyes, UnityEngine::Transform* root);
    // protected System.Boolean get_spineIsValid()
    // Offset: 0x1C007F4
    bool get_spineIsValid();
    // protected System.Boolean get_spineIsEmpty()
    // Offset: 0x1C009CC
    bool get_spineIsEmpty();
    // protected System.Void SolveSpine()
    // Offset: 0x1C0160C
    void SolveSpine();
    // protected System.Boolean get_headIsValid()
    // Offset: 0x1C008D8
    bool get_headIsValid();
    // protected System.Boolean get_headIsEmpty()
    // Offset: 0x1C009F0
    bool get_headIsEmpty();
    // protected System.Void SolveHead()
    // Offset: 0x1C01838
    void SolveHead();
    // protected System.Boolean get_eyesIsValid()
    // Offset: 0x1C008E8
    bool get_eyesIsValid();
    // protected System.Boolean get_eyesIsEmpty()
    // Offset: 0x1C00A6C
    bool get_eyesIsEmpty();
    // protected System.Void SolveEyes()
    // Offset: 0x1C01A94
    void SolveEyes();
    // protected UnityEngine.Vector3[] GetForwards(ref UnityEngine.Vector3[] forwards, UnityEngine.Vector3 baseForward, UnityEngine.Vector3 targetForward, System.Int32 bones, System.Single clamp)
    // Offset: 0x1C01FC0
    ::Array<UnityEngine::Vector3>* GetForwards(::Array<UnityEngine::Vector3>*& forwards, UnityEngine::Vector3 baseForward, UnityEngine::Vector3 targetForward, int bones, float clamp);
    // protected System.Void SetBones(UnityEngine.Transform[] array, ref RootMotion.FinalIK.IKSolverLookAt/LookAtBone[] bones)
    // Offset: 0x1C00F18
    void SetBones(::Array<UnityEngine::Transform*>* array, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*& bones);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1C003EC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1C0051C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1C00660
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1C00A90
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1C00CC8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x1C010BC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1C01508
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1C02460
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverLookAt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverLookAt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverLookAt*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverLookAt
  #pragma pack(pop)
  static check_size<sizeof(IKSolverLookAt), 192 + sizeof(::Array<UnityEngine::Vector3>*)> __RootMotion_FinalIK_IKSolverLookAtSizeCheck;
  static_assert(sizeof(IKSolverLookAt) == 0xC8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLookAt*, "RootMotion.FinalIK", "IKSolverLookAt");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight, clampWeight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight
// Il2CppName: SetLookAtWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(float, float, float, float, float, float, float)>(&RootMotion::FinalIK::IKSolverLookAt::SetLookAtWeight)> {
  const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bodyWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* eyesWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeightHead = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeightEyes = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetLookAtWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetChain
// Il2CppName: SetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)(::Array<UnityEngine::Transform*>*, UnityEngine::Transform*, ::Array<UnityEngine::Transform*>*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLookAt::SetChain)> {
  const MethodInfo* get() {
    static auto* spine = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* head = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* eyes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spine, head, eyes, root});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_spineIsValid
// Il2CppName: get_spineIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_spineIsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_spineIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_spineIsEmpty
// Il2CppName: get_spineIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_spineIsEmpty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_spineIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SolveSpine
// Il2CppName: SolveSpine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::SolveSpine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SolveSpine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_headIsValid
// Il2CppName: get_headIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_headIsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_headIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_headIsEmpty
// Il2CppName: get_headIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_headIsEmpty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_headIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SolveHead
// Il2CppName: SolveHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::SolveHead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SolveHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_eyesIsValid
// Il2CppName: get_eyesIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_eyesIsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_eyesIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::get_eyesIsEmpty
// Il2CppName: get_eyesIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::get_eyesIsEmpty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "get_eyesIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SolveEyes
// Il2CppName: SolveEyes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::SolveEyes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SolveEyes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::GetForwards
// Il2CppName: GetForwards
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Vector3>* (RootMotion::FinalIK::IKSolverLookAt::*)(::Array<UnityEngine::Vector3>*&, UnityEngine::Vector3, UnityEngine::Vector3, int, float)>(&RootMotion::FinalIK::IKSolverLookAt::GetForwards)> {
  const MethodInfo* get() {
    static auto* forwards = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->this_arg;
    static auto* baseForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bones = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* clamp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "GetForwards", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forwards, baseForward, targetForward, bones, clamp});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::SetBones
// Il2CppName: SetBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)(::Array<UnityEngine::Transform*>*, ::Array<RootMotion::FinalIK::IKSolverLookAt::LookAtBone*>*&)>(&RootMotion::FinalIK::IKSolverLookAt::SetBones)> {
  const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    static auto* bones = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverLookAt/LookAtBone"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "SetBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, bones});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::StoreDefaultLocalState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::FixTransforms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverLookAt::*)(::Il2CppString*&)>(&RootMotion::FinalIK::IKSolverLookAt::IsValid)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::GetPoints)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverLookAt::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverLookAt::GetPoint)> {
  const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::OnInitiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverLookAt::*)()>(&RootMotion::FinalIK::IKSolverLookAt::OnUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverLookAt*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverLookAt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
