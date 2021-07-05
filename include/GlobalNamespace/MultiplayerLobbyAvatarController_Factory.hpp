// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLobbyAvatarController
#include "GlobalNamespace/MultiplayerLobbyAvatarController.hpp"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerLobbyAvatarController/Factory
  class MultiplayerLobbyAvatarController::Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::MultiplayerLobbyAvatarController*> {
    public:
    // Creating value type constructor for type: Factory
    Factory() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1024970
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory_2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyAvatarController::Factory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyAvatarController::Factory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyAvatarController::Factory*, creationType>()));
    }
  }; // MultiplayerLobbyAvatarController/Factory
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarController::Factory*, "", "MultiplayerLobbyAvatarController/Factory");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyAvatarController::Factory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
