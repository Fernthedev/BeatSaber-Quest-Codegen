// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByInstaller
  // [NoReflectionBakingAttribute] Offset: DDD1C4
  class SubContainerCreatorByInstaller : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // private readonly System.Type _installerType
    // Size: 0x8
    // Offset: 0x10
    System::Type* installerType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArgs
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // private readonly Zenject.SubContainerCreatorBindInfo _containerBindInfo
    // Size: 0x8
    // Offset: 0x28
    Zenject::SubContainerCreatorBindInfo* containerBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorBindInfo*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByInstaller
    SubContainerCreatorByInstaller(System::Type* installerType_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs_ = {}, Zenject::SubContainerCreatorBindInfo* containerBindInfo_ = {}) noexcept : installerType{installerType_}, container{container_}, extraArgs{extraArgs_}, containerBindInfo{containerBindInfo_} {}
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Type installerType, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArgs)
    // Offset: 0x16E9800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByInstaller* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Type* installerType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArgs) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByInstaller*, creationType>(container, containerBindInfo, installerType, extraArgs)));
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Type installerType)
    // Offset: 0x16E867C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByInstaller* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Type* installerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByInstaller*, creationType>(container, containerBindInfo, installerType)));
    }
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0x16E98D4
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByInstaller
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByInstaller), 40 + sizeof(Zenject::SubContainerCreatorBindInfo*)> __Zenject_SubContainerCreatorByInstallerSizeCheck;
  static_assert(sizeof(SubContainerCreatorByInstaller) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByInstaller*, "Zenject", "SubContainerCreatorByInstaller");
// Writing includes for template specializations
#include "Zenject/DiContainer.hpp"
#include "Zenject/SubContainerCreatorBindInfo.hpp"
#include "System/Type.hpp"
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "Zenject/InjectContext.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SubContainerCreatorByInstaller::CreateSubContainer
// Il2CppName: CreateSubContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer* (Zenject::SubContainerCreatorByInstaller::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>*, Zenject::InjectContext*)>(&Zenject::SubContainerCreatorByInstaller::CreateSubContainer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerCreatorByInstaller*), "CreateSubContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>()});
  }
};
