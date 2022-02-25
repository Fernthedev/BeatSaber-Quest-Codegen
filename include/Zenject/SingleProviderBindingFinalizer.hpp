// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SingleProviderBindingFinalizer
  class SingleProviderBindingFinalizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::SingleProviderBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SingleProviderBindingFinalizer*, "Zenject", "SingleProviderBindingFinalizer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SingleProviderBindingFinalizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SingleProviderBindingFinalizer : public Zenject::ProviderBindingFinalizer {
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
    // private readonly System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> _providerFactory
    // Size: 0x8
    // Offset: 0x18
    System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory;
    // Field size check
    static_assert(sizeof(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*) == 0x8);
    public:
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // Get instance field reference: private readonly System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> _providerFactory
    System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*& dyn__providerFactory();
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFactory)
    // Offset: 0x2465930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingleProviderBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SingleProviderBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingleProviderBindingFinalizer*, creationType>(bindInfo, providerFactory)));
    }
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x246595C
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SingleProviderBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(SingleProviderBindingFinalizer), 24 + sizeof(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*)> __Zenject_SingleProviderBindingFinalizerSizeCheck;
  static_assert(sizeof(SingleProviderBindingFinalizer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SingleProviderBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding
// Il2CppName: OnFinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SingleProviderBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::SingleProviderBindingFinalizer::OnFinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SingleProviderBindingFinalizer*), "OnFinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
