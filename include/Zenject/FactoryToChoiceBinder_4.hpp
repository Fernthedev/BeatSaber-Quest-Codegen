// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder`4
#include "Zenject/FactoryFromBinder_4.hpp"
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
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryToChoiceBinder`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryToChoiceBinder_4 : public Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract> {
    public:
    // Creating value type constructor for type: FactoryToChoiceBinder_4
    FactoryToChoiceBinder_4() noexcept {}
    // public Zenject.FactoryFromBinder`4<TParam1,TParam2,TParam3,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>* ToSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_4::ToSelf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TContract>*, false>(___instance_arg, ___internal__method);
    }
    // public Zenject.FactoryFromBinder`4<TParam1,TParam2,TParam3,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_4::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_4<TParam1, TParam2, TParam3, TConcrete>*, false>(___instance_arg, ___generic__method);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`4
    // Base method: System.Void FactoryFromBinder_4::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryToChoiceBinder_4<TParam1, TParam2, TParam3, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryToChoiceBinder_4<TParam1, TParam2, TParam3, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`4
  // Could not write size check! Type: Zenject.FactoryToChoiceBinder`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_4, "Zenject", "FactoryToChoiceBinder`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
