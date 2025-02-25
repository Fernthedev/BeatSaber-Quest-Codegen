// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
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
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectResourceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ScriptableObjectResourceProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // Nested type: Zenject::ScriptableObjectResourceProvider::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Type _resourceType
    // Size: 0x8
    // Offset: 0x18
    System::Type* resourceType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly System.String _resourcePath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // private readonly System.Boolean _createNew
    // Size: 0x1
    // Offset: 0x30
    bool createNew;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: createNew and: concreteIdentifier
    char __padding4[0x7] = {};
    // private readonly System.Object _concreteIdentifier
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* concreteIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Size: 0x8
    // Offset: 0x40
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // Field size check
    static_assert(sizeof(System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: ScriptableObjectResourceProvider
    ScriptableObjectResourceProvider(Zenject::DiContainer* container_ = {}, System::Type* resourceType_ = {}, ::Il2CppString* resourcePath_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments_ = {}, bool createNew_ = {}, ::Il2CppObject* concreteIdentifier_ = {}, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback_ = {}) noexcept : container{container_}, resourceType{resourceType_}, resourcePath{resourcePath_}, extraArguments{extraArguments_}, createNew{createNew_}, concreteIdentifier{concreteIdentifier_}, instantiateCallback{instantiateCallback_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Get instance field reference: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Type _resourceType
    System::Type*& dyn__resourceType();
    // Get instance field reference: private readonly System.String _resourcePath
    ::Il2CppString*& dyn__resourcePath();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    System::Collections::Generic::List_1<Zenject::TypeValuePair>*& dyn__extraArguments();
    // Get instance field reference: private readonly System.Boolean _createNew
    bool& dyn__createNew();
    // Get instance field reference: private readonly System.Object _concreteIdentifier
    ::Il2CppObject*& dyn__concreteIdentifier();
    // Get instance field reference: private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*& dyn__instantiateCallback();
    // public System.Boolean get_IsCached()
    // Offset: 0x1724144
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x172414C
    bool get_TypeVariesBasedOnMemberType();
    // public System.Void .ctor(System.String resourcePath, System.Type resourceType, Zenject.DiContainer container, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Boolean createNew, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x172407C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectResourceProvider* New_ctor(::Il2CppString* resourcePath, System::Type* resourceType, Zenject::DiContainer* container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, bool createNew, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScriptableObjectResourceProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectResourceProvider*, creationType>(resourcePath, resourceType, container, extraArguments, createNew, concreteIdentifier, instantiateCallback)));
    }
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x1724154
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x172415C
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.ScriptableObjectResourceProvider
  #pragma pack(pop)
  static check_size<sizeof(ScriptableObjectResourceProvider), 64 + sizeof(System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>*)> __Zenject_ScriptableObjectResourceProviderSizeCheck;
  static_assert(sizeof(ScriptableObjectResourceProvider) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectResourceProvider*, "Zenject", "ScriptableObjectResourceProvider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ScriptableObjectResourceProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ScriptableObjectResourceProvider::*)()>(&Zenject::ScriptableObjectResourceProvider::get_IsCached)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectResourceProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectResourceProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ScriptableObjectResourceProvider::*)()>(&Zenject::ScriptableObjectResourceProvider::get_TypeVariesBasedOnMemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectResourceProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectResourceProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ScriptableObjectResourceProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::ScriptableObjectResourceProvider::*)(Zenject::InjectContext*)>(&Zenject::ScriptableObjectResourceProvider::GetInstanceType)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectResourceProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::ScriptableObjectResourceProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ScriptableObjectResourceProvider::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, ByRef<System::Action*>, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::ScriptableObjectResourceProvider::GetAllInstancesWithInjectSplit)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ScriptableObjectResourceProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
