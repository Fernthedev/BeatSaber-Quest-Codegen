// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/Handedness
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRInput::Handedness/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Handedness
    constexpr Handedness(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/Handedness Unsupported
    static constexpr const int Unsupported = 0;
    // Get static field: static public OVRInput/Handedness Unsupported
    static GlobalNamespace::OVRInput::Handedness _get_Unsupported();
    // Set static field: static public OVRInput/Handedness Unsupported
    static void _set_Unsupported(GlobalNamespace::OVRInput::Handedness value);
    // static field const value: static public OVRInput/Handedness LeftHanded
    static constexpr const int LeftHanded = 1;
    // Get static field: static public OVRInput/Handedness LeftHanded
    static GlobalNamespace::OVRInput::Handedness _get_LeftHanded();
    // Set static field: static public OVRInput/Handedness LeftHanded
    static void _set_LeftHanded(GlobalNamespace::OVRInput::Handedness value);
    // static field const value: static public OVRInput/Handedness RightHanded
    static constexpr const int RightHanded = 2;
    // Get static field: static public OVRInput/Handedness RightHanded
    static GlobalNamespace::OVRInput::Handedness _get_RightHanded();
    // Set static field: static public OVRInput/Handedness RightHanded
    static void _set_RightHanded(GlobalNamespace::OVRInput::Handedness value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRInput/Handedness
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::Handedness), 0 + sizeof(int)> __GlobalNamespace_OVRInput_HandednessSizeCheck;
  static_assert(sizeof(OVRInput::Handedness) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::Handedness, "", "OVRInput/Handedness");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
