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
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.NewLineHandling
  // [TokenAttribute] Offset: FFFFFFFF
  struct NewLineHandling/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NewLineHandling
    constexpr NewLineHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.NewLineHandling Replace
    static constexpr const int Replace = 0;
    // Get static field: static public System.Xml.NewLineHandling Replace
    static System::Xml::NewLineHandling _get_Replace();
    // Set static field: static public System.Xml.NewLineHandling Replace
    static void _set_Replace(System::Xml::NewLineHandling value);
    // static field const value: static public System.Xml.NewLineHandling Entitize
    static constexpr const int Entitize = 1;
    // Get static field: static public System.Xml.NewLineHandling Entitize
    static System::Xml::NewLineHandling _get_Entitize();
    // Set static field: static public System.Xml.NewLineHandling Entitize
    static void _set_Entitize(System::Xml::NewLineHandling value);
    // static field const value: static public System.Xml.NewLineHandling None
    static constexpr const int None = 2;
    // Get static field: static public System.Xml.NewLineHandling None
    static System::Xml::NewLineHandling _get_None();
    // Set static field: static public System.Xml.NewLineHandling None
    static void _set_None(System::Xml::NewLineHandling value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.NewLineHandling
  #pragma pack(pop)
  static check_size<sizeof(NewLineHandling), 0 + sizeof(int)> __System_Xml_NewLineHandlingSizeCheck;
  static_assert(sizeof(NewLineHandling) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::NewLineHandling, "System.Xml", "NewLineHandling");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
