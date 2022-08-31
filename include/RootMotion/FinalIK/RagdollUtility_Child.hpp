// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RagdollUtility
#include "RootMotion/FinalIK/RagdollUtility.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RagdollUtility::Child);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RagdollUtility::Child*, "RootMotion.FinalIK", "RagdollUtility/Child");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Child
  // [TokenAttribute] Offset: FFFFFFFF
  class RagdollUtility::Child : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform t
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* t;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 localPosition
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion localRotation
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Quaternion localRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform t
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_t();
    // Get instance field reference: public UnityEngine.Vector3 localPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localPosition();
    // Get instance field reference: public UnityEngine.Quaternion localRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_localRotation();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1FBFA44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RagdollUtility::Child* New_ctor(::UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RagdollUtility::Child::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RagdollUtility::Child*, creationType>(transform)));
    }
    // public System.Void FixTransform(System.Single weight)
    // Offset: 0x1FC068C
    void FixTransform(float weight);
    // public System.Void StoreLocalState()
    // Offset: 0x1FC063C
    void StoreLocalState();
  }; // RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Child
  #pragma pack(pop)
  static check_size<sizeof(RagdollUtility::Child), 36 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_RagdollUtility_ChildSizeCheck;
  static_assert(sizeof(RagdollUtility::Child) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Child::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Child::FixTransform
// Il2CppName: FixTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::Child::*)(float)>(&RootMotion::FinalIK::RagdollUtility::Child::FixTransform)> {
  static const MethodInfo* get() {
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility::Child*), "FixTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Child::StoreLocalState
// Il2CppName: StoreLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::Child::*)()>(&RootMotion::FinalIK::RagdollUtility::Child::StoreLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility::Child*), "StoreLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
