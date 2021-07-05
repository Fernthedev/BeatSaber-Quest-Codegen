// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder`11
#include "Zenject/FactoryFromBinder_11.hpp"
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
  // Autogenerated type: Zenject.FactoryToChoiceBinder`11
  // [NoReflectionBakingAttribute] Offset: DDC874
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10, typename TContract>
  class FactoryToChoiceBinder_11 : public Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract> {
    public:
    // Creating value type constructor for type: FactoryToChoiceBinder_11
    FactoryToChoiceBinder_11() noexcept {}
    // public Zenject.FactoryFromBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* ToSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_11::ToSelf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToSelf", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactoryFromBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_11::To");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TConcrete>*, false>(this, ___generic__method);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`11
    // Base method: System.Void FactoryFromBinder_11::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryToChoiceBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`11
  // Could not write size check! Type: Zenject.FactoryToChoiceBinder`11 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_11, "Zenject", "FactoryToChoiceBinder`11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
