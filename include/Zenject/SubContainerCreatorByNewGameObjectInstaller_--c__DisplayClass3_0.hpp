// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewGameObjectInstaller
#include "Zenject/SubContainerCreatorByNewGameObjectInstaller.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectInstaller/<>c__DisplayClass3_0
  // [CompilerGeneratedAttribute] Offset: DDE49C
  class SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public Zenject.SubContainerCreatorByNewGameObjectInstaller <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::SubContainerCreatorByNewGameObjectInstaller* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorByNewGameObjectInstaller*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(Zenject::SubContainerCreatorByNewGameObjectInstaller* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}) noexcept : $$4__this{$$4__this_}, args{args_} {}
    // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
    // Offset: 0x16EA0F8
    void $AddInstallers$b__0(Zenject::DiContainer* subContainer);
    // public System.Void .ctor()
    // Offset: 0x16EA0F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // Zenject.SubContainerCreatorByNewGameObjectInstaller/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0), 24 + sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*)> __Zenject_SubContainerCreatorByNewGameObjectInstaller_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0*, "Zenject", "SubContainerCreatorByNewGameObjectInstaller/<>c__DisplayClass3_0");
// Writing includes for template specializations
#include "Zenject/DiContainer.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0::$AddInstallers$b__0
// Il2CppName: <AddInstallers>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0::*)(Zenject::DiContainer*)>(&Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0::$AddInstallers$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0*), "<AddInstallers>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>()});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewGameObjectInstaller::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
