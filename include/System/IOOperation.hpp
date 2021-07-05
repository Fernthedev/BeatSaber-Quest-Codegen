// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IOOperation
  struct IOOperation/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: IOOperation
    constexpr IOOperation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IOOperation Read
    static constexpr const int Read = 1;
    // Get static field: static public System.IOOperation Read
    static System::IOOperation _get_Read();
    // Set static field: static public System.IOOperation Read
    static void _set_Read(System::IOOperation value);
    // static field const value: static public System.IOOperation Write
    static constexpr const int Write = 2;
    // Get static field: static public System.IOOperation Write
    static System::IOOperation _get_Write();
    // Set static field: static public System.IOOperation Write
    static void _set_Write(System::IOOperation value);
  }; // System.IOOperation
  #pragma pack(pop)
  static check_size<sizeof(IOOperation), 0 + sizeof(int)> __System_IOOperationSizeCheck;
  static_assert(sizeof(IOOperation) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IOOperation, "System", "IOOperation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
