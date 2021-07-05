// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
// Including type: System.Net.Sockets.SocketAsyncOperation
#include "System/Net/Sockets/SocketAsyncOperation.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketAsyncResult
  class SocketAsyncResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IList`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketAsyncEventArgs
  class SocketAsyncEventArgs : public System::EventArgs/*, public System::IDisposable*/ {
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: in_progress
    char __padding0[0x3] = {};
    // System.Int32 in_progress
    // Size: 0x4
    // Offset: 0x14
    int in_progress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Net.EndPoint remote_ep
    // Size: 0x8
    // Offset: 0x18
    System::Net::EndPoint* remote_ep;
    // Field size check
    static_assert(sizeof(System::Net::EndPoint*) == 0x8);
    // System.Net.Sockets.Socket current_socket
    // Size: 0x8
    // Offset: 0x20
    System::Net::Sockets::Socket* current_socket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // System.Net.Sockets.SocketAsyncResult socket_async_result
    // Size: 0x8
    // Offset: 0x28
    System::Net::Sockets::SocketAsyncResult* socket_async_result;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::SocketAsyncResult*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD889B4
    // private System.Net.Sockets.Socket <AcceptSocket>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Net::Sockets::Socket* AcceptSocket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> m_BufferList
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* m_BufferList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD889C4
    // private System.Int32 <BytesTransferred>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int BytesTransferred;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD889D4
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD889E4
    // private System.Net.Sockets.SocketAsyncOperation <LastOperation>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    System::Net::Sockets::SocketAsyncOperation LastOperation;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::SocketAsyncOperation) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD889F4
    // private System.Int32 <SendPacketsSendSize>k__BackingField
    // Size: 0x4
    // Offset: 0x4C
    int SendPacketsSendSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD88A04
    // private System.Net.Sockets.SocketError <SocketError>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    System::Net::Sockets::SocketError SocketError;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::SocketError) == 0x4);
    // Padding between fields: SocketError and: UserToken
    char __padding11[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD88A14
    // private System.Object <UserToken>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppObject* UserToken;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD88A24
    // private System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> Completed
    // Size: 0x8
    // Offset: 0x60
    System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* Completed;
    // Field size check
    static_assert(sizeof(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>*) == 0x8);
    // Creating value type constructor for type: SocketAsyncEventArgs
    SocketAsyncEventArgs(bool disposed_ = {}, int in_progress_ = {}, System::Net::EndPoint* remote_ep_ = {}, System::Net::Sockets::Socket* current_socket_ = {}, System::Net::Sockets::SocketAsyncResult* socket_async_result_ = {}, System::Net::Sockets::Socket* AcceptSocket_ = {}, System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* m_BufferList_ = {}, int BytesTransferred_ = {}, int Count_ = {}, System::Net::Sockets::SocketAsyncOperation LastOperation_ = {}, int SendPacketsSendSize_ = {}, System::Net::Sockets::SocketError SocketError_ = {}, ::Il2CppObject* UserToken_ = {}, System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* Completed_ = {}) noexcept : disposed{disposed_}, in_progress{in_progress_}, remote_ep{remote_ep_}, current_socket{current_socket_}, socket_async_result{socket_async_result_}, AcceptSocket{AcceptSocket_}, m_BufferList{m_BufferList_}, BytesTransferred{BytesTransferred_}, Count{Count_}, LastOperation{LastOperation_}, SendPacketsSendSize{SendPacketsSendSize_}, SocketError{SocketError_}, UserToken{UserToken_}, Completed{Completed_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Net.Sockets.Socket get_AcceptSocket()
    // Offset: 0x15B8BB0
    System::Net::Sockets::Socket* get_AcceptSocket();
    // public System.Void set_AcceptSocket(System.Net.Sockets.Socket value)
    // Offset: 0x15B8BB8
    void set_AcceptSocket(System::Net::Sockets::Socket* value);
    // public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> get_BufferList()
    // Offset: 0x15B8BC0
    System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* get_BufferList();
    // System.Void set_BytesTransferred(System.Int32 value)
    // Offset: 0x15B8BC8
    void set_BytesTransferred(int value);
    // public System.Int32 get_Count()
    // Offset: 0x15B8BD0
    int get_Count();
    // private System.Void set_LastOperation(System.Net.Sockets.SocketAsyncOperation value)
    // Offset: 0x15B8BD8
    void set_LastOperation(System::Net::Sockets::SocketAsyncOperation value);
    // public System.Void set_SendPacketsSendSize(System.Int32 value)
    // Offset: 0x15B8BE0
    void set_SendPacketsSendSize(int value);
    // public System.Net.Sockets.SocketError get_SocketError()
    // Offset: 0x15B8BE8
    System::Net::Sockets::SocketError get_SocketError();
    // public System.Void set_SocketError(System.Net.Sockets.SocketError value)
    // Offset: 0x15B8BF0
    void set_SocketError(System::Net::Sockets::SocketError value);
    // public System.Object get_UserToken()
    // Offset: 0x15B8BF8
    ::Il2CppObject* get_UserToken();
    // public System.Void set_UserToken(System.Object value)
    // Offset: 0x15B8C00
    void set_UserToken(::Il2CppObject* value);
    // public System.Void add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> value)
    // Offset: 0x15B8C08
    void add_Completed(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* value);
    // public System.Void remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> value)
    // Offset: 0x15B8CAC
    void remove_Completed(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* value);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x15B8DFC
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x15B8E10
    void Dispose();
    // System.Void SetLastOperation(System.Net.Sockets.SocketAsyncOperation op)
    // Offset: 0x15B8E84
    void SetLastOperation(System::Net::Sockets::SocketAsyncOperation op);
    // System.Void Complete()
    // Offset: 0x15B6D68
    void Complete();
    // protected System.Void OnCompleted(System.Net.Sockets.SocketAsyncEventArgs e)
    // Offset: 0x15B8F60
    void OnCompleted(System::Net::Sockets::SocketAsyncEventArgs* e);
    // public System.Void .ctor()
    // Offset: 0x15B8D50
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Sockets::SocketAsyncEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncEventArgs*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x15B8DEC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Net.Sockets.SocketAsyncEventArgs
  #pragma pack(pop)
  static check_size<sizeof(SocketAsyncEventArgs), 96 + sizeof(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>*)> __System_Net_Sockets_SocketAsyncEventArgsSizeCheck;
  static_assert(sizeof(SocketAsyncEventArgs) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncEventArgs*, "System.Net.Sockets", "SocketAsyncEventArgs");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket
// Il2CppName: get_AcceptSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::Socket* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_AcceptSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket
// Il2CppName: set_AcceptSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::Net::Sockets::Socket*)>(&System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_AcceptSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_BufferList
// Il2CppName: get_BufferList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_BufferList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_BufferList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred
// Il2CppName: set_BytesTransferred
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(int)>(&System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_BytesTransferred", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_Count)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation
// Il2CppName: set_LastOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::Net::Sockets::SocketAsyncOperation)>(&System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_LastOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize
// Il2CppName: set_SendPacketsSendSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(int)>(&System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_SendPacketsSendSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_SocketError
// Il2CppName: get_SocketError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::SocketError (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_SocketError)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_SocketError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_SocketError
// Il2CppName: set_SocketError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::Net::Sockets::SocketError)>(&System::Net::Sockets::SocketAsyncEventArgs::set_SocketError)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_SocketError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::get_UserToken
// Il2CppName: get_UserToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::get_UserToken)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "get_UserToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::set_UserToken
// Il2CppName: set_UserToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(::Il2CppObject*)>(&System::Net::Sockets::SocketAsyncEventArgs::set_UserToken)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "set_UserToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::add_Completed
// Il2CppName: add_Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>*)>(&System::Net::Sockets::SocketAsyncEventArgs::add_Completed)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "add_Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::remove_Completed
// Il2CppName: remove_Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>*)>(&System::Net::Sockets::SocketAsyncEventArgs::remove_Completed)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "EventHandler`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "remove_Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation
// Il2CppName: SetLastOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::Net::Sockets::SocketAsyncOperation)>(&System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation)> {
  const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "SetLastOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Complete)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)(System::Net::Sockets::SocketAsyncEventArgs*)>(&System::Net::Sockets::SocketAsyncEventArgs::OnCompleted)> {
  const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::SocketAsyncEventArgs::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::SocketAsyncEventArgs::*)()>(&System::Net::Sockets::SocketAsyncEventArgs::Finalize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::SocketAsyncEventArgs*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
