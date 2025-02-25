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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.SdkAccountType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SdkAccountType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SdkAccountType
    constexpr SdkAccountType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xE22BA0
    // static field const value: static public Oculus.Platform.SdkAccountType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.SdkAccountType Unknown
    static Oculus::Platform::SdkAccountType _get_Unknown();
    // Set static field: static public Oculus.Platform.SdkAccountType Unknown
    static void _set_Unknown(Oculus::Platform::SdkAccountType value);
    // [DescriptionAttribute] Offset: 0xE22BD8
    // static field const value: static public Oculus.Platform.SdkAccountType Oculus
    static constexpr const int Oculus = 1;
    // Get static field: static public Oculus.Platform.SdkAccountType Oculus
    static Oculus::Platform::SdkAccountType _get_Oculus();
    // Set static field: static public Oculus.Platform.SdkAccountType Oculus
    static void _set_Oculus(Oculus::Platform::SdkAccountType value);
    // [DescriptionAttribute] Offset: 0xE22C10
    // static field const value: static public Oculus.Platform.SdkAccountType FacebookGameroom
    static constexpr const int FacebookGameroom = 2;
    // Get static field: static public Oculus.Platform.SdkAccountType FacebookGameroom
    static Oculus::Platform::SdkAccountType _get_FacebookGameroom();
    // Set static field: static public Oculus.Platform.SdkAccountType FacebookGameroom
    static void _set_FacebookGameroom(Oculus::Platform::SdkAccountType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.SdkAccountType
  #pragma pack(pop)
  static check_size<sizeof(SdkAccountType), 0 + sizeof(int)> __Oculus_Platform_SdkAccountTypeSizeCheck;
  static_assert(sizeof(SdkAccountType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::SdkAccountType, "Oculus.Platform", "SdkAccountType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
