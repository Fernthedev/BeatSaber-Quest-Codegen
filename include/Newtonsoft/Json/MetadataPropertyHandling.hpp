// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: MetadataPropertyHandling
  struct MetadataPropertyHandling;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::MetadataPropertyHandling, "Newtonsoft.Json", "MetadataPropertyHandling");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.MetadataPropertyHandling
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10C0B7C
  struct MetadataPropertyHandling/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MetadataPropertyHandling
    constexpr MetadataPropertyHandling(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.MetadataPropertyHandling Default
    static constexpr const int Default = 0;
    // Get static field: static public Newtonsoft.Json.MetadataPropertyHandling Default
    static ::Newtonsoft::Json::MetadataPropertyHandling _get_Default();
    // Set static field: static public Newtonsoft.Json.MetadataPropertyHandling Default
    static void _set_Default(::Newtonsoft::Json::MetadataPropertyHandling value);
    // static field const value: static public Newtonsoft.Json.MetadataPropertyHandling ReadAhead
    static constexpr const int ReadAhead = 1;
    // Get static field: static public Newtonsoft.Json.MetadataPropertyHandling ReadAhead
    static ::Newtonsoft::Json::MetadataPropertyHandling _get_ReadAhead();
    // Set static field: static public Newtonsoft.Json.MetadataPropertyHandling ReadAhead
    static void _set_ReadAhead(::Newtonsoft::Json::MetadataPropertyHandling value);
    // static field const value: static public Newtonsoft.Json.MetadataPropertyHandling Ignore
    static constexpr const int Ignore = 2;
    // Get static field: static public Newtonsoft.Json.MetadataPropertyHandling Ignore
    static ::Newtonsoft::Json::MetadataPropertyHandling _get_Ignore();
    // Set static field: static public Newtonsoft.Json.MetadataPropertyHandling Ignore
    static void _set_Ignore(::Newtonsoft::Json::MetadataPropertyHandling value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.MetadataPropertyHandling
  #pragma pack(pop)
  static check_size<sizeof(MetadataPropertyHandling), 0 + sizeof(int)> __Newtonsoft_Json_MetadataPropertyHandlingSizeCheck;
  static_assert(sizeof(MetadataPropertyHandling) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
