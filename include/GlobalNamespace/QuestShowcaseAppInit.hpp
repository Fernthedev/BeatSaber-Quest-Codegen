// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSystemInit
  class MainSystemInit;
  // Forward declaring type: OculusInit
  class OculusInit;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: QuestShowcaseAppInit
  // [TokenAttribute] Offset: FFFFFFFF
  class QuestShowcaseAppInit : public GlobalNamespace::AppInit {
    public:
    // private MainSystemInit _mainSystemInit
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MainSystemInit* mainSystemInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSystemInit*) == 0x8);
    // private OculusInit _oculusInit
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::OculusInit* oculusInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusInit*) == 0x8);
    // private MenuScenesTransitionSetupDataSO _menuTransitionSetupData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE318B8
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE318F0
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE31900
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // Creating value type constructor for type: QuestShowcaseAppInit
    QuestShowcaseAppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::OculusInit* oculusInit_ = {}, GlobalNamespace::MenuScenesTransitionSetupDataSO* menuTransitionSetupData_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}) noexcept : mainSystemInit{mainSystemInit_}, oculusInit{oculusInit_}, menuTransitionSetupData{menuTransitionSetupData_}, mainSettingsModel{mainSettingsModel_}, gameScenesManager{gameScenesManager_}, playerDataModel{playerDataModel_} {}
    // Get instance field: private MainSystemInit _mainSystemInit
    GlobalNamespace::MainSystemInit* _get__mainSystemInit();
    // Set instance field: private MainSystemInit _mainSystemInit
    void _set__mainSystemInit(GlobalNamespace::MainSystemInit* value);
    // Get instance field: private OculusInit _oculusInit
    GlobalNamespace::OculusInit* _get__oculusInit();
    // Set instance field: private OculusInit _oculusInit
    void _set__oculusInit(GlobalNamespace::OculusInit* value);
    // Get instance field: private MenuScenesTransitionSetupDataSO _menuTransitionSetupData
    GlobalNamespace::MenuScenesTransitionSetupDataSO* _get__menuTransitionSetupData();
    // Set instance field: private MenuScenesTransitionSetupDataSO _menuTransitionSetupData
    void _set__menuTransitionSetupData(GlobalNamespace::MenuScenesTransitionSetupDataSO* value);
    // Get instance field: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO* _get__mainSettingsModel();
    // Set instance field: private MainSettingsModelSO _mainSettingsModel
    void _set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO* value);
    // Get instance field: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager* _get__gameScenesManager();
    // Set instance field: private readonly GameScenesManager _gameScenesManager
    void _set__gameScenesManager(GlobalNamespace::GameScenesManager* value);
    // Get instance field: private readonly PlayerDataModel _playerDataModel
    GlobalNamespace::PlayerDataModel* _get__playerDataModel();
    // Set instance field: private readonly PlayerDataModel _playerDataModel
    void _set__playerDataModel(GlobalNamespace::PlayerDataModel* value);
    // public System.Void .ctor()
    // Offset: 0x1140F3C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::.ctor()
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuestShowcaseAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuestShowcaseAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuestShowcaseAppInit*, creationType>()));
    }
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0x1140CB8
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0x1140CD4
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0x1140E4C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0x1140E98
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // QuestShowcaseAppInit
  #pragma pack(pop)
  static check_size<sizeof(QuestShowcaseAppInit), 104 + sizeof(GlobalNamespace::PlayerDataModel*)> __GlobalNamespace_QuestShowcaseAppInitSizeCheck;
  static_assert(sizeof(QuestShowcaseAppInit) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuestShowcaseAppInit*, "", "QuestShowcaseAppInit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::AppStartAndMultiSceneEditorSetup
// Il2CppName: AppStartAndMultiSceneEditorSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestShowcaseAppInit::*)()>(&GlobalNamespace::QuestShowcaseAppInit::AppStartAndMultiSceneEditorSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestShowcaseAppInit*), "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::RepeatableSetup
// Il2CppName: RepeatableSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestShowcaseAppInit::*)()>(&GlobalNamespace::QuestShowcaseAppInit::RepeatableSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestShowcaseAppInit*), "RepeatableSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestShowcaseAppInit::*)()>(&GlobalNamespace::QuestShowcaseAppInit::TransitionToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestShowcaseAppInit*), "TransitionToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuestShowcaseAppInit::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestShowcaseAppInit::*)()>(&GlobalNamespace::QuestShowcaseAppInit::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestShowcaseAppInit*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
