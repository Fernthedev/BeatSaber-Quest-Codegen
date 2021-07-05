// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream/SynchronousAsyncResult
#include "System/IO/Stream_SynchronousAsyncResult.hpp"
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
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Stream/SynchronousAsyncResult/<>c
  // [CompilerGeneratedAttribute] Offset: D7C8B4
  class Stream::SynchronousAsyncResult::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.IO.Stream/SynchronousAsyncResult/<>c <>9
    static System::IO::Stream::SynchronousAsyncResult::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.Stream/SynchronousAsyncResult/<>c <>9
    static void _set_$$9(System::IO::Stream::SynchronousAsyncResult::$$c* value);
    // Get static field: static public System.Func`1<System.Threading.ManualResetEvent> <>9__12_0
    static System::Func_1<System::Threading::ManualResetEvent*>* _get_$$9__12_0();
    // Set static field: static public System.Func`1<System.Threading.ManualResetEvent> <>9__12_0
    static void _set_$$9__12_0(System::Func_1<System::Threading::ManualResetEvent*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1959548
    static void _cctor();
    // System.Threading.ManualResetEvent <get_AsyncWaitHandle>b__12_0()
    // Offset: 0x19595B4
    System::Threading::ManualResetEvent* $get_AsyncWaitHandle$b__12_0();
    // public System.Void .ctor()
    // Offset: 0x19595AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::SynchronousAsyncResult::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult::$$c*, creationType>()));
    }
  }; // System.IO.Stream/SynchronousAsyncResult/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::SynchronousAsyncResult::$$c*, "System.IO", "Stream/SynchronousAsyncResult/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Stream::SynchronousAsyncResult::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::$$c::$get_AsyncWaitHandle$b__12_0
// Il2CppName: <get_AsyncWaitHandle>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ManualResetEvent* (System::IO::Stream::SynchronousAsyncResult::$$c::*)()>(&System::IO::Stream::SynchronousAsyncResult::$$c::$get_AsyncWaitHandle$b__12_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Stream::SynchronousAsyncResult::$$c*), "<get_AsyncWaitHandle>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Stream::SynchronousAsyncResult::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
