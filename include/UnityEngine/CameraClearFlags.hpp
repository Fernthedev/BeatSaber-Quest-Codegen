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
  // Autogenerated type: UnityEngine.CameraClearFlags
  struct CameraClearFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CameraClearFlags
    constexpr CameraClearFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.CameraClearFlags Skybox
    static constexpr const int Skybox = 1;
    // Get static field: static public UnityEngine.CameraClearFlags Skybox
    static UnityEngine::CameraClearFlags _get_Skybox();
    // Set static field: static public UnityEngine.CameraClearFlags Skybox
    static void _set_Skybox(UnityEngine::CameraClearFlags value);
    // static field const value: static public UnityEngine.CameraClearFlags Color
    static constexpr const int Color = 2;
    // Get static field: static public UnityEngine.CameraClearFlags Color
    static UnityEngine::CameraClearFlags _get_Color();
    // Set static field: static public UnityEngine.CameraClearFlags Color
    static void _set_Color(UnityEngine::CameraClearFlags value);
    // static field const value: static public UnityEngine.CameraClearFlags SolidColor
    static constexpr const int SolidColor = 2;
    // Get static field: static public UnityEngine.CameraClearFlags SolidColor
    static UnityEngine::CameraClearFlags _get_SolidColor();
    // Set static field: static public UnityEngine.CameraClearFlags SolidColor
    static void _set_SolidColor(UnityEngine::CameraClearFlags value);
    // static field const value: static public UnityEngine.CameraClearFlags Depth
    static constexpr const int Depth = 3;
    // Get static field: static public UnityEngine.CameraClearFlags Depth
    static UnityEngine::CameraClearFlags _get_Depth();
    // Set static field: static public UnityEngine.CameraClearFlags Depth
    static void _set_Depth(UnityEngine::CameraClearFlags value);
    // static field const value: static public UnityEngine.CameraClearFlags Nothing
    static constexpr const int Nothing = 4;
    // Get static field: static public UnityEngine.CameraClearFlags Nothing
    static UnityEngine::CameraClearFlags _get_Nothing();
    // Set static field: static public UnityEngine.CameraClearFlags Nothing
    static void _set_Nothing(UnityEngine::CameraClearFlags value);
  }; // UnityEngine.CameraClearFlags
  #pragma pack(pop)
  static check_size<sizeof(CameraClearFlags), 0 + sizeof(int)> __UnityEngine_CameraClearFlagsSizeCheck;
  static_assert(sizeof(CameraClearFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CameraClearFlags, "UnityEngine", "CameraClearFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
