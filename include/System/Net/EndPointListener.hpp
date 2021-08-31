// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: HttpConnection
  class HttpConnection;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: ListenerPrefix
  class ListenerPrefix;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketAsyncEventArgs
  class SocketAsyncEventArgs;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.EndPointListener
  // [TokenAttribute] Offset: FFFFFFFF
  class EndPointListener : public ::Il2CppObject {
    public:
    // private System.Net.HttpListener listener
    // Size: 0x8
    // Offset: 0x10
    System::Net::HttpListener* listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    // private System.Net.IPEndPoint endpoint
    // Size: 0x8
    // Offset: 0x18
    System::Net::IPEndPoint* endpoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Net.Sockets.Socket sock
    // Size: 0x8
    // Offset: 0x20
    System::Net::Sockets::Socket* sock;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Collections.Hashtable prefixes
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* prefixes;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Collections.ArrayList unhandled
    // Size: 0x8
    // Offset: 0x30
    System::Collections::ArrayList* unhandled;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList all
    // Size: 0x8
    // Offset: 0x38
    System::Collections::ArrayList* all;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate cert
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::X509Certificates::X509Certificate* cert;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Boolean secure
    // Size: 0x1
    // Offset: 0x48
    bool secure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secure and: unregistered
    char __padding7[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<System.Net.HttpConnection,System.Net.HttpConnection> unregistered
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>* unregistered;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>*) == 0x8);
    // Creating value type constructor for type: EndPointListener
    EndPointListener(System::Net::HttpListener* listener_ = {}, System::Net::IPEndPoint* endpoint_ = {}, System::Net::Sockets::Socket* sock_ = {}, System::Collections::Hashtable* prefixes_ = {}, System::Collections::ArrayList* unhandled_ = {}, System::Collections::ArrayList* all_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate* cert_ = {}, bool secure_ = {}, System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>* unregistered_ = {}) noexcept : listener{listener_}, endpoint{endpoint_}, sock{sock_}, prefixes{prefixes_}, unhandled{unhandled_}, all{all_}, cert{cert_}, secure{secure_}, unregistered{unregistered_} {}
    // Get instance field: private System.Net.HttpListener listener
    System::Net::HttpListener* _get_listener();
    // Set instance field: private System.Net.HttpListener listener
    void _set_listener(System::Net::HttpListener* value);
    // Get instance field: private System.Net.IPEndPoint endpoint
    System::Net::IPEndPoint* _get_endpoint();
    // Set instance field: private System.Net.IPEndPoint endpoint
    void _set_endpoint(System::Net::IPEndPoint* value);
    // Get instance field: private System.Net.Sockets.Socket sock
    System::Net::Sockets::Socket* _get_sock();
    // Set instance field: private System.Net.Sockets.Socket sock
    void _set_sock(System::Net::Sockets::Socket* value);
    // Get instance field: private System.Collections.Hashtable prefixes
    System::Collections::Hashtable* _get_prefixes();
    // Set instance field: private System.Collections.Hashtable prefixes
    void _set_prefixes(System::Collections::Hashtable* value);
    // Get instance field: private System.Collections.ArrayList unhandled
    System::Collections::ArrayList* _get_unhandled();
    // Set instance field: private System.Collections.ArrayList unhandled
    void _set_unhandled(System::Collections::ArrayList* value);
    // Get instance field: private System.Collections.ArrayList all
    System::Collections::ArrayList* _get_all();
    // Set instance field: private System.Collections.ArrayList all
    void _set_all(System::Collections::ArrayList* value);
    // Get instance field: private System.Security.Cryptography.X509Certificates.X509Certificate cert
    System::Security::Cryptography::X509Certificates::X509Certificate* _get_cert();
    // Set instance field: private System.Security.Cryptography.X509Certificates.X509Certificate cert
    void _set_cert(System::Security::Cryptography::X509Certificates::X509Certificate* value);
    // Get instance field: private System.Boolean secure
    bool _get_secure();
    // Set instance field: private System.Boolean secure
    void _set_secure(bool value);
    // Get instance field: private System.Collections.Generic.Dictionary`2<System.Net.HttpConnection,System.Net.HttpConnection> unregistered
    System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>* _get_unregistered();
    // Set instance field: private System.Collections.Generic.Dictionary`2<System.Net.HttpConnection,System.Net.HttpConnection> unregistered
    void _set_unregistered(System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>* value);
    // System.Net.HttpListener get_Listener()
    // Offset: 0x16DB4D8
    System::Net::HttpListener* get_Listener();
    // public System.Void .ctor(System.Net.HttpListener listener, System.Net.IPAddress addr, System.Int32 port, System.Boolean secure)
    // Offset: 0x16DB16C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndPointListener* New_ctor(System::Net::HttpListener* listener, System::Net::IPAddress* addr, int port, bool secure) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::EndPointListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndPointListener*, creationType>(listener, addr, port, secure)));
    }
    // static private System.Void Accept(System.Net.Sockets.Socket socket, System.Net.Sockets.SocketAsyncEventArgs e, ref System.Net.Sockets.Socket accepted)
    // Offset: 0x16DB35C
    static void Accept(System::Net::Sockets::Socket* socket, System::Net::Sockets::SocketAsyncEventArgs* e, ByRef<System::Net::Sockets::Socket*> accepted);
    // static private System.Void ProcessAccept(System.Net.Sockets.SocketAsyncEventArgs args)
    // Offset: 0x16DB4E0
    static void ProcessAccept(System::Net::Sockets::SocketAsyncEventArgs* args);
    // static private System.Void OnAccept(System.Object sender, System.Net.Sockets.SocketAsyncEventArgs e)
    // Offset: 0x16DB6F0
    static void OnAccept(::Il2CppObject* sender, System::Net::Sockets::SocketAsyncEventArgs* e);
    // System.Void RemoveConnection(System.Net.HttpConnection conn)
    // Offset: 0x16DB6F8
    void RemoveConnection(System::Net::HttpConnection* conn);
    // public System.Boolean BindContext(System.Net.HttpListenerContext context)
    // Offset: 0x16DB7C4
    bool BindContext(System::Net::HttpListenerContext* context);
    // public System.Void UnbindContext(System.Net.HttpListenerContext context)
    // Offset: 0x16DBD8C
    void UnbindContext(System::Net::HttpListenerContext* context);
    // private System.Net.HttpListener SearchListener(System.Uri uri, out System.Net.ListenerPrefix prefix)
    // Offset: 0x16DB81C
    System::Net::HttpListener* SearchListener(System::Uri* uri, ByRef<System::Net::ListenerPrefix*> prefix);
    // private System.Net.HttpListener MatchFromList(System.String host, System.String path, System.Collections.ArrayList list, out System.Net.ListenerPrefix prefix)
    // Offset: 0x16DBDB8
    System::Net::HttpListener* MatchFromList(::Il2CppString* host, ::Il2CppString* path, System::Collections::ArrayList* list, ByRef<System::Net::ListenerPrefix*> prefix);
    // private System.Void AddSpecial(System.Collections.ArrayList coll, System.Net.ListenerPrefix prefix)
    // Offset: 0x16DC060
    void AddSpecial(System::Collections::ArrayList* coll, System::Net::ListenerPrefix* prefix);
    // private System.Boolean RemoveSpecial(System.Collections.ArrayList coll, System.Net.ListenerPrefix prefix)
    // Offset: 0x16DC314
    bool RemoveSpecial(System::Collections::ArrayList* coll, System::Net::ListenerPrefix* prefix);
    // private System.Void CheckIfRemove()
    // Offset: 0x16DC414
    void CheckIfRemove();
    // public System.Void Close()
    // Offset: 0x16DC724
    void Close();
    // public System.Void AddPrefix(System.Net.ListenerPrefix prefix, System.Net.HttpListener listener)
    // Offset: 0x16DC964
    void AddPrefix(System::Net::ListenerPrefix* prefix, System::Net::HttpListener* listener);
    // public System.Void RemovePrefix(System.Net.ListenerPrefix prefix, System.Net.HttpListener listener)
    // Offset: 0x16DCC98
    void RemovePrefix(System::Net::ListenerPrefix* prefix, System::Net::HttpListener* listener);
  }; // System.Net.EndPointListener
  #pragma pack(pop)
  static check_size<sizeof(EndPointListener), 80 + sizeof(System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>*)> __System_Net_EndPointListenerSizeCheck;
  static_assert(sizeof(EndPointListener) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::EndPointListener*, "System.Net", "EndPointListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::EndPointListener::get_Listener
// Il2CppName: get_Listener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListener* (System::Net::EndPointListener::*)()>(&System::Net::EndPointListener::get_Listener)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "get_Listener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::EndPointListener::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::Socket*, System::Net::Sockets::SocketAsyncEventArgs*, ByRef<System::Net::Sockets::Socket*>)>(&System::Net::EndPointListener::Accept)> {
  static const MethodInfo* get() {
    static auto* socket = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    static auto* accepted = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{socket, e, accepted});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::ProcessAccept
// Il2CppName: ProcessAccept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SocketAsyncEventArgs*)>(&System::Net::EndPointListener::ProcessAccept)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "ProcessAccept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::OnAccept
// Il2CppName: OnAccept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::Net::Sockets::SocketAsyncEventArgs*)>(&System::Net::EndPointListener::OnAccept)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "SocketAsyncEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "OnAccept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::RemoveConnection
// Il2CppName: RemoveConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::HttpConnection*)>(&System::Net::EndPointListener::RemoveConnection)> {
  static const MethodInfo* get() {
    static auto* conn = &::il2cpp_utils::GetClassFromName("System.Net", "HttpConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "RemoveConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{conn});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::BindContext
// Il2CppName: BindContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndPointListener::*)(System::Net::HttpListenerContext*)>(&System::Net::EndPointListener::BindContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "BindContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::UnbindContext
// Il2CppName: UnbindContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::HttpListenerContext*)>(&System::Net::EndPointListener::UnbindContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "UnbindContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::SearchListener
// Il2CppName: SearchListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListener* (System::Net::EndPointListener::*)(System::Uri*, ByRef<System::Net::ListenerPrefix*>)>(&System::Net::EndPointListener::SearchListener)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System.Net", "ListenerPrefix")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "SearchListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, prefix});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::MatchFromList
// Il2CppName: MatchFromList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListener* (System::Net::EndPointListener::*)(::Il2CppString*, ::Il2CppString*, System::Collections::ArrayList*, ByRef<System::Net::ListenerPrefix*>)>(&System::Net::EndPointListener::MatchFromList)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System.Net", "ListenerPrefix")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "MatchFromList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, path, list, prefix});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::AddSpecial
// Il2CppName: AddSpecial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Collections::ArrayList*, System::Net::ListenerPrefix*)>(&System::Net::EndPointListener::AddSpecial)> {
  static const MethodInfo* get() {
    static auto* coll = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System.Net", "ListenerPrefix")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "AddSpecial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coll, prefix});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::RemoveSpecial
// Il2CppName: RemoveSpecial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndPointListener::*)(System::Collections::ArrayList*, System::Net::ListenerPrefix*)>(&System::Net::EndPointListener::RemoveSpecial)> {
  static const MethodInfo* get() {
    static auto* coll = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System.Net", "ListenerPrefix")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "RemoveSpecial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coll, prefix});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::CheckIfRemove
// Il2CppName: CheckIfRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)()>(&System::Net::EndPointListener::CheckIfRemove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "CheckIfRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)()>(&System::Net::EndPointListener::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::AddPrefix
// Il2CppName: AddPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::ListenerPrefix*, System::Net::HttpListener*)>(&System::Net::EndPointListener::AddPrefix)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System.Net", "ListenerPrefix")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "AddPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, listener});
  }
};
// Writing MetadataGetter for method: System::Net::EndPointListener::RemovePrefix
// Il2CppName: RemovePrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::ListenerPrefix*, System::Net::HttpListener*)>(&System::Net::EndPointListener::RemovePrefix)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System.Net", "ListenerPrefix")->byval_arg;
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndPointListener*), "RemovePrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, listener});
  }
};
