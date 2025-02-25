// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleSystemEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _lightColor0
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* lightColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _lightColor1
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSO* lightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor0
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSO* highlightColor0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private ColorSO _highlightColor1
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSO* highlightColor1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // private System.Boolean _lightOnStart
    // Size: 0x1
    // Offset: 0x38
    bool lightOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightOnStart and: colorEvent
    char __padding4[0x3] = {};
    // private BeatmapEventType _colorEvent
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::BeatmapEventType colorEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0xE3DF50
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // [InjectAttribute] Offset: 0xE3DF88
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Boolean _lightIsOn
    // Size: 0x1
    // Offset: 0x50
    bool lightIsOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lightIsOn and: offColor
    char __padding8[0x3] = {};
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _highlightValue
    // Size: 0x4
    // Offset: 0x64
    float highlightValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _afterHighlightColor
    // Size: 0x10
    // Offset: 0x68
    UnityEngine::Color afterHighlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _highlightColor
    // Size: 0x10
    // Offset: 0x78
    UnityEngine::Color highlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single kFadeSpeed
    // Size: 0x4
    // Offset: 0x88
    float kFadeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _particleSpeedMultiplier
    // Size: 0x4
    // Offset: 0x8C
    float particleSpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::ParticleSystem::MainModule mainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    // Size: 0x8
    // Offset: 0x98
    ::Array<UnityEngine::ParticleSystem::Particle>* particles;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::Particle>*) == 0x8);
    // private UnityEngine.Color _particleColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color particleColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _particleSpeed
    // Size: 0x4
    // Offset: 0xB0
    float particleSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ParticleSystemEventEffect
    ParticleSystemEventEffect(GlobalNamespace::ColorSO* lightColor0_ = {}, GlobalNamespace::ColorSO* lightColor1_ = {}, GlobalNamespace::ColorSO* highlightColor0_ = {}, GlobalNamespace::ColorSO* highlightColor1_ = {}, bool lightOnStart_ = {}, GlobalNamespace::BeatmapEventType colorEvent_ = {}, UnityEngine::ParticleSystem* particleSystem_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, bool lightIsOn_ = {}, UnityEngine::Color offColor_ = {}, float highlightValue_ = {}, UnityEngine::Color afterHighlightColor_ = {}, UnityEngine::Color highlightColor_ = {}, float kFadeSpeed_ = {}, float particleSpeedMultiplier_ = {}, UnityEngine::ParticleSystem::MainModule mainModule_ = {}, ::Array<UnityEngine::ParticleSystem::Particle>* particles_ = {}, UnityEngine::Color particleColor_ = {}, float particleSpeed_ = {}) noexcept : lightColor0{lightColor0_}, lightColor1{lightColor1_}, highlightColor0{highlightColor0_}, highlightColor1{highlightColor1_}, lightOnStart{lightOnStart_}, colorEvent{colorEvent_}, particleSystem{particleSystem_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, lightIsOn{lightIsOn_}, offColor{offColor_}, highlightValue{highlightValue_}, afterHighlightColor{afterHighlightColor_}, highlightColor{highlightColor_}, kFadeSpeed{kFadeSpeed_}, particleSpeedMultiplier{particleSpeedMultiplier_}, mainModule{mainModule_}, particles{particles_}, particleColor{particleColor_}, particleSpeed{particleSpeed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSO _lightColor0
    GlobalNamespace::ColorSO*& dyn__lightColor0();
    // Get instance field reference: private ColorSO _lightColor1
    GlobalNamespace::ColorSO*& dyn__lightColor1();
    // Get instance field reference: private ColorSO _highlightColor0
    GlobalNamespace::ColorSO*& dyn__highlightColor0();
    // Get instance field reference: private ColorSO _highlightColor1
    GlobalNamespace::ColorSO*& dyn__highlightColor1();
    // Get instance field reference: private System.Boolean _lightOnStart
    bool& dyn__lightOnStart();
    // Get instance field reference: private BeatmapEventType _colorEvent
    GlobalNamespace::BeatmapEventType& dyn__colorEvent();
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private System.Boolean _lightIsOn
    bool& dyn__lightIsOn();
    // Get instance field reference: private UnityEngine.Color _offColor
    UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private System.Single _highlightValue
    float& dyn__highlightValue();
    // Get instance field reference: private UnityEngine.Color _afterHighlightColor
    UnityEngine::Color& dyn__afterHighlightColor();
    // Get instance field reference: private UnityEngine.Color _highlightColor
    UnityEngine::Color& dyn__highlightColor();
    // Get instance field reference: private System.Single kFadeSpeed
    float& dyn_kFadeSpeed();
    // Get instance field reference: private System.Single _particleSpeedMultiplier
    float& dyn__particleSpeedMultiplier();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.MainModule _mainModule
    UnityEngine::ParticleSystem::MainModule& dyn__mainModule();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.Particle[] _particles
    ::Array<UnityEngine::ParticleSystem::Particle>*& dyn__particles();
    // Get instance field reference: private UnityEngine.Color _particleColor
    UnityEngine::Color& dyn__particleColor();
    // Get instance field reference: private System.Single _particleSpeed
    float& dyn__particleSpeed();
    // protected System.Void Start()
    // Offset: 0x1036368
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x1036660
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1036760
    void Update();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x1036884
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void RefreshParticles()
    // Offset: 0x1036524
    void RefreshParticles();
    // public System.Void .ctor()
    // Offset: 0x1036A6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParticleSystemEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemEventEffect*, creationType>()));
    }
  }; // ParticleSystemEventEffect
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemEventEffect), 176 + sizeof(float)> __GlobalNamespace_ParticleSystemEventEffectSizeCheck;
  static_assert(sizeof(ParticleSystemEventEffect) == 0xB4);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemEventEffect*, "", "ParticleSystemEventEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::ParticleSystemEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventEffect::RefreshParticles
// Il2CppName: RefreshParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEventEffect::*)()>(&GlobalNamespace::ParticleSystemEventEffect::RefreshParticles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEventEffect*), "RefreshParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
