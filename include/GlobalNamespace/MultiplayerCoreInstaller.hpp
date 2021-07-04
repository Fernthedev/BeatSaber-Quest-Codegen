// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: ScoreSyncStateManager
  class ScoreSyncStateManager;
  // Forward declaring type: MultiplayerBadgesModelSO
  class MultiplayerBadgesModelSO;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerCoreInstaller
  class MultiplayerCoreInstaller : public Zenject::MonoInstaller {
    public:
    // [SpaceAttribute] Offset: 0xE20BA4
    // private ScoreSyncStateManager _scoreSyncStateManagerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ScoreSyncStateManager* scoreSyncStateManagerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreSyncStateManager*) == 0x8);
    // private MultiplayerBadgesModelSO _multiplayerBadgesModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerBadgesModelSO* multiplayerBadgesModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBadgesModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE20BEC
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0xE20BFC
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // Creating value type constructor for type: MultiplayerCoreInstaller
    MultiplayerCoreInstaller(GlobalNamespace::ScoreSyncStateManager* scoreSyncStateManagerPrefab_ = {}, GlobalNamespace::MultiplayerBadgesModelSO* multiplayerBadgesModel_ = {}, GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}) noexcept : scoreSyncStateManagerPrefab{scoreSyncStateManagerPrefab_}, multiplayerBadgesModel{multiplayerBadgesModel_}, sceneSetupData{sceneSetupData_}, multiplayerSessionManager{multiplayerSessionManager_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x115379C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1153CE0
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCoreInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerCoreInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCoreInstaller*, creationType>()));
    }
  }; // MultiplayerCoreInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerCoreInstaller), 56 + sizeof(GlobalNamespace::IMultiplayerSessionManager*)> __GlobalNamespace_MultiplayerCoreInstallerSizeCheck;
  static_assert(sizeof(MultiplayerCoreInstaller) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCoreInstaller*, "", "MultiplayerCoreInstaller");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCoreInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerCoreInstaller::*)()>(&GlobalNamespace::MultiplayerCoreInstaller::InstallBindings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerCoreInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerCoreInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
