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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ChainOperation`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TObject, typename TObjectDependency>
  class ChainOperation_2 : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
    public:
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObjectDependency> m_DepOp
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> m_DepOp;
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> m_WrappedOp
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> m_WrappedOp;
    // private UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus m_depStatus
    // Size: 0x11
    // Offset: 0x0
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus m_depStatus;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus) == 0x11);
    // private UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus m_wrapStatus
    // Size: 0x11
    // Offset: 0x0
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus m_wrapStatus;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus) == 0x11);
    // private System.Func`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObjectDependency>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> m_Callback
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_Callback;
    // Field size check
    static_assert(sizeof(System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*) == 0x8);
    // private System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> m_CachedOnWrappedCompleted
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_CachedOnWrappedCompleted;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*) == 0x8);
    // private System.Boolean m_ReleaseDependenciesOnFailure
    // Size: 0x1
    // Offset: 0x0
    bool m_ReleaseDependenciesOnFailure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ChainOperation_2
    ChainOperation_2(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> m_DepOp_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> m_WrappedOp_ = {}, UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus m_depStatus_ = {}, UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus m_wrapStatus_ = {}, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_Callback_ = {}, System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_CachedOnWrappedCompleted_ = {}, bool m_ReleaseDependenciesOnFailure_ = {}) noexcept : m_DepOp{m_DepOp_}, m_WrappedOp{m_WrappedOp_}, m_depStatus{m_depStatus_}, m_wrapStatus{m_wrapStatus_}, m_Callback{m_Callback_}, m_CachedOnWrappedCompleted{m_CachedOnWrappedCompleted_}, m_ReleaseDependenciesOnFailure{m_ReleaseDependenciesOnFailure_} {}
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObjectDependency> m_DepOp
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>& dyn_m_DepOp() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_DepOp");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_DepOp"))->offset;
      return *reinterpret_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> m_WrappedOp
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& dyn_m_WrappedOp() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_WrappedOp");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_WrappedOp"))->offset;
      return *reinterpret_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus m_depStatus
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& dyn_m_depStatus() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_depStatus");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_depStatus"))->offset;
      return *reinterpret_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus m_wrapStatus
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& dyn_m_wrapStatus() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_wrapStatus");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_wrapStatus"))->offset;
      return *reinterpret_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Func`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObjectDependency>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> m_Callback
    System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& dyn_m_Callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_Callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Callback"))->offset;
      return *reinterpret_cast<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> m_CachedOnWrappedCompleted
    System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& dyn_m_CachedOnWrappedCompleted() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_CachedOnWrappedCompleted");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CachedOnWrappedCompleted"))->offset;
      return *reinterpret_cast<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_ReleaseDependenciesOnFailure
    bool& dyn_m_ReleaseDependenciesOnFailure() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::dyn_m_ReleaseDependenciesOnFailure");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ReleaseDependenciesOnFailure"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void Init(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObjectDependency> dependentOp, System.Func`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObjectDependency>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> callback, System.Boolean releaseDependenciesOnFailure)
    // Offset: 0xFFFFFFFF
    void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback, bool releaseDependenciesOnFailure) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dependentOp), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(releaseDependenciesOnFailure)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, dependentOp, callback, releaseDependenciesOnFailure);
    }
    // private System.Void OnWrappedCompleted(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> x)
    // Offset: 0xFFFFFFFF
    void OnWrappedCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::OnWrappedCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnWrappedCompleted", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, x);
    }
    // private System.Void RefreshDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    // Offset: 0xFFFFFFFF
    void RefreshDownloadStatus(System::Collections::Generic::HashSet_1<::Il2CppObject*>* visited) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::RefreshDownloadStatus");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RefreshDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(visited)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, visited);
    }
    // protected override System.String get_DebugName()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::Il2CppString* get_DebugName() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::get_DebugName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_DebugName", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(___instance_arg, ___internal__method);
    }
    // protected override System.Single get_Progress()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Single AsyncOperationBase_1::get_Progress()
    float get_Progress() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::get_Progress");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Progress", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<float, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChainOperation_2<TObject, TObjectDependency>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChainOperation_2<TObject, TObjectDependency>*, creationType>()));
    }
    // protected override System.Void GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::GetDependencies");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDependencies", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(deps)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, deps);
    }
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::InvokeWaitForCompletion");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InvokeWaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
    }
    // protected override System.Void Execute()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::Execute");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Execute", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // protected override System.Void Destroy()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Destroy()
    void Destroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::Destroy");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Destroy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // override System.Void ReleaseDependencies()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::ReleaseDependencies()
    void ReleaseDependencies() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::ReleaseDependencies");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReleaseDependencies", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // override UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus AsyncOperationBase_1::GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::Il2CppObject*>* visited) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ChainOperation_2::GetDownloadStatus");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDownloadStatus", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(visited)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(___instance_arg, ___internal__method, visited);
    }
  }; // UnityEngine.ResourceManagement.ChainOperation`2
  // Could not write size check! Type: UnityEngine.ResourceManagement.ChainOperation`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::ChainOperation_2, "UnityEngine.ResourceManagement", "ChainOperation`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
