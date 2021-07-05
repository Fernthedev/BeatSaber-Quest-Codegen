// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
// Including type: UnityEngine.ParticleSystem/ShapeModule
#include "UnityEngine/ParticleSystem_ShapeModule.hpp"
// Including type: UnityEngine.ParticleSystem/MinMaxCurve
#include "UnityEngine/ParticleSystem_MinMaxCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x230
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutParticlesEffect
  class NoteCutParticlesEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparklesPS
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparklesPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _explosionPS
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* explosionPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _explosionCorePS
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ParticleSystem* explosionCorePS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _explosionPrePassBloomPS
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::ParticleSystem* explosionPrePassBloomPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem/EmitParams _sparklesPSEmitParams
    // Size: 0x8F
    // Offset: 0x38
    UnityEngine::ParticleSystem::EmitParams sparklesPSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: sparklesPSEmitParams and: sparklesPSMainModule
    char __padding4[0x1] = {};
    // private UnityEngine.ParticleSystem/MainModule _sparklesPSMainModule
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::ParticleSystem::MainModule sparklesPSMainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/ShapeModule _sparklesPSShapeModule
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::ParticleSystem::ShapeModule sparklesPSShapeModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::ShapeModule) == 0x8);
    // private UnityEngine.ParticleSystem/MinMaxCurve _sparklesLifetimeMinMaxCurve
    // Size: 0x20
    // Offset: 0xD8
    UnityEngine::ParticleSystem::MinMaxCurve sparklesLifetimeMinMaxCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MinMaxCurve) == 0x20);
    // private UnityEngine.ParticleSystem/EmitParams _explosionPSEmitParams
    // Size: 0x8F
    // Offset: 0xF8
    UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: explosionPSEmitParams and: explosionCorePSEmitParams
    char __padding8[0x1] = {};
    // private UnityEngine.ParticleSystem/EmitParams _explosionCorePSEmitParams
    // Size: 0x8F
    // Offset: 0x188
    UnityEngine::ParticleSystem::EmitParams explosionCorePSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: explosionCorePSEmitParams and: explosionCorePSMainModule
    char __padding9[0x1] = {};
    // private UnityEngine.ParticleSystem/MainModule _explosionCorePSMainModule
    // Size: 0x8
    // Offset: 0x218
    UnityEngine::ParticleSystem::MainModule explosionCorePSMainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/ShapeModule _explosionCorePSShapeModule
    // Size: 0x8
    // Offset: 0x220
    UnityEngine::ParticleSystem::ShapeModule explosionCorePSShapeModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::ShapeModule) == 0x8);
    // private UnityEngine.ParticleSystem/ShapeModule _explosionPrePassBloomPSShapeModule
    // Size: 0x8
    // Offset: 0x228
    UnityEngine::ParticleSystem::ShapeModule explosionPrePassBloomPSShapeModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::ShapeModule) == 0x8);
    // Creating value type constructor for type: NoteCutParticlesEffect
    NoteCutParticlesEffect(UnityEngine::ParticleSystem* sparklesPS_ = {}, UnityEngine::ParticleSystem* explosionPS_ = {}, UnityEngine::ParticleSystem* explosionCorePS_ = {}, UnityEngine::ParticleSystem* explosionPrePassBloomPS_ = {}, UnityEngine::ParticleSystem::EmitParams sparklesPSEmitParams_ = {}, UnityEngine::ParticleSystem::MainModule sparklesPSMainModule_ = {}, UnityEngine::ParticleSystem::ShapeModule sparklesPSShapeModule_ = {}, UnityEngine::ParticleSystem::MinMaxCurve sparklesLifetimeMinMaxCurve_ = {}, UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams_ = {}, UnityEngine::ParticleSystem::EmitParams explosionCorePSEmitParams_ = {}, UnityEngine::ParticleSystem::MainModule explosionCorePSMainModule_ = {}, UnityEngine::ParticleSystem::ShapeModule explosionCorePSShapeModule_ = {}, UnityEngine::ParticleSystem::ShapeModule explosionPrePassBloomPSShapeModule_ = {}) noexcept : sparklesPS{sparklesPS_}, explosionPS{explosionPS_}, explosionCorePS{explosionCorePS_}, explosionPrePassBloomPS{explosionPrePassBloomPS_}, sparklesPSEmitParams{sparklesPSEmitParams_}, sparklesPSMainModule{sparklesPSMainModule_}, sparklesPSShapeModule{sparklesPSShapeModule_}, sparklesLifetimeMinMaxCurve{sparklesLifetimeMinMaxCurve_}, explosionPSEmitParams{explosionPSEmitParams_}, explosionCorePSEmitParams{explosionCorePSEmitParams_}, explosionCorePSMainModule{explosionCorePSMainModule_}, explosionCorePSShapeModule{explosionCorePSShapeModule_}, explosionPrePassBloomPSShapeModule{explosionPrePassBloomPSShapeModule_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x11D46B8
    void Awake();
    // public System.Void SpawnParticles(UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, UnityEngine.Vector3 saberDir, System.Single saberSpeed, UnityEngine.Vector3 noteMovementVec, UnityEngine.Color32 color, System.Int32 sparkleParticlesCount, System.Int32 explosionParticlesCount, System.Single lifetimeMultiplier)
    // Offset: 0x11D391C
    void SpawnParticles(UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 saberDir, float saberSpeed, UnityEngine::Vector3 noteMovementVec, UnityEngine::Color32 color, int sparkleParticlesCount, int explosionParticlesCount, float lifetimeMultiplier);
    // public System.Void .ctor()
    // Offset: 0x11D480C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutParticlesEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutParticlesEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutParticlesEffect*, creationType>()));
    }
  }; // NoteCutParticlesEffect
  #pragma pack(pop)
  static check_size<sizeof(NoteCutParticlesEffect), 552 + sizeof(UnityEngine::ParticleSystem::ShapeModule)> __GlobalNamespace_NoteCutParticlesEffectSizeCheck;
  static_assert(sizeof(NoteCutParticlesEffect) == 0x230);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutParticlesEffect*, "", "NoteCutParticlesEffect");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutParticlesEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutParticlesEffect::*)()>(&GlobalNamespace::NoteCutParticlesEffect::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutParticlesEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutParticlesEffect::SpawnParticles
// Il2CppName: SpawnParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutParticlesEffect::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::Color32, int, int, float)>(&GlobalNamespace::NoteCutParticlesEffect::SpawnParticles)> {
  const MethodInfo* get() {
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* saberDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* saberSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* noteMovementVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    static auto* sparkleParticlesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* explosionParticlesCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lifetimeMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutParticlesEffect*), "SpawnParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutPoint, cutNormal, saberDir, saberSpeed, noteMovementVec, color, sparkleParticlesCount, explosionParticlesCount, lifetimeMultiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutParticlesEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
