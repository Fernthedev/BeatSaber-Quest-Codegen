// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: UnitySynchronizationContext
  class UnitySynchronizationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::UnitySynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnitySynchronizationContext*, "UnityEngine", "UnitySynchronizationContext");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnitySynchronizationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class UnitySynchronizationContext : public System::Threading::SynchronizationContext {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // Nested type: UnityEngine::UnitySynchronizationContext::WorkRequest
    struct WorkRequest;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest
    // [TokenAttribute] Offset: FFFFFFFF
    struct WorkRequest/*, public System::ValueType*/ {
      public:
      public:
      // private readonly System.Threading.SendOrPostCallback m_DelagateCallback
      // Size: 0x8
      // Offset: 0x0
      System::Threading::SendOrPostCallback* m_DelagateCallback;
      // Field size check
      static_assert(sizeof(System::Threading::SendOrPostCallback*) == 0x8);
      // private readonly System.Object m_DelagateState
      // Size: 0x8
      // Offset: 0x8
      ::Il2CppObject* m_DelagateState;
      // Field size check
      static_assert(sizeof(::Il2CppObject*) == 0x8);
      // private readonly System.Threading.ManualResetEvent m_WaitHandle
      // Size: 0x8
      // Offset: 0x10
      System::Threading::ManualResetEvent* m_WaitHandle;
      // Field size check
      static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
      public:
      // Creating value type constructor for type: WorkRequest
      constexpr WorkRequest(System::Threading::SendOrPostCallback* m_DelagateCallback_ = {}, ::Il2CppObject* m_DelagateState_ = {}, System::Threading::ManualResetEvent* m_WaitHandle_ = {}) noexcept : m_DelagateCallback{m_DelagateCallback_}, m_DelagateState{m_DelagateState_}, m_WaitHandle{m_WaitHandle_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Get instance field reference: private readonly System.Threading.SendOrPostCallback m_DelagateCallback
      System::Threading::SendOrPostCallback*& dyn_m_DelagateCallback();
      // Get instance field reference: private readonly System.Object m_DelagateState
      ::Il2CppObject*& dyn_m_DelagateState();
      // Get instance field reference: private readonly System.Threading.ManualResetEvent m_WaitHandle
      System::Threading::ManualResetEvent*& dyn_m_WaitHandle();
      // public System.Void .ctor(System.Threading.SendOrPostCallback callback, System.Object state, System.Threading.ManualResetEvent waitHandle)
      // Offset: 0x27009D0
      // ABORTED: conflicts with another method.  WorkRequest(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state, System::Threading::ManualResetEvent* waitHandle);
      // public System.Void Invoke()
      // Offset: 0x2700C90
      void Invoke();
    }; // UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest
    #pragma pack(pop)
    static check_size<sizeof(UnitySynchronizationContext::WorkRequest), 16 + sizeof(System::Threading::ManualResetEvent*)> __UnityEngine_UnitySynchronizationContext_WorkRequestSizeCheck;
    static_assert(sizeof(UnitySynchronizationContext::WorkRequest) == 0x18);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest> m_AsyncWorkQueue
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>* m_AsyncWorkQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest> m_CurrentFrameWork
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>* m_CurrentFrameWork;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>*) == 0x8);
    // private readonly System.Int32 m_MainThreadID
    // Size: 0x4
    // Offset: 0x28
    int m_MainThreadID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_TrackedCount
    // Size: 0x4
    // Offset: 0x2C
    int m_TrackedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::Threading::SynchronizationContextProperties
    constexpr operator System::Threading::SynchronizationContextProperties() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest> m_AsyncWorkQueue
    System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>*& dyn_m_AsyncWorkQueue();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest> m_CurrentFrameWork
    System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>*& dyn_m_CurrentFrameWork();
    // Get instance field reference: private readonly System.Int32 m_MainThreadID
    int& dyn_m_MainThreadID();
    // Get instance field reference: private System.Int32 m_TrackedCount
    int& dyn_m_TrackedCount();
    // private System.Void .ctor(System.Int32 mainThreadID)
    // Offset: 0x2700650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySynchronizationContext* New_ctor(int mainThreadID) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnitySynchronizationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySynchronizationContext*, creationType>(mainThreadID)));
    }
    // private System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/UnityEngine.WorkRequest> queue, System.Int32 mainThreadID)
    // Offset: 0x2700700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySynchronizationContext* New_ctor(System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>* queue, int mainThreadID) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnitySynchronizationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySynchronizationContext*, creationType>(queue, mainThreadID)));
    }
    // private System.Void Exec()
    // Offset: 0x2700B38
    void Exec();
    // private System.Boolean HasPendingTasks()
    // Offset: 0x2700DA8
    bool HasPendingTasks();
    // static private System.Void InitializeSynchronizationContext()
    // Offset: 0x2700E10
    static void InitializeSynchronizationContext();
    // static private System.Void ExecuteTasks()
    // Offset: 0x2700E90
    static void ExecuteTasks();
    // static private System.Boolean ExecutePendingTasks(System.Int64 millisecondsTimeout)
    // Offset: 0x2700F08
    static bool ExecutePendingTasks(int64_t millisecondsTimeout);
    // public override System.Void Send(System.Threading.SendOrPostCallback callback, System.Object state)
    // Offset: 0x2700794
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Send(System.Threading.SendOrPostCallback callback, System.Object state)
    void Send(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state);
    // public override System.Void OperationStarted()
    // Offset: 0x27009DC
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::OperationStarted()
    void OperationStarted();
    // public override System.Void OperationCompleted()
    // Offset: 0x27009E8
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::OperationCompleted()
    void OperationCompleted();
    // public override System.Void Post(System.Threading.SendOrPostCallback callback, System.Object state)
    // Offset: 0x27009F4
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Post(System.Threading.SendOrPostCallback callback, System.Object state)
    void Post(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state);
    // public override System.Threading.SynchronizationContext CreateCopy()
    // Offset: 0x2700AC4
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Threading.SynchronizationContext SynchronizationContext::CreateCopy()
    System::Threading::SynchronizationContext* CreateCopy();
  }; // UnityEngine.UnitySynchronizationContext
  #pragma pack(pop)
  static check_size<sizeof(UnitySynchronizationContext), 44 + sizeof(int)> __UnityEngine_UnitySynchronizationContextSizeCheck;
  static_assert(sizeof(UnitySynchronizationContext) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnitySynchronizationContext::WorkRequest, "UnityEngine", "UnitySynchronizationContext/WorkRequest");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::Exec
// Il2CppName: Exec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnitySynchronizationContext::*)()>(&UnityEngine::UnitySynchronizationContext::Exec)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "Exec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::HasPendingTasks
// Il2CppName: HasPendingTasks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UnitySynchronizationContext::*)()>(&UnityEngine::UnitySynchronizationContext::HasPendingTasks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "HasPendingTasks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext
// Il2CppName: InitializeSynchronizationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UnitySynchronizationContext::InitializeSynchronizationContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "InitializeSynchronizationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::ExecuteTasks
// Il2CppName: ExecuteTasks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UnitySynchronizationContext::ExecuteTasks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "ExecuteTasks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::ExecutePendingTasks
// Il2CppName: ExecutePendingTasks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(&UnityEngine::UnitySynchronizationContext::ExecutePendingTasks)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "ExecutePendingTasks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnitySynchronizationContext::*)(System::Threading::SendOrPostCallback*, ::Il2CppObject*)>(&UnityEngine::UnitySynchronizationContext::Send)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "SendOrPostCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::OperationStarted
// Il2CppName: OperationStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnitySynchronizationContext::*)()>(&UnityEngine::UnitySynchronizationContext::OperationStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "OperationStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::OperationCompleted
// Il2CppName: OperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnitySynchronizationContext::*)()>(&UnityEngine::UnitySynchronizationContext::OperationCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "OperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UnitySynchronizationContext::*)(System::Threading::SendOrPostCallback*, ::Il2CppObject*)>(&UnityEngine::UnitySynchronizationContext::Post)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "SendOrPostCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: UnityEngine::UnitySynchronizationContext::CreateCopy
// Il2CppName: CreateCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SynchronizationContext* (UnityEngine::UnitySynchronizationContext::*)()>(&UnityEngine::UnitySynchronizationContext::CreateCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UnitySynchronizationContext*), "CreateCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
