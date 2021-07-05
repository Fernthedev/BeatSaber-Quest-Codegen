// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: ScriptableRuntimeReflectionSystemWrapper
  class ScriptableRuntimeReflectionSystemWrapper;
  // Forward declaring type: IScriptableRuntimeReflectionSystem
  class IScriptableRuntimeReflectionSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
  // [NativeHeaderAttribute] Offset: D9281C
  // [RequiredByNativeCodeAttribute] Offset: D9281C
  class ScriptableRuntimeReflectionSystemSettings : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ScriptableRuntimeReflectionSystemSettings
    ScriptableRuntimeReflectionSystemSettings() noexcept {}
    // Get static field: static private UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper s_Instance
    static UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* _get_s_Instance();
    // Set static field: static private UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper s_Instance
    static void _set_s_Instance(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* value);
    // static private System.Void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem value)
    // Offset: 0x1B98C3C
    static void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);
    // static private UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
    // Offset: 0x1B98DB0
    static UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* get_Internal_ScriptableRuntimeReflectionSystemSettings_instance();
    // static private System.Void ScriptingDirtyReflectionSystemInstance()
    // Offset: 0x1B98E18
    static void ScriptingDirtyReflectionSystemInstance();
    // static private System.Void .cctor()
    // Offset: 0x1B98E4C
    static void _cctor();
  }; // UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system
// Il2CppName: set_Internal_ScriptableRuntimeReflectionSystemSettings_system
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "IScriptableRuntimeReflectionSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*), "set_Internal_ScriptableRuntimeReflectionSystemSettings_system", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance
// Il2CppName: get_Internal_ScriptableRuntimeReflectionSystemSettings_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper* (*)()>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*), "get_Internal_ScriptableRuntimeReflectionSystemSettings_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance
// Il2CppName: ScriptingDirtyReflectionSystemInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*), "ScriptingDirtyReflectionSystemInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
