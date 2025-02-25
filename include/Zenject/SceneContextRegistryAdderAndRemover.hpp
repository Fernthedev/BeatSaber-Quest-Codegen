// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContextRegistry
  class SceneContextRegistry;
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContextRegistryAdderAndRemover
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneContextRegistryAdderAndRemover : public ::Il2CppObject/*, public System::IDisposable, public Zenject::IInitializable*/ {
    public:
    // private readonly Zenject.SceneContextRegistry _registry
    // Size: 0x8
    // Offset: 0x10
    Zenject::SceneContextRegistry* registry;
    // Field size check
    static_assert(sizeof(Zenject::SceneContextRegistry*) == 0x8);
    // private readonly Zenject.SceneContext _sceneContext
    // Size: 0x8
    // Offset: 0x18
    Zenject::SceneContext* sceneContext;
    // Field size check
    static_assert(sizeof(Zenject::SceneContext*) == 0x8);
    // Creating value type constructor for type: SceneContextRegistryAdderAndRemover
    SceneContextRegistryAdderAndRemover(Zenject::SceneContextRegistry* registry_ = {}, Zenject::SceneContext* sceneContext_ = {}) noexcept : registry{registry_}, sceneContext{sceneContext_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IInitializable
    operator Zenject::IInitializable() noexcept {
      return *reinterpret_cast<Zenject::IInitializable*>(this);
    }
    // Get instance field reference: private readonly Zenject.SceneContextRegistry _registry
    Zenject::SceneContextRegistry*& dyn__registry();
    // Get instance field reference: private readonly Zenject.SceneContext _sceneContext
    Zenject::SceneContext*& dyn__sceneContext();
    // public System.Void .ctor(Zenject.SceneContext sceneContext, Zenject.SceneContextRegistry registry)
    // Offset: 0x172346C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContextRegistryAdderAndRemover* New_ctor(Zenject::SceneContext* sceneContext, Zenject::SceneContextRegistry* registry) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContextRegistryAdderAndRemover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContextRegistryAdderAndRemover*, creationType>(sceneContext, registry)));
    }
    // public System.Void Initialize()
    // Offset: 0x17234A4
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x17234C4
    void Dispose();
  }; // Zenject.SceneContextRegistryAdderAndRemover
  #pragma pack(pop)
  static check_size<sizeof(SceneContextRegistryAdderAndRemover), 24 + sizeof(Zenject::SceneContext*)> __Zenject_SceneContextRegistryAdderAndRemoverSizeCheck;
  static_assert(sizeof(SceneContextRegistryAdderAndRemover) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContextRegistryAdderAndRemover*, "Zenject", "SceneContextRegistryAdderAndRemover");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SceneContextRegistryAdderAndRemover::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SceneContextRegistryAdderAndRemover::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistryAdderAndRemover::*)()>(&Zenject::SceneContextRegistryAdderAndRemover::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistryAdderAndRemover*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistryAdderAndRemover::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SceneContextRegistryAdderAndRemover::*)()>(&Zenject::SceneContextRegistryAdderAndRemover::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistryAdderAndRemover*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
