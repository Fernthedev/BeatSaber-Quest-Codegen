// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: Pinnable`1<T>
  template<typename T>
  class Pinnable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Pinnable_1, "System", "Pinnable`1");
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Pinnable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Pinnable_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public T Data
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T Data;
    public:
    // Autogenerated instance field getter
    // Get instance field: public T Data
    T& dyn_Data() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Pinnable_1::dyn_Data");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Data"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
  }; // System.Pinnable`1
  // Could not write size check! Type: System.Pinnable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
