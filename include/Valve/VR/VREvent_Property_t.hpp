// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.ETrackedDeviceProperty
#include "Valve/VR/ETrackedDeviceProperty.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_Property_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Property_t/*, public System::ValueType*/ {
    public:
    // public System.UInt64 container
    // Size: 0x8
    // Offset: 0x0
    uint64_t container;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public Valve.VR.ETrackedDeviceProperty prop
    // Size: 0x4
    // Offset: 0x8
    Valve::VR::ETrackedDeviceProperty prop;
    // Field size check
    static_assert(sizeof(Valve::VR::ETrackedDeviceProperty) == 0x4);
    // Creating value type constructor for type: VREvent_Property_t
    constexpr VREvent_Property_t(uint64_t container_ = {}, Valve::VR::ETrackedDeviceProperty prop_ = {}) noexcept : container{container_}, prop{prop_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 container
    uint64_t& dyn_container();
    // Get instance field reference: public Valve.VR.ETrackedDeviceProperty prop
    Valve::VR::ETrackedDeviceProperty& dyn_prop();
  }; // Valve.VR.VREvent_Property_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Property_t), 8 + sizeof(Valve::VR::ETrackedDeviceProperty)> __Valve_VR_VREvent_Property_tSizeCheck;
  static_assert(sizeof(VREvent_Property_t) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_Property_t, "Valve.VR", "VREvent_Property_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
