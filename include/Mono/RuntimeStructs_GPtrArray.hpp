// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeStructs/Mono.GPtrArray
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeStructs::GPtrArray/*, public System::ValueType*/ {
    public:
    // System.IntPtr* data
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr* data;
    // Field size check
    static_assert(sizeof(System::IntPtr*) == 0x8);
    // System.Int32 len
    // Size: 0x4
    // Offset: 0x8
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GPtrArray
    constexpr GPtrArray(System::IntPtr* data_ = {}, int len_ = {}) noexcept : data{data_}, len{len_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.IntPtr* data
    System::IntPtr*& dyn_data();
    // Get instance field reference: System.Int32 len
    int& dyn_len();
  }; // Mono.RuntimeStructs/Mono.GPtrArray
  #pragma pack(pop)
  static check_size<sizeof(RuntimeStructs::GPtrArray), 8 + sizeof(int)> __Mono_RuntimeStructs_GPtrArraySizeCheck;
  static_assert(sizeof(RuntimeStructs::GPtrArray) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
