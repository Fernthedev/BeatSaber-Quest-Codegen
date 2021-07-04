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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnControllerPlayerHeightSetter
  class BeatmapObjectSpawnControllerPlayerHeightSetter;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: PatternFightSceneSetupData
  class PatternFightSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightSceneSetup
  class PatternFightSceneSetup : public Zenject::MonoInstaller {
    public:
    // private UnityEngine.AudioClip _testAudioClip
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AudioClip* testAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // private System.Single _testAudioClipBPM
    // Size: 0x4
    // Offset: 0x28
    float testAudioClipBPM;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: testAudioClipBPM and: beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    char __padding1[0x4] = {};
    // private BeatmapObjectSpawnControllerPlayerHeightSetter _beatmapObjectSpawnControllerPlayerHeightSetterPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*) == 0x8);
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // [SpaceAttribute] Offset: 0xE29324
    // private AudioManagerSO _audioMixer
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AudioManagerSO* audioMixer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE2935C
    // private PatternFightSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PatternFightSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PatternFightSceneSetupData*) == 0x8);
    // Creating value type constructor for type: PatternFightSceneSetup
    PatternFightSceneSetup(UnityEngine::AudioClip* testAudioClip_ = {}, float testAudioClipBPM_ = {}, GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter* beatmapObjectSpawnControllerPlayerHeightSetterPrefab_ = {}, GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab_ = {}, GlobalNamespace::AudioManagerSO* audioMixer_ = {}, GlobalNamespace::PatternFightSceneSetupData* sceneSetupData_ = {}) noexcept : testAudioClip{testAudioClip_}, testAudioClipBPM{testAudioClipBPM_}, beatmapObjectSpawnControllerPlayerHeightSetterPrefab{beatmapObjectSpawnControllerPlayerHeightSetterPrefab_}, playerHeightDetectorPrefab{playerHeightDetectorPrefab_}, audioMixer{audioMixer_}, sceneSetupData{sceneSetupData_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x104C484
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x104CC80
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PatternFightSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightSceneSetup*, creationType>()));
    }
  }; // PatternFightSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(PatternFightSceneSetup), 72 + sizeof(GlobalNamespace::PatternFightSceneSetupData*)> __GlobalNamespace_PatternFightSceneSetupSizeCheck;
  static_assert(sizeof(PatternFightSceneSetup) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSceneSetup*, "", "PatternFightSceneSetup");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSceneSetup::*)()>(&GlobalNamespace::PatternFightSceneSetup::InstallBindings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
