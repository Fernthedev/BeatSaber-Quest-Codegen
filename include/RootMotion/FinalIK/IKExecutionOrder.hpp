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
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKExecutionOrder
  class IKExecutionOrder : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xE08BB8
    // public RootMotion.FinalIK.IK[] IKComponents
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::IK*>* IKComponents;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IK*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE08BF0
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private System.Boolean fixedFrame
    // Size: 0x1
    // Offset: 0x28
    bool fixedFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IKExecutionOrder
    IKExecutionOrder(::Array<RootMotion::FinalIK::IK*>* IKComponents_ = {}, UnityEngine::Animator* animator_ = {}, bool fixedFrame_ = {}) noexcept : IKComponents{IKComponents_}, animator{animator_}, fixedFrame{fixedFrame_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Boolean get_animatePhysics()
    // Offset: 0x1C686CC
    bool get_animatePhysics();
    // private System.Void Start()
    // Offset: 0x1C68768
    void Start();
    // private System.Void Update()
    // Offset: 0x1C687D8
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1C68894
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1C688D0
    void LateUpdate();
    // private System.Void FixTransforms()
    // Offset: 0x1C6880C
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1C6895C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKExecutionOrder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKExecutionOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKExecutionOrder*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKExecutionOrder
  #pragma pack(pop)
  static check_size<sizeof(IKExecutionOrder), 40 + sizeof(bool)> __RootMotion_FinalIK_IKExecutionOrderSizeCheck;
  static_assert(sizeof(IKExecutionOrder) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKExecutionOrder*, "RootMotion.FinalIK", "IKExecutionOrder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::get_animatePhysics
// Il2CppName: get_animatePhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::get_animatePhysics)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "get_animatePhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::FixedUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::FixTransforms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
