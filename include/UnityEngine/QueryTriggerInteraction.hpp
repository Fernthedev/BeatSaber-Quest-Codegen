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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.QueryTriggerInteraction
  // [TokenAttribute] Offset: FFFFFFFF
  struct QueryTriggerInteraction/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: QueryTriggerInteraction
    constexpr QueryTriggerInteraction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.QueryTriggerInteraction UseGlobal
    static constexpr const int UseGlobal = 0;
    // Get static field: static public UnityEngine.QueryTriggerInteraction UseGlobal
    static UnityEngine::QueryTriggerInteraction _get_UseGlobal();
    // Set static field: static public UnityEngine.QueryTriggerInteraction UseGlobal
    static void _set_UseGlobal(UnityEngine::QueryTriggerInteraction value);
    // static field const value: static public UnityEngine.QueryTriggerInteraction Ignore
    static constexpr const int Ignore = 1;
    // Get static field: static public UnityEngine.QueryTriggerInteraction Ignore
    static UnityEngine::QueryTriggerInteraction _get_Ignore();
    // Set static field: static public UnityEngine.QueryTriggerInteraction Ignore
    static void _set_Ignore(UnityEngine::QueryTriggerInteraction value);
    // static field const value: static public UnityEngine.QueryTriggerInteraction Collide
    static constexpr const int Collide = 2;
    // Get static field: static public UnityEngine.QueryTriggerInteraction Collide
    static UnityEngine::QueryTriggerInteraction _get_Collide();
    // Set static field: static public UnityEngine.QueryTriggerInteraction Collide
    static void _set_Collide(UnityEngine::QueryTriggerInteraction value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.QueryTriggerInteraction
  #pragma pack(pop)
  static check_size<sizeof(QueryTriggerInteraction), 0 + sizeof(int)> __UnityEngine_QueryTriggerInteractionSizeCheck;
  static_assert(sizeof(QueryTriggerInteraction) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::QueryTriggerInteraction, "UnityEngine", "QueryTriggerInteraction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
