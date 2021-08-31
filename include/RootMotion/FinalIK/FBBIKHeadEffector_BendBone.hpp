// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.FBBIKHeadEffector
#include "RootMotion/FinalIK/FBBIKHeadEffector.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
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
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBBIKHeadEffector/RootMotion.FinalIK.BendBone
  // [TokenAttribute] Offset: FFFFFFFF
  class FBBIKHeadEffector::BendBone : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xE28A7C
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE28AB4
    // [RangeAttribute] Offset: 0xE28AB4
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: BendBone
    BendBone(UnityEngine::Transform* transform_ = {}, float weight_ = {}, UnityEngine::Quaternion defaultLocalRotation_ = {}) noexcept : transform{transform_}, weight{weight_}, defaultLocalRotation{defaultLocalRotation_} {}
    // Get instance field: public UnityEngine.Transform transform
    UnityEngine::Transform* _get_transform();
    // Set instance field: public UnityEngine.Transform transform
    void _set_transform(UnityEngine::Transform* value);
    // Get instance field: public System.Single weight
    float _get_weight();
    // Set instance field: public System.Single weight
    void _set_weight(float value);
    // Get instance field: private UnityEngine.Quaternion defaultLocalRotation
    UnityEngine::Quaternion _get_defaultLocalRotation();
    // Set instance field: private UnityEngine.Quaternion defaultLocalRotation
    void _set_defaultLocalRotation(UnityEngine::Quaternion value);
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1D36FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector::BendBone* New_ctor(UnityEngine::Transform* transform, float weight) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBBIKHeadEffector::BendBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector::BendBone*, creationType>(transform, weight)));
    }
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1D3470C
    void StoreDefaultLocalState();
    // public System.Void FixTransforms()
    // Offset: 0x1D34B10
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1D36F7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBBIKHeadEffector::BendBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBBIKHeadEffector::BendBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBBIKHeadEffector::BendBone*, creationType>()));
    }
  }; // RootMotion.FinalIK.FBBIKHeadEffector/RootMotion.FinalIK.BendBone
  #pragma pack(pop)
  static check_size<sizeof(FBBIKHeadEffector::BendBone), 28 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_FBBIKHeadEffector_BendBoneSizeCheck;
  static_assert(sizeof(FBBIKHeadEffector::BendBone) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*, "RootMotion.FinalIK", "FBBIKHeadEffector/BendBone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::BendBone::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::BendBone::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FBBIKHeadEffector::BendBone::*)()>(&RootMotion::FinalIK::FBBIKHeadEffector::BendBone::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FBBIKHeadEffector::BendBone*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FBBIKHeadEffector::BendBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
