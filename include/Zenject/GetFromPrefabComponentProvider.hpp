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
  // Forward declaring type: IPrefabInstantiator
  class IPrefabInstantiator;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.GetFromPrefabComponentProvider
  // [NoReflectionBakingAttribute] Offset: DDCF04
  class GetFromPrefabComponentProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.IPrefabInstantiator _prefabInstantiator
    // Size: 0x8
    // Offset: 0x10
    Zenject::IPrefabInstantiator* prefabInstantiator;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabInstantiator*) == 0x8);
    // private readonly System.Type _componentType
    // Size: 0x8
    // Offset: 0x18
    System::Type* componentType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly System.Boolean _matchSingle
    // Size: 0x1
    // Offset: 0x20
    bool matchSingle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GetFromPrefabComponentProvider
    GetFromPrefabComponentProvider(Zenject::IPrefabInstantiator* prefabInstantiator_ = {}, System::Type* componentType_ = {}, bool matchSingle_ = {}) noexcept : prefabInstantiator{prefabInstantiator_}, componentType{componentType_}, matchSingle{matchSingle_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // public System.Void .ctor(System.Type componentType, Zenject.IPrefabInstantiator prefabInstantiator, System.Boolean matchSingle)
    // Offset: 0x16367C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetFromPrefabComponentProvider* New_ctor(System::Type* componentType, Zenject::IPrefabInstantiator* prefabInstantiator, bool matchSingle) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::GetFromPrefabComponentProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetFromPrefabComponentProvider*, creationType>(componentType, prefabInstantiator, matchSingle)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x163DD0C
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x163DD14
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x163DD1C
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x163DD24
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.GetFromPrefabComponentProvider
  #pragma pack(pop)
  static check_size<sizeof(GetFromPrefabComponentProvider), 32 + sizeof(bool)> __Zenject_GetFromPrefabComponentProviderSizeCheck;
  static_assert(sizeof(GetFromPrefabComponentProvider) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GetFromPrefabComponentProvider*, "Zenject", "GetFromPrefabComponentProvider");
// Writing includes for template specializations
#include "System/Type.hpp"
#include "Zenject/IPrefabInstantiator.hpp"
#include "Zenject/InjectContext.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Action.hpp"
// Writing MetadataGetter for method: Zenject::GetFromPrefabComponentProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::GetFromPrefabComponentProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GetFromPrefabComponentProvider::*)()>(&Zenject::GetFromPrefabComponentProvider::get_IsCached)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromPrefabComponentProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GetFromPrefabComponentProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GetFromPrefabComponentProvider::*)()>(&Zenject::GetFromPrefabComponentProvider::get_TypeVariesBasedOnMemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromPrefabComponentProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::GetFromPrefabComponentProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::GetFromPrefabComponentProvider::*)(Zenject::InjectContext*)>(&Zenject::GetFromPrefabComponentProvider::GetInstanceType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromPrefabComponentProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
// Writing MetadataGetter for method: Zenject::GetFromPrefabComponentProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GetFromPrefabComponentProvider::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Action*&, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::GetFromPrefabComponentProvider::GetAllInstancesWithInjectSplit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::GetFromPrefabComponentProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppObject*>*>()});
  }
};
