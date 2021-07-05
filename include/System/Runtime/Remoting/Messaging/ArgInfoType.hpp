// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ArgInfoType
  struct ArgInfoType/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: ArgInfoType
    constexpr ArgInfoType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Remoting.Messaging.ArgInfoType In
    static constexpr const uint8_t In = 0u;
    // Get static field: static public System.Runtime.Remoting.Messaging.ArgInfoType In
    static System::Runtime::Remoting::Messaging::ArgInfoType _get_In();
    // Set static field: static public System.Runtime.Remoting.Messaging.ArgInfoType In
    static void _set_In(System::Runtime::Remoting::Messaging::ArgInfoType value);
    // static field const value: static public System.Runtime.Remoting.Messaging.ArgInfoType Out
    static constexpr const uint8_t Out = 1u;
    // Get static field: static public System.Runtime.Remoting.Messaging.ArgInfoType Out
    static System::Runtime::Remoting::Messaging::ArgInfoType _get_Out();
    // Set static field: static public System.Runtime.Remoting.Messaging.ArgInfoType Out
    static void _set_Out(System::Runtime::Remoting::Messaging::ArgInfoType value);
  }; // System.Runtime.Remoting.Messaging.ArgInfoType
  #pragma pack(pop)
  static check_size<sizeof(ArgInfoType), 0 + sizeof(uint8_t)> __System_Runtime_Remoting_Messaging_ArgInfoTypeSizeCheck;
  static_assert(sizeof(ArgInfoType) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ArgInfoType, "System.Runtime.Remoting.Messaging", "ArgInfoType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
