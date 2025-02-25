// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabProviderResource
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class PrefabProviderResource : public ::Il2CppObject/*, public Zenject::IPrefabProvider*/ {
    public:
    // private readonly System.String _resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PrefabProviderResource
    PrefabProviderResource(::Il2CppString* resourcePath_ = {}) noexcept : resourcePath{resourcePath_} {}
    // Creating interface conversion operator: operator Zenject::IPrefabProvider
    operator Zenject::IPrefabProvider() noexcept {
      return *reinterpret_cast<Zenject::IPrefabProvider*>(this);
    }
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return resourcePath;
    }
    // Get instance field reference: private readonly System.String _resourcePath
    ::Il2CppString*& dyn__resourcePath();
    // public System.Void .ctor(System.String resourcePath)
    // Offset: 0x171D4E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabProviderResource* New_ctor(::Il2CppString* resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabProviderResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabProviderResource*, creationType>(resourcePath)));
    }
    // public UnityEngine.Object GetPrefab()
    // Offset: 0x171D510
    UnityEngine::Object* GetPrefab();
  }; // Zenject.PrefabProviderResource
  #pragma pack(pop)
  static check_size<sizeof(PrefabProviderResource), 16 + sizeof(::Il2CppString*)> __Zenject_PrefabProviderResourceSizeCheck;
  static_assert(sizeof(PrefabProviderResource) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabProviderResource*, "Zenject", "PrefabProviderResource");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabProviderResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabProviderResource::GetPrefab
// Il2CppName: GetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (Zenject::PrefabProviderResource::*)()>(&Zenject::PrefabProviderResource::GetPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabProviderResource*), "GetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
