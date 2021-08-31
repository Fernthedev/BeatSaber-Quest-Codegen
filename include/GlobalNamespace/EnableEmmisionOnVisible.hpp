// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.EmissionModule
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnableEmmisionOnVisible
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableEmmisionOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem*>*) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmissionModule[] _emmisionModules
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::ParticleSystem::EmissionModule>* emmisionModules;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::EmissionModule>*) == 0x8);
    // Creating value type constructor for type: EnableEmmisionOnVisible
    EnableEmmisionOnVisible(::Array<UnityEngine::ParticleSystem*>* particleSystems_ = {}, ::Array<UnityEngine::ParticleSystem::EmissionModule>* emmisionModules_ = {}) noexcept : particleSystems{particleSystems_}, emmisionModules{emmisionModules_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem[] _particleSystems
    ::Array<UnityEngine::ParticleSystem*>*& dyn__particleSystems();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmissionModule[] _emmisionModules
    ::Array<UnityEngine::ParticleSystem::EmissionModule>*& dyn__emmisionModules();
    // protected System.Void Awake()
    // Offset: 0x125D638
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x125D730
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x125D7B8
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x125D840
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableEmmisionOnVisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableEmmisionOnVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableEmmisionOnVisible*, creationType>()));
    }
  }; // EnableEmmisionOnVisible
  #pragma pack(pop)
  static check_size<sizeof(EnableEmmisionOnVisible), 32 + sizeof(::Array<UnityEngine::ParticleSystem::EmissionModule>*)> __GlobalNamespace_EnableEmmisionOnVisibleSizeCheck;
  static_assert(sizeof(EnableEmmisionOnVisible) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableEmmisionOnVisible*, "", "EnableEmmisionOnVisible");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnableEmmisionOnVisible::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableEmmisionOnVisible::*)()>(&GlobalNamespace::EnableEmmisionOnVisible::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableEmmisionOnVisible*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableEmmisionOnVisible::OnBecameVisible
// Il2CppName: OnBecameVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableEmmisionOnVisible::*)()>(&GlobalNamespace::EnableEmmisionOnVisible::OnBecameVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableEmmisionOnVisible*), "OnBecameVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableEmmisionOnVisible::OnBecameInvisible
// Il2CppName: OnBecameInvisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableEmmisionOnVisible::*)()>(&GlobalNamespace::EnableEmmisionOnVisible::OnBecameInvisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableEmmisionOnVisible*), "OnBecameInvisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnableEmmisionOnVisible::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
