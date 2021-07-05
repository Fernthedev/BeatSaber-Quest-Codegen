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
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.IVRDriverManager
  struct IVRDriverManager/*, public System::ValueType*/ {
    public:
    // Nested type: Valve::VR::IVRDriverManager::_GetDriverCount
    class _GetDriverCount;
    // Nested type: Valve::VR::IVRDriverManager::_GetDriverName
    class _GetDriverName;
    // Valve.VR.IVRDriverManager/_GetDriverCount GetDriverCount
    // Size: 0x8
    // Offset: 0x0
    Valve::VR::IVRDriverManager::_GetDriverCount* GetDriverCount;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRDriverManager::_GetDriverCount*) == 0x8);
    // Valve.VR.IVRDriverManager/_GetDriverName GetDriverName
    // Size: 0x8
    // Offset: 0x8
    Valve::VR::IVRDriverManager::_GetDriverName* GetDriverName;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRDriverManager::_GetDriverName*) == 0x8);
    // Creating value type constructor for type: IVRDriverManager
    constexpr IVRDriverManager(Valve::VR::IVRDriverManager::_GetDriverCount* GetDriverCount_ = {}, Valve::VR::IVRDriverManager::_GetDriverName* GetDriverName_ = {}) noexcept : GetDriverCount{GetDriverCount_}, GetDriverName{GetDriverName_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.IVRDriverManager
  #pragma pack(pop)
  static check_size<sizeof(IVRDriverManager), 8 + sizeof(Valve::VR::IVRDriverManager::_GetDriverName*)> __Valve_VR_IVRDriverManagerSizeCheck;
  static_assert(sizeof(IVRDriverManager) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRDriverManager, "Valve.VR", "IVRDriverManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
