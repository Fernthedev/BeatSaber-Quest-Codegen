// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLocalActivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerLocalActivePlayerFacade/Factory
  class MultiplayerLocalActivePlayerFacade::Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::MultiplayerPlayerStartState, GlobalNamespace::MultiplayerLocalActivePlayerFacade*> {
    public:
    // Creating value type constructor for type: Factory
    Factory() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x102AA50
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory_2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerFacade::Factory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade::Factory*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerFacade/Factory
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory*, "", "MultiplayerLocalActivePlayerFacade/Factory");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerFacade::Factory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
