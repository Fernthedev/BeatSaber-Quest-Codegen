// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MeshTopology
  struct MeshTopology/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MeshTopology
    constexpr MeshTopology(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.MeshTopology Triangles
    static constexpr const int Triangles = 0;
    // Get static field: static public UnityEngine.MeshTopology Triangles
    static UnityEngine::MeshTopology _get_Triangles();
    // Set static field: static public UnityEngine.MeshTopology Triangles
    static void _set_Triangles(UnityEngine::MeshTopology value);
    // static field const value: static public UnityEngine.MeshTopology Quads
    static constexpr const int Quads = 2;
    // Get static field: static public UnityEngine.MeshTopology Quads
    static UnityEngine::MeshTopology _get_Quads();
    // Set static field: static public UnityEngine.MeshTopology Quads
    static void _set_Quads(UnityEngine::MeshTopology value);
    // static field const value: static public UnityEngine.MeshTopology Lines
    static constexpr const int Lines = 3;
    // Get static field: static public UnityEngine.MeshTopology Lines
    static UnityEngine::MeshTopology _get_Lines();
    // Set static field: static public UnityEngine.MeshTopology Lines
    static void _set_Lines(UnityEngine::MeshTopology value);
    // static field const value: static public UnityEngine.MeshTopology LineStrip
    static constexpr const int LineStrip = 4;
    // Get static field: static public UnityEngine.MeshTopology LineStrip
    static UnityEngine::MeshTopology _get_LineStrip();
    // Set static field: static public UnityEngine.MeshTopology LineStrip
    static void _set_LineStrip(UnityEngine::MeshTopology value);
    // static field const value: static public UnityEngine.MeshTopology Points
    static constexpr const int Points = 5;
    // Get static field: static public UnityEngine.MeshTopology Points
    static UnityEngine::MeshTopology _get_Points();
    // Set static field: static public UnityEngine.MeshTopology Points
    static void _set_Points(UnityEngine::MeshTopology value);
  }; // UnityEngine.MeshTopology
  #pragma pack(pop)
  static check_size<sizeof(MeshTopology), 0 + sizeof(int)> __UnityEngine_MeshTopologySizeCheck;
  static_assert(sizeof(MeshTopology) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshTopology, "UnityEngine", "MeshTopology");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
