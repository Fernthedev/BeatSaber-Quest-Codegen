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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabGameObjectProvider
  // [NoReflectionBakingAttribute] Offset: DDCF34
  class PrefabGameObjectProvider : public ::Il2CppObject/*, public Zenject::IProvider*/ {
    public:
    // private readonly Zenject.IPrefabInstantiator _prefabCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::IPrefabInstantiator* prefabCreator;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabInstantiator*) == 0x8);
    // Creating value type constructor for type: PrefabGameObjectProvider
    PrefabGameObjectProvider(Zenject::IPrefabInstantiator* prefabCreator_ = {}) noexcept : prefabCreator{prefabCreator_} {}
    // Creating interface conversion operator: operator Zenject::IProvider
    operator Zenject::IProvider() noexcept {
      return *reinterpret_cast<Zenject::IProvider*>(this);
    }
    // Creating conversion operator: operator Zenject::IPrefabInstantiator*
    constexpr operator Zenject::IPrefabInstantiator*() const noexcept {
      return prefabCreator;
    }
    // public System.Void .ctor(Zenject.IPrefabInstantiator prefabCreator)
    // Offset: 0x16DF564
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabGameObjectProvider* New_ctor(Zenject::IPrefabInstantiator* prefabCreator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabGameObjectProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabGameObjectProvider*, creationType>(prefabCreator)));
    }
    // public System.Boolean get_IsCached()
    // Offset: 0x16DF590
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x16DF598
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x16DF5A0
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x16DF610
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.PrefabGameObjectProvider
  #pragma pack(pop)
  static check_size<sizeof(PrefabGameObjectProvider), 16 + sizeof(Zenject::IPrefabInstantiator*)> __Zenject_PrefabGameObjectProviderSizeCheck;
  static_assert(sizeof(PrefabGameObjectProvider) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabGameObjectProvider*, "Zenject", "PrefabGameObjectProvider");
// Writing includes for template specializations
#include "Zenject/IPrefabInstantiator.hpp"
#include "Zenject/InjectContext.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "System/Action.hpp"
// Writing MetadataGetter for method: Zenject::PrefabGameObjectProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabGameObjectProvider::get_IsCached
// Il2CppName: get_IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::PrefabGameObjectProvider::*)()>(&Zenject::PrefabGameObjectProvider::get_IsCached)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabGameObjectProvider*), "get_IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabGameObjectProvider::get_TypeVariesBasedOnMemberType
// Il2CppName: get_TypeVariesBasedOnMemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::PrefabGameObjectProvider::*)()>(&Zenject::PrefabGameObjectProvider::get_TypeVariesBasedOnMemberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabGameObjectProvider*), "get_TypeVariesBasedOnMemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabGameObjectProvider::GetInstanceType
// Il2CppName: GetInstanceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::PrefabGameObjectProvider::*)(Zenject::InjectContext*)>(&Zenject::PrefabGameObjectProvider::GetInstanceType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabGameObjectProvider*), "GetInstanceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabGameObjectProvider::GetAllInstancesWithInjectSplit
// Il2CppName: GetAllInstancesWithInjectSplit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabGameObjectProvider::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Action*&, System::Collections::Generic::List_1<::Il2CppObject*>*)>(&Zenject::PrefabGameObjectProvider::GetAllInstancesWithInjectSplit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabGameObjectProvider*), "GetAllInstancesWithInjectSplit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*&>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<::Il2CppObject*>*>()});
  }
};
