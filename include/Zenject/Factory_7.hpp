// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PlaceholderFactory`7
#include "Zenject/PlaceholderFactory_7.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.Factory`7
  // [ObsoleteAttribute] Offset: DDCC64
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
  class Factory_7 : public Zenject::PlaceholderFactory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue> {
    public:
    // Creating value type constructor for type: Factory_7
    Factory_7() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`7
    // Base method: System.Void PlaceholderFactory_7::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Factory_7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Factory_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*, creationType>()));
    }
  }; // Zenject.Factory`7
  // Could not write size check! Type: Zenject.Factory`7 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_7, "Zenject", "Factory`7");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
