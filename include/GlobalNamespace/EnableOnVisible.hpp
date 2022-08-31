// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Behaviour because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnableOnVisible
  class EnableOnVisible;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnableOnVisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableOnVisible*, "", "EnableOnVisible");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnableOnVisible
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableOnVisible : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Action`1<System.Boolean> VisibilityChangedEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<bool>* VisibilityChangedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // public UnityEngine.Behaviour[] _components
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Behaviour*> components;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Behaviour*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`1<System.Boolean> VisibilityChangedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_VisibilityChangedEvent();
    // Get instance field reference: public UnityEngine.Behaviour[] _components
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Behaviour*>& dyn__components();
    // public System.Void add_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x15C2B78
    void add_VisibilityChangedEvent(::System::Action_1<bool>* value);
    // public System.Void remove_VisibilityChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x15C2C1C
    void remove_VisibilityChangedEvent(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x15C2EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableOnVisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnableOnVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableOnVisible*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x15C2CC0
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x15C2D30
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x15C2DE8
    void OnBecameInvisible();
  }; // EnableOnVisible
  #pragma pack(pop)
  static check_size<sizeof(EnableOnVisible), 32 + sizeof(::ArrayW<::UnityEngine::Behaviour*>)> __GlobalNamespace_EnableOnVisibleSizeCheck;
  static_assert(sizeof(EnableOnVisible) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::add_VisibilityChangedEvent
// Il2CppName: add_VisibilityChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)(::System::Action_1<bool>*)>(&GlobalNamespace::EnableOnVisible::add_VisibilityChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "add_VisibilityChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::remove_VisibilityChangedEvent
// Il2CppName: remove_VisibilityChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)(::System::Action_1<bool>*)>(&GlobalNamespace::EnableOnVisible::remove_VisibilityChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "remove_VisibilityChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)()>(&GlobalNamespace::EnableOnVisible::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::OnBecameVisible
// Il2CppName: OnBecameVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)()>(&GlobalNamespace::EnableOnVisible::OnBecameVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "OnBecameVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableOnVisible::OnBecameInvisible
// Il2CppName: OnBecameInvisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableOnVisible::*)()>(&GlobalNamespace::EnableOnVisible::OnBecameInvisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableOnVisible*), "OnBecameInvisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
