// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityElementType
  struct SecurityElementType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SecurityElementType
    constexpr SecurityElementType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.SecurityElementType Regular
    static constexpr const int Regular = 0;
    // Get static field: static public System.Security.SecurityElementType Regular
    static System::Security::SecurityElementType _get_Regular();
    // Set static field: static public System.Security.SecurityElementType Regular
    static void _set_Regular(System::Security::SecurityElementType value);
    // static field const value: static public System.Security.SecurityElementType Format
    static constexpr const int Format = 1;
    // Get static field: static public System.Security.SecurityElementType Format
    static System::Security::SecurityElementType _get_Format();
    // Set static field: static public System.Security.SecurityElementType Format
    static void _set_Format(System::Security::SecurityElementType value);
    // static field const value: static public System.Security.SecurityElementType Comment
    static constexpr const int Comment = 2;
    // Get static field: static public System.Security.SecurityElementType Comment
    static System::Security::SecurityElementType _get_Comment();
    // Set static field: static public System.Security.SecurityElementType Comment
    static void _set_Comment(System::Security::SecurityElementType value);
  }; // System.Security.SecurityElementType
  #pragma pack(pop)
  static check_size<sizeof(SecurityElementType), 0 + sizeof(int)> __System_Security_SecurityElementTypeSizeCheck;
  static_assert(sizeof(SecurityElementType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityElementType, "System.Security", "SecurityElementType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
