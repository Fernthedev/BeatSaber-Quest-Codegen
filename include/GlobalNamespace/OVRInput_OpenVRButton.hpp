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
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OpenVRButton
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::OpenVRButton/*, public System::Enum*/ {
    public:
    // public System.UInt64 value__
    // Size: 0x8
    // Offset: 0x0
    uint64_t value;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: OpenVRButton
    constexpr OpenVRButton(uint64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/OpenVRButton None
    static constexpr const uint64_t None = 0u;
    // Get static field: static public OVRInput/OpenVRButton None
    static GlobalNamespace::OVRInput::OpenVRButton _get_None();
    // Set static field: static public OVRInput/OpenVRButton None
    static void _set_None(GlobalNamespace::OVRInput::OpenVRButton value);
    // static field const value: static public OVRInput/OpenVRButton Two
    static constexpr const uint64_t Two = 2u;
    // Get static field: static public OVRInput/OpenVRButton Two
    static GlobalNamespace::OVRInput::OpenVRButton _get_Two();
    // Set static field: static public OVRInput/OpenVRButton Two
    static void _set_Two(GlobalNamespace::OVRInput::OpenVRButton value);
    // static field const value: static public OVRInput/OpenVRButton Thumbstick
    static constexpr const uint64_t Thumbstick = 4294967296u;
    // Get static field: static public OVRInput/OpenVRButton Thumbstick
    static GlobalNamespace::OVRInput::OpenVRButton _get_Thumbstick();
    // Set static field: static public OVRInput/OpenVRButton Thumbstick
    static void _set_Thumbstick(GlobalNamespace::OVRInput::OpenVRButton value);
    // static field const value: static public OVRInput/OpenVRButton Grip
    static constexpr const uint64_t Grip = 4u;
    // Get static field: static public OVRInput/OpenVRButton Grip
    static GlobalNamespace::OVRInput::OpenVRButton _get_Grip();
    // Set static field: static public OVRInput/OpenVRButton Grip
    static void _set_Grip(GlobalNamespace::OVRInput::OpenVRButton value);
    // Get instance field reference: public System.UInt64 value__
    uint64_t& dyn_value__();
  }; // OVRInput/OpenVRButton
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OpenVRButton), 0 + sizeof(uint64_t)> __GlobalNamespace_OVRInput_OpenVRButtonSizeCheck;
  static_assert(sizeof(OVRInput::OpenVRButton) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OpenVRButton, "", "OVRInput/OpenVRButton");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
