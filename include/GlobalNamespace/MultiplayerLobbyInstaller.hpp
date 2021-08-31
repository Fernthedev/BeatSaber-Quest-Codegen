// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLobbyAvatarController
  class MultiplayerLobbyAvatarController;
  // Forward declaring type: MultiplayerLobbyAvatarPlace
  class MultiplayerLobbyAvatarPlace;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLobbyInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLobbyInstaller : public Zenject::MonoInstaller {
    public:
    // private MultiplayerLobbyAvatarController _multiplayerLobbyAvatarControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerLobbyAvatarControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarController*) == 0x8);
    // private MultiplayerLobbyAvatarPlace _multiplayerAvatarPlacePrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerLobbyAvatarPlace* multiplayerAvatarPlacePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLobbyAvatarPlace*) == 0x8);
    // Creating value type constructor for type: MultiplayerLobbyInstaller
    MultiplayerLobbyInstaller(GlobalNamespace::MultiplayerLobbyAvatarController* multiplayerLobbyAvatarControllerPrefab_ = {}, GlobalNamespace::MultiplayerLobbyAvatarPlace* multiplayerAvatarPlacePrefab_ = {}) noexcept : multiplayerLobbyAvatarControllerPrefab{multiplayerLobbyAvatarControllerPrefab_}, multiplayerAvatarPlacePrefab{multiplayerAvatarPlacePrefab_} {}
    // Get instance field: private MultiplayerLobbyAvatarController _multiplayerLobbyAvatarControllerPrefab
    GlobalNamespace::MultiplayerLobbyAvatarController* _get__multiplayerLobbyAvatarControllerPrefab();
    // Set instance field: private MultiplayerLobbyAvatarController _multiplayerLobbyAvatarControllerPrefab
    void _set__multiplayerLobbyAvatarControllerPrefab(GlobalNamespace::MultiplayerLobbyAvatarController* value);
    // Get instance field: private MultiplayerLobbyAvatarPlace _multiplayerAvatarPlacePrefab
    GlobalNamespace::MultiplayerLobbyAvatarPlace* _get__multiplayerAvatarPlacePrefab();
    // Set instance field: private MultiplayerLobbyAvatarPlace _multiplayerAvatarPlacePrefab
    void _set__multiplayerAvatarPlacePrefab(GlobalNamespace::MultiplayerLobbyAvatarPlace* value);
    // public System.Void .ctor()
    // Offset: 0x1064610
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLobbyInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLobbyInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLobbyInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x106454C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerLobbyInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLobbyInstaller), 40 + sizeof(GlobalNamespace::MultiplayerLobbyAvatarPlace*)> __GlobalNamespace_MultiplayerLobbyInstallerSizeCheck;
  static_assert(sizeof(MultiplayerLobbyInstaller) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyInstaller*, "", "MultiplayerLobbyInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLobbyInstaller::*)()>(&GlobalNamespace::MultiplayerLobbyInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLobbyInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
