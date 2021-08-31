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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchOption
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9BD50
  struct SearchOption/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SearchOption
    constexpr SearchOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.SearchOption TopDirectoryOnly
    static constexpr const int TopDirectoryOnly = 0;
    // Get static field: static public System.IO.SearchOption TopDirectoryOnly
    static System::IO::SearchOption _get_TopDirectoryOnly();
    // Set static field: static public System.IO.SearchOption TopDirectoryOnly
    static void _set_TopDirectoryOnly(System::IO::SearchOption value);
    // static field const value: static public System.IO.SearchOption AllDirectories
    static constexpr const int AllDirectories = 1;
    // Get static field: static public System.IO.SearchOption AllDirectories
    static System::IO::SearchOption _get_AllDirectories();
    // Set static field: static public System.IO.SearchOption AllDirectories
    static void _set_AllDirectories(System::IO::SearchOption value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.IO.SearchOption
  #pragma pack(pop)
  static check_size<sizeof(SearchOption), 0 + sizeof(int)> __System_IO_SearchOptionSizeCheck;
  static_assert(sizeof(SearchOption) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::SearchOption, "System.IO", "SearchOption");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
