// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.Socket
#include "System/Net/Sockets/Socket.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IOSelectorJob
  class IOSelectorJob;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.Socket/System.Net.Sockets.<>c__DisplayClass298_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Socket::$$c__DisplayClass298_0 : public ::Il2CppObject {
    public:
    // public System.Net.Sockets.Socket <>4__this
    // Size: 0x8
    // Offset: 0x10
    System::Net::Sockets::Socket* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // public System.IOSelectorJob job
    // Size: 0x8
    // Offset: 0x18
    System::IOSelectorJob* job;
    // Field size check
    static_assert(sizeof(System::IOSelectorJob*) == 0x8);
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass298_0
    $$c__DisplayClass298_0(System::Net::Sockets::Socket* $$4__this_ = {}, System::IOSelectorJob* job_ = {}, System::IntPtr handle_ = {}) noexcept : $$4__this{$$4__this_}, job{job_}, handle{handle_} {}
    // Get instance field: public System.Net.Sockets.Socket <>4__this
    System::Net::Sockets::Socket* _get_$$4__this();
    // Set instance field: public System.Net.Sockets.Socket <>4__this
    void _set_$$4__this(System::Net::Sockets::Socket* value);
    // Get instance field: public System.IOSelectorJob job
    System::IOSelectorJob* _get_job();
    // Set instance field: public System.IOSelectorJob job
    void _set_job(System::IOSelectorJob* value);
    // Get instance field: public System.IntPtr handle
    System::IntPtr _get_handle();
    // Set instance field: public System.IntPtr handle
    void _set_handle(System::IntPtr value);
    // System.Void <QueueIOSelectorJob>b__0(System.Threading.Tasks.Task t)
    // Offset: 0x15C7894
    void $QueueIOSelectorJob$b__0(System::Threading::Tasks::Task* t);
    // public System.Void .ctor()
    // Offset: 0x15C788C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Socket::$$c__DisplayClass298_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::Socket::$$c__DisplayClass298_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Socket::$$c__DisplayClass298_0*, creationType>()));
    }
  }; // System.Net.Sockets.Socket/System.Net.Sockets.<>c__DisplayClass298_0
  #pragma pack(pop)
  static check_size<sizeof(Socket::$$c__DisplayClass298_0), 32 + sizeof(System::IntPtr)> __System_Net_Sockets_Socket_$$c__DisplayClass298_0SizeCheck;
  static_assert(sizeof(Socket::$$c__DisplayClass298_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::Socket::$$c__DisplayClass298_0*, "System.Net.Sockets", "Socket/<>c__DisplayClass298_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c__DisplayClass298_0::$QueueIOSelectorJob$b__0
// Il2CppName: <QueueIOSelectorJob>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::Socket::$$c__DisplayClass298_0::*)(System::Threading::Tasks::Task*)>(&System::Net::Sockets::Socket::$$c__DisplayClass298_0::$QueueIOSelectorJob$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::Socket::$$c__DisplayClass298_0*), "<QueueIOSelectorJob>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::Socket::$$c__DisplayClass298_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
