// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PlaceholderFactory`6
#include "Zenject/PlaceholderFactory_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.Factory`6
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: E015DC
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class Factory_6 : public Zenject::PlaceholderFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue> {
    public:
    // Creating value type constructor for type: Factory_6
    Factory_6() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`6
    // Base method: System.Void PlaceholderFactory_6::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Factory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Factory_6::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Factory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*, creationType>()));
    }
  }; // Zenject.Factory`6
  // Could not write size check! Type: Zenject.Factory`6 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_6, "Zenject", "Factory`6");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
