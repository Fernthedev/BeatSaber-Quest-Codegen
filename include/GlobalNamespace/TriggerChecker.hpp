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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TriggerChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class TriggerChecker : public UnityEngine::MonoBehaviour {
    public:
    // public System.Action TriggerCheckerOnEnterEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* TriggerCheckerOnEnterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action TriggerCheckerOnExitEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* TriggerCheckerOnExitEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Action TriggerCheckerOnStayEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* TriggerCheckerOnStayEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: TriggerChecker
    TriggerChecker(System::Action* TriggerCheckerOnEnterEvent_ = {}, System::Action* TriggerCheckerOnExitEvent_ = {}, System::Action* TriggerCheckerOnStayEvent_ = {}) noexcept : TriggerCheckerOnEnterEvent{TriggerCheckerOnEnterEvent_}, TriggerCheckerOnExitEvent{TriggerCheckerOnExitEvent_}, TriggerCheckerOnStayEvent{TriggerCheckerOnStayEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Action TriggerCheckerOnEnterEvent
    System::Action*& dyn_TriggerCheckerOnEnterEvent();
    // Get instance field reference: public System.Action TriggerCheckerOnExitEvent
    System::Action*& dyn_TriggerCheckerOnExitEvent();
    // Get instance field reference: public System.Action TriggerCheckerOnStayEvent
    System::Action*& dyn_TriggerCheckerOnStayEvent();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x2396424
    void OnTriggerEnter(UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x2396438
    void OnTriggerExit(UnityEngine::Collider* other);
    // private System.Void OnTriggerStay(UnityEngine.Collider other)
    // Offset: 0x239644C
    void OnTriggerStay(UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x2396460
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TriggerChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TriggerChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TriggerChecker*, creationType>()));
    }
  }; // TriggerChecker
  #pragma pack(pop)
  static check_size<sizeof(TriggerChecker), 40 + sizeof(System::Action*)> __GlobalNamespace_TriggerCheckerSizeCheck;
  static_assert(sizeof(TriggerChecker) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TriggerChecker*, "", "TriggerChecker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TriggerChecker::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TriggerChecker::*)(UnityEngine::Collider*)>(&GlobalNamespace::TriggerChecker::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TriggerChecker*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TriggerChecker::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TriggerChecker::*)(UnityEngine::Collider*)>(&GlobalNamespace::TriggerChecker::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TriggerChecker*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TriggerChecker::OnTriggerStay
// Il2CppName: OnTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TriggerChecker::*)(UnityEngine::Collider*)>(&GlobalNamespace::TriggerChecker::OnTriggerStay)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TriggerChecker*), "OnTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TriggerChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
