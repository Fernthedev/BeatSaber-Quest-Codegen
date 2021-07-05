// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder`3
#include "Zenject/FactoryFromBinder_3.hpp"
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
  // Autogenerated type: Zenject.FactoryToChoiceBinder`3
  // [NoReflectionBakingAttribute] Offset: DDC884
  template<typename TParam1, typename TParam2, typename TContract>
  class FactoryToChoiceBinder_3 : public Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract> {
    public:
    // Creating value type constructor for type: FactoryToChoiceBinder_3
    FactoryToChoiceBinder_3() noexcept {}
    // public Zenject.FactoryFromBinder`3<TParam1,TParam2,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* ToSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_3::ToSelf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactoryFromBinder`3<TParam1,TParam2,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_3::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>*, false>(this, ___generic__method);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`3
    // Base method: System.Void FactoryFromBinder_3::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryToChoiceBinder_3<TParam1, TParam2, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`3
  // Could not write size check! Type: Zenject.FactoryToChoiceBinder`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_3, "Zenject", "FactoryToChoiceBinder`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
