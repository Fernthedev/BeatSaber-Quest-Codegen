// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp
  class ResourceProviderBase::BaseInitAsyncOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
    public:
    // private System.Func`1<System.Boolean> m_CallBack
    // Size: 0x8
    // Offset: 0x80
    System::Func_1<bool>* m_CallBack;
    // Field size check
    static_assert(sizeof(System::Func_1<bool>*) == 0x8);
    // Creating value type constructor for type: BaseInitAsyncOp
    BaseInitAsyncOp(System::Func_1<bool>* m_CallBack_ = {}) noexcept : m_CallBack{m_CallBack_} {}
    // Creating conversion operator: operator System::Func_1<bool>*
    constexpr operator System::Func_1<bool>*() const noexcept {
      return m_CallBack;
    }
    // public System.Void Init(System.Func`1<System.Boolean> callback)
    // Offset: 0x19CBC3C
    void Init(System::Func_1<bool>* callback);
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x19CBC44
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x19CBCBC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // public System.Void .ctor()
    // Offset: 0x19CBBB8
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceProviderBase::BaseInitAsyncOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceProviderBase::BaseInitAsyncOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase/BaseInitAsyncOp");
// Writing includes for template specializations
#include "System/Func_1.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::*)(System::Func_1<bool>*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Func_1<bool>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::InvokeWaitForCompletion)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Execute)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
