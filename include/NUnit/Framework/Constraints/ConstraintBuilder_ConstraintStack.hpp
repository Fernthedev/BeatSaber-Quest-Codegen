// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.ConstraintBuilder
#include "NUnit/Framework/Constraints/ConstraintBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IConstraint
  class IConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintBuilder/ConstraintStack
  class ConstraintBuilder::ConstraintStack : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Stack`1<NUnit.Framework.Constraints.IConstraint> stack
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>* stack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>*) == 0x8);
    // Creating value type constructor for type: ConstraintStack
    ConstraintStack(System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>* stack_ = {}) noexcept : stack{stack_} {}
    // Creating conversion operator: operator System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>*
    constexpr operator System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>*() const noexcept {
      return stack;
    }
    // public NUnit.Framework.Constraints.IConstraint Pop()
    // Offset: 0x1724674
    NUnit::Framework::Constraints::IConstraint* Pop();
  }; // NUnit.Framework.Constraints.ConstraintBuilder/ConstraintStack
  #pragma pack(pop)
  static check_size<sizeof(ConstraintBuilder::ConstraintStack), 16 + sizeof(System::Collections::Generic::Stack_1<NUnit::Framework::Constraints::IConstraint*>*)> __NUnit_Framework_Constraints_ConstraintBuilder_ConstraintStackSizeCheck;
  static_assert(sizeof(ConstraintBuilder::ConstraintStack) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack*, "NUnit.Framework.Constraints", "ConstraintBuilder/ConstraintStack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Constraints::IConstraint* (NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack::*)()>(&NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack::Pop)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintBuilder::ConstraintStack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
