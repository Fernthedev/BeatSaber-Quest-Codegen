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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
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
  // Forward declaring type: PatternFightSceneSetup
  class PatternFightSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PatternFightSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PatternFightSceneSetup*, "", "PatternFightSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class PatternFightSceneSetup : public ::Zenject::MonoInstaller {
    public:
    public:
    // private UnityEngine.AudioClip _testAudioClip
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioClip* testAudioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Single _testAudioClipBPM
    // Size: 0x4
    // Offset: 0x28
    float testAudioClipBPM;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: testAudioClipBPM and: playerHeightDetectorPrefab
    char __padding1[0x4] = {};
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // [SpaceAttribute] Offset: 0x10F7ADC
    // private AudioManagerSO _audioMixer
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::AudioManagerSO* audioMixer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10F7B14
    // private readonly PatternFightSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::PatternFightSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PatternFightSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.AudioClip _testAudioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__testAudioClip();
    // Get instance field reference: private System.Single _testAudioClipBPM
    [[deprecated("Use field access instead!")]] float& dyn__testAudioClipBPM();
    // Get instance field reference: private PlayerHeightDetector _playerHeightDetectorPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeightDetector*& dyn__playerHeightDetectorPrefab();
    // Get instance field reference: private AudioManagerSO _audioMixer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioManagerSO*& dyn__audioMixer();
    // Get instance field reference: private readonly PatternFightSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PatternFightSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x1344F50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PatternFightSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightSceneSetup*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x1344634
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // PatternFightSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(PatternFightSceneSetup), 64 + sizeof(::GlobalNamespace::PatternFightSceneSetupData*)> __GlobalNamespace_PatternFightSceneSetupSizeCheck;
  static_assert(sizeof(PatternFightSceneSetup) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PatternFightSceneSetup::*)()>(&GlobalNamespace::PatternFightSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PatternFightSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
