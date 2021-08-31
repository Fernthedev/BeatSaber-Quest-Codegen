// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EHiddenAreaMeshType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EHiddenAreaMeshType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EHiddenAreaMeshType
    constexpr EHiddenAreaMeshType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static constexpr const int k_eHiddenAreaMesh_Standard = 0;
    // Get static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static Valve::VR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Standard();
    // Set static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static void _set_k_eHiddenAreaMesh_Standard(Valve::VR::EHiddenAreaMeshType value);
    // static field const value: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static constexpr const int k_eHiddenAreaMesh_Inverse = 1;
    // Get static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static Valve::VR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Inverse();
    // Set static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static void _set_k_eHiddenAreaMesh_Inverse(Valve::VR::EHiddenAreaMeshType value);
    // static field const value: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static constexpr const int k_eHiddenAreaMesh_LineLoop = 2;
    // Get static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static Valve::VR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_LineLoop();
    // Set static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static void _set_k_eHiddenAreaMesh_LineLoop(Valve::VR::EHiddenAreaMeshType value);
    // static field const value: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static constexpr const int k_eHiddenAreaMesh_Max = 3;
    // Get static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static Valve::VR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Max();
    // Set static field: static public Valve.VR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static void _set_k_eHiddenAreaMesh_Max(Valve::VR::EHiddenAreaMeshType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EHiddenAreaMeshType
  #pragma pack(pop)
  static check_size<sizeof(EHiddenAreaMeshType), 0 + sizeof(int)> __Valve_VR_EHiddenAreaMeshTypeSizeCheck;
  static_assert(sizeof(EHiddenAreaMeshType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EHiddenAreaMeshType, "Valve.VR", "EHiddenAreaMeshType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
