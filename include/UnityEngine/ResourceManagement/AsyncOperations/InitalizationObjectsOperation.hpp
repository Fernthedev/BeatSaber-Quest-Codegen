// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Forward declaring type: ResourceManagerRuntimeData
  class ResourceManagerRuntimeData;
}
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AddressablesImpl
  class AddressablesImpl;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class InitalizationObjectsOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
    public:
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> m_RtdOp
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_RtdOp;
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    // Size: 0xFFFFFFFF
    // Offset: 0xA0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;
    // Creating value type constructor for type: InitalizationObjectsOperation
    InitalizationObjectsOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_RtdOp_ = {}, UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp_ = {}) noexcept : m_RtdOp{m_RtdOp_}, m_Addressables{m_Addressables_}, m_DepOp{m_DepOp_} {}
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> m_RtdOp
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>& dyn_m_RtdOp();
    // Get instance field reference: private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    UnityEngine::AddressableAssets::AddressablesImpl*& dyn_m_Addressables();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& dyn_m_DepOp();
    // public System.Void Init(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> rtdOp, UnityEngine.AddressableAssets.AddressablesImpl addressables)
    // Offset: 0x23E9B80
    void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> rtdOp, UnityEngine::AddressableAssets::AddressablesImpl* addressables);
    // System.Boolean LogRuntimeWarnings(System.String pathToBuildLogs)
    // Offset: 0x23E9C04
    bool LogRuntimeWarnings(::Il2CppString* pathToBuildLogs);
    // private System.Void <Execute>b__8_0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> obj)
    // Offset: 0x23EA4CC
    void $Execute$b__8_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> obj);
    // protected override System.String get_DebugName()
    // Offset: 0x23E9BBC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::Il2CppString* get_DebugName();
    // public System.Void .ctor()
    // Offset: 0x23EA47C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitalizationObjectsOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitalizationObjectsOperation*, creationType>()));
    }
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x23E9DB0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x23E9F10
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "InitalizationObjectsOperation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*>, UnityEngine::AddressableAssets::AddressablesImpl*)>(&UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::Init)> {
  static const MethodInfo* get() {
    static auto* rtdOp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.Initialization", "ResourceManagerRuntimeData")})->byval_arg;
    static auto* addressables = &::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets", "AddressablesImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rtdOp, addressables});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::LogRuntimeWarnings
// Il2CppName: LogRuntimeWarnings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::*)(::Il2CppString*)>(&UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::LogRuntimeWarnings)> {
  static const MethodInfo* get() {
    static auto* pathToBuildLogs = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*), "LogRuntimeWarnings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pathToBuildLogs});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::$Execute$b__8_0
// Il2CppName: <Execute>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(&UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::$Execute$b__8_0)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*), "<Execute>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
