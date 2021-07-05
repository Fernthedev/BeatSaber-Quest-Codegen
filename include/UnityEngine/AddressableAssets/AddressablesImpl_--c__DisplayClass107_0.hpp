// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
#include "UnityEngine/ResourceManagement/ResourceProviders/InstantiationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x4A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass107_0
  // [CompilerGeneratedAttribute] Offset: E02704
  class AddressablesImpl::$$c__DisplayClass107_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // public UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters instantiateParameters
    // Size: 0x2A
    // Offset: 0x20
    UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters) == 0x2A);
    // Creating value type constructor for type: $$c__DisplayClass107_0
    $$c__DisplayClass107_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location_ = {}, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters_ = {}) noexcept : $$4__this{$$4__this_}, location{location_}, instantiateParameters{instantiateParameters_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> <InstantiateWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x13EF180
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> $InstantiateWithChain$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // public System.Void .ctor()
    // Offset: 0x13ED474
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass107_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass107_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass107_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass107_0), 32 + sizeof(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass107_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass107_0) == 0x4A);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass107_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0::$InstantiateWithChain$b__0
// Il2CppName: <InstantiateWithChain>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject*> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0::$InstantiateWithChain$b__0)> {
  const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0*), "<InstantiateWithChain>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass107_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
