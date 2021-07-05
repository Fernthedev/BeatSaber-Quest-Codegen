// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.ParameterModifier
  // [ComVisibleAttribute] Offset: D7BF28
  // [DefaultMemberAttribute] Offset: D7BF28
  struct ParameterModifier/*, public System::ValueType*/ {
    public:
    // private System.Boolean[] _byRef
    // Size: 0x8
    // Offset: 0x0
    ::Array<bool>* byRef;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // Creating value type constructor for type: ParameterModifier
    constexpr ParameterModifier(::Array<bool>* byRef_ = {}) noexcept : byRef{byRef_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Array<bool>*
    constexpr operator ::Array<bool>*() const noexcept {
      return byRef;
    }
  }; // System.Reflection.ParameterModifier
  #pragma pack(pop)
  static check_size<sizeof(ParameterModifier), 0 + sizeof(::Array<bool>*)> __System_Reflection_ParameterModifierSizeCheck;
  static_assert(sizeof(ParameterModifier) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ParameterModifier, "System.Reflection", "ParameterModifier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
