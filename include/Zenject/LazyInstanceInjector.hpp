// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.LazyInstanceInjector
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class LazyInstanceInjector : public ::Il2CppObject {
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.Object> _instancesToInject
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<::Il2CppObject*>* instancesToInject;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: LazyInstanceInjector
    LazyInstanceInjector(Zenject::DiContainer* container_ = {}, System::Collections::Generic::HashSet_1<::Il2CppObject*>* instancesToInject_ = {}) noexcept : container{container_}, instancesToInject{instancesToInject_} {}
    // Get instance field reference: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.Object> _instancesToInject
    System::Collections::Generic::HashSet_1<::Il2CppObject*>*& dyn__instancesToInject();
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Instances()
    // Offset: 0x17196F0
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Instances();
    // public System.Void .ctor(Zenject.DiContainer container)
    // Offset: 0x171966C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyInstanceInjector* New_ctor(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::LazyInstanceInjector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyInstanceInjector*, creationType>(container)));
    }
    // public System.Void AddInstance(System.Object instance)
    // Offset: 0x17196F8
    void AddInstance(::Il2CppObject* instance);
    // public System.Void AddInstances(System.Collections.Generic.IEnumerable`1<System.Object> instances)
    // Offset: 0x1719760
    void AddInstances(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* instances);
    // public System.Void LazyInject(System.Object instance)
    // Offset: 0x17197C8
    void LazyInject(::Il2CppObject* instance);
    // public System.Void LazyInjectAll()
    // Offset: 0x1719858
    void LazyInjectAll();
  }; // Zenject.LazyInstanceInjector
  #pragma pack(pop)
  static check_size<sizeof(LazyInstanceInjector), 24 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppObject*>*)> __Zenject_LazyInstanceInjectorSizeCheck;
  static_assert(sizeof(LazyInstanceInjector) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::LazyInstanceInjector*, "Zenject", "LazyInstanceInjector");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::LazyInstanceInjector::get_Instances
// Il2CppName: get_Instances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::LazyInstanceInjector::*)()>(&Zenject::LazyInstanceInjector::get_Instances)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::LazyInstanceInjector*), "get_Instances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::LazyInstanceInjector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::LazyInstanceInjector::AddInstance
// Il2CppName: AddInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LazyInstanceInjector::*)(::Il2CppObject*)>(&Zenject::LazyInstanceInjector::AddInstance)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::LazyInstanceInjector*), "AddInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Zenject::LazyInstanceInjector::AddInstances
// Il2CppName: AddInstances
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LazyInstanceInjector::*)(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*)>(&Zenject::LazyInstanceInjector::AddInstances)> {
  static const MethodInfo* get() {
    static auto* instances = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::LazyInstanceInjector*), "AddInstances", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instances});
  }
};
// Writing MetadataGetter for method: Zenject::LazyInstanceInjector::LazyInject
// Il2CppName: LazyInject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LazyInstanceInjector::*)(::Il2CppObject*)>(&Zenject::LazyInstanceInjector::LazyInject)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::LazyInstanceInjector*), "LazyInject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: Zenject::LazyInstanceInjector::LazyInjectAll
// Il2CppName: LazyInjectAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LazyInstanceInjector::*)()>(&Zenject::LazyInstanceInjector::LazyInjectAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::LazyInstanceInjector*), "LazyInjectAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
