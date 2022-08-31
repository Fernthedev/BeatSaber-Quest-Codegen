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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandleType
  struct GCHandleType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandleType, "System.Runtime.InteropServices", "GCHandleType");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.GCHandleType
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10450D4
  struct GCHandleType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GCHandleType
    constexpr GCHandleType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Runtime.InteropServices.GCHandleType Weak
    static constexpr const int Weak = 0;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType Weak
    static ::System::Runtime::InteropServices::GCHandleType _get_Weak();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType Weak
    static void _set_Weak(::System::Runtime::InteropServices::GCHandleType value);
    // static field const value: static public System.Runtime.InteropServices.GCHandleType WeakTrackResurrection
    static constexpr const int WeakTrackResurrection = 1;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType WeakTrackResurrection
    static ::System::Runtime::InteropServices::GCHandleType _get_WeakTrackResurrection();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType WeakTrackResurrection
    static void _set_WeakTrackResurrection(::System::Runtime::InteropServices::GCHandleType value);
    // static field const value: static public System.Runtime.InteropServices.GCHandleType Normal
    static constexpr const int Normal = 2;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType Normal
    static ::System::Runtime::InteropServices::GCHandleType _get_Normal();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType Normal
    static void _set_Normal(::System::Runtime::InteropServices::GCHandleType value);
    // static field const value: static public System.Runtime.InteropServices.GCHandleType Pinned
    static constexpr const int Pinned = 3;
    // Get static field: static public System.Runtime.InteropServices.GCHandleType Pinned
    static ::System::Runtime::InteropServices::GCHandleType _get_Pinned();
    // Set static field: static public System.Runtime.InteropServices.GCHandleType Pinned
    static void _set_Pinned(::System::Runtime::InteropServices::GCHandleType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.InteropServices.GCHandleType
  #pragma pack(pop)
  static check_size<sizeof(GCHandleType), 0 + sizeof(int)> __System_Runtime_InteropServices_GCHandleTypeSizeCheck;
  static_assert(sizeof(GCHandleType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
