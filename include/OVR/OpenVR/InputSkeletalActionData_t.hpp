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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.InputSkeletalActionData_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputSkeletalActionData_t/*, public System::ValueType*/ {
    public:
    // public System.Boolean bActive
    // Size: 0x1
    // Offset: 0x0
    bool bActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bActive and: activeOrigin
    char __padding0[0x7] = {};
    // public System.UInt64 activeOrigin
    // Size: 0x8
    // Offset: 0x8
    uint64_t activeOrigin;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt32 boneCount
    // Size: 0x4
    // Offset: 0x10
    uint boneCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: InputSkeletalActionData_t
    constexpr InputSkeletalActionData_t(bool bActive_ = {}, uint64_t activeOrigin_ = {}, uint boneCount_ = {}) noexcept : bActive{bActive_}, activeOrigin{activeOrigin_}, boneCount{boneCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean bActive
    bool& dyn_bActive();
    // Get instance field reference: public System.UInt64 activeOrigin
    uint64_t& dyn_activeOrigin();
    // Get instance field reference: public System.UInt32 boneCount
    uint& dyn_boneCount();
  }; // OVR.OpenVR.InputSkeletalActionData_t
  #pragma pack(pop)
  static check_size<sizeof(InputSkeletalActionData_t), 16 + sizeof(uint)> __OVR_OpenVR_InputSkeletalActionData_tSizeCheck;
  static_assert(sizeof(InputSkeletalActionData_t) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::InputSkeletalActionData_t, "OVR.OpenVR", "InputSkeletalActionData_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
