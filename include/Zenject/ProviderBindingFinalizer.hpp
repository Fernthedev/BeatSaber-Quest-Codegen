// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IBindingFinalizer
#include "Zenject/IBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
  // Forward declaring type: ScopeTypes
  struct ScopeTypes;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
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
  // Autogenerated type: Zenject.ProviderBindingFinalizer
  // [NoReflectionBakingAttribute] Offset: DDCAC4
  class ProviderBindingFinalizer : public ::Il2CppObject/*, public Zenject::IBindingFinalizer*/ {
    public:
    // Nested type: Zenject::ProviderBindingFinalizer::$$c
    class $$c;
    // [CompilerGeneratedAttribute] Offset: 0xDDEA0C
    // private Zenject.BindInfo <BindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Zenject::BindInfo* BindInfo;
    // Field size check
    static_assert(sizeof(Zenject::BindInfo*) == 0x8);
    // Creating value type constructor for type: ProviderBindingFinalizer
    ProviderBindingFinalizer(Zenject::BindInfo* BindInfo_ = {}) noexcept : BindInfo{BindInfo_} {}
    // Creating interface conversion operator: operator Zenject::IBindingFinalizer
    operator Zenject::IBindingFinalizer() noexcept {
      return *reinterpret_cast<Zenject::IBindingFinalizer*>(this);
    }
    // Creating conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept {
      return BindInfo;
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x16DE1D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProviderBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProviderBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProviderBindingFinalizer*, creationType>(bindInfo)));
    }
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0x16E258C
    Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // protected Zenject.BindInfo get_BindInfo()
    // Offset: 0x16E25A8
    Zenject::BindInfo* get_BindInfo();
    // private System.Void set_BindInfo(Zenject.BindInfo value)
    // Offset: 0x16E25B0
    void set_BindInfo(Zenject::BindInfo* value);
    // protected Zenject.ScopeTypes GetScope()
    // Offset: 0x16DE804
    Zenject::ScopeTypes GetScope();
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x16E25B8
    void FinalizeBinding(Zenject::DiContainer* container);
    // protected System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    void OnFinalizeBinding(Zenject::DiContainer* container);
    // protected System.Void RegisterProvider(Zenject.DiContainer container, Zenject.IProvider provider)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    void RegisterProvider(Zenject::DiContainer* container, Zenject::IProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ProviderBindingFinalizer::RegisterProvider");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterProvider", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(provider)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, container, provider);
    }
    // protected System.Void RegisterProvider(Zenject.DiContainer container, System.Type contractType, Zenject.IProvider provider)
    // Offset: 0x16E28E8
    void RegisterProvider(Zenject::DiContainer* container, System::Type* contractType, Zenject::IProvider* provider);
    // protected System.Void RegisterProviderPerContract(Zenject.DiContainer container, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFunc)
    // Offset: 0x16DF034
    void RegisterProviderPerContract(Zenject::DiContainer* container, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFunc);
    // protected System.Void RegisterProviderForAllContracts(Zenject.DiContainer container, Zenject.IProvider provider)
    // Offset: 0x16E2B80
    void RegisterProviderForAllContracts(Zenject::DiContainer* container, Zenject::IProvider* provider);
    // protected System.Void RegisterProvidersPerContractAndConcreteType(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes, System.Func`3<System.Type,System.Type,Zenject.IProvider> providerFunc)
    // Offset: 0x16E2D24
    void RegisterProvidersPerContractAndConcreteType(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes, System::Func_3<System::Type*, System::Type*, Zenject::IProvider*>* providerFunc);
    // private System.Boolean ValidateBindTypes(System.Type concreteType, System.Type contractType)
    // Offset: 0x16E2FE0
    bool ValidateBindTypes(System::Type* concreteType, System::Type* contractType);
    // protected System.Void RegisterProvidersForAllContractsPerConcreteType(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFunc)
    // Offset: 0x16DEA1C
    void RegisterProvidersForAllContractsPerConcreteType(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFunc);
  }; // Zenject.ProviderBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(ProviderBindingFinalizer), 16 + sizeof(Zenject::BindInfo*)> __Zenject_ProviderBindingFinalizerSizeCheck;
  static_assert(sizeof(ProviderBindingFinalizer) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProviderBindingFinalizer*, "Zenject", "ProviderBindingFinalizer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::get_BindingInheritanceMethod
// Il2CppName: get_BindingInheritanceMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindingInheritanceMethods (Zenject::ProviderBindingFinalizer::*)()>(&Zenject::ProviderBindingFinalizer::get_BindingInheritanceMethod)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "get_BindingInheritanceMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::get_BindInfo
// Il2CppName: get_BindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::BindInfo* (Zenject::ProviderBindingFinalizer::*)()>(&Zenject::ProviderBindingFinalizer::get_BindInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "get_BindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::set_BindInfo
// Il2CppName: set_BindInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::BindInfo*)>(&Zenject::ProviderBindingFinalizer::set_BindInfo)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "BindInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "set_BindInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::GetScope
// Il2CppName: GetScope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeTypes (Zenject::ProviderBindingFinalizer::*)()>(&Zenject::ProviderBindingFinalizer::GetScope)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "GetScope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::FinalizeBinding
// Il2CppName: FinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::ProviderBindingFinalizer::FinalizeBinding)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "FinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::OnFinalizeBinding
// Il2CppName: OnFinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*)>(&Zenject::ProviderBindingFinalizer::OnFinalizeBinding)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "OnFinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::RegisterProvider
// Il2CppName: RegisterProvider
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::RegisterProvider
// Il2CppName: RegisterProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*, System::Type*, Zenject::IProvider*)>(&Zenject::ProviderBindingFinalizer::RegisterProvider)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* contractType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("Zenject", "IProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "RegisterProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, contractType, provider});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::RegisterProviderPerContract
// Il2CppName: RegisterProviderPerContract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*)>(&Zenject::ProviderBindingFinalizer::RegisterProviderPerContract)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* providerFunc = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer"), ::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("Zenject", "IProvider")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "RegisterProviderPerContract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, providerFunc});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::RegisterProviderForAllContracts
// Il2CppName: RegisterProviderForAllContracts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*, Zenject::IProvider*)>(&Zenject::ProviderBindingFinalizer::RegisterProviderForAllContracts)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("Zenject", "IProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "RegisterProviderForAllContracts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, provider});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::RegisterProvidersPerContractAndConcreteType
// Il2CppName: RegisterProvidersPerContractAndConcreteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*, System::Collections::Generic::List_1<System::Type*>*, System::Func_3<System::Type*, System::Type*, Zenject::IProvider*>*)>(&Zenject::ProviderBindingFinalizer::RegisterProvidersPerContractAndConcreteType)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* providerFunc = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("Zenject", "IProvider")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "RegisterProvidersPerContractAndConcreteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteTypes, providerFunc});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::ValidateBindTypes
// Il2CppName: ValidateBindTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ProviderBindingFinalizer::*)(System::Type*, System::Type*)>(&Zenject::ProviderBindingFinalizer::ValidateBindTypes)> {
  const MethodInfo* get() {
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* contractType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "ValidateBindTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{concreteType, contractType});
  }
};
// Writing MetadataGetter for method: Zenject::ProviderBindingFinalizer::RegisterProvidersForAllContractsPerConcreteType
// Il2CppName: RegisterProvidersForAllContractsPerConcreteType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ProviderBindingFinalizer::*)(Zenject::DiContainer*, System::Collections::Generic::List_1<System::Type*>*, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*)>(&Zenject::ProviderBindingFinalizer::RegisterProvidersForAllContractsPerConcreteType)> {
  const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    static auto* providerFunc = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "DiContainer"), ::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("Zenject", "IProvider")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ProviderBindingFinalizer*), "RegisterProvidersForAllContractsPerConcreteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteTypes, providerFunc});
  }
};
