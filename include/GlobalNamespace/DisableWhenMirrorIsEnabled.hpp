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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Mirror
  class Mirror;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DisableWhenMirrorIsEnabled
  // [TokenAttribute] Offset: FFFFFFFF
  class DisableWhenMirrorIsEnabled : public UnityEngine::MonoBehaviour {
    public:
    // private Mirror _mirror
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Mirror* mirror;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Mirror*) == 0x8);
    // Creating value type constructor for type: DisableWhenMirrorIsEnabled
    DisableWhenMirrorIsEnabled(GlobalNamespace::Mirror* mirror_ = {}) noexcept : mirror{mirror_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Mirror _mirror
    GlobalNamespace::Mirror*& dyn__mirror();
    // public Mirror get_mirror()
    // Offset: 0x10FBD68
    GlobalNamespace::Mirror* get_mirror();
    // public System.Void set_mirror(Mirror value)
    // Offset: 0x10FBD70
    void set_mirror(GlobalNamespace::Mirror* value);
    // protected System.Void Start()
    // Offset: 0x10FBD78
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10FBE58
    void OnDestroy();
    // private System.Void HandleMirrorDidChangeEnabledState(System.Boolean isEnabled)
    // Offset: 0x10FBE20
    void HandleMirrorDidChangeEnabledState(bool isEnabled);
    // public System.Void .ctor()
    // Offset: 0x10FBF34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableWhenMirrorIsEnabled* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisableWhenMirrorIsEnabled::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableWhenMirrorIsEnabled*, creationType>()));
    }
  }; // DisableWhenMirrorIsEnabled
  #pragma pack(pop)
  static check_size<sizeof(DisableWhenMirrorIsEnabled), 24 + sizeof(GlobalNamespace::Mirror*)> __GlobalNamespace_DisableWhenMirrorIsEnabledSizeCheck;
  static_assert(sizeof(DisableWhenMirrorIsEnabled) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableWhenMirrorIsEnabled*, "", "DisableWhenMirrorIsEnabled");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror
// Il2CppName: get_mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::Mirror* (GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&GlobalNamespace::DisableWhenMirrorIsEnabled::get_mirror)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableWhenMirrorIsEnabled*), "get_mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror
// Il2CppName: set_mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableWhenMirrorIsEnabled::*)(GlobalNamespace::Mirror*)>(&GlobalNamespace::DisableWhenMirrorIsEnabled::set_mirror)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "Mirror")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableWhenMirrorIsEnabled*), "set_mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&GlobalNamespace::DisableWhenMirrorIsEnabled::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableWhenMirrorIsEnabled*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableWhenMirrorIsEnabled::*)()>(&GlobalNamespace::DisableWhenMirrorIsEnabled::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableWhenMirrorIsEnabled*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState
// Il2CppName: HandleMirrorDidChangeEnabledState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableWhenMirrorIsEnabled::*)(bool)>(&GlobalNamespace::DisableWhenMirrorIsEnabled::HandleMirrorDidChangeEnabledState)> {
  static const MethodInfo* get() {
    static auto* isEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableWhenMirrorIsEnabled*), "HandleMirrorDidChangeEnabledState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isEnabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisableWhenMirrorIsEnabled::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
