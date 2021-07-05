// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRExtendedDisplay
  struct IVRExtendedDisplay/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRExtendedDisplay::_GetWindowBounds
    class _GetWindowBounds;
    // Nested type: Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport
    class _GetEyeOutputViewport;
    // Nested type: Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo
    class _GetDXGIOutputInfo;
    // Valve.VR.IVRExtendedDisplay/_GetWindowBounds GetWindowBounds
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRExtendedDisplay::_GetWindowBounds*) == 0x8);
    // Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport GetEyeOutputViewport
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport*) == 0x8);
    // Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo GetDXGIOutputInfo
    // Size: 0x8
    // Offset: 0x10
    Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*) == 0x8);
    // Creating value type constructor for type: IVRExtendedDisplay
    constexpr IVRExtendedDisplay(Valve::VR::IVRExtendedDisplay::_GetWindowBounds* GetWindowBounds_ = {}, Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport* GetEyeOutputViewport_ = {}, Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo* GetDXGIOutputInfo_ = {}) noexcept : GetWindowBounds{GetWindowBounds_}, GetEyeOutputViewport{GetEyeOutputViewport_}, GetDXGIOutputInfo{GetDXGIOutputInfo_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.IVRExtendedDisplay
  #pragma pack(pop)
  static check_size<sizeof(IVRExtendedDisplay), 16 + sizeof(Valve::VR::IVRExtendedDisplay::_GetDXGIOutputInfo*)> __Valve_VR_IVRExtendedDisplaySizeCheck;
  static_assert(sizeof(IVRExtendedDisplay) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay, "Valve.VR", "IVRExtendedDisplay");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
