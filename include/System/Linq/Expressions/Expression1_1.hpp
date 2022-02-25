// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression`1
#include "System/Linq/Expressions/Expression_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression1`1<TDelegate>
  template<typename TDelegate>
  class Expression1_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::Expressions::Expression1_1, "System.Linq.Expressions", "Expression1`1");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Expressions.Expression1`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TDelegate>
  class Expression1_1 : public System::Linq::Expressions::Expression_1<TDelegate> {
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
    // private System.Object _par0
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* par0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator System::Linq::Expressions::Expression*
    constexpr operator System::Linq::Expressions::Expression*() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private System.Object _par0
    ::Il2CppObject*& dyn__par0() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Expression1_1::dyn__par0");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_par0"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Linq.Expressions.Expression body, System.Linq.Expressions.ParameterExpression par0)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Expression1_1<TDelegate>* New_ctor(System::Linq::Expressions::Expression* body, System::Linq::Expressions::ParameterExpression* par0) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Expression1_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Expression1_1<TDelegate>*, creationType>(body, par0)));
    }
    // override System.Int32 get_ParameterCount()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.Int32 LambdaExpression::get_ParameterCount()
    int get_ParameterCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Expression1_1::get_ParameterCount");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ParameterCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // override System.Linq.Expressions.ParameterExpression GetParameter(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.Linq.Expressions.ParameterExpression LambdaExpression::GetParameter(System.Int32 index)
    System::Linq::Expressions::ParameterExpression* GetParameter(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Expression1_1::GetParameter");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetParameter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<System::Linq::Expressions::ParameterExpression*, false>(this, ___internal__method, index);
    }
    // override System.Linq.Expressions.Expression`1<TDelegate> Rewrite(System.Linq.Expressions.Expression body, System.Linq.Expressions.ParameterExpression[] parameters)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.Expression`1
    // Base method: System.Linq.Expressions.Expression`1<TDelegate> Expression_1::Rewrite(System.Linq.Expressions.Expression body, System.Linq.Expressions.ParameterExpression[] parameters)
    System::Linq::Expressions::Expression_1<TDelegate>* Rewrite(System::Linq::Expressions::Expression* body, ::ArrayW<System::Linq::Expressions::ParameterExpression*> parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Linq::Expressions::Expression1_1::Rewrite");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Rewrite", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(body), ::il2cpp_utils::ExtractType(parameters)})));
      return ::il2cpp_utils::RunMethodRethrow<System::Linq::Expressions::Expression_1<TDelegate>*, false>(this, ___internal__method, body, parameters);
    }
  }; // System.Linq.Expressions.Expression1`1
  // Could not write size check! Type: System.Linq.Expressions.Expression1`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
