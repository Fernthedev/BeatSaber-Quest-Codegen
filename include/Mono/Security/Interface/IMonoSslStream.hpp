// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: AuthenticatedStream
  class AuthenticatedStream;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.IMonoSslStream
  class IMonoSslStream/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IMonoSslStream
    IMonoSslStream() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void AuthenticateAsClient(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0xFFFFFFFF
    void AuthenticateAsClient(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // public System.Void AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0xFFFFFFFF
    void AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFF
    int EndRead(System::IAsyncResult* asyncResult);
    // public System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFF
    void EndWrite(System::IAsyncResult* asyncResult);
    // public System.Boolean get_IsAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_IsAuthenticated();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFF
    bool get_CanRead();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFF
    bool get_CanWrite();
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFF
    int64_t get_Length();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFF
    int64_t get_Position();
    // public System.Void SetLength(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void SetLength(int64_t value);
    // public System.Net.Security.AuthenticatedStream get_AuthenticatedStream()
    // Offset: 0xFFFFFFFF
    System::Net::Security::AuthenticatedStream* get_AuthenticatedStream();
    // public System.Int32 get_ReadTimeout()
    // Offset: 0xFFFFFFFF
    int get_ReadTimeout();
    // public System.Int32 get_WriteTimeout()
    // Offset: 0xFFFFFFFF
    int get_WriteTimeout();
    // public System.Security.Cryptography.X509Certificates.X509Certificate get_InternalLocalCertificate()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate();
  }; // Mono.Security.Interface.IMonoSslStream
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::IMonoSslStream*, "Mono.Security.Interface", "IMonoSslStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::AuthenticateAsClient
// Il2CppName: AuthenticateAsClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::IMonoSslStream::*)(::Il2CppString*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, System::Security::Authentication::SslProtocols, bool)>(&Mono::Security::Interface::IMonoSslStream::AuthenticateAsClient)> {
  const MethodInfo* get() {
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clientCertificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* enabledSslProtocols = &::il2cpp_utils::GetClassFromName("System.Security.Authentication", "SslProtocols")->byval_arg;
    static auto* checkCertificateRevocation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "AuthenticateAsClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::AuthenticateAsServer
// Il2CppName: AuthenticateAsServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::IMonoSslStream::*)(System::Security::Cryptography::X509Certificates::X509Certificate*, bool, System::Security::Authentication::SslProtocols, bool)>(&Mono::Security::Interface::IMonoSslStream::AuthenticateAsServer)> {
  const MethodInfo* get() {
    static auto* serverCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* clientCertificateRequired = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* enabledSslProtocols = &::il2cpp_utils::GetClassFromName("System.Security.Authentication", "SslProtocols")->byval_arg;
    static auto* checkCertificateRevocation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "AuthenticateAsServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Interface::IMonoSslStream::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Interface::IMonoSslStream::Read)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::IMonoSslStream::*)(::Array<uint8_t>*, int, int)>(&Mono::Security::Interface::IMonoSslStream::Write)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Security::Interface::IMonoSslStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Security::Interface::IMonoSslStream::BeginRead)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Interface::IMonoSslStream::*)(System::IAsyncResult*)>(&Mono::Security::Interface::IMonoSslStream::EndRead)> {
  const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Mono::Security::Interface::IMonoSslStream::*)(::Array<uint8_t>*, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Security::Interface::IMonoSslStream::BeginWrite)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::IMonoSslStream::*)(System::IAsyncResult*)>(&Mono::Security::Interface::IMonoSslStream::EndWrite)> {
  const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_IsAuthenticated
// Il2CppName: get_IsAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_IsAuthenticated)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_IsAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_CanRead)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_CanWrite)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_Length)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_Position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::IMonoSslStream::*)(int64_t)>(&Mono::Security::Interface::IMonoSslStream::SetLength)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_AuthenticatedStream
// Il2CppName: get_AuthenticatedStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Security::AuthenticatedStream* (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_AuthenticatedStream)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_AuthenticatedStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_ReadTimeout
// Il2CppName: get_ReadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_ReadTimeout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_ReadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_WriteTimeout
// Il2CppName: get_WriteTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_WriteTimeout)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_WriteTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::IMonoSslStream::get_InternalLocalCertificate
// Il2CppName: get_InternalLocalCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Security::Interface::IMonoSslStream::*)()>(&Mono::Security::Interface::IMonoSslStream::get_InternalLocalCertificate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::IMonoSslStream*), "get_InternalLocalCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
