// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContextRegistry
  class SceneContextRegistry;
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContextRegistryAdderAndRemover
  class SceneContextRegistryAdderAndRemover;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SceneContextRegistryAdderAndRemover);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistryAdderAndRemover*, "Zenject", "SceneContextRegistryAdderAndRemover");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContextRegistryAdderAndRemover
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneContextRegistryAdderAndRemover : public ::Il2CppObject/*, public ::System::IDisposable, public ::Zenject::IInitializable*/ {
    public:
    public:
    // private readonly Zenject.SceneContextRegistry _registry
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::SceneContextRegistry* registry;
    // Field size check
    static_assert(sizeof(::Zenject::SceneContextRegistry*) == 0x8);
    // private readonly Zenject.SceneContext _sceneContext
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::SceneContext* sceneContext;
    // Field size check
    static_assert(sizeof(::Zenject::SceneContext*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::Zenject::IInitializable
    operator ::Zenject::IInitializable() noexcept {
      return *reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: i_IInitializable
    inline ::Zenject::IInitializable* i_IInitializable() noexcept {
      return reinterpret_cast<::Zenject::IInitializable*>(this);
    }
    // Get instance field reference: private readonly Zenject.SceneContextRegistry _registry
    [[deprecated("Use field access instead!")]] ::Zenject::SceneContextRegistry*& dyn__registry();
    // Get instance field reference: private readonly Zenject.SceneContext _sceneContext
    [[deprecated("Use field access instead!")]] ::Zenject::SceneContext*& dyn__sceneContext();
    // public System.Void .ctor(Zenject.SceneContext sceneContext, Zenject.SceneContextRegistry registry)
    // Offset: 0x1C15468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContextRegistryAdderAndRemover* New_ctor(::Zenject::SceneContext* sceneContext, ::Zenject::SceneContextRegistry* registry) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SceneContextRegistryAdderAndRemover::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContextRegistryAdderAndRemover*, creationType>(sceneContext, registry)));
    }
    // public System.Void Initialize()
    // Offset: 0x1C154A0
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x1C154C0
    void Dispose();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1C154E0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1C155F8
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SceneContextRegistryAdderAndRemover
  #pragma pack(pop)
  static check_size<sizeof(SceneContextRegistryAdderAndRemover), 24 + sizeof(::Zenject::SceneContext*)> __Zenject_SceneContextRegistryAdderAndRemoverSizeCheck;
  static_assert(sizeof(SceneContextRegistryAdderAndRemover) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
// Writing MetadataGetter for method: Zenject::SceneContextRegistryAdderAndRemover::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SceneContextRegistryAdderAndRemover::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistryAdderAndRemover*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SceneContextRegistryAdderAndRemover::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContextRegistryAdderAndRemover*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
