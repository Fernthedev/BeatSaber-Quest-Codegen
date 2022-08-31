// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Forward declaring type: PreLateUpdate
  struct PreLateUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PreLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PreLateUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: 105992C
  // [RequiredByNativeCodeAttribute] Offset: 105992C
  struct PreLateUpdate/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::AIUpdatePostScript
    struct AIUpdatePostScript;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::DirectorUpdateAnimationBegin
    struct DirectorUpdateAnimationBegin;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::LegacyAnimationUpdate
    struct LegacyAnimationUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::DirectorUpdateAnimationEnd
    struct DirectorUpdateAnimationEnd;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::DirectorDeferredEvaluate
    struct DirectorDeferredEvaluate;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::UpdateNetworkManager
    struct UpdateNetworkManager;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::UpdateMasterServerInterface
    struct UpdateMasterServerInterface;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::UNetUpdate
    struct UNetUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::EndGraphicsJobsAfterScriptUpdate
    struct EndGraphicsJobsAfterScriptUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::ParticleSystemBeginUpdateAll
    struct ParticleSystemBeginUpdateAll;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::ScriptRunBehaviourLateUpdate
    struct ScriptRunBehaviourLateUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::PreLateUpdate::ConstraintManagerUpdate
    struct ConstraintManagerUpdate;
    // Creating value type constructor for type: PreLateUpdate
    constexpr PreLateUpdate() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PreLateUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
