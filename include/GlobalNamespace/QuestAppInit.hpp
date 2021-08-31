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
  // Forward declaring type: DefaultScenesTransitionsFromInit
  class DefaultScenesTransitionsFromInit;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: QuestAppInit
  // [TokenAttribute] Offset: FFFFFFFF
  class QuestAppInit : public GlobalNamespace::AppInit {
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
    // private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DefaultScenesTransitionsFromInit*) == 0x8);
    // [SpaceAttribute] Offset: 0xE31850
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // Creating value type constructor for type: QuestAppInit
    QuestAppInit(GlobalNamespace::MainSystemInit* mainSystemInit_ = {}, GlobalNamespace::OculusInit* oculusInit_ = {}, GlobalNamespace::DefaultScenesTransitionsFromInit* defaultScenesTransitionsFromInit_ = {}, GlobalNamespace::MainSettingsModelSO* mainSettingsModel_ = {}) noexcept : mainSystemInit{mainSystemInit_}, oculusInit{oculusInit_}, defaultScenesTransitionsFromInit{defaultScenesTransitionsFromInit_}, mainSettingsModel{mainSettingsModel_} {}
    // Get instance field: private MainSystemInit _mainSystemInit
    GlobalNamespace::MainSystemInit* _get__mainSystemInit();
    // Set instance field: private MainSystemInit _mainSystemInit
    void _set__mainSystemInit(GlobalNamespace::MainSystemInit* value);
    // Get instance field: private OculusInit _oculusInit
    GlobalNamespace::OculusInit* _get__oculusInit();
    // Set instance field: private OculusInit _oculusInit
    void _set__oculusInit(GlobalNamespace::OculusInit* value);
    // Get instance field: private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    GlobalNamespace::DefaultScenesTransitionsFromInit* _get__defaultScenesTransitionsFromInit();
    // Set instance field: private DefaultScenesTransitionsFromInit _defaultScenesTransitionsFromInit
    void _set__defaultScenesTransitionsFromInit(GlobalNamespace::DefaultScenesTransitionsFromInit* value);
    // Get instance field: private MainSettingsModelSO _mainSettingsModel
    GlobalNamespace::MainSettingsModelSO* _get__mainSettingsModel();
    // Set instance field: private MainSettingsModelSO _mainSettingsModel
    void _set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO* value);
    // public System.Void .ctor()
    // Offset: 0x1140CB0
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
    static QuestAppInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuestAppInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuestAppInit*, creationType>()));
    }
    // protected override System.Void AppStartAndMultiSceneEditorSetup()
    // Offset: 0x1140B24
    // Implemented from: AppInit
    // Base method: System.Void AppInit::AppStartAndMultiSceneEditorSetup()
    void AppStartAndMultiSceneEditorSetup();
    // protected override System.Void RepeatableSetup()
    // Offset: 0x1140B40
    // Implemented from: AppInit
    // Base method: System.Void AppInit::RepeatableSetup()
    void RepeatableSetup();
    // protected override System.Void TransitionToNextScene()
    // Offset: 0x1140B8C
    // Implemented from: AppInit
    // Base method: System.Void AppInit::TransitionToNextScene()
    void TransitionToNextScene();
    // public override System.Void InstallBindings()
    // Offset: 0x1140BC8
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // QuestAppInit
  #pragma pack(pop)
  static check_size<sizeof(QuestAppInit), 88 + sizeof(GlobalNamespace::MainSettingsModelSO*)> __GlobalNamespace_QuestAppInitSizeCheck;
  static_assert(sizeof(QuestAppInit) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuestAppInit*, "", "QuestAppInit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuestAppInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::QuestAppInit::AppStartAndMultiSceneEditorSetup
// Il2CppName: AppStartAndMultiSceneEditorSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::AppStartAndMultiSceneEditorSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestAppInit*), "AppStartAndMultiSceneEditorSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuestAppInit::RepeatableSetup
// Il2CppName: RepeatableSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::RepeatableSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestAppInit*), "RepeatableSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuestAppInit::TransitionToNextScene
// Il2CppName: TransitionToNextScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::TransitionToNextScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestAppInit*), "TransitionToNextScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuestAppInit::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuestAppInit::*)()>(&GlobalNamespace::QuestAppInit::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuestAppInit*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
