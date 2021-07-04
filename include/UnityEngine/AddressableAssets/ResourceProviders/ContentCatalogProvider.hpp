// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider
  // [DisplayNameAttribute] Offset: E02774
  class ContentCatalogProvider : public UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // Nested type: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex
    struct DependencyHashIndex;
    // Nested type: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp
    class InternalOp;
    // public System.Boolean DisableCatalogUpdateOnStart
    // Size: 0x1
    // Offset: 0x1C
    bool DisableCatalogUpdateOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean IsLocalCatalogInBundle
    // Size: 0x1
    // Offset: 0x1D
    bool IsLocalCatalogInBundle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsLocalCatalogInBundle and: m_LocationToCatalogLoadOpMap
    char __padding1[0x2] = {};
    // System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/InternalOp> m_LocationToCatalogLoadOpMap
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp*>* m_LocationToCatalogLoadOpMap;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp*>*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceManager m_RM
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ResourceManagement::ResourceManager* m_RM;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceManager*) == 0x8);
    // Creating value type constructor for type: ContentCatalogProvider
    ContentCatalogProvider(bool DisableCatalogUpdateOnStart_ = {}, bool IsLocalCatalogInBundle_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp*>* m_LocationToCatalogLoadOpMap_ = {}, UnityEngine::ResourceManagement::ResourceManager* m_RM_ = {}) noexcept : DisableCatalogUpdateOnStart{DisableCatalogUpdateOnStart_}, IsLocalCatalogInBundle{IsLocalCatalogInBundle_}, m_LocationToCatalogLoadOpMap{m_LocationToCatalogLoadOpMap_}, m_RM{m_RM_} {}
    // public System.Void .ctor(UnityEngine.ResourceManagement.ResourceManager resourceManagerInstance)
    // Offset: 0x13F36E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogProvider* New_ctor(UnityEngine::ResourceManagement::ResourceManager* resourceManagerInstance) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogProvider*, creationType>(resourceManagerInstance)));
    }
    // public override System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object obj)
    // Offset: 0x13F7CC0
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object obj)
    void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* obj);
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    // Offset: 0x13F7D9C
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);
  }; // UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogProvider), 40 + sizeof(UnityEngine::ResourceManagement::ResourceManager*)> __UnityEngine_AddressableAssets_ResourceProviders_ContentCatalogProviderSizeCheck;
  static_assert(sizeof(ContentCatalogProvider) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider");
// Writing includes for template specializations
#include "UnityEngine/ResourceManagement/ResourceManager.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/IResourceLocation.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::Il2CppObject*)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>()});
  }
};
