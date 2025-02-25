// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.AlignmentUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct AlignmentUnion/*, public System::ValueType*/ {
    public:
    struct __InternalUnionData {
      // public System.Int32 Length
      // Size: 0x4
      // Offset: 0x0
      int Length;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 IfIndex
      // Size: 0x4
      // Offset: 0x4
      int IfIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
    };
    // Creating union for fields at offset: 0x0
    union {
      // public System.UInt64 Alignment
      // Size: 0x8
      // Offset: 0x0
      uint64_t Alignment;
      // Field size check
      static_assert(sizeof(uint64_t) == 0x8);
      // WARNING: Manual union structure
      __InternalUnionData data;
      static_assert(sizeof(__InternalUnionData) == 0x8);
    };
    // Creating value type constructor for type: AlignmentUnion
    constexpr AlignmentUnion(uint64_t Alignment_ = {}) noexcept : Alignment{Alignment_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 Alignment
    uint64_t& dyn_Alignment();
    // Get instance field reference: public System.Int32 Length
    int& dyn_Length();
    // Get instance field reference: public System.Int32 IfIndex
    int& dyn_IfIndex();
  }; // System.Net.NetworkInformation.AlignmentUnion
  #pragma pack(pop)
  static check_size<sizeof(AlignmentUnion), 4 + sizeof(int)> __System_Net_NetworkInformation_AlignmentUnionSizeCheck;
  static_assert(sizeof(AlignmentUnion) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AlignmentUnion, "System.Net.NetworkInformation", "AlignmentUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
