// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.UnityWebRequest
#include "UnityEngine/Networking/UnityWebRequest.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
  struct UnityWebRequest::UnityWebRequestError/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UnityWebRequestError
    constexpr UnityWebRequestError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError OK
    static constexpr const int OK = 0;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError OK
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_OK();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError OK
    static void _set_OK(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Unknown
    static constexpr const int Unknown = 1;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Unknown
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_Unknown();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Unknown
    static void _set_Unknown(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SDKError
    static constexpr const int SDKError = 2;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SDKError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SDKError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SDKError
    static void _set_SDKError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnsupportedProtocol
    static constexpr const int UnsupportedProtocol = 3;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnsupportedProtocol
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_UnsupportedProtocol();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnsupportedProtocol
    static void _set_UnsupportedProtocol(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError MalformattedUrl
    static constexpr const int MalformattedUrl = 4;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError MalformattedUrl
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_MalformattedUrl();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError MalformattedUrl
    static void _set_MalformattedUrl(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotResolveProxy
    static constexpr const int CannotResolveProxy = 5;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotResolveProxy
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_CannotResolveProxy();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotResolveProxy
    static void _set_CannotResolveProxy(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotResolveHost
    static constexpr const int CannotResolveHost = 6;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotResolveHost
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_CannotResolveHost();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotResolveHost
    static void _set_CannotResolveHost(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotConnectToHost
    static constexpr const int CannotConnectToHost = 7;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotConnectToHost
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_CannotConnectToHost();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError CannotConnectToHost
    static void _set_CannotConnectToHost(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError AccessDenied
    static constexpr const int AccessDenied = 8;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError AccessDenied
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_AccessDenied();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError AccessDenied
    static void _set_AccessDenied(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError GenericHttpError
    static constexpr const int GenericHttpError = 9;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError GenericHttpError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_GenericHttpError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError GenericHttpError
    static void _set_GenericHttpError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError WriteError
    static constexpr const int WriteError = 10;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError WriteError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_WriteError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError WriteError
    static void _set_WriteError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError ReadError
    static constexpr const int ReadError = 11;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError ReadError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_ReadError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError ReadError
    static void _set_ReadError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError OutOfMemory
    static constexpr const int OutOfMemory = 12;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError OutOfMemory
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_OutOfMemory();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError OutOfMemory
    static void _set_OutOfMemory(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Timeout
    static constexpr const int Timeout = 13;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Timeout
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_Timeout();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Timeout
    static void _set_Timeout(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError HTTPPostError
    static constexpr const int HTTPPostError = 14;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError HTTPPostError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_HTTPPostError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError HTTPPostError
    static void _set_HTTPPostError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCannotConnect
    static constexpr const int SSLCannotConnect = 15;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCannotConnect
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SSLCannotConnect();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCannotConnect
    static void _set_SSLCannotConnect(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Aborted
    static constexpr const int Aborted = 16;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Aborted
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_Aborted();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError Aborted
    static void _set_Aborted(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError TooManyRedirects
    static constexpr const int TooManyRedirects = 17;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError TooManyRedirects
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_TooManyRedirects();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError TooManyRedirects
    static void _set_TooManyRedirects(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError ReceivedNoData
    static constexpr const int ReceivedNoData = 18;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError ReceivedNoData
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_ReceivedNoData();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError ReceivedNoData
    static void _set_ReceivedNoData(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLNotSupported
    static constexpr const int SSLNotSupported = 19;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLNotSupported
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SSLNotSupported();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLNotSupported
    static void _set_SSLNotSupported(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError FailedToSendData
    static constexpr const int FailedToSendData = 20;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError FailedToSendData
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_FailedToSendData();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError FailedToSendData
    static void _set_FailedToSendData(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError FailedToReceiveData
    static constexpr const int FailedToReceiveData = 21;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError FailedToReceiveData
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_FailedToReceiveData();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError FailedToReceiveData
    static void _set_FailedToReceiveData(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCertificateError
    static constexpr const int SSLCertificateError = 22;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCertificateError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SSLCertificateError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCertificateError
    static void _set_SSLCertificateError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCipherNotAvailable
    static constexpr const int SSLCipherNotAvailable = 23;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCipherNotAvailable
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SSLCipherNotAvailable();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCipherNotAvailable
    static void _set_SSLCipherNotAvailable(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCACertError
    static constexpr const int SSLCACertError = 24;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCACertError
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SSLCACertError();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLCACertError
    static void _set_SSLCACertError(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnrecognizedContentEncoding
    static constexpr const int UnrecognizedContentEncoding = 25;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnrecognizedContentEncoding
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_UnrecognizedContentEncoding();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnrecognizedContentEncoding
    static void _set_UnrecognizedContentEncoding(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError LoginFailed
    static constexpr const int LoginFailed = 26;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError LoginFailed
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_LoginFailed();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError LoginFailed
    static void _set_LoginFailed(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLShutdownFailed
    static constexpr const int SSLShutdownFailed = 27;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLShutdownFailed
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_SSLShutdownFailed();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SSLShutdownFailed
    static void _set_SSLShutdownFailed(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError NoInternetConnection
    static constexpr const int NoInternetConnection = 28;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError NoInternetConnection
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestError _get_NoInternetConnection();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestError NoInternetConnection
    static void _set_NoInternetConnection(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError value);
  }; // UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
  #pragma pack(pop)
  static check_size<sizeof(UnityWebRequest::UnityWebRequestError), 0 + sizeof(int)> __UnityEngine_Networking_UnityWebRequest_UnityWebRequestErrorSizeCheck;
  static_assert(sizeof(UnityWebRequest::UnityWebRequestError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
