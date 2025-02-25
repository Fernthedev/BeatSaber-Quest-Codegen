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
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.AuthenticationLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct AuthenticationLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AuthenticationLevel
    constexpr AuthenticationLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Security.AuthenticationLevel None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.Security.AuthenticationLevel None
    static System::Net::Security::AuthenticationLevel _get_None();
    // Set static field: static public System.Net.Security.AuthenticationLevel None
    static void _set_None(System::Net::Security::AuthenticationLevel value);
    // static field const value: static public System.Net.Security.AuthenticationLevel MutualAuthRequested
    static constexpr const int MutualAuthRequested = 1;
    // Get static field: static public System.Net.Security.AuthenticationLevel MutualAuthRequested
    static System::Net::Security::AuthenticationLevel _get_MutualAuthRequested();
    // Set static field: static public System.Net.Security.AuthenticationLevel MutualAuthRequested
    static void _set_MutualAuthRequested(System::Net::Security::AuthenticationLevel value);
    // static field const value: static public System.Net.Security.AuthenticationLevel MutualAuthRequired
    static constexpr const int MutualAuthRequired = 2;
    // Get static field: static public System.Net.Security.AuthenticationLevel MutualAuthRequired
    static System::Net::Security::AuthenticationLevel _get_MutualAuthRequired();
    // Set static field: static public System.Net.Security.AuthenticationLevel MutualAuthRequired
    static void _set_MutualAuthRequired(System::Net::Security::AuthenticationLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Security.AuthenticationLevel
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationLevel), 0 + sizeof(int)> __System_Net_Security_AuthenticationLevelSizeCheck;
  static_assert(sizeof(AuthenticationLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::AuthenticationLevel, "System.Net.Security", "AuthenticationLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
