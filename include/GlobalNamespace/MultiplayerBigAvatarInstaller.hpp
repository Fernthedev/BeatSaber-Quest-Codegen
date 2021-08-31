// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
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
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBigAvatarInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBigAvatarInstaller : public Zenject::MonoInstaller {
    public:
    // [InjectAttribute] Offset: 0xE3A834
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A844
    // private readonly SaberManager/InitData _saberManagerInitData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SaberManager::InitData* saberManagerInitData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE3A854
    // private readonly PlayersSpecificSettingsAtGameStartModel _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    // Creating value type constructor for type: MultiplayerBigAvatarInstaller
    MultiplayerBigAvatarInstaller(GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::SaberManager::InitData* saberManagerInitData_ = {}, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playerSpecificSettings_ = {}) noexcept : connectedPlayer{connectedPlayer_}, saberManagerInitData{saberManagerInitData_}, playerSpecificSettings{playerSpecificSettings_} {}
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly SaberManager/InitData _saberManagerInitData
    GlobalNamespace::SaberManager::InitData*& dyn__saberManagerInitData();
    // Get instance field reference: private readonly PlayersSpecificSettingsAtGameStartModel _playerSpecificSettings
    GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& dyn__playerSpecificSettings();
    // public System.Void .ctor()
    // Offset: 0x11A4170
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBigAvatarInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBigAvatarInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBigAvatarInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x11A3F88
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerBigAvatarInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBigAvatarInstaller), 48 + sizeof(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)> __GlobalNamespace_MultiplayerBigAvatarInstallerSizeCheck;
  static_assert(sizeof(MultiplayerBigAvatarInstaller) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBigAvatarInstaller*, "", "MultiplayerBigAvatarInstaller");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBigAvatarInstaller::*)()>(&GlobalNamespace::MultiplayerBigAvatarInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBigAvatarInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
