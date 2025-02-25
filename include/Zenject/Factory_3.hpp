// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PlaceholderFactory`3
#include "Zenject/PlaceholderFactory_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.Factory`3
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: E01534
  template<typename TParam1, typename TParam2, typename TValue>
  class Factory_3 : public Zenject::PlaceholderFactory_3<TParam1, TParam2, TValue> {
    public:
    // Creating value type constructor for type: Factory_3
    Factory_3() noexcept {}
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`3
    // Base method: System.Void PlaceholderFactory_3::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Factory_3<TParam1, TParam2, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Factory_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Factory_3<TParam1, TParam2, TValue>*, creationType>()));
    }
  }; // Zenject.Factory`3
  // Could not write size check! Type: Zenject.Factory`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_3, "Zenject", "Factory`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
