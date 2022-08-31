// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScreenCaptureAfterDelay
  class ScreenCaptureAfterDelay;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameCoreSceneSetup
  class GameCoreSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: GameCoreSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class GameCoreSceneSetup : public ::Zenject::MonoInstaller {
    public:
    public:
    // private ScreenCaptureAfterDelay _screenCaptureAfterDelayPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ScreenCaptureAfterDelay* screenCaptureAfterDelayPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ScreenCaptureAfterDelay*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomFogSO*) == 0x8);
    public:
    // static field const value: static private System.Single kPauseButtonPressDurationMultiplier
    static constexpr const float kPauseButtonPressDurationMultiplier = 0.75;
    // Get static field: static private System.Single kPauseButtonPressDurationMultiplier
    static float _get_kPauseButtonPressDurationMultiplier();
    // Set static field: static private System.Single kPauseButtonPressDurationMultiplier
    static void _set_kPauseButtonPressDurationMultiplier(float value);
    // Get instance field reference: private ScreenCaptureAfterDelay _screenCaptureAfterDelayPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ScreenCaptureAfterDelay*& dyn__screenCaptureAfterDelayPrefab();
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private BloomFogSO _bloomFog
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomFogSO*& dyn__bloomFog();
    // public System.Void .ctor()
    // Offset: 0x1378798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameCoreSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameCoreSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameCoreSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13783B0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // GameCoreSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(GameCoreSceneSetup), 48 + sizeof(::GlobalNamespace::BloomFogSO*)> __GlobalNamespace_GameCoreSceneSetupSizeCheck;
  static_assert(sizeof(GameCoreSceneSetup) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameCoreSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameCoreSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameCoreSceneSetup::*)()>(&GlobalNamespace::GameCoreSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameCoreSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
