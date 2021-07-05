// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceManager
#include "UnityEngine/ResourceManagement/ResourceManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Forward declaring type: DiagnosticInfo
  class DiagnosticInfo;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Skipping declaration: AsyncOperationHandle because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.Utility
namespace UnityEngine::AddressableAssets::Utility {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics
  class ResourceManagerDiagnostics : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private UnityEngine.ResourceManagement.ResourceManager m_ResourceManager
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceManager*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.AddressableAssets.Utility.DiagnosticInfo> m_cachedDiagnosticInfo
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* m_cachedDiagnosticInfo;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>*) == 0x8);
    // Creating value type constructor for type: ResourceManagerDiagnostics
    ResourceManagerDiagnostics(UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager_ = {}, System::Collections::Generic::Dictionary_2<int, UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>* m_cachedDiagnosticInfo_ = {}) noexcept : m_ResourceManager{m_ResourceManager_}, m_cachedDiagnosticInfo{m_cachedDiagnosticInfo_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void .ctor(UnityEngine.ResourceManagement.ResourceManager resourceManager)
    // Offset: 0x23BD8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceManagerDiagnostics* New_ctor(UnityEngine::ResourceManagement::ResourceManager* resourceManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceManagerDiagnostics*, creationType>(resourceManager)));
    }
    // System.Int32 SumDependencyNameHashCodes(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle handle)
    // Offset: 0x23BD9AC
    int SumDependencyNameHashCodes(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);
    // System.Int32 CalculateHashCode(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle handle)
    // Offset: 0x23BDB68
    int CalculateHashCode(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle);
    // private System.Void OnResourceManagerDiagnosticEvent(UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext eventContext)
    // Offset: 0x23BDC60
    void OnResourceManagerDiagnosticEvent(UnityEngine::ResourceManagement::ResourceManager::DiagnosticEventContext eventContext);
    // public System.Void Dispose()
    // Offset: 0x23BDF34
    void Dispose();
  }; // UnityEngine.AddressableAssets.Utility.ResourceManagerDiagnostics
  #pragma pack(pop)
  static check_size<sizeof(ResourceManagerDiagnostics), 24 + sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>*)> __UnityEngine_AddressableAssets_Utility_ResourceManagerDiagnosticsSizeCheck;
  static_assert(sizeof(ResourceManagerDiagnostics) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*, "UnityEngine.AddressableAssets.Utility", "ResourceManagerDiagnostics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::SumDependencyNameHashCodes
// Il2CppName: SumDependencyNameHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::SumDependencyNameHashCodes)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*), "SumDependencyNameHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::CalculateHashCode
// Il2CppName: CalculateHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::CalculateHashCode)> {
  const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*), "CalculateHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::OnResourceManagerDiagnosticEvent
// Il2CppName: OnResourceManagerDiagnosticEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::*)(UnityEngine::ResourceManagement::ResourceManager::DiagnosticEventContext)>(&UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::OnResourceManagerDiagnosticEvent)> {
  const MethodInfo* get() {
    static auto* eventContext = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*), "OnResourceManagerDiagnosticEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventContext});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::*)()>(&UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
