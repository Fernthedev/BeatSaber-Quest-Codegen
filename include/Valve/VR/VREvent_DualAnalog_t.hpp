// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.EDualAnalogWhich
#include "Valve/VR/EDualAnalogWhich.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_DualAnalog_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_DualAnalog_t/*, public System::ValueType*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single transformedX
    // Size: 0x4
    // Offset: 0x8
    float transformedX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single transformedY
    // Size: 0x4
    // Offset: 0xC
    float transformedY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Valve.VR.EDualAnalogWhich which
    // Size: 0x4
    // Offset: 0x10
    Valve::VR::EDualAnalogWhich which;
    // Field size check
    static_assert(sizeof(Valve::VR::EDualAnalogWhich) == 0x4);
    // Creating value type constructor for type: VREvent_DualAnalog_t
    constexpr VREvent_DualAnalog_t(float x_ = {}, float y_ = {}, float transformedX_ = {}, float transformedY_ = {}, Valve::VR::EDualAnalogWhich which_ = {}) noexcept : x{x_}, y{y_}, transformedX{transformedX_}, transformedY{transformedY_}, which{which_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    float& dyn_x();
    // Get instance field reference: public System.Single y
    float& dyn_y();
    // Get instance field reference: public System.Single transformedX
    float& dyn_transformedX();
    // Get instance field reference: public System.Single transformedY
    float& dyn_transformedY();
    // Get instance field reference: public Valve.VR.EDualAnalogWhich which
    Valve::VR::EDualAnalogWhich& dyn_which();
  }; // Valve.VR.VREvent_DualAnalog_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_DualAnalog_t), 16 + sizeof(Valve::VR::EDualAnalogWhich)> __Valve_VR_VREvent_DualAnalog_tSizeCheck;
  static_assert(sizeof(VREvent_DualAnalog_t) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VREvent_DualAnalog_t, "Valve.VR", "VREvent_DualAnalog_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
