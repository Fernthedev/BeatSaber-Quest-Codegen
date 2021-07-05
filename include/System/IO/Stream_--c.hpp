// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Stream/ReadWriteParameters
#include "System/IO/Stream_ReadWriteParameters.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
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
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Stream/<>c
  // [CompilerGeneratedAttribute] Offset: D7C8C4
  class Stream::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.IO.Stream/<>c <>9
    static System::IO::Stream::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.Stream/<>c <>9
    static void _set_$$9(System::IO::Stream::$$c* value);
    // Get static field: static public System.Func`1<System.Threading.SemaphoreSlim> <>9__4_0
    static System::Func_1<System::Threading::SemaphoreSlim*>* _get_$$9__4_0();
    // Set static field: static public System.Func`1<System.Threading.SemaphoreSlim> <>9__4_0
    static void _set_$$9__4_0(System::Func_1<System::Threading::SemaphoreSlim*>* value);
    // Get static field: static public System.Func`2<System.Object,System.Int32> <>9__39_0
    static System::Func_2<::Il2CppObject*, int>* _get_$$9__39_0();
    // Set static field: static public System.Func`2<System.Object,System.Int32> <>9__39_0
    static void _set_$$9__39_0(System::Func_2<::Il2CppObject*, int>* value);
    // Get static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__43_0
    static System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* _get_$$9__43_0();
    // Set static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__43_0
    static void _set_$$9__43_0(System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* value);
    // Get static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Int32> <>9__43_1
    static System::Func_3<System::IO::Stream*, System::IAsyncResult*, int>* _get_$$9__43_1();
    // Set static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Int32> <>9__43_1
    static void _set_$$9__43_1(System::Func_3<System::IO::Stream*, System::IAsyncResult*, int>* value);
    // Get static field: static public System.Func`2<System.Object,System.Int32> <>9__46_0
    static System::Func_2<::Il2CppObject*, int>* _get_$$9__46_0();
    // Set static field: static public System.Func`2<System.Object,System.Int32> <>9__46_0
    static void _set_$$9__46_0(System::Func_2<::Il2CppObject*, int>* value);
    // Get static field: static public System.Action`2<System.Threading.Tasks.Task,System.Object> <>9__47_0
    static System::Action_2<System::Threading::Tasks::Task*, ::Il2CppObject*>* _get_$$9__47_0();
    // Set static field: static public System.Action`2<System.Threading.Tasks.Task,System.Object> <>9__47_0
    static void _set_$$9__47_0(System::Action_2<System::Threading::Tasks::Task*, ::Il2CppObject*>* value);
    // Get static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__53_0
    static System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* _get_$$9__53_0();
    // Set static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__53_0
    static void _set_$$9__53_0(System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* value);
    // Get static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult> <>9__53_1
    static System::Func_3<System::IO::Stream*, System::IAsyncResult*, System::Threading::Tasks::VoidTaskResult>* _get_$$9__53_1();
    // Set static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult> <>9__53_1
    static void _set_$$9__53_1(System::Func_3<System::IO::Stream*, System::IAsyncResult*, System::Threading::Tasks::VoidTaskResult>* value);
    // static private System.Void .cctor()
    // Offset: 0x1958720
    static void _cctor();
    // System.Threading.SemaphoreSlim <EnsureAsyncActiveSemaphoreInitialized>b__4_0()
    // Offset: 0x195878C
    System::Threading::SemaphoreSlim* $EnsureAsyncActiveSemaphoreInitialized$b__4_0();
    // System.Int32 <BeginReadInternal>b__39_0(System.Object <p0>)
    // Offset: 0x19587F0
    int $BeginReadInternal$b__39_0(::Il2CppObject* $p0$);
    // System.IAsyncResult <BeginEndReadAsync>b__43_0(System.IO.Stream stream, System.IO.Stream/ReadWriteParameters args, System.AsyncCallback callback, System.Object state)
    // Offset: 0x19588E4
    System::IAsyncResult* $BeginEndReadAsync$b__43_0(System::IO::Stream* stream, System::IO::Stream::ReadWriteParameters args, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.Int32 <BeginEndReadAsync>b__43_1(System.IO.Stream stream, System.IAsyncResult asyncResult)
    // Offset: 0x1958918
    int $BeginEndReadAsync$b__43_1(System::IO::Stream* stream, System::IAsyncResult* asyncResult);
    // System.Int32 <BeginWriteInternal>b__46_0(System.Object <p0>)
    // Offset: 0x1958944
    int $BeginWriteInternal$b__46_0(::Il2CppObject* $p0$);
    // System.Void <RunReadWriteTaskWhenReady>b__47_0(System.Threading.Tasks.Task t, System.Object state)
    // Offset: 0x1958A34
    void $RunReadWriteTaskWhenReady$b__47_0(System::Threading::Tasks::Task* t, ::Il2CppObject* state);
    // System.IAsyncResult <BeginEndWriteAsync>b__53_0(System.IO.Stream stream, System.IO.Stream/ReadWriteParameters args, System.AsyncCallback callback, System.Object state)
    // Offset: 0x1958AC4
    System::IAsyncResult* $BeginEndWriteAsync$b__53_0(System::IO::Stream* stream, System::IO::Stream::ReadWriteParameters args, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.Threading.Tasks.VoidTaskResult <BeginEndWriteAsync>b__53_1(System.IO.Stream stream, System.IAsyncResult asyncResult)
    // Offset: 0x1958AF8
    System::Threading::Tasks::VoidTaskResult $BeginEndWriteAsync$b__53_1(System::IO::Stream* stream, System::IAsyncResult* asyncResult);
    // public System.Void .ctor()
    // Offset: 0x1958784
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::$$c*, creationType>()));
    }
  }; // System.IO.Stream/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::$$c*, "System.IO", "Stream/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Stream::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$EnsureAsyncActiveSemaphoreInitialized$b__4_0
// Il2CppName: <EnsureAsyncActiveSemaphoreInitialized>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::SemaphoreSlim* (System::IO::Stream::$$c::*)()>(&System::IO::Stream::$$c::$EnsureAsyncActiveSemaphoreInitialized$b__4_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<EnsureAsyncActiveSemaphoreInitialized>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$BeginReadInternal$b__39_0
// Il2CppName: <BeginReadInternal>b__39_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::$$c::*)(::Il2CppObject*)>(&System::IO::Stream::$$c::$BeginReadInternal$b__39_0)> {
  const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<BeginReadInternal>b__39_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$BeginEndReadAsync$b__43_0
// Il2CppName: <BeginEndReadAsync>b__43_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::Stream::$$c::*)(System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Stream::$$c::$BeginEndReadAsync$b__43_0)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.IO", "Stream/ReadWriteParameters")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<BeginEndReadAsync>b__43_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, args, callback, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$BeginEndReadAsync$b__43_1
// Il2CppName: <BeginEndReadAsync>b__43_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::$$c::*)(System::IO::Stream*, System::IAsyncResult*)>(&System::IO::Stream::$$c::$BeginEndReadAsync$b__43_1)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<BeginEndReadAsync>b__43_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$BeginWriteInternal$b__46_0
// Il2CppName: <BeginWriteInternal>b__46_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Stream::$$c::*)(::Il2CppObject*)>(&System::IO::Stream::$$c::$BeginWriteInternal$b__46_0)> {
  const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<BeginWriteInternal>b__46_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$RunReadWriteTaskWhenReady$b__47_0
// Il2CppName: <RunReadWriteTaskWhenReady>b__47_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Stream::$$c::*)(System::Threading::Tasks::Task*, ::Il2CppObject*)>(&System::IO::Stream::$$c::$RunReadWriteTaskWhenReady$b__47_0)> {
  const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<RunReadWriteTaskWhenReady>b__47_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$BeginEndWriteAsync$b__53_0
// Il2CppName: <BeginEndWriteAsync>b__53_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::Stream::$$c::*)(System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Stream::$$c::$BeginEndWriteAsync$b__53_0)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System.IO", "Stream/ReadWriteParameters")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<BeginEndWriteAsync>b__53_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, args, callback, state});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::$BeginEndWriteAsync$b__53_1
// Il2CppName: <BeginEndWriteAsync>b__53_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::VoidTaskResult (System::IO::Stream::$$c::*)(System::IO::Stream*, System::IAsyncResult*)>(&System::IO::Stream::$$c::$BeginEndWriteAsync$b__53_1)> {
  const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::$$c*), "<BeginEndWriteAsync>b__53_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
