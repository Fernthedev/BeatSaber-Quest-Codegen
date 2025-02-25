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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.BindingInheritanceMethods
  // [TokenAttribute] Offset: FFFFFFFF
  struct BindingInheritanceMethods/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BindingInheritanceMethods
    constexpr BindingInheritanceMethods(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.BindingInheritanceMethods None
    static constexpr const int None = 0;
    // Get static field: static public Zenject.BindingInheritanceMethods None
    static Zenject::BindingInheritanceMethods _get_None();
    // Set static field: static public Zenject.BindingInheritanceMethods None
    static void _set_None(Zenject::BindingInheritanceMethods value);
    // static field const value: static public Zenject.BindingInheritanceMethods CopyIntoAll
    static constexpr const int CopyIntoAll = 1;
    // Get static field: static public Zenject.BindingInheritanceMethods CopyIntoAll
    static Zenject::BindingInheritanceMethods _get_CopyIntoAll();
    // Set static field: static public Zenject.BindingInheritanceMethods CopyIntoAll
    static void _set_CopyIntoAll(Zenject::BindingInheritanceMethods value);
    // static field const value: static public Zenject.BindingInheritanceMethods CopyDirectOnly
    static constexpr const int CopyDirectOnly = 2;
    // Get static field: static public Zenject.BindingInheritanceMethods CopyDirectOnly
    static Zenject::BindingInheritanceMethods _get_CopyDirectOnly();
    // Set static field: static public Zenject.BindingInheritanceMethods CopyDirectOnly
    static void _set_CopyDirectOnly(Zenject::BindingInheritanceMethods value);
    // static field const value: static public Zenject.BindingInheritanceMethods MoveIntoAll
    static constexpr const int MoveIntoAll = 3;
    // Get static field: static public Zenject.BindingInheritanceMethods MoveIntoAll
    static Zenject::BindingInheritanceMethods _get_MoveIntoAll();
    // Set static field: static public Zenject.BindingInheritanceMethods MoveIntoAll
    static void _set_MoveIntoAll(Zenject::BindingInheritanceMethods value);
    // static field const value: static public Zenject.BindingInheritanceMethods MoveDirectOnly
    static constexpr const int MoveDirectOnly = 4;
    // Get static field: static public Zenject.BindingInheritanceMethods MoveDirectOnly
    static Zenject::BindingInheritanceMethods _get_MoveDirectOnly();
    // Set static field: static public Zenject.BindingInheritanceMethods MoveDirectOnly
    static void _set_MoveDirectOnly(Zenject::BindingInheritanceMethods value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Zenject.BindingInheritanceMethods
  #pragma pack(pop)
  static check_size<sizeof(BindingInheritanceMethods), 0 + sizeof(int)> __Zenject_BindingInheritanceMethodsSizeCheck;
  static_assert(sizeof(BindingInheritanceMethods) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingInheritanceMethods, "Zenject", "BindingInheritanceMethods");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
