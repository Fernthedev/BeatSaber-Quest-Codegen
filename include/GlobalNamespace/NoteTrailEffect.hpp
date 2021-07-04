// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteTrailParticleSystem
  class NoteTrailParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NoteTrailEffect
  class NoteTrailEffect : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _particlesPerFrame
    // Size: 0x4
    // Offset: 0x18
    int particlesPerFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _maxSpawnDistance
    // Size: 0x4
    // Offset: 0x1C
    float maxSpawnDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NoteMovement _noteMovement
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteMovement* noteMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement*) == 0x8);
    // [InjectAttribute] Offset: 0xE1B058
    // private NoteTrailParticleSystem _noteTrailParticleSystem
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteTrailParticleSystem* noteTrailParticleSystem;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteTrailParticleSystem*) == 0x8);
    // Creating value type constructor for type: NoteTrailEffect
    NoteTrailEffect(int particlesPerFrame_ = {}, float maxSpawnDistance_ = {}, GlobalNamespace::NoteMovement* noteMovement_ = {}, GlobalNamespace::NoteTrailParticleSystem* noteTrailParticleSystem_ = {}) noexcept : particlesPerFrame{particlesPerFrame_}, maxSpawnDistance{maxSpawnDistance_}, noteMovement{noteMovement_}, noteTrailParticleSystem{noteTrailParticleSystem_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x11DB9EC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11DBACC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x11DBBD4
    void Update();
    // private System.Void HandleNoteMovementDidInit()
    // Offset: 0x11DBD90
    void HandleNoteMovementDidInit();
    // private System.Void HandleNoteDidStartJump()
    // Offset: 0x11DBD9C
    void HandleNoteDidStartJump();
    // public System.Void .ctor()
    // Offset: 0x11DBDA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteTrailEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteTrailEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteTrailEffect*, creationType>()));
    }
  }; // NoteTrailEffect
  #pragma pack(pop)
  static check_size<sizeof(NoteTrailEffect), 40 + sizeof(GlobalNamespace::NoteTrailParticleSystem*)> __GlobalNamespace_NoteTrailEffectSizeCheck;
  static_assert(sizeof(NoteTrailEffect) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteTrailEffect*, "", "NoteTrailEffect");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailEffect::*)()>(&GlobalNamespace::NoteTrailEffect::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailEffect::*)()>(&GlobalNamespace::NoteTrailEffect::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailEffect::*)()>(&GlobalNamespace::NoteTrailEffect::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit
// Il2CppName: HandleNoteMovementDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailEffect::*)()>(&GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailEffect*), "HandleNoteMovementDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump
// Il2CppName: HandleNoteDidStartJump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteTrailEffect::*)()>(&GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteTrailEffect*), "HandleNoteDidStartJump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteTrailEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
