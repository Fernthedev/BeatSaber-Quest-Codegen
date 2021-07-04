// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueueOperation
  class WebRequestQueueOperation;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.WebRequestQueue
  class WebRequestQueue : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: WebRequestQueue
    WebRequestQueue() noexcept {}
    // Get static field: static System.Int32 s_MaxRequest
    static int _get_s_MaxRequest();
    // Set static field: static System.Int32 s_MaxRequest
    static void _set_s_MaxRequest(int value);
    // Get static field: static System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation> s_QueuedOperations
    static System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation*>* _get_s_QueuedOperations();
    // Set static field: static System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation> s_QueuedOperations
    static void _set_s_QueuedOperations(System::Collections::Generic::Queue_1<UnityEngine::ResourceManagement::WebRequestQueueOperation*>* value);
    // Get static field: static System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> s_ActiveRequests
    static System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>* _get_s_ActiveRequests();
    // Set static field: static System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> s_ActiveRequests
    static void _set_s_ActiveRequests(System::Collections::Generic::List_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>* value);
    // static public System.Void SetMaxConcurrentRequests(System.Int32 maxRequests)
    // Offset: 0x19CF8DC
    static void SetMaxConcurrentRequests(int maxRequests);
    // static public System.Boolean get_ShouldQueueNextRequest()
    // Offset: 0x19C8C98
    static bool get_ShouldQueueNextRequest();
    // static public UnityEngine.ResourceManagement.WebRequestQueueOperation QueueRequest(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x19C931C
    static UnityEngine::ResourceManagement::WebRequestQueueOperation* QueueRequest(UnityEngine::Networking::UnityWebRequest* request);
    // static private System.Void OnWebAsyncOpComplete(UnityEngine.AsyncOperation operation)
    // Offset: 0x19CF9C4
    static void OnWebAsyncOpComplete(UnityEngine::AsyncOperation* operation);
    // static private System.Void .cctor()
    // Offset: 0x19CFC00
    static void _cctor();
  }; // UnityEngine.ResourceManagement.WebRequestQueue
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::WebRequestQueue*, "UnityEngine.ResourceManagement", "WebRequestQueue");
// Writing includes for template specializations
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "UnityEngine/AsyncOperation.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests
// Il2CppName: SetMaxConcurrentRequests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::ResourceManagement::WebRequestQueue::SetMaxConcurrentRequests)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "SetMaxConcurrentRequests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::get_ShouldQueueNextRequest
// Il2CppName: get_ShouldQueueNextRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::ResourceManagement::WebRequestQueue::get_ShouldQueueNextRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "get_ShouldQueueNextRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest
// Il2CppName: QueueRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::WebRequestQueueOperation* (*)(UnityEngine::Networking::UnityWebRequest*)>(&UnityEngine::ResourceManagement::WebRequestQueue::QueueRequest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "QueueRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Networking::UnityWebRequest*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete
// Il2CppName: OnWebAsyncOpComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::WebRequestQueue::OnWebAsyncOpComplete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), "OnWebAsyncOpComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::AsyncOperation*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueue::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ResourceManagement::WebRequestQueue::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueue*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
