// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: DiContainer
  class DiContainer;
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
  // Autogenerated type: Zenject.SubContainerCreatorByInstanceGetter
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorByInstanceGetter : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // private readonly System.Func`2<Zenject.InjectContext,Zenject.DiContainer> _subcontainerGetter
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>* subcontainerGetter;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByInstanceGetter
    SubContainerCreatorByInstanceGetter(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>* subcontainerGetter_ = {}) noexcept : subcontainerGetter{subcontainerGetter_} {}
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // Creating conversion operator: operator System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>*
    constexpr operator System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>*() const noexcept {
      return subcontainerGetter;
    }
    // Get instance field reference: private readonly System.Func`2<Zenject.InjectContext,Zenject.DiContainer> _subcontainerGetter
    System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>*& dyn__subcontainerGetter();
    // public System.Void .ctor(System.Func`2<Zenject.InjectContext,Zenject.DiContainer> subcontainerGetter)
    // Offset: 0x171FAC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByInstanceGetter* New_ctor(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>* subcontainerGetter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByInstanceGetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByInstanceGetter*, creationType>(subcontainerGetter)));
    }
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0x172080C
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByInstanceGetter
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByInstanceGetter), 16 + sizeof(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>*)> __Zenject_SubContainerCreatorByInstanceGetterSizeCheck;
  static_assert(sizeof(SubContainerCreatorByInstanceGetter) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByInstanceGetter*, "Zenject", "SubContainerCreatorByInstanceGetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstanceGetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer
// Il2CppName: CreateSubContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::SubContainerCreatorByInstanceGetter::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*, Zenject::InjectContext*)>(&Zenject::SubContainerCreatorByInstanceGetter::CreateSubContainer)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByInstanceGetter*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, context});
  }
};
