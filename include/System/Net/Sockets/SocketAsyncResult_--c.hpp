// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.SocketAsyncResult
#include "System/Net/Sockets/SocketAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketAsyncResult/System.Net.Sockets.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SocketAsyncResult::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.Net.Sockets.SocketAsyncResult/System.Net.Sockets.<>c <>9
    static System::Net::Sockets::SocketAsyncResult::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.Sockets.SocketAsyncResult/System.Net.Sockets.<>c <>9
    static void _set_$$9(System::Net::Sockets::SocketAsyncResult::$$c* value);
    // Get static field: static public System.Threading.WaitCallback <>9__27_0
    static System::Threading::WaitCallback* _get_$$9__27_0();
    // Set static field: static public System.Threading.WaitCallback <>9__27_0
    static void _set_$$9__27_0(System::Threading::WaitCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x15C7F6C
    static void _cctor();
    // System.Void <Complete>b__27_0(System.Object state)
    // Offset: 0x15C7FD8
    void $Complete$b__27_0(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x15C7FD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncResult::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketAsyncResult::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncResult::$$c*, creationType>()));
    }
  }; // System.Net.Sockets.SocketAsyncResult/System.Net.Sockets.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncResult::$$c*, "System.Net.Sockets", "SocketAsyncResult/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Sockets::SocketAsyncResult::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::$$c::$Complete$b__27_0
// Il2CppName: <Complete>b__27_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncResult::$$c::*)(::Il2CppObject*)>(&System::Net::Sockets::SocketAsyncResult::$$c::$Complete$b__27_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncResult::$$c*), "<Complete>b__27_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncResult::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
