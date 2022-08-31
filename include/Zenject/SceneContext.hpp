// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.RunnableContext
#include "Zenject/RunnableContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SceneDecoratorContext
  class SceneDecoratorContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: MonoBehaviour because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContext*, "Zenject", "SceneContext");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0xB2
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneContext : public ::Zenject::RunnableContext {
    public:
    // Writing base type padding for base size: 0x42 to desired offset: 0x48
    char ___base_padding[0x6] = {};
    // Nested type: ::Zenject::SceneContext::$$c__DisplayClass49_0
    class $$c__DisplayClass49_0;
    // Nested type: ::Zenject::SceneContext::$$c
    class $$c;
    // Nested type: ::Zenject::SceneContext::$$c__DisplayClass51_0
    class $$c__DisplayClass51_0;
    public:
    // private System.Action PreInstall
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* PreInstall;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action PostInstall
    // Size: 0x8
    // Offset: 0x50
    ::System::Action* PostInstall;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action PreResolve
    // Size: 0x8
    // Offset: 0x58
    ::System::Action* PreResolve;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action PostResolve
    // Size: 0x8
    // Offset: 0x60
    ::System::Action* PostResolve;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPreInstall
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Events::UnityEvent* OnPreInstall;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPostInstall
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Events::UnityEvent* OnPostInstall;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPreResolve
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::Events::UnityEvent* OnPreResolve;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent OnPostResolve
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Events::UnityEvent* OnPostResolve;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10B6728
    // [FormerlySerializedAsAttribute] Offset: 0x10B6728
    // [TooltipAttribute] Offset: 0x10B6728
    // private System.Boolean _parentNewObjectsUnderSceneContext
    // Size: 0x1
    // Offset: 0x88
    bool parentNewObjectsUnderSceneContext;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: parentNewObjectsUnderSceneContext and: contractNames
    char __padding8[0x7] = {};
    // [TooltipAttribute] Offset: 0x10B67BC
    // private System.Collections.Generic.List`1<System.String> _contractNames
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::List_1<::StringW>* contractNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // [TooltipAttribute] Offset: 0x10B6808
    // private System.Collections.Generic.List`1<System.String> _parentContractNames
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::List_1<::StringW>* parentContractNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0xA0
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> _decoratorContexts
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* decoratorContexts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>*) == 0x8);
    // private System.Boolean _hasInstalled
    // Size: 0x1
    // Offset: 0xB0
    bool hasInstalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasResolved
    // Size: 0x1
    // Offset: 0xB1
    bool hasResolved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsEarlyInstallMethod
    static ::System::Action_1<::Zenject::DiContainer*>* _get_ExtraBindingsEarlyInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsEarlyInstallMethod
    static void _set_ExtraBindingsEarlyInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsInstallMethod
    static ::System::Action_1<::Zenject::DiContainer*>* _get_ExtraBindingsInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsInstallMethod
    static void _set_ExtraBindingsInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsLateInstallMethod
    static ::System::Action_1<::Zenject::DiContainer*>* _get_ExtraBindingsLateInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraBindingsLateInstallMethod
    static void _set_ExtraBindingsLateInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);
    // Get static field: static public System.Action`1<Zenject.DiContainer> ExtraPostInstallMethod
    static ::System::Action_1<::Zenject::DiContainer*>* _get_ExtraPostInstallMethod();
    // Set static field: static public System.Action`1<Zenject.DiContainer> ExtraPostInstallMethod
    static void _set_ExtraPostInstallMethod(::System::Action_1<::Zenject::DiContainer*>* value);
    // Get static field: static public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> ParentContainers
    static ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* _get_ParentContainers();
    // Set static field: static public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> ParentContainers
    static void _set_ParentContainers(::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* value);
    // Get instance field reference: private System.Action PreInstall
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_PreInstall();
    // Get instance field reference: private System.Action PostInstall
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_PostInstall();
    // Get instance field reference: private System.Action PreResolve
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_PreResolve();
    // Get instance field reference: private System.Action PostResolve
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_PostResolve();
    // Get instance field reference: public UnityEngine.Events.UnityEvent OnPreInstall
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_OnPreInstall();
    // Get instance field reference: public UnityEngine.Events.UnityEvent OnPostInstall
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_OnPostInstall();
    // Get instance field reference: public UnityEngine.Events.UnityEvent OnPreResolve
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_OnPreResolve();
    // Get instance field reference: public UnityEngine.Events.UnityEvent OnPostResolve
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_OnPostResolve();
    // Get instance field reference: private System.Boolean _parentNewObjectsUnderSceneContext
    [[deprecated("Use field access instead!")]] bool& dyn__parentNewObjectsUnderSceneContext();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _contractNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn__contractNames();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _parentContractNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn__parentContractNames();
    // Get instance field reference: private Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> _decoratorContexts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>*& dyn__decoratorContexts();
    // Get instance field reference: private System.Boolean _hasInstalled
    [[deprecated("Use field access instead!")]] bool& dyn__hasInstalled();
    // Get instance field reference: private System.Boolean _hasResolved
    [[deprecated("Use field access instead!")]] bool& dyn__hasResolved();
    // public System.Boolean get_HasResolved()
    // Offset: 0x1C12B4C
    bool get_HasResolved();
    // public System.Boolean get_HasInstalled()
    // Offset: 0x1C12B54
    bool get_HasInstalled();
    // public System.Boolean get_IsValidating()
    // Offset: 0x1C12B5C
    bool get_IsValidating();
    // public System.Collections.Generic.IEnumerable`1<System.String> get_ContractNames()
    // Offset: 0x1C12B8C
    ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ContractNames();
    // public System.Void set_ContractNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0x1C12B94
    void set_ContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);
    // public System.Collections.Generic.IEnumerable`1<System.String> get_ParentContractNames()
    // Offset: 0x1C12C14
    ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ParentContractNames();
    // public System.Void set_ParentContractNames(System.Collections.Generic.IEnumerable`1<System.String> value)
    // Offset: 0x1C12C9C
    void set_ParentContractNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value);
    // public System.Boolean get_ParentNewObjectsUnderSceneContext()
    // Offset: 0x1C12D00
    bool get_ParentNewObjectsUnderSceneContext();
    // public System.Void set_ParentNewObjectsUnderSceneContext(System.Boolean value)
    // Offset: 0x1C12D08
    void set_ParentNewObjectsUnderSceneContext(bool value);
    // public System.Void add_PreInstall(System.Action value)
    // Offset: 0x1C12624
    void add_PreInstall(::System::Action* value);
    // public System.Void remove_PreInstall(System.Action value)
    // Offset: 0x1C126C8
    void remove_PreInstall(::System::Action* value);
    // public System.Void add_PostInstall(System.Action value)
    // Offset: 0x1C1276C
    void add_PostInstall(::System::Action* value);
    // public System.Void remove_PostInstall(System.Action value)
    // Offset: 0x1C12810
    void remove_PostInstall(::System::Action* value);
    // public System.Void add_PreResolve(System.Action value)
    // Offset: 0x1C128B4
    void add_PreResolve(::System::Action* value);
    // public System.Void remove_PreResolve(System.Action value)
    // Offset: 0x1C12958
    void remove_PreResolve(::System::Action* value);
    // public System.Void add_PostResolve(System.Action value)
    // Offset: 0x1C129FC
    void add_PostResolve(::System::Action* value);
    // public System.Void remove_PostResolve(System.Action value)
    // Offset: 0x1C12AA0
    void remove_PostResolve(::System::Action* value);
    // public System.Void Awake()
    // Offset: 0x1C12D14
    void Awake();
    // public System.Void Validate()
    // Offset: 0x1C12D18
    void Validate();
    // private System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> GetParentContainers()
    // Offset: 0x1C132B8
    ::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* GetParentContainers();
    // private System.Collections.Generic.List`1<Zenject.SceneDecoratorContext> LookupDecoratorContexts()
    // Offset: 0x1C137F8
    ::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* LookupDecoratorContexts();
    // public System.Void Install()
    // Offset: 0x1C12D50
    void Install();
    // public System.Void Resolve()
    // Offset: 0x1C131B8
    void Resolve();
    // private System.Void InstallBindings(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableMonoBehaviours)
    // Offset: 0x1C13A9C
    void InstallBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);
    // static public Zenject.SceneContext Create()
    // Offset: 0x1C14094
    static ::Zenject::SceneContext* Create();
    // private System.Boolean <LookupDecoratorContexts>b__50_2(Zenject.SceneDecoratorContext decoratorContext)
    // Offset: 0x1C14208
    bool $LookupDecoratorContexts$b__50_2(::Zenject::SceneDecoratorContext* decoratorContext);
    // public override Zenject.DiContainer get_Container()
    // Offset: 0x1C12B44
    // Implemented from: Zenject.Context
    // Base method: Zenject.DiContainer Context::get_Container()
    ::Zenject::DiContainer* get_Container();
    // public System.Void .ctor()
    // Offset: 0x1C14128
    // Implemented from: Zenject.RunnableContext
    // Base method: System.Void RunnableContext::.ctor()
    // Base method: System.Void Context::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext*, creationType>()));
    }
    // protected override System.Void RunInternal()
    // Offset: 0x1C13258
    // Implemented from: Zenject.RunnableContext
    // Base method: System.Void RunnableContext::RunInternal()
    void RunInternal();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0x1C1328C
    // Implemented from: Zenject.Context
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Context::GetRootGameObjects()
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects();
    // protected override System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0x1C1404C
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* monoBehaviours);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1C14274
    // Implemented from: Zenject.RunnableContext
    // Base method: Zenject.InjectTypeInfo RunnableContext::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo Context::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SceneContext
  #pragma pack(pop)
  static check_size<sizeof(SceneContext), 177 + sizeof(bool)> __Zenject_SceneContextSizeCheck;
  static_assert(sizeof(SceneContext) == 0xB2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContext::get_HasResolved
// Il2CppName: get_HasResolved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_HasResolved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_HasResolved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::get_HasInstalled
// Il2CppName: get_HasInstalled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_HasInstalled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_HasInstalled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::get_IsValidating
// Il2CppName: get_IsValidating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_IsValidating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_IsValidating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::get_ContractNames
// Il2CppName: get_ContractNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_ContractNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_ContractNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::set_ContractNames
// Il2CppName: set_ContractNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&Zenject::SceneContext::set_ContractNames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "set_ContractNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::get_ParentContractNames
// Il2CppName: get_ParentContractNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_ParentContractNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_ParentContractNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::set_ParentContractNames
// Il2CppName: set_ParentContractNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&Zenject::SceneContext::set_ParentContractNames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "set_ParentContractNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::get_ParentNewObjectsUnderSceneContext
// Il2CppName: get_ParentNewObjectsUnderSceneContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_ParentNewObjectsUnderSceneContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_ParentNewObjectsUnderSceneContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::set_ParentNewObjectsUnderSceneContext
// Il2CppName: set_ParentNewObjectsUnderSceneContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(bool)>(&Zenject::SceneContext::set_ParentNewObjectsUnderSceneContext)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "set_ParentNewObjectsUnderSceneContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::add_PreInstall
// Il2CppName: add_PreInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::add_PreInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "add_PreInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::remove_PreInstall
// Il2CppName: remove_PreInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::remove_PreInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "remove_PreInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::add_PostInstall
// Il2CppName: add_PostInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::add_PostInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "add_PostInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::remove_PostInstall
// Il2CppName: remove_PostInstall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::remove_PostInstall)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "remove_PostInstall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::add_PreResolve
// Il2CppName: add_PreResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::add_PreResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "add_PreResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::remove_PreResolve
// Il2CppName: remove_PreResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::remove_PreResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "remove_PreResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::add_PostResolve
// Il2CppName: add_PostResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::add_PostResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "add_PostResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::remove_PostResolve
// Il2CppName: remove_PostResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Action*)>(&Zenject::SceneContext::remove_PostResolve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "remove_PostResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)()>(&Zenject::SceneContext::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)()>(&Zenject::SceneContext::Validate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::GetParentContainers
// Il2CppName: GetParentContainers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::DiContainer*>* (Zenject::SceneContext::*)()>(&Zenject::SceneContext::GetParentContainers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "GetParentContainers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::LookupDecoratorContexts
// Il2CppName: LookupDecoratorContexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Zenject::SceneDecoratorContext*>* (Zenject::SceneContext::*)()>(&Zenject::SceneContext::LookupDecoratorContexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "LookupDecoratorContexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::Install
// Il2CppName: Install
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)()>(&Zenject::SceneContext::Install)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "Install", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)()>(&Zenject::SceneContext::Resolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*)>(&Zenject::SceneContext::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* injectableMonoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectableMonoBehaviours});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::SceneContext* (*)()>(&Zenject::SceneContext::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$LookupDecoratorContexts$b__50_2
// Il2CppName: <LookupDecoratorContexts>b__50_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::*)(::Zenject::SceneDecoratorContext*)>(&Zenject::SceneContext::$LookupDecoratorContexts$b__50_2)> {
  static const MethodInfo* get() {
    static auto* decoratorContext = &::il2cpp_utils::GetClassFromName("Zenject", "SceneDecoratorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "<LookupDecoratorContexts>b__50_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decoratorContext});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (Zenject::SceneContext::*)()>(&Zenject::SceneContext::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SceneContext::RunInternal
// Il2CppName: RunInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)()>(&Zenject::SceneContext::RunInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "RunInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* (Zenject::SceneContext::*)()>(&Zenject::SceneContext::GetRootGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::GetInjectableMonoBehaviours
// Il2CppName: GetInjectableMonoBehaviours
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContext::*)(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*)>(&Zenject::SceneContext::GetInjectableMonoBehaviours)> {
  static const MethodInfo* get() {
    static auto* monoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "GetInjectableMonoBehaviours", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monoBehaviours});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneContext::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
