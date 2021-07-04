// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberClashChecker
  class SaberClashChecker;
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: SaberClashEffect
  class SaberClashEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparkleParticleSystem
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparkleParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _glowParticleSystem
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* glowParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Size: 0x8
    // Offset: 0x28
    Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // Field size check
    static_assert(sizeof(Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B160
    // private SaberClashChecker _saberClashChecker
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberClashChecker* saberClashChecker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberClashChecker*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B170
    // private HapticFeedbackController _hapticFeedbackController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HapticFeedbackController*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B180
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule _sparkleParticleSystemEmmisionModule
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmmisionModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmissionModule) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule _glowParticleSystemEmmisionModule
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::ParticleSystem::EmissionModule glowParticleSystemEmmisionModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmissionModule) == 0x8);
    // private System.Boolean _sabersAreClashing
    // Size: 0x1
    // Offset: 0x58
    bool sabersAreClashing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SaberClashEffect
    SaberClashEffect(UnityEngine::ParticleSystem* sparkleParticleSystem_ = {}, UnityEngine::ParticleSystem* glowParticleSystem_ = {}, Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset_ = {}, GlobalNamespace::SaberClashChecker* saberClashChecker_ = {}, GlobalNamespace::HapticFeedbackController* hapticFeedbackController_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmmisionModule_ = {}, UnityEngine::ParticleSystem::EmissionModule glowParticleSystemEmmisionModule_ = {}, bool sabersAreClashing_ = {}) noexcept : sparkleParticleSystem{sparkleParticleSystem_}, glowParticleSystem{glowParticleSystem_}, rumblePreset{rumblePreset_}, saberClashChecker{saberClashChecker_}, hapticFeedbackController{hapticFeedbackController_}, colorManager{colorManager_}, sparkleParticleSystemEmmisionModule{sparkleParticleSystemEmmisionModule_}, glowParticleSystemEmmisionModule{glowParticleSystemEmmisionModule_}, sabersAreClashing{sabersAreClashing_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x10B8030
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x10B81F4
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0x10B8204
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x10B8308
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberClashEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberClashEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberClashEffect*, creationType>()));
    }
  }; // SaberClashEffect
  #pragma pack(pop)
  static check_size<sizeof(SaberClashEffect), 88 + sizeof(bool)> __GlobalNamespace_SaberClashEffectSizeCheck;
  static_assert(sizeof(SaberClashEffect) == 0x59);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashEffect*, "", "SaberClashEffect");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::SaberClashEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberClashEffect::*)()>(&GlobalNamespace::SaberClashEffect::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberClashEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberClashEffect::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberClashEffect::*)()>(&GlobalNamespace::SaberClashEffect::OnDisable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberClashEffect*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberClashEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberClashEffect::*)()>(&GlobalNamespace::SaberClashEffect::LateUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberClashEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberClashEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
