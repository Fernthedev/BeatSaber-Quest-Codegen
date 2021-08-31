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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.HiddenAreaMesh_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HiddenAreaMesh_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr pVertexData
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr pVertexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 unTriangleCount
    // Size: 0x4
    // Offset: 0x8
    uint unTriangleCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: HiddenAreaMesh_t
    constexpr HiddenAreaMesh_t(System::IntPtr pVertexData_ = {}, uint unTriangleCount_ = {}) noexcept : pVertexData{pVertexData_}, unTriangleCount{unTriangleCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr pVertexData
    System::IntPtr& dyn_pVertexData();
    // Get instance field reference: public System.UInt32 unTriangleCount
    uint& dyn_unTriangleCount();
  }; // Valve.VR.HiddenAreaMesh_t
  #pragma pack(pop)
  static check_size<sizeof(HiddenAreaMesh_t), 8 + sizeof(uint)> __Valve_VR_HiddenAreaMesh_tSizeCheck;
  static_assert(sizeof(HiddenAreaMesh_t) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HiddenAreaMesh_t, "Valve.VR", "HiddenAreaMesh_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
