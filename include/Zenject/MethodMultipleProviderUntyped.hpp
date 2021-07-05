// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MethodMultipleProviderUntyped
  // [NoReflectionBakingAttribute] Offset: DDCFF4
  class MethodMultipleProviderUntyped : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Func`2<Zenject.InjectContext,System.Collections.Generic.IEnumerable`1<System.Object>> _method
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>* method;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>*) == 0x8);
    // Creating value type constructor for type: MethodMultipleProviderUntyped
    MethodMultipleProviderUntyped(Zenject::DiContainer* container_ = {}, System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>* method_ = {}) noexcept : container{container_}, method{method_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(System.Func`2<Zenject.InjectContext,System.Collections.Generic.IEnumerable`1<System.Object>> method, Zenject.DiContainer container)
    // Offset: 0x16DC8B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodMultipleProviderUntyped* New_ctor(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>* method, Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MethodMultipleProviderUntyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodMultipleProviderUntyped*, creationType>(method, container)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x16DC8F0
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x16DC8F8
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x16DC900
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x16DC91C
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.MethodMultipleProviderUntyped
  #pragma pack(pop)
  static check_size<sizeof(MethodMultipleProviderUntyped), 24 + sizeof(System::Func_2<Zenject::InjectContext*, System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>*)> __Zenject_MethodMultipleProviderUntypedSizeCheck;
  static_assert(sizeof(MethodMultipleProviderUntyped) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MethodMultipleProviderUntyped*, "Zenject", "MethodMultipleProviderUntyped");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MethodMultipleProviderUntyped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::MethodMultipleProviderUntyped::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodMultipleProviderUntyped::*)()>(&Zenject::MethodMultipleProviderUntyped::get_IsCached)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MethodMultipleProviderUntyped*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MethodMultipleProviderUntyped::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodMultipleProviderUntyped::*)()>(&Zenject::MethodMultipleProviderUntyped::get_TypeVariesBasedOnMemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MethodMultipleProviderUntyped*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::MethodMultipleProviderUntyped::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::MethodMultipleProviderUntyped::*)(Zenject::InjectContext*)>(&Zenject::MethodMultipleProviderUntyped::GetInstanceType)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MethodMultipleProviderUntyped*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: Zenject::MethodMultipleProviderUntyped::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodMultipleProviderUntyped::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Action*&, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::MethodMultipleProviderUntyped::GetAllInstancesWithInjectSplit)> {
  const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::MethodMultipleProviderUntyped*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction, buffer});
  }
};
