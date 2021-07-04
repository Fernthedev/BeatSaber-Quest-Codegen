// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IProviderExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class IProviderExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IProviderExtensions
    IProviderExtensions() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> EmptyArgList
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* _get_EmptyArgList();
    // Set static field: static private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> EmptyArgList
    static void _set_EmptyArgList(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
    // static public System.Void GetAllInstancesWithInjectSplit(Zenject.IProvider creator, Zenject.InjectContext context, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x163E884
    static void GetAllInstancesWithInjectSplit(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // static public System.Void GetAllInstances(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x163E98C
    static void GetAllInstances(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // static public System.Void GetAllInstances(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x163EA14
    static void GetAllInstances(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
    // static public System.Object TryGetInstance(Zenject.IProvider creator, Zenject.InjectContext context)
    // Offset: 0x163EB14
    static ::Il2CppObject* TryGetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context);
    // static public System.Object TryGetInstance(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0x163EB94
    static ::Il2CppObject* TryGetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args);
    // static public System.Object GetInstance(Zenject.IProvider creator, Zenject.InjectContext context)
    // Offset: 0x163ED14
    static ::Il2CppObject* GetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context);
    // static public System.Object GetInstance(Zenject.IProvider creator, Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args)
    // Offset: 0x163ED94
    static ::Il2CppObject* GetInstance(Zenject::IProvider* creator, Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args);
    // static private System.Void .cctor()
    // Offset: 0x163EF48
    static void _cctor();
  }; // Zenject.IProviderExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IProviderExtensions*, "Zenject", "IProviderExtensions");
// Writing includes for template specializations
#include "Zenject/IProvider.hpp"
#include "Zenject/InjectContext.hpp"
#include "System/Action.hpp"
#include "System/Collections/Generic/List_1.hpp"
// Writing MetadataGetter for method: Zenject::IProviderExtensions::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::IProvider*, Zenject::InjectContext*, System::Action*&, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::IProviderExtensions::GetAllInstancesWithInjectSplit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::GetAllInstances
// Il2CppName: GetAllInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::IProvider*, Zenject::InjectContext*, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::IProviderExtensions::GetAllInstances)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "GetAllInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::GetAllInstances
// Il2CppName: GetAllInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Zenject::IProvider*, Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::IProviderExtensions::GetAllInstances)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "GetAllInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppObject*>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::TryGetInstance
// Il2CppName: TryGetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(Zenject::IProvider*, Zenject::InjectContext*)>(&Zenject::IProviderExtensions::TryGetInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "TryGetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::TryGetInstance
// Il2CppName: TryGetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(Zenject::IProvider*, Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*)>(&Zenject::IProviderExtensions::TryGetInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "TryGetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(Zenject::IProvider*, Zenject::InjectContext*)>(&Zenject::IProviderExtensions::GetInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(Zenject::IProvider*, Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*)>(&Zenject::IProviderExtensions::GetInstance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::IProvider*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>()});
  }
};
// Writing MetadataGetter for method: Zenject::IProviderExtensions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Zenject::IProviderExtensions::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IProviderExtensions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
