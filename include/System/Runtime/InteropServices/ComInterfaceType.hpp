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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ComInterfaceType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA3FCC
  struct ComInterfaceType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ComInterfaceType
    constexpr ComInterfaceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsDual
    static constexpr const int InterfaceIsDual = 0;
    // Get static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsDual
    static System::Runtime::InteropServices::ComInterfaceType _get_InterfaceIsDual();
    // Set static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsDual
    static void _set_InterfaceIsDual(System::Runtime::InteropServices::ComInterfaceType value);
    // static field const value: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIUnknown
    static constexpr const int InterfaceIsIUnknown = 1;
    // Get static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIUnknown
    static System::Runtime::InteropServices::ComInterfaceType _get_InterfaceIsIUnknown();
    // Set static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIUnknown
    static void _set_InterfaceIsIUnknown(System::Runtime::InteropServices::ComInterfaceType value);
    // static field const value: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIDispatch
    static constexpr const int InterfaceIsIDispatch = 2;
    // Get static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIDispatch
    static System::Runtime::InteropServices::ComInterfaceType _get_InterfaceIsIDispatch();
    // Set static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIDispatch
    static void _set_InterfaceIsIDispatch(System::Runtime::InteropServices::ComInterfaceType value);
    // [ComVisibleAttribute] Offset: 0xDA7390
    // static field const value: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIInspectable
    static constexpr const int InterfaceIsIInspectable = 3;
    // Get static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIInspectable
    static System::Runtime::InteropServices::ComInterfaceType _get_InterfaceIsIInspectable();
    // Set static field: static public System.Runtime.InteropServices.ComInterfaceType InterfaceIsIInspectable
    static void _set_InterfaceIsIInspectable(System::Runtime::InteropServices::ComInterfaceType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.InteropServices.ComInterfaceType
  #pragma pack(pop)
  static check_size<sizeof(ComInterfaceType), 0 + sizeof(int)> __System_Runtime_InteropServices_ComInterfaceTypeSizeCheck;
  static_assert(sizeof(ComInterfaceType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComInterfaceType, "System.Runtime.InteropServices", "ComInterfaceType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
