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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ChallengeViewerFilter
  struct ChallengeViewerFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeViewerFilter, "Oculus.Platform", "ChallengeViewerFilter");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ChallengeViewerFilter
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChallengeViewerFilter/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChallengeViewerFilter
    constexpr ChallengeViewerFilter(int value_ = {}) noexcept : value{value_} {}
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
    // [DescriptionAttribute] Offset: 0x10D5CE0
    // static field const value: static public Oculus.Platform.ChallengeViewerFilter Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.ChallengeViewerFilter Unknown
    static ::Oculus::Platform::ChallengeViewerFilter _get_Unknown();
    // Set static field: static public Oculus.Platform.ChallengeViewerFilter Unknown
    static void _set_Unknown(::Oculus::Platform::ChallengeViewerFilter value);
    // [DescriptionAttribute] Offset: 0x10D5D18
    // static field const value: static public Oculus.Platform.ChallengeViewerFilter AllVisible
    static constexpr const int AllVisible = 1;
    // Get static field: static public Oculus.Platform.ChallengeViewerFilter AllVisible
    static ::Oculus::Platform::ChallengeViewerFilter _get_AllVisible();
    // Set static field: static public Oculus.Platform.ChallengeViewerFilter AllVisible
    static void _set_AllVisible(::Oculus::Platform::ChallengeViewerFilter value);
    // [DescriptionAttribute] Offset: 0x10D5D50
    // static field const value: static public Oculus.Platform.ChallengeViewerFilter Participating
    static constexpr const int Participating = 2;
    // Get static field: static public Oculus.Platform.ChallengeViewerFilter Participating
    static ::Oculus::Platform::ChallengeViewerFilter _get_Participating();
    // Set static field: static public Oculus.Platform.ChallengeViewerFilter Participating
    static void _set_Participating(::Oculus::Platform::ChallengeViewerFilter value);
    // [DescriptionAttribute] Offset: 0x10D5D88
    // static field const value: static public Oculus.Platform.ChallengeViewerFilter Invited
    static constexpr const int Invited = 3;
    // Get static field: static public Oculus.Platform.ChallengeViewerFilter Invited
    static ::Oculus::Platform::ChallengeViewerFilter _get_Invited();
    // Set static field: static public Oculus.Platform.ChallengeViewerFilter Invited
    static void _set_Invited(::Oculus::Platform::ChallengeViewerFilter value);
    // [DescriptionAttribute] Offset: 0x10D5DC0
    // static field const value: static public Oculus.Platform.ChallengeViewerFilter ParticipatingOrInvited
    static constexpr const int ParticipatingOrInvited = 4;
    // Get static field: static public Oculus.Platform.ChallengeViewerFilter ParticipatingOrInvited
    static ::Oculus::Platform::ChallengeViewerFilter _get_ParticipatingOrInvited();
    // Set static field: static public Oculus.Platform.ChallengeViewerFilter ParticipatingOrInvited
    static void _set_ParticipatingOrInvited(::Oculus::Platform::ChallengeViewerFilter value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.ChallengeViewerFilter
  #pragma pack(pop)
  static check_size<sizeof(ChallengeViewerFilter), 0 + sizeof(int)> __Oculus_Platform_ChallengeViewerFilterSizeCheck;
  static_assert(sizeof(ChallengeViewerFilter) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
