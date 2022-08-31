// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFABRIKRoot
  class IKSolverFABRIKRoot;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIKRoot
  class FABRIKRoot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FABRIKRoot);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FABRIKRoot*, "RootMotion.FinalIK", "FABRIKRoot");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FABRIKRoot
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 110A7B8
  // [AddComponentMenu] Offset: 110A7B8
  class FABRIKRoot : public ::RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    public:
    // public RootMotion.FinalIK.IKSolverFABRIKRoot solver
    // Size: 0x8
    // Offset: 0x38
    ::RootMotion::FinalIK::IKSolverFABRIKRoot* solver;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverFABRIKRoot*) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.IKSolverFABRIKRoot solver
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverFABRIKRoot*& dyn_solver();
    // private System.Void SupportGroup()
    // Offset: 0x2224354
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x22243A0
    void ASThread();
    // public System.Void .ctor()
    // Offset: 0x22243F4
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FABRIKRoot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FABRIKRoot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FABRIKRoot*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x22242BC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x2224308
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x22243EC
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    ::RootMotion::FinalIK::IKSolver* GetIKSolver();
  }; // RootMotion.FinalIK.FABRIKRoot
  #pragma pack(pop)
  static check_size<sizeof(FABRIKRoot), 56 + sizeof(::RootMotion::FinalIK::IKSolverFABRIKRoot*)> __RootMotion_FinalIK_FABRIKRootSizeCheck;
  static_assert(sizeof(FABRIKRoot) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKRoot::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKRoot::*)()>(&RootMotion::FinalIK::FABRIKRoot::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKRoot*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKRoot::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKRoot::*)()>(&RootMotion::FinalIK::FABRIKRoot::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKRoot*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKRoot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKRoot::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKRoot::*)()>(&RootMotion::FinalIK::FABRIKRoot::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKRoot*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKRoot::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKRoot::*)()>(&RootMotion::FinalIK::FABRIKRoot::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKRoot*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKRoot::GetIKSolver
// Il2CppName: GetIKSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver* (RootMotion::FinalIK::FABRIKRoot::*)()>(&RootMotion::FinalIK::FABRIKRoot::GetIKSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKRoot*), "GetIKSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
