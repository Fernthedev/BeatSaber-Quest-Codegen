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
// Including type: Valve.VR.ETextureType
#include "Valve/VR/ETextureType.hpp"
// Including type: Valve.VR.EColorSpace
#include "Valve/VR/EColorSpace.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.Texture_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct Texture_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public Valve.VR.ETextureType eType
    // Size: 0x4
    // Offset: 0x8
    Valve::VR::ETextureType eType;
    // Field size check
    static_assert(sizeof(Valve::VR::ETextureType) == 0x4);
    // public Valve.VR.EColorSpace eColorSpace
    // Size: 0x4
    // Offset: 0xC
    Valve::VR::EColorSpace eColorSpace;
    // Field size check
    static_assert(sizeof(Valve::VR::EColorSpace) == 0x4);
    // Creating value type constructor for type: Texture_t
    constexpr Texture_t(System::IntPtr handle_ = {}, Valve::VR::ETextureType eType_ = {}, Valve::VR::EColorSpace eColorSpace_ = {}) noexcept : handle{handle_}, eType{eType_}, eColorSpace{eColorSpace_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr handle
    System::IntPtr& dyn_handle();
    // Get instance field reference: public Valve.VR.ETextureType eType
    Valve::VR::ETextureType& dyn_eType();
    // Get instance field reference: public Valve.VR.EColorSpace eColorSpace
    Valve::VR::EColorSpace& dyn_eColorSpace();
  }; // Valve.VR.Texture_t
  #pragma pack(pop)
  static check_size<sizeof(Texture_t), 12 + sizeof(Valve::VR::EColorSpace)> __Valve_VR_Texture_tSizeCheck;
  static_assert(sizeof(Texture_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::Texture_t, "Valve.VR", "Texture_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
