// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: Task because it is already included!
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.Stream/System.IO.ReadWriteTask
  // [TokenAttribute] Offset: FFFFFFFF
  class Stream::ReadWriteTask : public System::Threading::Tasks::Task_1<int>/*, public System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    // readonly System.Boolean _isRead
    // Size: 0x1
    // Offset: 0x54
    bool isRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x58
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x60
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // System.Int32 _offset
    // Size: 0x4
    // Offset: 0x68
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _count
    // Size: 0x4
    // Offset: 0x6C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.AsyncCallback _callback
    // Size: 0x8
    // Offset: 0x70
    System::AsyncCallback* callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // private System.Threading.ExecutionContext _context
    // Size: 0x8
    // Offset: 0x78
    System::Threading::ExecutionContext* context;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // Creating value type constructor for type: ReadWriteTask
    ReadWriteTask(bool isRead_ = {}, System::IO::Stream* stream_ = {}, ::Array<uint8_t>* buffer_ = {}, int offset_ = {}, int count_ = {}, System::AsyncCallback* callback_ = {}, System::Threading::ExecutionContext* context_ = {}) noexcept : isRead{isRead_}, stream{stream_}, buffer{buffer_}, offset{offset_}, count{count_}, callback{callback_}, context{context_} {}
    // Creating interface conversion operator: operator System::Threading::Tasks::ITaskCompletionAction
    operator System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // Get static field: static private System.Threading.ContextCallback s_invokeAsyncCallback
    static System::Threading::ContextCallback* _get_s_invokeAsyncCallback();
    // Set static field: static private System.Threading.ContextCallback s_invokeAsyncCallback
    static void _set_s_invokeAsyncCallback(System::Threading::ContextCallback* value);
    // Get instance field reference: readonly System.Boolean _isRead
    bool& dyn__isRead();
    // Get instance field reference: System.IO.Stream _stream
    System::IO::Stream*& dyn__stream();
    // Get instance field reference: System.Byte[] _buffer
    ::Array<uint8_t>*& dyn__buffer();
    // Get instance field reference: System.Int32 _offset
    int& dyn__offset();
    // Get instance field reference: System.Int32 _count
    int& dyn__count();
    // Get instance field reference: private System.AsyncCallback _callback
    System::AsyncCallback*& dyn__callback();
    // Get instance field reference: private System.Threading.ExecutionContext _context
    System::Threading::ExecutionContext*& dyn__context();
    // public System.Void .ctor(System.Boolean isRead, System.Func`2<System.Object,System.Int32> function, System.Object state, System.IO.Stream stream, System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback callback)
    // Offset: 0x1981FF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::ReadWriteTask* New_ctor(bool isRead, System::Func_2<::Il2CppObject*, int>* function, ::Il2CppObject* state, System::IO::Stream* stream, ::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::ReadWriteTask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::ReadWriteTask*, creationType>(isRead, function, state, stream, buffer, offset, count, callback)));
    }
    // System.Void ClearBeginState()
    // Offset: 0x1983120
    void ClearBeginState();
    // static private System.Void InvokeAsyncCallback(System.Object completedTask)
    // Offset: 0x1983A54
    static void InvokeAsyncCallback(::Il2CppObject* completedTask);
    // private System.Void System.Threading.Tasks.ITaskCompletionAction.Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0x1983AD0
    void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task* completingTask);
  }; // System.IO.Stream/System.IO.ReadWriteTask
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::ReadWriteTask*, "System.IO", "Stream/ReadWriteTask");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::ReadWriteTask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Stream::ReadWriteTask::ClearBeginState
// Il2CppName: ClearBeginState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::ReadWriteTask::*)()>(&System::IO::Stream::ReadWriteTask::ClearBeginState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::ReadWriteTask*), "ClearBeginState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::ReadWriteTask::InvokeAsyncCallback
// Il2CppName: InvokeAsyncCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::IO::Stream::ReadWriteTask::InvokeAsyncCallback)> {
  static const MethodInfo* get() {
    static auto* completedTask = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::ReadWriteTask*), "InvokeAsyncCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completedTask});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke
// Il2CppName: System.Threading.Tasks.ITaskCompletionAction.Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::ReadWriteTask::*)(System::Threading::Tasks::Task*)>(&System::IO::Stream::ReadWriteTask::System_Threading_Tasks_ITaskCompletionAction_Invoke)> {
  static const MethodInfo* get() {
    static auto* completingTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::ReadWriteTask*), "System.Threading.Tasks.ITaskCompletionAction.Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completingTask});
  }
};
