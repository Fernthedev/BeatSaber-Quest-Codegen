// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRTextureBounds_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRTextureBounds_t/*, public System::ValueType*/ {
    public:
    // public System.Single uMin
    // Size: 0x4
    // Offset: 0x0
    float uMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single vMin
    // Size: 0x4
    // Offset: 0x4
    float vMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single uMax
    // Size: 0x4
    // Offset: 0x8
    float uMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single vMax
    // Size: 0x4
    // Offset: 0xC
    float vMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: VRTextureBounds_t
    constexpr VRTextureBounds_t(float uMin_ = {}, float vMin_ = {}, float uMax_ = {}, float vMax_ = {}) noexcept : uMin{uMin_}, vMin{vMin_}, uMax{uMax_}, vMax{vMax_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single uMin
    float& dyn_uMin();
    // Get instance field reference: public System.Single vMin
    float& dyn_vMin();
    // Get instance field reference: public System.Single uMax
    float& dyn_uMax();
    // Get instance field reference: public System.Single vMax
    float& dyn_vMax();
  }; // OVR.OpenVR.VRTextureBounds_t
  #pragma pack(pop)
  static check_size<sizeof(VRTextureBounds_t), 12 + sizeof(float)> __OVR_OpenVR_VRTextureBounds_tSizeCheck;
  static_assert(sizeof(VRTextureBounds_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureBounds_t, "OVR.OpenVR", "VRTextureBounds_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
