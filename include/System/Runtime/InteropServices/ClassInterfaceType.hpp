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
  // Autogenerated type: System.Runtime.InteropServices.ClassInterfaceType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9E104
  struct ClassInterfaceType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ClassInterfaceType
    constexpr ClassInterfaceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.InteropServices.ClassInterfaceType None
    static constexpr const int None = 0;
    // Get static field: static public System.Runtime.InteropServices.ClassInterfaceType None
    static System::Runtime::InteropServices::ClassInterfaceType _get_None();
    // Set static field: static public System.Runtime.InteropServices.ClassInterfaceType None
    static void _set_None(System::Runtime::InteropServices::ClassInterfaceType value);
    // static field const value: static public System.Runtime.InteropServices.ClassInterfaceType AutoDispatch
    static constexpr const int AutoDispatch = 1;
    // Get static field: static public System.Runtime.InteropServices.ClassInterfaceType AutoDispatch
    static System::Runtime::InteropServices::ClassInterfaceType _get_AutoDispatch();
    // Set static field: static public System.Runtime.InteropServices.ClassInterfaceType AutoDispatch
    static void _set_AutoDispatch(System::Runtime::InteropServices::ClassInterfaceType value);
    // static field const value: static public System.Runtime.InteropServices.ClassInterfaceType AutoDual
    static constexpr const int AutoDual = 2;
    // Get static field: static public System.Runtime.InteropServices.ClassInterfaceType AutoDual
    static System::Runtime::InteropServices::ClassInterfaceType _get_AutoDual();
    // Set static field: static public System.Runtime.InteropServices.ClassInterfaceType AutoDual
    static void _set_AutoDual(System::Runtime::InteropServices::ClassInterfaceType value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Runtime.InteropServices.ClassInterfaceType
  #pragma pack(pop)
  static check_size<sizeof(ClassInterfaceType), 0 + sizeof(int)> __System_Runtime_InteropServices_ClassInterfaceTypeSizeCheck;
  static_assert(sizeof(ClassInterfaceType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ClassInterfaceType, "System.Runtime.InteropServices", "ClassInterfaceType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
