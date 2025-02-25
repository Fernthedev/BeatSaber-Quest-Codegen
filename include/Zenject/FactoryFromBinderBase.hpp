// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class FactoryFromBinderBase : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Nested type: Zenject::FactoryFromBinderBase::$get_AllParentTypes$d__17
    class $get_AllParentTypes$d__17;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass33_0
    class $$c__DisplayClass33_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0
    class $$c__DisplayClass34_0;
    // private Zenject.DiContainer <BindContainer>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    Zenject::DiContainer* BindContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private Zenject.FactoryBindInfo <FactoryBindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    Zenject::FactoryBindInfo* FactoryBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::FactoryBindInfo*) == 0x8);
    // private System.Type <ContractType>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Type* ContractType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: FactoryFromBinderBase
    FactoryFromBinderBase(Zenject::DiContainer* BindContainer_ = {}, Zenject::FactoryBindInfo* FactoryBindInfo_ = {}, System::Type* ContractType_ = {}) noexcept : BindContainer{BindContainer_}, FactoryBindInfo{FactoryBindInfo_}, ContractType{ContractType_} {}
    // Get instance field reference: private Zenject.DiContainer <BindContainer>k__BackingField
    Zenject::DiContainer*& dyn_$BindContainer$k__BackingField();
    // Get instance field reference: private Zenject.FactoryBindInfo <FactoryBindInfo>k__BackingField
    Zenject::FactoryBindInfo*& dyn_$FactoryBindInfo$k__BackingField();
    // Get instance field reference: private System.Type <ContractType>k__BackingField
    System::Type*& dyn_$ContractType$k__BackingField();
    // Zenject.DiContainer get_BindContainer()
    // Offset: 0x165E5BC
    Zenject::DiContainer* get_BindContainer();
    // private System.Void set_BindContainer(Zenject.DiContainer value)
    // Offset: 0x165E5C4
    void set_BindContainer(Zenject::DiContainer* value);
    // protected Zenject.FactoryBindInfo get_FactoryBindInfo()
    // Offset: 0x165E5CC
    Zenject::FactoryBindInfo* get_FactoryBindInfo();
    // private System.Void set_FactoryBindInfo(Zenject.FactoryBindInfo value)
    // Offset: 0x165E5D4
    void set_FactoryBindInfo(Zenject::FactoryBindInfo* value);
    // System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0x165E5DC
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc();
    // System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0x165E5F8
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value);
    // protected System.Type get_ContractType()
    // Offset: 0x165E614
    System::Type* get_ContractType();
    // private System.Void set_ContractType(System.Type value)
    // Offset: 0x165E61C
    void set_ContractType(System::Type* value);
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_AllParentTypes()
    // Offset: 0x165E624
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllParentTypes();
    // public System.Void .ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x165E504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase* New_ctor(Zenject::DiContainer* bindContainer, System::Type* contractType, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase*, creationType>(bindContainer, contractType, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromNew()
    // Offset: 0x165E6DC
    Zenject::ConditionCopyNonLazyBinder* FromNew();
    // public Zenject.ConditionCopyNonLazyBinder FromResolve()
    // Offset: 0x165E714
    Zenject::ConditionCopyNonLazyBinder* FromResolve();
    // public Zenject.ConditionCopyNonLazyBinder FromInstance(System.Object instance)
    // Offset: 0x165E7D4
    Zenject::ConditionCopyNonLazyBinder* FromInstance(::Il2CppObject* instance);
    // public Zenject.ConditionCopyNonLazyBinder FromResolve(System.Object subIdentifier)
    // Offset: 0x165E71C
    Zenject::ConditionCopyNonLazyBinder* FromResolve(::Il2CppObject* subIdentifier);
    // Zenject.ConcreteBinderGeneric`1<T> CreateIFactoryBinder(out System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConcreteBinderGeneric_1<T>* CreateIFactoryBinder(ByRef<System::Guid> factoryId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::CreateIFactoryBinder");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateIFactoryBinder", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Guid&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConcreteBinderGeneric_1<T>*, false>(___instance_arg, ___generic__method, byref(factoryId));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0x165E8B4
    Zenject::ConditionCopyNonLazyBinder* FromComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x165E998
    Zenject::ConditionCopyNonLazyBinder* FromComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOnRoot()
    // Offset: 0x165EA70
    Zenject::ConditionCopyNonLazyBinder* FromComponentOnRoot();
    // public Zenject.ConditionCopyNonLazyBinder FromNewComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0x165EAEC
    Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ConditionCopyNonLazyBinder FromNewComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x165EBD0
    Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x165ECA8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x165EDE4
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefabResource(System.String resourcePath)
    // Offset: 0x165EF0C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::Il2CppString* resourcePath);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefabResource(System.String resourcePath)
    // Offset: 0x165F034
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::Il2CppString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromNewScriptableObjectResource(System.String resourcePath)
    // Offset: 0x165F168
    Zenject::ConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::Il2CppString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromScriptableObjectResource(System.String resourcePath)
    // Offset: 0x165F240
    Zenject::ConditionCopyNonLazyBinder* FromScriptableObjectResource(::Il2CppString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromResource(System.String resourcePath)
    // Offset: 0x165F318
    Zenject::ConditionCopyNonLazyBinder* FromResource(::Il2CppString* resourcePath);
    // private Zenject.IProvider <.ctor>b__0_0(Zenject.DiContainer container)
    // Offset: 0x165F3E4
    Zenject::IProvider* $_ctor$b__0_0(Zenject::DiContainer* container);
    // private UnityEngine.GameObject <FromComponentOnRoot>b__25_0(Zenject.InjectContext ctx)
    // Offset: 0x165F494
    UnityEngine::GameObject* $FromComponentOnRoot$b__25_0(Zenject::InjectContext* ctx);
  }; // Zenject.FactoryFromBinderBase
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase), 48 + sizeof(System::Type*)> __Zenject_FactoryFromBinderBaseSizeCheck;
  static_assert(sizeof(FactoryFromBinderBase) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase*, "Zenject", "FactoryFromBinderBase");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::get_BindContainer
// Il2CppName: get_BindContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::get_BindContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "get_BindContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::set_BindContainer
// Il2CppName: set_BindContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryFromBinderBase::*)(Zenject::DiContainer*)>(&Zenject::FactoryFromBinderBase::set_BindContainer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "set_BindContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::get_FactoryBindInfo
// Il2CppName: get_FactoryBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::FactoryBindInfo* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::get_FactoryBindInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "get_FactoryBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::set_FactoryBindInfo
// Il2CppName: set_FactoryBindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryFromBinderBase::*)(Zenject::FactoryBindInfo*)>(&Zenject::FactoryFromBinderBase::set_FactoryBindInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "FactoryBindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "set_FactoryBindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::get_ProviderFunc
// Il2CppName: get_ProviderFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::get_ProviderFunc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "get_ProviderFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::set_ProviderFunc
// Il2CppName: set_ProviderFunc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryFromBinderBase::*)(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>*)>(&Zenject::FactoryFromBinderBase::set_ProviderFunc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer"), ::il2cpp_utils::GetClassFromName("Zenject", "IProvider")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "set_ProviderFunc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::get_ContractType
// Il2CppName: get_ContractType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::get_ContractType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "get_ContractType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::set_ContractType
// Il2CppName: set_ContractType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryFromBinderBase::*)(System::Type*)>(&Zenject::FactoryFromBinderBase::set_ContractType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "set_ContractType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::get_AllParentTypes
// Il2CppName: get_AllParentTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Type*>* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::get_AllParentTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "get_AllParentTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromNew
// Il2CppName: FromNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::FromNew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromResolve
// Il2CppName: FromResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::FromResolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromInstance
// Il2CppName: FromInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppObject*)>(&Zenject::FactoryFromBinderBase::FromInstance)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromResolve
// Il2CppName: FromResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppObject*)>(&Zenject::FactoryFromBinderBase::FromResolve)> {
  static const MethodInfo* get() {
    static auto* subIdentifier = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subIdentifier});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::CreateIFactoryBinder
// Il2CppName: CreateIFactoryBinder
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromComponentOn
// Il2CppName: FromComponentOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(UnityEngine::GameObject*)>(&Zenject::FactoryFromBinderBase::FromComponentOn)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromComponentOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromComponentOn
// Il2CppName: FromComponentOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*)>(&Zenject::FactoryFromBinderBase::FromComponentOn)> {
  static const MethodInfo* get() {
    static auto* gameObjectGetter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InjectContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromComponentOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObjectGetter});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromComponentOnRoot
// Il2CppName: FromComponentOnRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)()>(&Zenject::FactoryFromBinderBase::FromComponentOnRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromComponentOnRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromNewComponentOn
// Il2CppName: FromNewComponentOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(UnityEngine::GameObject*)>(&Zenject::FactoryFromBinderBase::FromNewComponentOn)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromNewComponentOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromNewComponentOn
// Il2CppName: FromNewComponentOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*)>(&Zenject::FactoryFromBinderBase::FromNewComponentOn)> {
  static const MethodInfo* get() {
    static auto* gameObjectGetter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "InjectContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromNewComponentOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObjectGetter});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromNewComponentOnNewPrefab
// Il2CppName: FromNewComponentOnNewPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(UnityEngine::Object*)>(&Zenject::FactoryFromBinderBase::FromNewComponentOnNewPrefab)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromNewComponentOnNewPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromComponentInNewPrefab
// Il2CppName: FromComponentInNewPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(UnityEngine::Object*)>(&Zenject::FactoryFromBinderBase::FromComponentInNewPrefab)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromComponentInNewPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromComponentInNewPrefabResource
// Il2CppName: FromComponentInNewPrefabResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppString*)>(&Zenject::FactoryFromBinderBase::FromComponentInNewPrefabResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromComponentInNewPrefabResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromNewComponentOnNewPrefabResource
// Il2CppName: FromNewComponentOnNewPrefabResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppString*)>(&Zenject::FactoryFromBinderBase::FromNewComponentOnNewPrefabResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromNewComponentOnNewPrefabResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromNewScriptableObjectResource
// Il2CppName: FromNewScriptableObjectResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppString*)>(&Zenject::FactoryFromBinderBase::FromNewScriptableObjectResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromNewScriptableObjectResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromScriptableObjectResource
// Il2CppName: FromScriptableObjectResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppString*)>(&Zenject::FactoryFromBinderBase::FromScriptableObjectResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromScriptableObjectResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::FromResource
// Il2CppName: FromResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder* (Zenject::FactoryFromBinderBase::*)(::Il2CppString*)>(&Zenject::FactoryFromBinderBase::FromResource)> {
  static const MethodInfo* get() {
    static auto* resourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "FromResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourcePath});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::$_ctor$b__0_0
// Il2CppName: <.ctor>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::FactoryFromBinderBase::*)(Zenject::DiContainer*)>(&Zenject::FactoryFromBinderBase::$_ctor$b__0_0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "<.ctor>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::FactoryFromBinderBase::$FromComponentOnRoot$b__25_0
// Il2CppName: <FromComponentOnRoot>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::FactoryFromBinderBase::*)(Zenject::InjectContext*)>(&Zenject::FactoryFromBinderBase::$FromComponentOnRoot$b__25_0)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FactoryFromBinderBase*), "<FromComponentOnRoot>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
