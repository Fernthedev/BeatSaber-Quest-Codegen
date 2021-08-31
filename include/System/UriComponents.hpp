// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UriComponents
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct UriComponents/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UriComponents
    constexpr UriComponents(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UriComponents Scheme
    static constexpr const int Scheme = 1;
    // Get static field: static public System.UriComponents Scheme
    static System::UriComponents _get_Scheme();
    // Set static field: static public System.UriComponents Scheme
    static void _set_Scheme(System::UriComponents value);
    // static field const value: static public System.UriComponents UserInfo
    static constexpr const int UserInfo = 2;
    // Get static field: static public System.UriComponents UserInfo
    static System::UriComponents _get_UserInfo();
    // Set static field: static public System.UriComponents UserInfo
    static void _set_UserInfo(System::UriComponents value);
    // static field const value: static public System.UriComponents Host
    static constexpr const int Host = 4;
    // Get static field: static public System.UriComponents Host
    static System::UriComponents _get_Host();
    // Set static field: static public System.UriComponents Host
    static void _set_Host(System::UriComponents value);
    // static field const value: static public System.UriComponents Port
    static constexpr const int Port = 8;
    // Get static field: static public System.UriComponents Port
    static System::UriComponents _get_Port();
    // Set static field: static public System.UriComponents Port
    static void _set_Port(System::UriComponents value);
    // static field const value: static public System.UriComponents Path
    static constexpr const int Path = 16;
    // Get static field: static public System.UriComponents Path
    static System::UriComponents _get_Path();
    // Set static field: static public System.UriComponents Path
    static void _set_Path(System::UriComponents value);
    // static field const value: static public System.UriComponents Query
    static constexpr const int Query = 32;
    // Get static field: static public System.UriComponents Query
    static System::UriComponents _get_Query();
    // Set static field: static public System.UriComponents Query
    static void _set_Query(System::UriComponents value);
    // static field const value: static public System.UriComponents Fragment
    static constexpr const int Fragment = 64;
    // Get static field: static public System.UriComponents Fragment
    static System::UriComponents _get_Fragment();
    // Set static field: static public System.UriComponents Fragment
    static void _set_Fragment(System::UriComponents value);
    // static field const value: static public System.UriComponents StrongPort
    static constexpr const int StrongPort = 128;
    // Get static field: static public System.UriComponents StrongPort
    static System::UriComponents _get_StrongPort();
    // Set static field: static public System.UriComponents StrongPort
    static void _set_StrongPort(System::UriComponents value);
    // static field const value: static public System.UriComponents NormalizedHost
    static constexpr const int NormalizedHost = 256;
    // Get static field: static public System.UriComponents NormalizedHost
    static System::UriComponents _get_NormalizedHost();
    // Set static field: static public System.UriComponents NormalizedHost
    static void _set_NormalizedHost(System::UriComponents value);
    // static field const value: static public System.UriComponents KeepDelimiter
    static constexpr const int KeepDelimiter = 1073741824;
    // Get static field: static public System.UriComponents KeepDelimiter
    static System::UriComponents _get_KeepDelimiter();
    // Set static field: static public System.UriComponents KeepDelimiter
    static void _set_KeepDelimiter(System::UriComponents value);
    // static field const value: static public System.UriComponents SerializationInfoString
    static constexpr const int SerializationInfoString = -2147483648;
    // Get static field: static public System.UriComponents SerializationInfoString
    static System::UriComponents _get_SerializationInfoString();
    // Set static field: static public System.UriComponents SerializationInfoString
    static void _set_SerializationInfoString(System::UriComponents value);
    // static field const value: static public System.UriComponents AbsoluteUri
    static constexpr const int AbsoluteUri = 127;
    // Get static field: static public System.UriComponents AbsoluteUri
    static System::UriComponents _get_AbsoluteUri();
    // Set static field: static public System.UriComponents AbsoluteUri
    static void _set_AbsoluteUri(System::UriComponents value);
    // static field const value: static public System.UriComponents HostAndPort
    static constexpr const int HostAndPort = 132;
    // Get static field: static public System.UriComponents HostAndPort
    static System::UriComponents _get_HostAndPort();
    // Set static field: static public System.UriComponents HostAndPort
    static void _set_HostAndPort(System::UriComponents value);
    // static field const value: static public System.UriComponents StrongAuthority
    static constexpr const int StrongAuthority = 134;
    // Get static field: static public System.UriComponents StrongAuthority
    static System::UriComponents _get_StrongAuthority();
    // Set static field: static public System.UriComponents StrongAuthority
    static void _set_StrongAuthority(System::UriComponents value);
    // static field const value: static public System.UriComponents SchemeAndServer
    static constexpr const int SchemeAndServer = 13;
    // Get static field: static public System.UriComponents SchemeAndServer
    static System::UriComponents _get_SchemeAndServer();
    // Set static field: static public System.UriComponents SchemeAndServer
    static void _set_SchemeAndServer(System::UriComponents value);
    // static field const value: static public System.UriComponents HttpRequestUrl
    static constexpr const int HttpRequestUrl = 61;
    // Get static field: static public System.UriComponents HttpRequestUrl
    static System::UriComponents _get_HttpRequestUrl();
    // Set static field: static public System.UriComponents HttpRequestUrl
    static void _set_HttpRequestUrl(System::UriComponents value);
    // static field const value: static public System.UriComponents PathAndQuery
    static constexpr const int PathAndQuery = 48;
    // Get static field: static public System.UriComponents PathAndQuery
    static System::UriComponents _get_PathAndQuery();
    // Set static field: static public System.UriComponents PathAndQuery
    static void _set_PathAndQuery(System::UriComponents value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.UriComponents
  #pragma pack(pop)
  static check_size<sizeof(UriComponents), 0 + sizeof(int)> __System_UriComponentsSizeCheck;
  static_assert(sizeof(UriComponents) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UriComponents, "System", "UriComponents");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
