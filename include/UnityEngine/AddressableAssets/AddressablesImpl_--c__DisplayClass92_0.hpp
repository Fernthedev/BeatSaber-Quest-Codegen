// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IAssetBundleResource
  class IAssetBundleResource;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass92_0
  // [CompilerGeneratedAttribute] Offset: E026A4
  class AddressablesImpl::$$c__DisplayClass92_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> locations
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass92_0
    $$c__DisplayClass92_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* locations_ = {}) noexcept : $$4__this{$$4__this_}, locations{locations_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource>> <DownloadDependenciesAsyncWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x13EF6C0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> $DownloadDependenciesAsyncWithChain$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // System.Void <DownloadDependenciesAsyncWithChain>b__1(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource>> op)
    // Offset: 0x13EF760
    void $DownloadDependenciesAsyncWithChain$b__1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> op);
    // public System.Void .ctor()
    // Offset: 0x13EC85C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass92_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass92_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass92_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass92_0), 24 + sizeof(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass92_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass92_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass92_0");
// Writing includes for template specializations
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::$DownloadDependenciesAsyncWithChain$b__0
// Il2CppName: <DownloadDependenciesAsyncWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::$DownloadDependenciesAsyncWithChain$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0*), "<DownloadDependenciesAsyncWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::$DownloadDependenciesAsyncWithChain$b__1
// Il2CppName: <DownloadDependenciesAsyncWithChain>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::$DownloadDependenciesAsyncWithChain$b__1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0*), "<DownloadDependenciesAsyncWithChain>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>*>>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass92_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
