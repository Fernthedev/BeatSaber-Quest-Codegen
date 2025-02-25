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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.IPProtectionLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct IPProtectionLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: IPProtectionLevel
    constexpr IPProtectionLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.IPProtectionLevel Unspecified
    static constexpr const int Unspecified = -1;
    // Get static field: static public System.Net.Sockets.IPProtectionLevel Unspecified
    static System::Net::Sockets::IPProtectionLevel _get_Unspecified();
    // Set static field: static public System.Net.Sockets.IPProtectionLevel Unspecified
    static void _set_Unspecified(System::Net::Sockets::IPProtectionLevel value);
    // static field const value: static public System.Net.Sockets.IPProtectionLevel Unrestricted
    static constexpr const int Unrestricted = 10;
    // Get static field: static public System.Net.Sockets.IPProtectionLevel Unrestricted
    static System::Net::Sockets::IPProtectionLevel _get_Unrestricted();
    // Set static field: static public System.Net.Sockets.IPProtectionLevel Unrestricted
    static void _set_Unrestricted(System::Net::Sockets::IPProtectionLevel value);
    // static field const value: static public System.Net.Sockets.IPProtectionLevel EdgeRestricted
    static constexpr const int EdgeRestricted = 20;
    // Get static field: static public System.Net.Sockets.IPProtectionLevel EdgeRestricted
    static System::Net::Sockets::IPProtectionLevel _get_EdgeRestricted();
    // Set static field: static public System.Net.Sockets.IPProtectionLevel EdgeRestricted
    static void _set_EdgeRestricted(System::Net::Sockets::IPProtectionLevel value);
    // static field const value: static public System.Net.Sockets.IPProtectionLevel Restricted
    static constexpr const int Restricted = 30;
    // Get static field: static public System.Net.Sockets.IPProtectionLevel Restricted
    static System::Net::Sockets::IPProtectionLevel _get_Restricted();
    // Set static field: static public System.Net.Sockets.IPProtectionLevel Restricted
    static void _set_Restricted(System::Net::Sockets::IPProtectionLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.Sockets.IPProtectionLevel
  #pragma pack(pop)
  static check_size<sizeof(IPProtectionLevel), 0 + sizeof(int)> __System_Net_Sockets_IPProtectionLevelSizeCheck;
  static_assert(sizeof(IPProtectionLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::IPProtectionLevel, "System.Net.Sockets", "IPProtectionLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
