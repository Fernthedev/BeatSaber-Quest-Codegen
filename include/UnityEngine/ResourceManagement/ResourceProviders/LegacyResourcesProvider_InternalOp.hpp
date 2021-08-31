// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/LegacyResourcesProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider/UnityEngine.ResourceManagement.ResourceProviders.InternalOp
  // [TokenAttribute] Offset: FFFFFFFF
  class LegacyResourcesProvider::InternalOp : public ::Il2CppObject {
    public:
    // private UnityEngine.AsyncOperation m_RequestOperation
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AsyncOperation* m_RequestOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::AsyncOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    // Size: 0x18
    // Offset: 0x18
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // Creating value type constructor for type: InternalOp
    InternalOp(UnityEngine::AsyncOperation* m_RequestOperation_ = {}, UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle_ = {}) noexcept : m_RequestOperation{m_RequestOperation_}, m_ProvideHandle{m_ProvideHandle_} {}
    // Get instance field reference: private UnityEngine.AsyncOperation m_RequestOperation
    UnityEngine::AsyncOperation*& dyn_m_RequestOperation();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& dyn_m_ProvideHandle();
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0x19F0674
    void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // private System.Void AsyncOperationCompleted(UnityEngine.AsyncOperation op)
    // Offset: 0x19F08CC
    void AsyncOperationCompleted(UnityEngine::AsyncOperation* op);
    // public System.Single PercentComplete()
    // Offset: 0x19F0A30
    float PercentComplete();
    // public System.Void .ctor()
    // Offset: 0x19F066C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyResourcesProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyResourcesProvider::InternalOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.LegacyResourcesProvider/UnityEngine.ResourceManagement.ResourceProviders.InternalOp
  #pragma pack(pop)
  static check_size<sizeof(LegacyResourcesProvider::InternalOp), 24 + sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)> __UnityEngine_ResourceManagement_ResourceProviders_LegacyResourcesProvider_InternalOpSizeCheck;
  static_assert(sizeof(LegacyResourcesProvider::InternalOp) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "LegacyResourcesProvider/InternalOp");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::Start)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::AsyncOperationCompleted
// Il2CppName: AsyncOperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::AsyncOperationCompleted)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "AsyncOperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::PercentComplete
// Il2CppName: PercentComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::PercentComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp*), "PercentComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::LegacyResourcesProvider::InternalOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
