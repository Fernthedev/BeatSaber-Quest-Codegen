// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
#include "UnityEngine/ResourceManagement/Util/ComponentSingleton_1.hpp"
// Including type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
#include "UnityEngine/ResourceManagement/Diagnostics/DiagnosticEvent.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DelegateList`1<T>
  template<typename T>
  class DelegateList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Diagnostics
namespace UnityEngine::ResourceManagement::Diagnostics {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
  class DiagnosticEventCollectorSingleton : public UnityEngine::ResourceManagement::Util::ComponentSingleton_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*> {
    public:
    // Nested type: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::$$c
    class $$c;
    // System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> m_CreatedEvents
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_CreatedEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*) == 0x8);
    // System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> m_UnhandledEvents
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_UnhandledEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*) == 0x8);
    // DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> s_EventHandlers
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* s_EventHandlers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*) == 0x8);
    // private System.Single m_lastTickSent
    // Size: 0x4
    // Offset: 0x30
    float m_lastTickSent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_lastFrame
    // Size: 0x4
    // Offset: 0x34
    int m_lastFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single fpsAvg
    // Size: 0x4
    // Offset: 0x38
    float fpsAvg;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: DiagnosticEventCollectorSingleton
    DiagnosticEventCollectorSingleton(System::Collections::Generic::Dictionary_2<int, UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_CreatedEvents_ = {}, System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* m_UnhandledEvents_ = {}, GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* s_EventHandlers_ = {}, float m_lastTickSent_ = {}, int m_lastFrame_ = {}, float fpsAvg_ = {}) noexcept : m_CreatedEvents{m_CreatedEvents_}, m_UnhandledEvents{m_UnhandledEvents_}, s_EventHandlers{s_EventHandlers_}, m_lastTickSent{m_lastTickSent_}, m_lastFrame{m_lastFrame_}, fpsAvg{fpsAvg_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Guid s_editorConnectionGuid
    static System::Guid _get_s_editorConnectionGuid();
    // Set static field: static private System.Guid s_editorConnectionGuid
    static void _set_s_editorConnectionGuid(System::Guid value);
    // static public System.Guid get_PlayerConnectionGuid()
    // Offset: 0x19C1C3C
    static System::Guid get_PlayerConnectionGuid();
    // static public System.Boolean RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> handler, System.Boolean register, System.Boolean create)
    // Offset: 0x19C1EE4
    static bool RegisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler, bool _register, bool create);
    // System.Void RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> handler)
    // Offset: 0x19C2314
    void RegisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);
    // public System.Void UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> handler)
    // Offset: 0x19C2008
    void UnregisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* handler);
    // public System.Void PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent diagnosticEvent)
    // Offset: 0x19C2138
    void PostEvent(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent);
    // private System.Void Update()
    // Offset: 0x19C27EC
    void Update();
    // protected override System.String GetGameObjectName()
    // Offset: 0x19C22CC
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.String ComponentSingleton_1::GetGameObjectName()
    ::Il2CppString* GetGameObjectName();
    // private System.Void Awake()
    // Offset: 0x19C2704
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.Void ComponentSingleton_1::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x19C2978
    // Implemented from: UnityEngine.ResourceManagement.Util.ComponentSingleton`1
    // Base method: System.Void ComponentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiagnosticEventCollectorSingleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiagnosticEventCollectorSingleton*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::get_PlayerConnectionGuid
// Il2CppName: get_PlayerConnectionGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::get_PlayerConnectionGuid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "get_PlayerConnectionGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::RegisterEventHandler
// Il2CppName: RegisterEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*, bool, bool)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::RegisterEventHandler)> {
  const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent")})->byval_arg;
    static auto* _register = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* create = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "RegisterEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler, _register, create});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::RegisterEventHandler
// Il2CppName: RegisterEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::*)(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::RegisterEventHandler)> {
  const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "RegisterEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::UnregisterEventHandler
// Il2CppName: UnregisterEventHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::*)(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::UnregisterEventHandler)> {
  const MethodInfo* get() {
    static auto* handler = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "UnregisterEventHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handler});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::PostEvent
// Il2CppName: PostEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::*)(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent)>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::PostEvent)> {
  const MethodInfo* get() {
    static auto* diagnosticEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "PostEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{diagnosticEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::GetGameObjectName
// Il2CppName: GetGameObjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::GetGameObjectName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "GetGameObjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::*)()>(&UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
