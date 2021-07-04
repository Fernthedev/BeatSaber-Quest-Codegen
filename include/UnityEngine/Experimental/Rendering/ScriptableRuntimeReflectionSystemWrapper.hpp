// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: IScriptableRuntimeReflectionSystem
  class IScriptableRuntimeReflectionSystem;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
  // [RequiredByNativeCodeAttribute] Offset: D92868
  class ScriptableRuntimeReflectionSystemWrapper : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD950AC
    // [DebuggerBrowsableAttribute] Offset: 0xD950AC
    // private UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem <implementation>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* implementation;
    // Field size check
    static_assert(sizeof(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*) == 0x8);
    // Creating value type constructor for type: ScriptableRuntimeReflectionSystemWrapper
    ScriptableRuntimeReflectionSystemWrapper(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* implementation_ = {}) noexcept : implementation{implementation_} {}
    // Creating conversion operator: operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*
    constexpr operator UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*() const noexcept {
      return implementation;
    }
    // UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem get_implementation()
    // Offset: 0x1B98EC0
    UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* get_implementation();
    // System.Void set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem value)
    // Offset: 0x1B98EC8
    void set_implementation(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* value);
    // private System.Void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(out System.Boolean result)
    // Offset: 0x1B98ED0
    void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(bool& result);
    // public System.Void .ctor()
    // Offset: 0x1B98EB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableRuntimeReflectionSystemWrapper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableRuntimeReflectionSystemWrapper*, creationType>()));
    }
  }; // UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRuntimeReflectionSystemWrapper), 16 + sizeof(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)> __UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapperSizeCheck;
  static_assert(sizeof(ScriptableRuntimeReflectionSystemWrapper) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
// Writing includes for template specializations
#include "UnityEngine/Experimental/Rendering/IScriptableRuntimeReflectionSystem.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation
// Il2CppName: get_implementation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem* (UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)()>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::get_implementation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*), "get_implementation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation
// Il2CppName: set_implementation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)(UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*)>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::set_implementation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*), "set_implementation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes
// Il2CppName: Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::*)(bool&)>(&UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper*), "Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
