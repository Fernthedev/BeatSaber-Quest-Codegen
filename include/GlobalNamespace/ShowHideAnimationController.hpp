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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ShowHideAnimationController
  class ShowHideAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ShowHideAnimationController::$DeactivateSelfAfterDelayCoroutine$d__9
    class $DeactivateSelfAfterDelayCoroutine$d__9;
    // public UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // public System.Boolean _deactivateSelfAfterDelay
    // Size: 0x1
    // Offset: 0x20
    bool deactivateSelfAfterDelay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: deactivateSelfAfterDelay and: deactivationDelay
    char __padding1[0x3] = {};
    // public System.Single _deactivationDelay
    // Size: 0x4
    // Offset: 0x24
    float deactivationDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _show
    // Size: 0x1
    // Offset: 0x28
    bool show;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: show and: showAnimatorParam
    char __padding3[0x3] = {};
    // private System.Int32 _showAnimatorParam
    // Size: 0x4
    // Offset: 0x2C
    int showAnimatorParam;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ShowHideAnimationController
    ShowHideAnimationController(UnityEngine::Animator* animator_ = {}, bool deactivateSelfAfterDelay_ = {}, float deactivationDelay_ = {}, bool show_ = {}, int showAnimatorParam_ = {}) noexcept : animator{animator_}, deactivateSelfAfterDelay{deactivateSelfAfterDelay_}, deactivationDelay{deactivationDelay_}, show{show_}, showAnimatorParam{showAnimatorParam_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_Show(System.Boolean value)
    // Offset: 0x23891D4
    void set_Show(bool value);
    // public System.Boolean get_Show()
    // Offset: 0x2389334
    bool get_Show();
    // protected System.Void Awake()
    // Offset: 0x238933C
    void Awake();
    // private System.Collections.IEnumerator DeactivateSelfAfterDelayCoroutine(System.Single delay)
    // Offset: 0x23893B8
    System::Collections::IEnumerator* DeactivateSelfAfterDelayCoroutine(float delay);
    // public System.Void .ctor()
    // Offset: 0x2389464
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShowHideAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ShowHideAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShowHideAnimationController*, creationType>()));
    }
  }; // ShowHideAnimationController
  #pragma pack(pop)
  static check_size<sizeof(ShowHideAnimationController), 44 + sizeof(int)> __GlobalNamespace_ShowHideAnimationControllerSizeCheck;
  static_assert(sizeof(ShowHideAnimationController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowHideAnimationController*, "", "ShowHideAnimationController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShowHideAnimationController::set_Show
// Il2CppName: set_Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowHideAnimationController::*)(bool)>(&GlobalNamespace::ShowHideAnimationController::set_Show)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowHideAnimationController*), "set_Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowHideAnimationController::get_Show
// Il2CppName: get_Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ShowHideAnimationController::*)()>(&GlobalNamespace::ShowHideAnimationController::get_Show)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowHideAnimationController*), "get_Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowHideAnimationController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShowHideAnimationController::*)()>(&GlobalNamespace::ShowHideAnimationController::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowHideAnimationController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowHideAnimationController::DeactivateSelfAfterDelayCoroutine
// Il2CppName: DeactivateSelfAfterDelayCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::ShowHideAnimationController::*)(float)>(&GlobalNamespace::ShowHideAnimationController::DeactivateSelfAfterDelayCoroutine)> {
  const MethodInfo* get() {
    static auto* delay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShowHideAnimationController*), "DeactivateSelfAfterDelayCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShowHideAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
