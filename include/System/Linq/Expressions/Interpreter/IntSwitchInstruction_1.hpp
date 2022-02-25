// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.Instruction
#include "System/Linq/Expressions/Interpreter/Instruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: IntSwitchInstruction`1<T>
  template<typename T>
  class IntSwitchInstruction_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Expressions::Interpreter::IntSwitchInstruction_1, "System.Linq.Expressions.Interpreter", "IntSwitchInstruction`1");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Expressions.Interpreter.IntSwitchInstruction`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IntSwitchInstruction_1 : public System::Linq::Expressions::Interpreter::Instruction {
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
    // private readonly System.Collections.Generic.Dictionary`2<T,System.Int32> _cases
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<T, int>* cases;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<T, int>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<T, int>*
    constexpr operator System::Collections::Generic::Dictionary_2<T, int>*() const noexcept {
      return cases;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.Dictionary`2<T,System.Int32> _cases
    System::Collections::Generic::Dictionary_2<T, int>*& dyn__cases() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Interpreter::IntSwitchInstruction_1::dyn__cases");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_cases"))->offset;
      return *reinterpret_cast<System::Collections::Generic::Dictionary_2<T, int>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.Collections.Generic.Dictionary`2<T,System.Int32> cases)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntSwitchInstruction_1<T>* New_ctor(System::Collections::Generic::Dictionary_2<T, int>* cases) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Interpreter::IntSwitchInstruction_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntSwitchInstruction_1<T>*, creationType>(cases)));
    }
    // public override System.String get_InstructionName()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Interpreter::IntSwitchInstruction_1::get_InstructionName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_InstructionName", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Interpreter::IntSwitchInstruction_1::get_ConsumedStack");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ConsumedStack", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Interpreter::IntSwitchInstruction_1::Run");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Run", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(frame)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, frame);
    }
  }; // System.Linq.Expressions.Interpreter.IntSwitchInstruction`1
  // Could not write size check! Type: System.Linq.Expressions.Interpreter.IntSwitchInstruction`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
