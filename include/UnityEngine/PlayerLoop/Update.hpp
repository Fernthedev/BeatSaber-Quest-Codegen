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
  // Forward declaring type: Update
  struct Update;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update, "UnityEngine.PlayerLoop", "Update");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.Update
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 10598A0
  // [MovedFromAttribute] Offset: 10598A0
  struct Update/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::PlayerLoop::Update::ScriptRunBehaviourUpdate
    struct ScriptRunBehaviourUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::Update::DirectorUpdate
    struct DirectorUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::Update::ScriptRunDelayedDynamicFrameRate
    struct ScriptRunDelayedDynamicFrameRate;
    // Nested type: ::UnityEngine::PlayerLoop::Update::ScriptRunDelayedTasks
    struct ScriptRunDelayedTasks;
    // Creating value type constructor for type: Update
    constexpr Update() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.Update
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
