// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackTrace
  class StackTrace;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SafeSocketHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeSocketHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // Writing base type padding for base size: 0x1E to desired offset: 0x20
    char ___base_padding[0x2] = {};
    // private System.Collections.Generic.List`1<System.Threading.Thread> blocking_threads
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Threading::Thread*>* blocking_threads;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Threading::Thread*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace> threads_stacktraces
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<System::Threading::Thread*, System::Diagnostics::StackTrace*>* threads_stacktraces;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Threading::Thread*, System::Diagnostics::StackTrace*>*) == 0x8);
    // private System.Boolean in_cleanup
    // Size: 0x1
    // Offset: 0x30
    bool in_cleanup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SafeSocketHandle
    SafeSocketHandle(System::Collections::Generic::List_1<System::Threading::Thread*>* blocking_threads_ = {}, System::Collections::Generic::Dictionary_2<System::Threading::Thread*, System::Diagnostics::StackTrace*>* threads_stacktraces_ = {}, bool in_cleanup_ = {}) noexcept : blocking_threads{blocking_threads_}, threads_stacktraces{threads_stacktraces_}, in_cleanup{in_cleanup_} {}
    // static field const value: static private System.Int32 SOCKET_CLOSED
    static constexpr const int SOCKET_CLOSED = 10004;
    // Get static field: static private System.Int32 SOCKET_CLOSED
    static int _get_SOCKET_CLOSED();
    // Set static field: static private System.Int32 SOCKET_CLOSED
    static void _set_SOCKET_CLOSED(int value);
    // static field const value: static private System.Int32 ABORT_RETRIES
    static constexpr const int ABORT_RETRIES = 10;
    // Get static field: static private System.Int32 ABORT_RETRIES
    static int _get_ABORT_RETRIES();
    // Set static field: static private System.Int32 ABORT_RETRIES
    static void _set_ABORT_RETRIES(int value);
    // Get static field: static private System.Boolean THROW_ON_ABORT_RETRIES
    static bool _get_THROW_ON_ABORT_RETRIES();
    // Set static field: static private System.Boolean THROW_ON_ABORT_RETRIES
    static void _set_THROW_ON_ABORT_RETRIES(bool value);
    // Get instance field reference: private System.Collections.Generic.List`1<System.Threading.Thread> blocking_threads
    System::Collections::Generic::List_1<System::Threading::Thread*>*& dyn_blocking_threads();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace> threads_stacktraces
    System::Collections::Generic::Dictionary_2<System::Threading::Thread*, System::Diagnostics::StackTrace*>*& dyn_threads_stacktraces();
    // Get instance field reference: private System.Boolean in_cleanup
    bool& dyn_in_cleanup();
    // static private System.Void .cctor()
    // Offset: 0x14A7BB4
    static void _cctor();
    // public System.Void RegisterForBlockingSyscall()
    // Offset: 0x14A77E0
    void RegisterForBlockingSyscall();
    // public System.Void UnRegisterForBlockingSyscall()
    // Offset: 0x14A7A1C
    void UnRegisterForBlockingSyscall();
    // public System.Void .ctor(System.IntPtr preexistingHandle, System.Boolean ownsHandle)
    // Offset: 0x14A7254
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Void SafeHandle::.ctor(System.IntPtr preexistingHandle, System.Boolean ownsHandle)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeSocketHandle* New_ctor(System::IntPtr preexistingHandle, bool ownsHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SafeSocketHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeSocketHandle*, creationType>(preexistingHandle, ownsHandle)));
    }
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x14A7310
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // System.Net.Sockets.SafeSocketHandle
  #pragma pack(pop)
  static check_size<sizeof(SafeSocketHandle), 48 + sizeof(bool)> __System_Net_Sockets_SafeSocketHandleSizeCheck;
  static_assert(sizeof(SafeSocketHandle) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SafeSocketHandle*, "System.Net.Sockets", "SafeSocketHandle");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SafeSocketHandle::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Sockets::SafeSocketHandle::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SafeSocketHandle*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall
// Il2CppName: RegisterForBlockingSyscall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SafeSocketHandle::*)()>(&System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SafeSocketHandle*), "RegisterForBlockingSyscall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall
// Il2CppName: UnRegisterForBlockingSyscall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SafeSocketHandle::*)()>(&System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SafeSocketHandle*), "UnRegisterForBlockingSyscall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SafeSocketHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SafeSocketHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::SafeSocketHandle::*)()>(&System::Net::Sockets::SafeSocketHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SafeSocketHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
