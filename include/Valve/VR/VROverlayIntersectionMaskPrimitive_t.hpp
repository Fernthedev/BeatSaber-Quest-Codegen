// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.EVROverlayIntersectionMaskPrimitiveType
#include "Valve/VR/EVROverlayIntersectionMaskPrimitiveType.hpp"
// Including type: Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t
#include "Valve/VR/VROverlayIntersectionMaskPrimitive_Data_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VROverlayIntersectionMaskPrimitive_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayIntersectionMaskPrimitive_t/*, public System::ValueType*/ {
    public:
    // public Valve.VR.EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType
    // Size: 0x4
    // Offset: 0x0
    Valve::VR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;
    // Field size check
    static_assert(sizeof(Valve::VR::EVROverlayIntersectionMaskPrimitiveType) == 0x4);
    // public Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t m_Primitive
    // Size: 0xFFFFFFFF
    // Offset: 0x4
    Valve::VR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;
    // Creating value type constructor for type: VROverlayIntersectionMaskPrimitive_t
    constexpr VROverlayIntersectionMaskPrimitive_t(Valve::VR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType_ = {}, Valve::VR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive_ = {}) noexcept : m_nPrimitiveType{m_nPrimitiveType_}, m_Primitive{m_Primitive_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType
    Valve::VR::EVROverlayIntersectionMaskPrimitiveType& dyn_m_nPrimitiveType();
    // Get instance field reference: public Valve.VR.VROverlayIntersectionMaskPrimitive_Data_t m_Primitive
    Valve::VR::VROverlayIntersectionMaskPrimitive_Data_t& dyn_m_Primitive();
  }; // Valve.VR.VROverlayIntersectionMaskPrimitive_t
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VROverlayIntersectionMaskPrimitive_t, "Valve.VR", "VROverlayIntersectionMaskPrimitive_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
