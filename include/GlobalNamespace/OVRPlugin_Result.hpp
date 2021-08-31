// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Result
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Result/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Result
    constexpr Result(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Result Success
    static constexpr const int Success = 0;
    // Get static field: static public OVRPlugin/Result Success
    static GlobalNamespace::OVRPlugin::Result _get_Success();
    // Set static field: static public OVRPlugin/Result Success
    static void _set_Success(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure
    static constexpr const int Failure = -1000;
    // Get static field: static public OVRPlugin/Result Failure
    static GlobalNamespace::OVRPlugin::Result _get_Failure();
    // Set static field: static public OVRPlugin/Result Failure
    static void _set_Failure(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_InvalidParameter
    static constexpr const int Failure_InvalidParameter = -1001;
    // Get static field: static public OVRPlugin/Result Failure_InvalidParameter
    static GlobalNamespace::OVRPlugin::Result _get_Failure_InvalidParameter();
    // Set static field: static public OVRPlugin/Result Failure_InvalidParameter
    static void _set_Failure_InvalidParameter(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_NotInitialized
    static constexpr const int Failure_NotInitialized = -1002;
    // Get static field: static public OVRPlugin/Result Failure_NotInitialized
    static GlobalNamespace::OVRPlugin::Result _get_Failure_NotInitialized();
    // Set static field: static public OVRPlugin/Result Failure_NotInitialized
    static void _set_Failure_NotInitialized(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_InvalidOperation
    static constexpr const int Failure_InvalidOperation = -1003;
    // Get static field: static public OVRPlugin/Result Failure_InvalidOperation
    static GlobalNamespace::OVRPlugin::Result _get_Failure_InvalidOperation();
    // Set static field: static public OVRPlugin/Result Failure_InvalidOperation
    static void _set_Failure_InvalidOperation(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_Unsupported
    static constexpr const int Failure_Unsupported = -1004;
    // Get static field: static public OVRPlugin/Result Failure_Unsupported
    static GlobalNamespace::OVRPlugin::Result _get_Failure_Unsupported();
    // Set static field: static public OVRPlugin/Result Failure_Unsupported
    static void _set_Failure_Unsupported(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_NotYetImplemented
    static constexpr const int Failure_NotYetImplemented = -1005;
    // Get static field: static public OVRPlugin/Result Failure_NotYetImplemented
    static GlobalNamespace::OVRPlugin::Result _get_Failure_NotYetImplemented();
    // Set static field: static public OVRPlugin/Result Failure_NotYetImplemented
    static void _set_Failure_NotYetImplemented(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_OperationFailed
    static constexpr const int Failure_OperationFailed = -1006;
    // Get static field: static public OVRPlugin/Result Failure_OperationFailed
    static GlobalNamespace::OVRPlugin::Result _get_Failure_OperationFailed();
    // Set static field: static public OVRPlugin/Result Failure_OperationFailed
    static void _set_Failure_OperationFailed(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_InsufficientSize
    static constexpr const int Failure_InsufficientSize = -1007;
    // Get static field: static public OVRPlugin/Result Failure_InsufficientSize
    static GlobalNamespace::OVRPlugin::Result _get_Failure_InsufficientSize();
    // Set static field: static public OVRPlugin/Result Failure_InsufficientSize
    static void _set_Failure_InsufficientSize(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_DataIsInvalid
    static constexpr const int Failure_DataIsInvalid = -1008;
    // Get static field: static public OVRPlugin/Result Failure_DataIsInvalid
    static GlobalNamespace::OVRPlugin::Result _get_Failure_DataIsInvalid();
    // Set static field: static public OVRPlugin/Result Failure_DataIsInvalid
    static void _set_Failure_DataIsInvalid(GlobalNamespace::OVRPlugin::Result value);
    // static field const value: static public OVRPlugin/Result Failure_DeprecatedOperation
    static constexpr const int Failure_DeprecatedOperation = -1009;
    // Get static field: static public OVRPlugin/Result Failure_DeprecatedOperation
    static GlobalNamespace::OVRPlugin::Result _get_Failure_DeprecatedOperation();
    // Set static field: static public OVRPlugin/Result Failure_DeprecatedOperation
    static void _set_Failure_DeprecatedOperation(GlobalNamespace::OVRPlugin::Result value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/Result
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Result), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_ResultSizeCheck;
  static_assert(sizeof(OVRPlugin::Result) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Result, "", "OVRPlugin/Result");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
