// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneProvider.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
// Including type: UnityEngine.ResourceManagement.IUpdateReceiver
#include "UnityEngine/ResourceManagement/IUpdateReceiver.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Skipping declaration: DownloadStatus because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider/SceneOp");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider/UnityEngine.ResourceManagement.ResourceProviders.SceneOp
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneProvider::SceneOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>/*, public ::UnityEngine::ResourceManagement::IUpdateReceiver*/ {
    public:
    public:
    // private System.Boolean m_ActivateOnLoad
    // Size: 0x1
    // Offset: 0x88
    bool m_ActivateOnLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UnityEngine.ResourceManagement.ResourceProviders.SceneInstance m_Inst
    // Size: 0x10
    // Offset: 0x90
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance m_Inst;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance) == 0x10);
    // private UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation m_Location
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // private UnityEngine.SceneManagement.LoadSceneMode m_LoadMode
    // Size: 0x4
    // Offset: 0xA8
    ::UnityEngine::SceneManagement::LoadSceneMode m_LoadMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::LoadSceneMode) == 0x4);
    // private System.Int32 m_Priority
    // Size: 0x4
    // Offset: 0xAC
    int m_Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    // Size: 0xFFFFFFFF
    // Offset: 0xB0
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;
    // private UnityEngine.ResourceManagement.ResourceManager m_ResourceManager
    // Size: 0x8
    // Offset: 0xC8
    ::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceManager*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::IUpdateReceiver
    operator ::UnityEngine::ResourceManagement::IUpdateReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(this);
    }
    // Creating interface conversion operator: i_IUpdateReceiver
    inline ::UnityEngine::ResourceManagement::IUpdateReceiver* i_IUpdateReceiver() noexcept {
      return reinterpret_cast<::UnityEngine::ResourceManagement::IUpdateReceiver*>(this);
    }
    // Get instance field reference: private System.Boolean m_ActivateOnLoad
    [[deprecated("Use field access instead!")]] bool& dyn_m_ActivateOnLoad();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceProviders.SceneInstance m_Inst
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& dyn_m_Inst();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation m_Location
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_m_Location();
    // Get instance field reference: private UnityEngine.SceneManagement.LoadSceneMode m_LoadMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::LoadSceneMode& dyn_m_LoadMode();
    // Get instance field reference: private System.Int32 m_Priority
    [[deprecated("Use field access instead!")]] int& dyn_m_Priority();
    // Get instance field reference: private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& dyn_m_DepOp();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceManager m_ResourceManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceManager*& dyn_m_ResourceManager();
    // public System.Void .ctor(UnityEngine.ResourceManagement.ResourceManager rm)
    // Offset: 0x1F3E0C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneProvider::SceneOp* New_ctor(::UnityEngine::ResourceManagement::ResourceManager* rm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneProvider::SceneOp*, creationType>(rm)));
    }
    // public System.Void Init(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Boolean activateOnLoad, System.Int32 priority, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> depOp)
    // Offset: 0x1F3E124
    void Init(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int priority, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> depOp);
    // UnityEngine.ResourceManagement.ResourceProviders.SceneInstance InternalLoadScene(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Boolean loadingFromBundle, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Boolean activateOnLoad, System.Int32 priority)
    // Offset: 0x1F3EBDC
    ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance InternalLoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, bool loadingFromBundle, ::UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int priority);
    // private UnityEngine.AsyncOperation InternalLoad(System.String path, System.Boolean loadingFromBundle, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1F3ECC0
    ::UnityEngine::AsyncOperation* InternalLoad(::StringW path, bool loadingFromBundle, ::UnityEngine::SceneManagement::LoadSceneMode mode);
    // private System.Void UnityEngine.ResourceManagement.IUpdateReceiver.Update(System.Single unscaledDeltaTime)
    // Offset: 0x1F3EE90
    void UnityEngine_ResourceManagement_IUpdateReceiver_Update(float unscaledDeltaTime);
    // protected override System.String get_DebugName()
    // Offset: 0x1F3E708
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::StringW get_DebugName();
    // protected override System.Single get_Progress()
    // Offset: 0x1F3EDD4
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Single AsyncOperationBase_1::get_Progress()
    float get_Progress();
    // override UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    // Offset: 0x1F3E3E0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus AsyncOperationBase_1::GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object> visited)
    ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::Il2CppObject*>* visited);
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x1F3E4A0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    // Offset: 0x1F3E640
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> deps)
    void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);
    // protected override System.Void Execute()
    // Offset: 0x1F3E79C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // protected override System.Void Destroy()
    // Offset: 0x1F3ED54
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Destroy()
    void Destroy();
  }; // UnityEngine.ResourceManagement.ResourceProviders.SceneProvider/UnityEngine.ResourceManagement.ResourceProviders.SceneOp
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::Init)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* activateOnLoad = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* depOp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, loadMode, activateOnLoad, priority, depOp});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::InternalLoadScene
// Il2CppName: InternalLoadScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, bool, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::InternalLoadScene)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* loadingFromBundle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* activateOnLoad = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "InternalLoadScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, loadingFromBundle, loadMode, activateOnLoad, priority});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::InternalLoad
// Il2CppName: InternalLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)(::StringW, bool, ::UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::InternalLoad)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* loadingFromBundle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "InternalLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, loadingFromBundle, mode});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update
// Il2CppName: UnityEngine.ResourceManagement.IUpdateReceiver.Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)(float)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update)> {
  static const MethodInfo* get() {
    static auto* unscaledDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "UnityEngine.ResourceManagement.IUpdateReceiver.Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unscaledDeltaTime});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::get_DebugName
// Il2CppName: get_DebugName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::get_DebugName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "get_DebugName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::get_Progress
// Il2CppName: get_Progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::get_Progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "get_Progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::GetDownloadStatus
// Il2CppName: GetDownloadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)(::System::Collections::Generic::HashSet_1<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::GetDownloadStatus)> {
  static const MethodInfo* get() {
    static auto* visited = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "GetDownloadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visited});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::GetDependencies
// Il2CppName: GetDependencies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::GetDependencies)> {
  static const MethodInfo* get() {
    static auto* deps = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "GetDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deps});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
