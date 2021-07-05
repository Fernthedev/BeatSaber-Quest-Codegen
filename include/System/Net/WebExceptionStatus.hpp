// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebExceptionStatus
  struct WebExceptionStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WebExceptionStatus
    constexpr WebExceptionStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebExceptionStatus Success
    static constexpr const int Success = 0;
    // Get static field: static public System.Net.WebExceptionStatus Success
    static System::Net::WebExceptionStatus _get_Success();
    // Set static field: static public System.Net.WebExceptionStatus Success
    static void _set_Success(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus NameResolutionFailure
    static constexpr const int NameResolutionFailure = 1;
    // Get static field: static public System.Net.WebExceptionStatus NameResolutionFailure
    static System::Net::WebExceptionStatus _get_NameResolutionFailure();
    // Set static field: static public System.Net.WebExceptionStatus NameResolutionFailure
    static void _set_NameResolutionFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus ConnectFailure
    static constexpr const int ConnectFailure = 2;
    // Get static field: static public System.Net.WebExceptionStatus ConnectFailure
    static System::Net::WebExceptionStatus _get_ConnectFailure();
    // Set static field: static public System.Net.WebExceptionStatus ConnectFailure
    static void _set_ConnectFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus ReceiveFailure
    static constexpr const int ReceiveFailure = 3;
    // Get static field: static public System.Net.WebExceptionStatus ReceiveFailure
    static System::Net::WebExceptionStatus _get_ReceiveFailure();
    // Set static field: static public System.Net.WebExceptionStatus ReceiveFailure
    static void _set_ReceiveFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus SendFailure
    static constexpr const int SendFailure = 4;
    // Get static field: static public System.Net.WebExceptionStatus SendFailure
    static System::Net::WebExceptionStatus _get_SendFailure();
    // Set static field: static public System.Net.WebExceptionStatus SendFailure
    static void _set_SendFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus PipelineFailure
    static constexpr const int PipelineFailure = 5;
    // Get static field: static public System.Net.WebExceptionStatus PipelineFailure
    static System::Net::WebExceptionStatus _get_PipelineFailure();
    // Set static field: static public System.Net.WebExceptionStatus PipelineFailure
    static void _set_PipelineFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus RequestCanceled
    static constexpr const int RequestCanceled = 6;
    // Get static field: static public System.Net.WebExceptionStatus RequestCanceled
    static System::Net::WebExceptionStatus _get_RequestCanceled();
    // Set static field: static public System.Net.WebExceptionStatus RequestCanceled
    static void _set_RequestCanceled(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus ProtocolError
    static constexpr const int ProtocolError = 7;
    // Get static field: static public System.Net.WebExceptionStatus ProtocolError
    static System::Net::WebExceptionStatus _get_ProtocolError();
    // Set static field: static public System.Net.WebExceptionStatus ProtocolError
    static void _set_ProtocolError(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus ConnectionClosed
    static constexpr const int ConnectionClosed = 8;
    // Get static field: static public System.Net.WebExceptionStatus ConnectionClosed
    static System::Net::WebExceptionStatus _get_ConnectionClosed();
    // Set static field: static public System.Net.WebExceptionStatus ConnectionClosed
    static void _set_ConnectionClosed(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus TrustFailure
    static constexpr const int TrustFailure = 9;
    // Get static field: static public System.Net.WebExceptionStatus TrustFailure
    static System::Net::WebExceptionStatus _get_TrustFailure();
    // Set static field: static public System.Net.WebExceptionStatus TrustFailure
    static void _set_TrustFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus SecureChannelFailure
    static constexpr const int SecureChannelFailure = 10;
    // Get static field: static public System.Net.WebExceptionStatus SecureChannelFailure
    static System::Net::WebExceptionStatus _get_SecureChannelFailure();
    // Set static field: static public System.Net.WebExceptionStatus SecureChannelFailure
    static void _set_SecureChannelFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus ServerProtocolViolation
    static constexpr const int ServerProtocolViolation = 11;
    // Get static field: static public System.Net.WebExceptionStatus ServerProtocolViolation
    static System::Net::WebExceptionStatus _get_ServerProtocolViolation();
    // Set static field: static public System.Net.WebExceptionStatus ServerProtocolViolation
    static void _set_ServerProtocolViolation(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus KeepAliveFailure
    static constexpr const int KeepAliveFailure = 12;
    // Get static field: static public System.Net.WebExceptionStatus KeepAliveFailure
    static System::Net::WebExceptionStatus _get_KeepAliveFailure();
    // Set static field: static public System.Net.WebExceptionStatus KeepAliveFailure
    static void _set_KeepAliveFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus Pending
    static constexpr const int Pending = 13;
    // Get static field: static public System.Net.WebExceptionStatus Pending
    static System::Net::WebExceptionStatus _get_Pending();
    // Set static field: static public System.Net.WebExceptionStatus Pending
    static void _set_Pending(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus Timeout
    static constexpr const int Timeout = 14;
    // Get static field: static public System.Net.WebExceptionStatus Timeout
    static System::Net::WebExceptionStatus _get_Timeout();
    // Set static field: static public System.Net.WebExceptionStatus Timeout
    static void _set_Timeout(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus ProxyNameResolutionFailure
    static constexpr const int ProxyNameResolutionFailure = 15;
    // Get static field: static public System.Net.WebExceptionStatus ProxyNameResolutionFailure
    static System::Net::WebExceptionStatus _get_ProxyNameResolutionFailure();
    // Set static field: static public System.Net.WebExceptionStatus ProxyNameResolutionFailure
    static void _set_ProxyNameResolutionFailure(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus UnknownError
    static constexpr const int UnknownError = 16;
    // Get static field: static public System.Net.WebExceptionStatus UnknownError
    static System::Net::WebExceptionStatus _get_UnknownError();
    // Set static field: static public System.Net.WebExceptionStatus UnknownError
    static void _set_UnknownError(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus MessageLengthLimitExceeded
    static constexpr const int MessageLengthLimitExceeded = 17;
    // Get static field: static public System.Net.WebExceptionStatus MessageLengthLimitExceeded
    static System::Net::WebExceptionStatus _get_MessageLengthLimitExceeded();
    // Set static field: static public System.Net.WebExceptionStatus MessageLengthLimitExceeded
    static void _set_MessageLengthLimitExceeded(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus CacheEntryNotFound
    static constexpr const int CacheEntryNotFound = 18;
    // Get static field: static public System.Net.WebExceptionStatus CacheEntryNotFound
    static System::Net::WebExceptionStatus _get_CacheEntryNotFound();
    // Set static field: static public System.Net.WebExceptionStatus CacheEntryNotFound
    static void _set_CacheEntryNotFound(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus RequestProhibitedByCachePolicy
    static constexpr const int RequestProhibitedByCachePolicy = 19;
    // Get static field: static public System.Net.WebExceptionStatus RequestProhibitedByCachePolicy
    static System::Net::WebExceptionStatus _get_RequestProhibitedByCachePolicy();
    // Set static field: static public System.Net.WebExceptionStatus RequestProhibitedByCachePolicy
    static void _set_RequestProhibitedByCachePolicy(System::Net::WebExceptionStatus value);
    // static field const value: static public System.Net.WebExceptionStatus RequestProhibitedByProxy
    static constexpr const int RequestProhibitedByProxy = 20;
    // Get static field: static public System.Net.WebExceptionStatus RequestProhibitedByProxy
    static System::Net::WebExceptionStatus _get_RequestProhibitedByProxy();
    // Set static field: static public System.Net.WebExceptionStatus RequestProhibitedByProxy
    static void _set_RequestProhibitedByProxy(System::Net::WebExceptionStatus value);
  }; // System.Net.WebExceptionStatus
  #pragma pack(pop)
  static check_size<sizeof(WebExceptionStatus), 0 + sizeof(int)> __System_Net_WebExceptionStatusSizeCheck;
  static_assert(sizeof(WebExceptionStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebExceptionStatus, "System.Net", "WebExceptionStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
