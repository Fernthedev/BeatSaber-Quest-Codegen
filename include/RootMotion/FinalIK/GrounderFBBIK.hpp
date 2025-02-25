// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderFBBIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: E2A224
  // [AddComponentMenu] Offset: E2A224
  class GrounderFBBIK : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: RootMotion::FinalIK::GrounderFBBIK::SpineEffector
    class SpineEffector;
    // [TooltipAttribute] Offset: 0xE2B5CC
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::FullBodyBipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2B604
    // public System.Single spineBend
    // Size: 0x4
    // Offset: 0x48
    float spineBend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2B63C
    // public System.Single spineSpeed
    // Size: 0x4
    // Offset: 0x4C
    float spineSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.GrounderFBBIK/RootMotion.FinalIK.SpineEffector[] spine
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>* spine;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>*) == 0x8);
    // private UnityEngine.Transform[] feet
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* feet;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private UnityEngine.Vector3 spineOffset
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 spineOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstSolve
    // Size: 0x1
    // Offset: 0x6C
    bool firstSolve;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GrounderFBBIK
    GrounderFBBIK(RootMotion::FinalIK::FullBodyBipedIK* ik_ = {}, float spineBend_ = {}, float spineSpeed_ = {}, ::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>* spine_ = {}, ::Array<UnityEngine::Transform*>* feet_ = {}, UnityEngine::Vector3 spineOffset_ = {}, bool firstSolve_ = {}) noexcept : ik{ik_}, spineBend{spineBend_}, spineSpeed{spineSpeed_}, spine{spine_}, feet{feet_}, spineOffset{spineOffset_}, firstSolve{firstSolve_} {}
    // Get instance field reference: public RootMotion.FinalIK.FullBodyBipedIK ik
    RootMotion::FinalIK::FullBodyBipedIK*& dyn_ik();
    // Get instance field reference: public System.Single spineBend
    float& dyn_spineBend();
    // Get instance field reference: public System.Single spineSpeed
    float& dyn_spineSpeed();
    // Get instance field reference: public RootMotion.FinalIK.GrounderFBBIK/RootMotion.FinalIK.SpineEffector[] spine
    ::Array<RootMotion::FinalIK::GrounderFBBIK::SpineEffector*>*& dyn_spine();
    // Get instance field reference: private UnityEngine.Transform[] feet
    ::Array<UnityEngine::Transform*>*& dyn_feet();
    // Get instance field reference: private UnityEngine.Vector3 spineOffset
    UnityEngine::Vector3& dyn_spineOffset();
    // Get instance field reference: private System.Boolean firstSolve
    bool& dyn_firstSolve();
    // private System.Void OpenTutorial()
    // Offset: 0x1CC600C
    void OpenTutorial();
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x1CC6170
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x1CC6208
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1CC64C4
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1CC64D0
    void LateUpdate();
    // private System.Void Initiate()
    // Offset: 0x1CC62C4
    void Initiate();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1CC64DC
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKEffector effector, RootMotion.FinalIK.Grounding/RootMotion.FinalIK.Leg leg)
    // Offset: 0x1CC697C
    void SetLegIK(RootMotion::FinalIK::IKEffector* effector, RootMotion::FinalIK::Grounding::Leg* leg);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1CC6B3C
    void OnDrawGizmosSelected();
    // private System.Void OnDestroy()
    // Offset: 0x1CC6C74
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1CC6D74
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderFBBIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderFBBIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderFBBIK*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x1CC6058
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1CC60A4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x1CC60F0
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
  }; // RootMotion.FinalIK.GrounderFBBIK
  #pragma pack(pop)
  static check_size<sizeof(GrounderFBBIK), 108 + sizeof(bool)> __RootMotion_FinalIK_GrounderFBBIKSizeCheck;
  static_assert(sizeof(GrounderFBBIK) == 0x6D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderFBBIK*, "RootMotion.FinalIK", "GrounderFBBIK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::OpenTutorial
// Il2CppName: OpenTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::OpenTutorial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "OpenTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::IsReadyToInitiate
// Il2CppName: IsReadyToInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::IsReadyToInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "IsReadyToInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::OnSolverUpdate
// Il2CppName: OnSolverUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::OnSolverUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "OnSolverUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::SetLegIK
// Il2CppName: SetLegIK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)(RootMotion::FinalIK::IKEffector*, RootMotion::FinalIK::Grounding::Leg*)>(&RootMotion::FinalIK::GrounderFBBIK::SetLegIK)> {
  static const MethodInfo* get() {
    static auto* effector = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKEffector")->byval_arg;
    static auto* leg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "Grounding/Leg")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "SetLegIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effector, leg});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::GrounderFBBIK::ResetPosition
// Il2CppName: ResetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::GrounderFBBIK::*)()>(&RootMotion::FinalIK::GrounderFBBIK::ResetPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::GrounderFBBIK*), "ResetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
