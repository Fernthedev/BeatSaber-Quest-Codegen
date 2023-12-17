#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
constexpr void System::Linq::Expressions::__Expression__ExtensionInfo::__set_NodeType(::System::Linq::Expressions::ExpressionType  value)  {
::cordl_internals::setInstanceField<::System::Linq::Expressions::ExpressionType, 0x10>(this, std::forward<::System::Linq::Expressions::ExpressionType>(value));
}
constexpr ::System::Linq::Expressions::ExpressionType& System::Linq::Expressions::__Expression__ExtensionInfo::__get_NodeType()  {
return ::cordl_internals::getInstanceField<::System::Linq::Expressions::ExpressionType, 0x10>(this);
}
constexpr ::System::Linq::Expressions::ExpressionType const& System::Linq::Expressions::__Expression__ExtensionInfo::__get_NodeType() const {
return ::cordl_internals::getInstanceField<::System::Linq::Expressions::ExpressionType, 0x10>(this);
}
//  Writing Method size for method: ::System::Linq::Expressions::Expression.get_NodeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::Expression::*)()>(&::System::Linq::Expressions::Expression::get_NodeType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2813b1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Expression::setStaticF_s_lambdaDelegateCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*, "s_lambdaDelegateCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get>(std::forward<::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*>(value));
}
inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>* System::Linq::Expressions::Expression::getStaticF_s_lambdaDelegateCache()  {
return ::cordl_internals::getStaticField<::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*, "s_lambdaDelegateCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get>();
}
inline void System::Linq::Expressions::Expression::setStaticF_s_legacyCtorSupportTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*, "s_legacyCtorSupportTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get>(std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>* System::Linq::Expressions::Expression::getStaticF_s_legacyCtorSupportTable()  {
return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*, "s_legacyCtorSupportTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get>();
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::Expression::get_NodeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Expression*>::get(),
                            "get_NodeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
