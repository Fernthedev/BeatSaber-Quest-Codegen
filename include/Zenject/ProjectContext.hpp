// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
// Including type: Zenject.ReflectionBakingCoverageModes
#include "Zenject/ReflectionBakingCoverageModes.hpp"
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
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectSettings
  class ZenjectSettings;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: MonoBehaviour because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ProjectContext
  // [TokenAttribute] Offset: FFFFFFFF
  class ProjectContext : public Zenject::Context {
    public:
    // private System.Action PreInstall
    // Size: 0x8
    // Offset: 0x40
    System::Action* PreInstall;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action PostInstall
    // Size: 0x8
    // Offset: 0x48
    System::Action* PostInstall;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action PreResolve
    // Size: 0x8
    // Offset: 0x50
    System::Action* PreResolve;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action PostResolve
    // Size: 0x8
    // Offset: 0x58
    System::Action* PostResolve;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [TooltipAttribute] Offset: 0xDFE6BC
    // private System.Boolean _parentNewObjectsUnderContext
    // Size: 0x1
    // Offset: 0x60
    bool parentNewObjectsUnderContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: parentNewObjectsUnderContext and: editorReflectionBakingCoverageMode
    char __padding4[0x3] = {};
    // private Zenject.ReflectionBakingCoverageModes _editorReflectionBakingCoverageMode
    // Size: 0x4
    // Offset: 0x64
    Zenject::ReflectionBakingCoverageModes editorReflectionBakingCoverageMode;
    // Field size check
    static_assert(sizeof(Zenject::ReflectionBakingCoverageModes) == 0x4);
    // private Zenject.ReflectionBakingCoverageModes _buildsReflectionBakingCoverageMode
    // Size: 0x4
    // Offset: 0x68
    Zenject::ReflectionBakingCoverageModes buildsReflectionBakingCoverageMode;
    // Field size check
    static_assert(sizeof(Zenject::ReflectionBakingCoverageModes) == 0x4);
    // Padding between fields: buildsReflectionBakingCoverageMode and: settings
    char __padding6[0x4] = {};
    // private Zenject.ZenjectSettings _settings
    // Size: 0x8
    // Offset: 0x70
    Zenject::ZenjectSettings* settings;
    // Field size check
    static_assert(sizeof(Zenject::ZenjectSettings*) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x78
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: ProjectContext
    ProjectContext(System::Action* PreInstall_ = {}, System::Action* PostInstall_ = {}, System::Action* PreResolve_ = {}, System::Action* PostResolve_ = {}, bool parentNewObjectsUnderContext_ = {}, Zenject::ReflectionBakingCoverageModes editorReflectionBakingCoverageMode_ = {}, Zenject::ReflectionBakingCoverageModes buildsReflectionBakingCoverageMode_ = {}, Zenject::ZenjectSettings* settings_ = {}, Zenject::DiContainer* container_ = {}) noexcept : PreInstall{PreInstall_}, PostInstall{PostInstall_}, PreResolve{PreResolve_}, PostResolve{PostResolve_}, parentNewObjectsUnderContext{parentNewObjectsUnderContext_}, editorReflectionBakingCoverageMode{editorReflectionBakingCoverageMode_}, buildsReflectionBakingCoverageMode{buildsReflectionBakingCoverageMode_}, settings{settings_}, container{container_} {}
    // static field const value: static public System.String ProjectContextResourcePath
    static constexpr const char* ProjectContextResourcePath = "ProjectContext";
    // Get static field: static public System.String ProjectContextResourcePath
    static ::Il2CppString* _get_ProjectContextResourcePath();
    // Set static field: static public System.String ProjectContextResourcePath
    static void _set_ProjectContextResourcePath(::Il2CppString* value);
    // static field const value: static public System.String ProjectContextResourcePathOld
    static constexpr const char* ProjectContextResourcePathOld = "ProjectCompositionRoot";
    // Get static field: static public System.String ProjectContextResourcePathOld
    static ::Il2CppString* _get_ProjectContextResourcePathOld();
    // Set static field: static public System.String ProjectContextResourcePathOld
    static void _set_ProjectContextResourcePathOld(::Il2CppString* value);
    // Get static field: static private Zenject.ProjectContext _instance
    static Zenject::ProjectContext* _get__instance();
    // Set static field: static private Zenject.ProjectContext _instance
    static void _set__instance(Zenject::ProjectContext* value);
    // Get static field: static private System.Boolean <ValidateOnNextRun>k__BackingField
    static bool _get_$ValidateOnNextRun$k__BackingField();
    // Set static field: static private System.Boolean <ValidateOnNextRun>k__BackingField
    static void _set_$ValidateOnNextRun$k__BackingField(bool value);
    // Get instance field reference: private System.Action PreInstall
    System::Action*& dyn_PreInstall();
    // Get instance field reference: private System.Action PostInstall
    System::Action*& dyn_PostInstall();
    // Get instance field reference: private System.Action PreResolve
    System::Action*& dyn_PreResolve();
    // Get instance field reference: private System.Action PostResolve
    System::Action*& dyn_PostResolve();
    // Get instance field reference: private System.Boolean _parentNewObjectsUnderContext
    bool& dyn__parentNewObjectsUnderContext();
    // Get instance field reference: private Zenject.ReflectionBakingCoverageModes _editorReflectionBakingCoverageMode
    Zenject::ReflectionBakingCoverageModes& dyn__editorReflectionBakingCoverageMode();
    // Get instance field reference: private Zenject.ReflectionBakingCoverageModes _buildsReflectionBakingCoverageMode
    Zenject::ReflectionBakingCoverageModes& dyn__buildsReflectionBakingCoverageMode();
    // Get instance field reference: private Zenject.ZenjectSettings _settings
    Zenject::ZenjectSettings*& dyn__settings();
    // Get instance field reference: private Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // static public System.Boolean get_HasInstance()
    // Offset: 0x1717D28
    static bool get_HasInstance();
    // static public Zenject.ProjectContext get_Instance()
    // Offset: 0x1717DA4
    static Zenject::ProjectContext* get_Instance();
    // static public System.Boolean get_ValidateOnNextRun()
    // Offset: 0x17180AC
    static bool get_ValidateOnNextRun();
    // static public System.Void set_ValidateOnNextRun(System.Boolean value)
    // Offset: 0x17180FC
    static void set_ValidateOnNextRun(bool value);
    // public System.Boolean get_ParentNewObjectsUnderContext()
    // Offset: 0x17186EC
    bool get_ParentNewObjectsUnderContext();
    // public System.Void set_ParentNewObjectsUnderContext(System.Boolean value)
    // Offset: 0x17186F4
    void set_ParentNewObjectsUnderContext(bool value);
    // public System.Void add_PreInstall(System.Action value)
    // Offset: 0x1717800
    void add_PreInstall(System::Action* value);
    // public System.Void remove_PreInstall(System.Action value)
    // Offset: 0x17178A4
    void remove_PreInstall(System::Action* value);
    // public System.Void add_PostInstall(System.Action value)
    // Offset: 0x1717948
    void add_PostInstall(System::Action* value);
    // public System.Void remove_PostInstall(System.Action value)
    // Offset: 0x17179EC
    void remove_PostInstall(System::Action* value);
    // public System.Void add_PreResolve(System.Action value)
    // Offset: 0x1717A90
    void add_PreResolve(System::Action* value);
    // public System.Void remove_PreResolve(System.Action value)
    // Offset: 0x1717B34
    void remove_PreResolve(System::Action* value);
    // public System.Void add_PostResolve(System.Action value)
    // Offset: 0x1717BD8
    void add_PostResolve(System::Action* value);
    // public System.Void remove_PostResolve(System.Action value)
    // Offset: 0x1717C7C
    void remove_PostResolve(System::Action* value);
    // static public UnityEngine.GameObject TryGetPrefab()
    // Offset: 0x1718204
    static UnityEngine::GameObject* TryGetPrefab();
    // static private System.Void InstantiateAndInitialize()
    // Offset: 0x1717E4C
    static void InstantiateAndInitialize();
    // public System.Void EnsureIsInitialized()
    // Offset: 0x1718700
    void EnsureIsInitialized();
    // public System.Void Awake()
    // Offset: 0x1718704
    void Awake();
    // private System.Void Initialize()
    // Offset: 0x1718370
    void Initialize();
    // private System.Void InstallBindings(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableMonoBehaviours)
    // Offset: 0x1718820
    void InstallBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);
    // public override Zenject.DiContainer get_Container()
    // Offset: 0x1717D20
    // Implemented from: Zenject.Context
    // Base method: Zenject.DiContainer Context::get_Container()
    Zenject::DiContainer* get_Container();
    // public System.Void .ctor()
    // Offset: 0x1718B48
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProjectContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProjectContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProjectContext*, creationType>()));
    }
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0x1718154
    // Implemented from: Zenject.Context
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Context::GetRootGameObjects()
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects();
    // protected override System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0x1718AD8
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours);
  }; // Zenject.ProjectContext
  #pragma pack(pop)
  static check_size<sizeof(ProjectContext), 120 + sizeof(Zenject::DiContainer*)> __Zenject_ProjectContextSizeCheck;
  static_assert(sizeof(ProjectContext) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProjectContext*, "Zenject", "ProjectContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ProjectContext::get_HasInstance
// Il2CppName: get_HasInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Zenject::ProjectContext::get_HasInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "get_HasInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ProjectContext* (*)()>(&Zenject::ProjectContext::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::get_ValidateOnNextRun
// Il2CppName: get_ValidateOnNextRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Zenject::ProjectContext::get_ValidateOnNextRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "get_ValidateOnNextRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::set_ValidateOnNextRun
// Il2CppName: set_ValidateOnNextRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Zenject::ProjectContext::set_ValidateOnNextRun)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "set_ValidateOnNextRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::get_ParentNewObjectsUnderContext
// Il2CppName: get_ParentNewObjectsUnderContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ProjectContext::*)()>(&Zenject::ProjectContext::get_ParentNewObjectsUnderContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "get_ParentNewObjectsUnderContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::set_ParentNewObjectsUnderContext
// Il2CppName: set_ParentNewObjectsUnderContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(bool)>(&Zenject::ProjectContext::set_ParentNewObjectsUnderContext)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "set_ParentNewObjectsUnderContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::add_PreInstall
// Il2CppName: add_PreInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::add_PreInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "add_PreInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::remove_PreInstall
// Il2CppName: remove_PreInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::remove_PreInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "remove_PreInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::add_PostInstall
// Il2CppName: add_PostInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::add_PostInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "add_PostInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::remove_PostInstall
// Il2CppName: remove_PostInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::remove_PostInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "remove_PostInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::add_PreResolve
// Il2CppName: add_PreResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::add_PreResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "add_PreResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::remove_PreResolve
// Il2CppName: remove_PreResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::remove_PreResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "remove_PreResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::add_PostResolve
// Il2CppName: add_PostResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::add_PostResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "add_PostResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::remove_PostResolve
// Il2CppName: remove_PostResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Action*)>(&Zenject::ProjectContext::remove_PostResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "remove_PostResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::TryGetPrefab
// Il2CppName: TryGetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)()>(&Zenject::ProjectContext::TryGetPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "TryGetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::InstantiateAndInitialize
// Il2CppName: InstantiateAndInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::ProjectContext::InstantiateAndInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "InstantiateAndInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::EnsureIsInitialized
// Il2CppName: EnsureIsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)()>(&Zenject::ProjectContext::EnsureIsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "EnsureIsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)()>(&Zenject::ProjectContext::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)()>(&Zenject::ProjectContext::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::ProjectContext::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* injectableMonoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectableMonoBehaviours});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::ProjectContext::*)()>(&Zenject::ProjectContext::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ProjectContext::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* (Zenject::ProjectContext::*)()>(&Zenject::ProjectContext::GetRootGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProjectContext::GetInjectableMonoBehaviours
// Il2CppName: GetInjectableMonoBehaviours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProjectContext::*)(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::ProjectContext::GetInjectableMonoBehaviours)> {
  static const MethodInfo* get() {
    static auto* monoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProjectContext*), "GetInjectableMonoBehaviours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monoBehaviours});
  }
};
