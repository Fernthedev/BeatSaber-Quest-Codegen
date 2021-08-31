// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerCreatorByNewPrefabInstaller
#include "Zenject/SubContainerCreatorByNewPrefabInstaller.hpp"
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
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabInstaller/Zenject.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public Zenject.SubContainerCreatorByNewPrefabInstaller <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::SubContainerCreatorByNewPrefabInstaller* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorByNewPrefabInstaller*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(Zenject::SubContainerCreatorByNewPrefabInstaller* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}) noexcept : $$4__this{$$4__this_}, args{args_} {}
    // Get instance field: public Zenject.SubContainerCreatorByNewPrefabInstaller <>4__this
    Zenject::SubContainerCreatorByNewPrefabInstaller* _get_$$4__this();
    // Set instance field: public Zenject.SubContainerCreatorByNewPrefabInstaller <>4__this
    void _set_$$4__this(Zenject::SubContainerCreatorByNewPrefabInstaller* value);
    // Get instance field: public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* _get_args();
    // Set instance field: public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    void _set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
    // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
    // Offset: 0x17211C8
    void $AddInstallers$b__0(Zenject::DiContainer* subContainer);
    // public System.Void .ctor()
    // Offset: 0x17211C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // Zenject.SubContainerCreatorByNewPrefabInstaller/Zenject.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0), 24 + sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*)> __Zenject_SubContainerCreatorByNewPrefabInstaller_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0*, "Zenject", "SubContainerCreatorByNewPrefabInstaller/<>c__DisplayClass3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0::$AddInstallers$b__0
// Il2CppName: <AddInstallers>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0::*)(Zenject::DiContainer*)>(&Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0::$AddInstallers$b__0)> {
  static const MethodInfo* get() {
    static auto* subContainer = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0*), "<AddInstallers>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{subContainer});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByNewPrefabInstaller::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
