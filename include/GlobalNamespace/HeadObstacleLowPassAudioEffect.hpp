// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: MainAudioEffects
  class MainAudioEffects;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: HeadObstacleLowPassAudioEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class HeadObstacleLowPassAudioEffect : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE3DAF4
    // private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0xE3DB04
    // private MainAudioEffects _mainAudioEffects
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainAudioEffects* mainAudioEffects;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainAudioEffects*) == 0x8);
    // private System.Boolean _headWasInObstacle
    // Size: 0x1
    // Offset: 0x28
    bool headWasInObstacle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HeadObstacleLowPassAudioEffect
    HeadObstacleLowPassAudioEffect(GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction_ = {}, GlobalNamespace::MainAudioEffects* mainAudioEffects_ = {}, bool headWasInObstacle_ = {}) noexcept : playerHeadAndObstacleInteraction{playerHeadAndObstacleInteraction_}, mainAudioEffects{mainAudioEffects_}, headWasInObstacle{headWasInObstacle_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private MainAudioEffects _mainAudioEffects
    GlobalNamespace::MainAudioEffects*& dyn__mainAudioEffects();
    // Get instance field reference: private System.Boolean _headWasInObstacle
    bool& dyn__headWasInObstacle();
    // protected System.Void Update()
    // Offset: 0x1185C74
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1185D1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeadObstacleLowPassAudioEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HeadObstacleLowPassAudioEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeadObstacleLowPassAudioEffect*, creationType>()));
    }
  }; // HeadObstacleLowPassAudioEffect
  #pragma pack(pop)
  static check_size<sizeof(HeadObstacleLowPassAudioEffect), 40 + sizeof(bool)> __GlobalNamespace_HeadObstacleLowPassAudioEffectSizeCheck;
  static_assert(sizeof(HeadObstacleLowPassAudioEffect) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HeadObstacleLowPassAudioEffect*, "", "HeadObstacleLowPassAudioEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HeadObstacleLowPassAudioEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HeadObstacleLowPassAudioEffect::*)()>(&GlobalNamespace::HeadObstacleLowPassAudioEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HeadObstacleLowPassAudioEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HeadObstacleLowPassAudioEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
