// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Animation
  class Animation;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x33
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.SolverManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SolverManager : public UnityEngine::MonoBehaviour {
    public:
    // [TooltipAttribute] Offset: 0xE2B044
    // public System.Boolean fixTransforms
    // Size: 0x1
    // Offset: 0x18
    bool fixTransforms;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixTransforms and: animator
    char __padding0[0x7] = {};
    // private UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private UnityEngine.Animation legacy
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Animation* legacy;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private System.Boolean updateFrame
    // Size: 0x1
    // Offset: 0x30
    bool updateFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean componentInitiated
    // Size: 0x1
    // Offset: 0x31
    bool componentInitiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean skipSolverUpdate
    // Size: 0x1
    // Offset: 0x32
    bool skipSolverUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SolverManager
    SolverManager(bool fixTransforms_ = {}, UnityEngine::Animator* animator_ = {}, UnityEngine::Animation* legacy_ = {}, bool updateFrame_ = {}, bool componentInitiated_ = {}, bool skipSolverUpdate_ = {}) noexcept : fixTransforms{fixTransforms_}, animator{animator_}, legacy{legacy_}, updateFrame{updateFrame_}, componentInitiated{componentInitiated_}, skipSolverUpdate{skipSolverUpdate_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean fixTransforms
    bool& dyn_fixTransforms();
    // Get instance field reference: private UnityEngine.Animator animator
    UnityEngine::Animator*& dyn_animator();
    // Get instance field reference: private UnityEngine.Animation legacy
    UnityEngine::Animation*& dyn_legacy();
    // Get instance field reference: private System.Boolean updateFrame
    bool& dyn_updateFrame();
    // Get instance field reference: private System.Boolean componentInitiated
    bool& dyn_componentInitiated();
    // Get instance field reference: private System.Boolean skipSolverUpdate
    bool& dyn_skipSolverUpdate();
    // private System.Boolean get_animatePhysics()
    // Offset: 0x1AEE054
    bool get_animatePhysics();
    // private System.Boolean get_isAnimated()
    // Offset: 0x1AEE350
    bool get_isAnimated();
    // public System.Void Disable()
    // Offset: 0x1AEDF1C
    void Disable();
    // protected System.Void InitiateSolver()
    // Offset: 0x1AEDFB4
    void InitiateSolver();
    // protected System.Void UpdateSolver()
    // Offset: 0x1AEDFB8
    void UpdateSolver();
    // protected System.Void FixTransforms()
    // Offset: 0x1AEDFBC
    void FixTransforms();
    // private System.Void OnDisable()
    // Offset: 0x1AEDFC0
    void OnDisable();
    // private System.Void Start()
    // Offset: 0x1AEE050
    void Start();
    // private System.Void Initiate()
    // Offset: 0x1AEDFF8
    void Initiate();
    // private System.Void Update()
    // Offset: 0x1AEE304
    void Update();
    // private System.Void FindAnimatorRecursive(UnityEngine.Transform t, System.Boolean findInChildren)
    // Offset: 0x1AEE144
    void FindAnimatorRecursive(UnityEngine::Transform* t, bool findInChildren);
    // private System.Void FixedUpdate()
    // Offset: 0x1AEE40C
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1AEE468
    void LateUpdate();
    // public System.Void UpdateSolverExternal()
    // Offset: 0x1AEE4C4
    void UpdateSolverExternal();
    // public System.Void .ctor()
    // Offset: 0x1ADD11C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SolverManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::SolverManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SolverManager*, creationType>()));
    }
  }; // RootMotion.SolverManager
  #pragma pack(pop)
  static check_size<sizeof(SolverManager), 50 + sizeof(bool)> __RootMotion_SolverManagerSizeCheck;
  static_assert(sizeof(SolverManager) == 0x33);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::SolverManager*, "RootMotion", "SolverManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::SolverManager::get_animatePhysics
// Il2CppName: get_animatePhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::get_animatePhysics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "get_animatePhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::get_isAnimated
// Il2CppName: get_isAnimated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::get_isAnimated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "get_isAnimated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::InitiateSolver
// Il2CppName: InitiateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::InitiateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::UpdateSolver
// Il2CppName: UpdateSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::UpdateSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::FindAnimatorRecursive
// Il2CppName: FindAnimatorRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)(UnityEngine::Transform*, bool)>(&RootMotion::SolverManager::FindAnimatorRecursive)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* findInChildren = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "FindAnimatorRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, findInChildren});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::UpdateSolverExternal
// Il2CppName: UpdateSolverExternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::SolverManager::*)()>(&RootMotion::SolverManager::UpdateSolverExternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::SolverManager*), "UpdateSolverExternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::SolverManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
