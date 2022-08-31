// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: Kernel
  class Kernel;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
  class WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    public:
    // private Zenject.SubContainerCreatorBindInfo _subContainerBindInfo
    // Size: 0x8
    // Offset: 0x20
    ::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::SubContainerCreatorBindInfo*) == 0x8);
    public:
    // Get instance field reference: private Zenject.SubContainerCreatorBindInfo _subContainerBindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::SubContainerCreatorBindInfo*& dyn__subContainerBindInfo();
    // public System.Void .ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    // Offset: 0x1D210A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(subContainerBindInfo, bindInfo)));
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0x1D210D8
    ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TKernel>
    ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() {
      static_assert(std::is_convertible_v<TKernel, ::Zenject::Kernel*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithKernel", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method);
    }
  }; // Zenject.WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
  static check_size<sizeof(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder), 32 + sizeof(::Zenject::SubContainerCreatorBindInfo*)> __Zenject_WithKernelScopeConcreteIdArgConditionCopyNonLazyBinderSizeCheck;
  static_assert(sizeof(WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel
// Il2CppName: WithKernel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* (Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::*)()>(&Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder*), "WithKernel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::WithKernelScopeConcreteIdArgConditionCopyNonLazyBinder::WithKernel
// Il2CppName: WithKernel
// Cannot write MetadataGetter for generic methods!
