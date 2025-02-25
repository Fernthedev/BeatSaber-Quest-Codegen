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
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.TypeInferenceRules
  // [TokenAttribute] Offset: FFFFFFFF
  struct TypeInferenceRules/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TypeInferenceRules
    constexpr TypeInferenceRules(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngineInternal.TypeInferenceRules TypeReferencedByFirstArgument
    static constexpr const int TypeReferencedByFirstArgument = 0;
    // Get static field: static public UnityEngineInternal.TypeInferenceRules TypeReferencedByFirstArgument
    static UnityEngineInternal::TypeInferenceRules _get_TypeReferencedByFirstArgument();
    // Set static field: static public UnityEngineInternal.TypeInferenceRules TypeReferencedByFirstArgument
    static void _set_TypeReferencedByFirstArgument(UnityEngineInternal::TypeInferenceRules value);
    // static field const value: static public UnityEngineInternal.TypeInferenceRules TypeReferencedBySecondArgument
    static constexpr const int TypeReferencedBySecondArgument = 1;
    // Get static field: static public UnityEngineInternal.TypeInferenceRules TypeReferencedBySecondArgument
    static UnityEngineInternal::TypeInferenceRules _get_TypeReferencedBySecondArgument();
    // Set static field: static public UnityEngineInternal.TypeInferenceRules TypeReferencedBySecondArgument
    static void _set_TypeReferencedBySecondArgument(UnityEngineInternal::TypeInferenceRules value);
    // static field const value: static public UnityEngineInternal.TypeInferenceRules ArrayOfTypeReferencedByFirstArgument
    static constexpr const int ArrayOfTypeReferencedByFirstArgument = 2;
    // Get static field: static public UnityEngineInternal.TypeInferenceRules ArrayOfTypeReferencedByFirstArgument
    static UnityEngineInternal::TypeInferenceRules _get_ArrayOfTypeReferencedByFirstArgument();
    // Set static field: static public UnityEngineInternal.TypeInferenceRules ArrayOfTypeReferencedByFirstArgument
    static void _set_ArrayOfTypeReferencedByFirstArgument(UnityEngineInternal::TypeInferenceRules value);
    // static field const value: static public UnityEngineInternal.TypeInferenceRules TypeOfFirstArgument
    static constexpr const int TypeOfFirstArgument = 3;
    // Get static field: static public UnityEngineInternal.TypeInferenceRules TypeOfFirstArgument
    static UnityEngineInternal::TypeInferenceRules _get_TypeOfFirstArgument();
    // Set static field: static public UnityEngineInternal.TypeInferenceRules TypeOfFirstArgument
    static void _set_TypeOfFirstArgument(UnityEngineInternal::TypeInferenceRules value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngineInternal.TypeInferenceRules
  #pragma pack(pop)
  static check_size<sizeof(TypeInferenceRules), 0 + sizeof(int)> __UnityEngineInternal_TypeInferenceRulesSizeCheck;
  static_assert(sizeof(TypeInferenceRules) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::TypeInferenceRules, "UnityEngineInternal", "TypeInferenceRules");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
