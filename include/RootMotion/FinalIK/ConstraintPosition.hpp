// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.ConstraintPosition
  class ConstraintPosition : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: ConstraintPosition
    ConstraintPosition(UnityEngine::Vector3 position_ = {}) noexcept : position{position_} {}
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return position;
    }
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1CB09F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintPosition* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintPosition*, creationType>(transform)));
    }
    // public override System.Void UpdateConstraint()
    // Offset: 0x1CB08DC
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x1CB09E8
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintPosition*, creationType>()));
    }
  }; // RootMotion.FinalIK.ConstraintPosition
  #pragma pack(pop)
  static check_size<sizeof(ConstraintPosition), 28 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_ConstraintPositionSizeCheck;
  static_assert(sizeof(ConstraintPosition) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintPosition*, "RootMotion.FinalIK", "ConstraintPosition");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPosition::UpdateConstraint
// Il2CppName: UpdateConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintPosition::*)()>(&RootMotion::FinalIK::ConstraintPosition::UpdateConstraint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ConstraintPosition*), "UpdateConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
