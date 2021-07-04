// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKMapping
  class IKMapping : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::IKMapping::BoneMap
    class BoneMap;
    // Creating value type constructor for type: IKMapping
    IKMapping() noexcept {}
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    // Offset: 0x1C68964
    bool IsValid(RootMotion::FinalIK::IKSolver* solver, ::Il2CppString*& message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C6896C
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // protected System.Boolean BoneIsValid(UnityEngine.Transform bone, RootMotion.FinalIK.IKSolver solver, ref System.String message, RootMotion.Warning/Logger logger)
    // Offset: 0x1C68970
    bool BoneIsValid(UnityEngine::Transform* bone, RootMotion::FinalIK::IKSolver* solver, ::Il2CppString*& message, RootMotion::Warning::Logger* logger);
    // protected UnityEngine.Vector3 SolveFABRIKJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x1C68A94
    UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float length);
    // public System.Void .ctor()
    // Offset: 0x1C68B9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMapping*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKMapping
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMapping*, "RootMotion.FinalIK", "IKMapping");
// Writing includes for template specializations
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
#include "UnityEngine/Transform.hpp"
#include "RootMotion/Warning_Logger.hpp"
#include "UnityEngine/Vector3.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMapping::*)(RootMotion::FinalIK::IKSolver*, ::Il2CppString*&)>(&RootMotion::FinalIK::IKMapping::IsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::IKSolver*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*&>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::*)(RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMapping::Initiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::IKSolverFullBody*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneIsValid
// Il2CppName: BoneIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMapping::*)(UnityEngine::Transform*, RootMotion::FinalIK::IKSolver*, ::Il2CppString*&, RootMotion::Warning::Logger*)>(&RootMotion::FinalIK::IKMapping::BoneIsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "BoneIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::IKSolver*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*&>(), ::il2cpp_utils::ExtractIndependentType<RootMotion::Warning::Logger*>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::SolveFABRIKJoint
// Il2CppName: SolveFABRIKJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKMapping::*)(UnityEngine::Vector3, UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKMapping::SolveFABRIKJoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "SolveFABRIKJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
