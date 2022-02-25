// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Forward declaring type: SubContainerCreatorByInstance
  class SubContainerCreatorByInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::SubContainerCreatorByInstance);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByInstance*, "Zenject", "SubContainerCreatorByInstance");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByInstance
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SubContainerCreatorByInstance : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Zenject.DiContainer _subcontainer
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* subcontainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    public:
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return subcontainer;
    }
    // Get instance field reference: private readonly Zenject.DiContainer _subcontainer
    Zenject::DiContainer*& dyn__subcontainer();
    // public System.Void .ctor(Zenject.DiContainer subcontainer)
    // Offset: 0x24688C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByInstance* New_ctor(Zenject::DiContainer* subcontainer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByInstance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByInstance*, creationType>(subcontainer)));
    }
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0x246A0A4
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByInstance
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByInstance), 16 + sizeof(Zenject::DiContainer*)> __Zenject_SubContainerCreatorByInstanceSizeCheck;
  static_assert(sizeof(SubContainerCreatorByInstance) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstance::CreateSubContainer
// Il2CppName: CreateSubContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::SubContainerCreatorByInstance::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*, Zenject::InjectContext*)>(&Zenject::SubContainerCreatorByInstance::CreateSubContainer)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByInstance*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, context});
  }
};
