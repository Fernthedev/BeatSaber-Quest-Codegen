// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PrefabResourceBindingFinalizer
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
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
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabResourceBindingFinalizer/Zenject.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PrefabResourceBindingFinalizer::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabResourceBindingFinalizer <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabResourceBindingFinalizer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::PrefabResourceBindingFinalizer*) == 0x8);
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // public System.Collections.Generic.List`1<System.Type> concreteTypes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Type*>* concreteTypes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Type*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(Zenject::PrefabResourceBindingFinalizer* $$4__this_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::List_1<System::Type*>* concreteTypes_ = {}) noexcept : $$4__this{$$4__this_}, container{container_}, concreteTypes{concreteTypes_} {}
    // Get instance field reference: public Zenject.PrefabResourceBindingFinalizer <>4__this
    Zenject::PrefabResourceBindingFinalizer*& dyn_$$4__this();
    // Get instance field reference: public Zenject.DiContainer container
    Zenject::DiContainer*& dyn_container();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Type> concreteTypes
    System::Collections::Generic::List_1<System::Type*>*& dyn_concreteTypes();
    // Zenject.IProvider <FinalizeBindingConcrete>b__0(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0x171DC28
    Zenject::IProvider* $FinalizeBindingConcrete$b__0(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x171DC08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceBindingFinalizer::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // Zenject.PrefabResourceBindingFinalizer/Zenject.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass5_0), 32 + sizeof(System::Collections::Generic::List_1<System::Type*>*)> __Zenject_PrefabResourceBindingFinalizer_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass5_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::$FinalizeBindingConcrete$b__0
// Il2CppName: <FinalizeBindingConcrete>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider* (Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::*)(Zenject::DiContainer*, System::Type*)>(&Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::$FinalizeBindingConcrete$b__0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*), "<FinalizeBindingConcrete>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_, concreteType});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
