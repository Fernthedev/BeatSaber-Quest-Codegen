// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory
#include "Zenject/IFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactory_1, "Zenject", "IFactory`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.IFactory`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class IFactory_1/*, public Zenject::IFactory*/ {
    public:
    // Creating interface conversion operator: operator Zenject::IFactory
    operator Zenject::IFactory() noexcept {
      return *reinterpret_cast<Zenject::IFactory*>(this);
    }
    // public TValue Create()
    // Offset: 0xFFFFFFFF
    TValue Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::IFactory_1::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method);
    }
  }; // Zenject.IFactory`1
  // Could not write size check! Type: Zenject.IFactory`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
