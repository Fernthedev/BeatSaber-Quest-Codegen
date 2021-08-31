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
  // Size: 0x2
  #pragma pack(push, 1)
  // Autogenerated type: System.Int16Enum
  // [TokenAttribute] Offset: FFFFFFFF
  struct Int16Enum/*, public System::Enum*/ {
    public:
    // public System.Int16 value__
    // Size: 0x2
    // Offset: 0x0
    int16_t value;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Creating value type constructor for type: Int16Enum
    constexpr Int16Enum(int16_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int16_t
    constexpr operator int16_t() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Int16 value__
    int16_t& dyn_value__();
  }; // System.Int16Enum
  #pragma pack(pop)
  static check_size<sizeof(Int16Enum), 0 + sizeof(int16_t)> __System_Int16EnumSizeCheck;
  static_assert(sizeof(Int16Enum) == 0x2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int16Enum, "System", "Int16Enum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
