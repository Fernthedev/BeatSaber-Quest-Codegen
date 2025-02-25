// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRChaperone
  // [TokenAttribute] Offset: FFFFFFFF
  struct IVRChaperone/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRChaperone::_GetCalibrationState
    class _GetCalibrationState;
    // Nested type: Valve::VR::IVRChaperone::_GetPlayAreaSize
    class _GetPlayAreaSize;
    // Nested type: Valve::VR::IVRChaperone::_GetPlayAreaRect
    class _GetPlayAreaRect;
    // Nested type: Valve::VR::IVRChaperone::_ReloadInfo
    class _ReloadInfo;
    // Nested type: Valve::VR::IVRChaperone::_SetSceneColor
    class _SetSceneColor;
    // Nested type: Valve::VR::IVRChaperone::_GetBoundsColor
    class _GetBoundsColor;
    // Nested type: Valve::VR::IVRChaperone::_AreBoundsVisible
    class _AreBoundsVisible;
    // Nested type: Valve::VR::IVRChaperone::_ForceBoundsVisible
    class _ForceBoundsVisible;
    // Valve.VR.IVRChaperone/Valve.VR._GetCalibrationState GetCalibrationState
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRChaperone::_GetCalibrationState* GetCalibrationState;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_GetCalibrationState*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._GetPlayAreaSize GetPlayAreaSize
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRChaperone::_GetPlayAreaSize* GetPlayAreaSize;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_GetPlayAreaSize*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._GetPlayAreaRect GetPlayAreaRect
    // Size: 0x8
    // Offset: 0x10
    Valve::VR::IVRChaperone::_GetPlayAreaRect* GetPlayAreaRect;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_GetPlayAreaRect*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._ReloadInfo ReloadInfo
    // Size: 0x8
    // Offset: 0x18
    Valve::VR::IVRChaperone::_ReloadInfo* ReloadInfo;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_ReloadInfo*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._SetSceneColor SetSceneColor
    // Size: 0x8
    // Offset: 0x20
    Valve::VR::IVRChaperone::_SetSceneColor* SetSceneColor;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_SetSceneColor*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._GetBoundsColor GetBoundsColor
    // Size: 0x8
    // Offset: 0x28
    Valve::VR::IVRChaperone::_GetBoundsColor* GetBoundsColor;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_GetBoundsColor*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._AreBoundsVisible AreBoundsVisible
    // Size: 0x8
    // Offset: 0x30
    Valve::VR::IVRChaperone::_AreBoundsVisible* AreBoundsVisible;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_AreBoundsVisible*) == 0x8);
    // Valve.VR.IVRChaperone/Valve.VR._ForceBoundsVisible ForceBoundsVisible
    // Size: 0x8
    // Offset: 0x38
    Valve::VR::IVRChaperone::_ForceBoundsVisible* ForceBoundsVisible;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRChaperone::_ForceBoundsVisible*) == 0x8);
    // Creating value type constructor for type: IVRChaperone
    constexpr IVRChaperone(Valve::VR::IVRChaperone::_GetCalibrationState* GetCalibrationState_ = {}, Valve::VR::IVRChaperone::_GetPlayAreaSize* GetPlayAreaSize_ = {}, Valve::VR::IVRChaperone::_GetPlayAreaRect* GetPlayAreaRect_ = {}, Valve::VR::IVRChaperone::_ReloadInfo* ReloadInfo_ = {}, Valve::VR::IVRChaperone::_SetSceneColor* SetSceneColor_ = {}, Valve::VR::IVRChaperone::_GetBoundsColor* GetBoundsColor_ = {}, Valve::VR::IVRChaperone::_AreBoundsVisible* AreBoundsVisible_ = {}, Valve::VR::IVRChaperone::_ForceBoundsVisible* ForceBoundsVisible_ = {}) noexcept : GetCalibrationState{GetCalibrationState_}, GetPlayAreaSize{GetPlayAreaSize_}, GetPlayAreaRect{GetPlayAreaRect_}, ReloadInfo{ReloadInfo_}, SetSceneColor{SetSceneColor_}, GetBoundsColor{GetBoundsColor_}, AreBoundsVisible{AreBoundsVisible_}, ForceBoundsVisible{ForceBoundsVisible_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._GetCalibrationState GetCalibrationState
    Valve::VR::IVRChaperone::_GetCalibrationState*& dyn_GetCalibrationState();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._GetPlayAreaSize GetPlayAreaSize
    Valve::VR::IVRChaperone::_GetPlayAreaSize*& dyn_GetPlayAreaSize();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._GetPlayAreaRect GetPlayAreaRect
    Valve::VR::IVRChaperone::_GetPlayAreaRect*& dyn_GetPlayAreaRect();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._ReloadInfo ReloadInfo
    Valve::VR::IVRChaperone::_ReloadInfo*& dyn_ReloadInfo();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._SetSceneColor SetSceneColor
    Valve::VR::IVRChaperone::_SetSceneColor*& dyn_SetSceneColor();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._GetBoundsColor GetBoundsColor
    Valve::VR::IVRChaperone::_GetBoundsColor*& dyn_GetBoundsColor();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._AreBoundsVisible AreBoundsVisible
    Valve::VR::IVRChaperone::_AreBoundsVisible*& dyn_AreBoundsVisible();
    // Get instance field reference: Valve.VR.IVRChaperone/Valve.VR._ForceBoundsVisible ForceBoundsVisible
    Valve::VR::IVRChaperone::_ForceBoundsVisible*& dyn_ForceBoundsVisible();
  }; // Valve.VR.IVRChaperone
  #pragma pack(pop)
  static check_size<sizeof(IVRChaperone), 56 + sizeof(Valve::VR::IVRChaperone::_ForceBoundsVisible*)> __Valve_VR_IVRChaperoneSizeCheck;
  static_assert(sizeof(IVRChaperone) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone, "Valve.VR", "IVRChaperone");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
