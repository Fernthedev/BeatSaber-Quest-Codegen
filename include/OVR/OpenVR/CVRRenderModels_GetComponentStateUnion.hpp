// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.CVRRenderModels
#include "OVR/OpenVR/CVRRenderModels.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.IVRRenderModels
#include "OVR/OpenVR/IVRRenderModels.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.CVRRenderModels/OVR.OpenVR.GetComponentStateUnion
  // [TokenAttribute] Offset: FFFFFFFF
  struct CVRRenderModels::GetComponentStateUnion/*, public System::ValueType*/ {
    public:
    // public OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentState pGetComponentState
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVRRenderModels::_GetComponentState* pGetComponentState;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRRenderModels::_GetComponentState*) == 0x8);
    // public OVR.OpenVR.CVRRenderModels/OVR.OpenVR._GetComponentStatePacked pGetComponentStatePacked
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked* pGetComponentStatePacked;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*) == 0x8);
    // Creating value type constructor for type: GetComponentStateUnion
    constexpr GetComponentStateUnion(OVR::OpenVR::IVRRenderModels::_GetComponentState* pGetComponentState_ = {}, OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked* pGetComponentStatePacked_ = {}) noexcept : pGetComponentState{pGetComponentState_}, pGetComponentStatePacked{pGetComponentStatePacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.IVRRenderModels/OVR.OpenVR._GetComponentState pGetComponentState
    OVR::OpenVR::IVRRenderModels::_GetComponentState*& dyn_pGetComponentState();
    // Get instance field reference: public OVR.OpenVR.CVRRenderModels/OVR.OpenVR._GetComponentStatePacked pGetComponentStatePacked
    OVR::OpenVR::CVRRenderModels::_GetComponentStatePacked*& dyn_pGetComponentStatePacked();
  }; // OVR.OpenVR.CVRRenderModels/OVR.OpenVR.GetComponentStateUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRRenderModels::GetComponentStateUnion, "OVR.OpenVR", "CVRRenderModels/GetComponentStateUnion");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
