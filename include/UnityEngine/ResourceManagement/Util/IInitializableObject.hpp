// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.IInitializableObject
  class IInitializableObject {
    public:
    // Creating value type constructor for type: IInitializableObject
    IInitializableObject() noexcept {}
    // public System.Boolean Initialize(System.String id, System.String data)
    // Offset: 0xFFFFFFFF
    bool Initialize(::Il2CppString* id, ::Il2CppString* data);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> InitializeAsync(UnityEngine.ResourceManagement.ResourceManager rm, System.String id, System.String data)
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager* rm, ::Il2CppString* id, ::Il2CppString* data);
  }; // UnityEngine.ResourceManagement.Util.IInitializableObject
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::IInitializableObject*, "UnityEngine.ResourceManagement.Util", "IInitializableObject");
// Writing includes for template specializations
#include "UnityEngine/ResourceManagement/ResourceManager.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IInitializableObject::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::Util::IInitializableObject::*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ResourceManagement::Util::IInitializableObject::Initialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IInitializableObject*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::IInitializableObject::InitializeAsync
// Il2CppName: InitializeAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (UnityEngine::ResourceManagement::Util::IInitializableObject::*)(UnityEngine::ResourceManagement::ResourceManager*, ::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ResourceManagement::Util::IInitializableObject::InitializeAsync)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::IInitializableObject*), "InitializeAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::ResourceManager*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
