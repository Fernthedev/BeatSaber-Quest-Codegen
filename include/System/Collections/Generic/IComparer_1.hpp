// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IComparer`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IComparer_1 {
    public:
    // Creating value type constructor for type: IComparer_1
    IComparer_1() noexcept {}
    // public System.Int32 Compare(T x, T y)
    // Offset: 0xFFFFFFFF
    int Compare(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IComparer_1::Compare");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compare", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(y)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method, x, y);
    }
  }; // System.Collections.Generic.IComparer`1
  // Could not write size check! Type: System.Collections.Generic.IComparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IComparer_1, "System.Collections.Generic", "IComparer`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
