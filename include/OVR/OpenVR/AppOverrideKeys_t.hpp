// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.AppOverrideKeys_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct AppOverrideKeys_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr pchKey
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr pchKey;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr pchValue
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr pchValue;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: AppOverrideKeys_t
    constexpr AppOverrideKeys_t(System::IntPtr pchKey_ = {}, System::IntPtr pchValue_ = {}) noexcept : pchKey{pchKey_}, pchValue{pchValue_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr pchKey
    System::IntPtr& dyn_pchKey();
    // Get instance field reference: public System.IntPtr pchValue
    System::IntPtr& dyn_pchValue();
  }; // OVR.OpenVR.AppOverrideKeys_t
  #pragma pack(pop)
  static check_size<sizeof(AppOverrideKeys_t), 8 + sizeof(System::IntPtr)> __OVR_OpenVR_AppOverrideKeys_tSizeCheck;
  static_assert(sizeof(AppOverrideKeys_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::AppOverrideKeys_t, "OVR.OpenVR", "AppOverrideKeys_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
