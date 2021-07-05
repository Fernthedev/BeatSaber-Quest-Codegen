// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Zenject.IFactory
#include "Zenject/IFactory.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactory`11
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10, typename TValue>
  class IFactory_11/*, public Zenject::IFactory*/ {
    public:
    // Creating value type constructor for type: IFactory_11
    IFactory_11() noexcept {}
    // Creating interface conversion operator: operator Zenject::IFactory
    operator Zenject::IFactory() noexcept {
      return *reinterpret_cast<Zenject::IFactory*>(this);
    }
    // public TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8, TParam9 param9, TParam10 param10)
    // Offset: 0xFFFFFFFF
    TValue Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8, TParam9 param9, TParam10 param10) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactory_11::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(param1), ::il2cpp_utils::ExtractType(param2), ::il2cpp_utils::ExtractType(param3), ::il2cpp_utils::ExtractType(param4), ::il2cpp_utils::ExtractType(param5), ::il2cpp_utils::ExtractType(param6), ::il2cpp_utils::ExtractType(param7), ::il2cpp_utils::ExtractType(param8), ::il2cpp_utils::ExtractType(param9), ::il2cpp_utils::ExtractType(param10)})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
    }
  }; // Zenject.IFactory`11
  // Could not write size check! Type: Zenject.IFactory`11 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_11, "Zenject", "IFactory`11");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
