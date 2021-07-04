// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
#include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
  class DiagnosticEventCollector : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: DiagnosticEventCollector
    DiagnosticEventCollector() noexcept {}
    // Get static field: static private UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector s_Collector
    static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* _get_s_Collector();
    // Set static field: static private UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector s_Collector
    static void _set_s_Collector(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* value);
    // static public System.Guid get_PlayerConnectionGuid()
    // Offset: 0x19C1C38
    static System::Guid get_PlayerConnectionGuid();
    // static public UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector FindOrCreateGlobalInstance()
    // Offset: 0x19C1D44
    static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* FindOrCreateGlobalInstance();
    // static public System.Boolean RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> handler, System.Boolean register, System.Boolean create)
    // Offset: 0x19C1ED8
    static bool RegisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler, bool _register, bool create);
    // public System.Void UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> handler)
    // Offset: 0x19C1FAC
    void UnregisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);
    // public System.Void PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent diagnosticEvent)
    // Offset: 0x19C20B0
    void PostEvent(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);
    // public System.Void .ctor()
    // Offset: 0x19C22C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiagnosticEventCollector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiagnosticEventCollector*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollector");
// Writing includes for template specializations
#include "System/Action_1.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::get_PlayerConnectionGuid
// Il2CppName: get_PlayerConnectionGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::get_PlayerConnectionGuid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*), "get_PlayerConnectionGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::FindOrCreateGlobalInstance
// Il2CppName: FindOrCreateGlobalInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* (*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::FindOrCreateGlobalInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*), "FindOrCreateGlobalInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::RegisterEventHandler
// Il2CppName: RegisterEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, bool, bool)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::RegisterEventHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*), "RegisterEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::UnregisterEventHandler
// Il2CppName: UnregisterEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::*)(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::UnregisterEventHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*), "UnregisterEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::PostEvent
// Il2CppName: PostEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::*)(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::PostEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*), "PostEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
