#pragma once
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__UnaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::UnaryExpression.get_Operand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::UnaryExpression::*)()>(&::System::Linq::Expressions::UnaryExpression::get_Operand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2813e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::UnaryExpression*>::get(),
                            "get_Operand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Linq::Expressions::UnaryExpression::__set__Operand_k__BackingField(::System::Linq::Expressions::Expression*  value)  {
::cordl_internals::setInstanceField<::System::Linq::Expressions::Expression*, 0x10>(this, std::forward<::System::Linq::Expressions::Expression*>(value));
}
constexpr ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::__get__Operand_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Linq::Expressions::Expression*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> System::Linq::Expressions::UnaryExpression::__get__Operand_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Linq::Expressions::Expression*, 0x10>(this);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::UnaryExpression::get_Operand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::UnaryExpression*>::get(),
                            "get_Operand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
