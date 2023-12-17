#pragma once
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuleMatcher.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::RuleMatcher::*)()>(&::UnityEngine::UIElements::RuleMatcher::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e04684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::RuleMatcher::__set_sheet(::UnityEngine::UIElements::StyleSheet*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleSheet*>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheet* UnityEngine::UIElements::RuleMatcher::__get_sheet()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> UnityEngine::UIElements::RuleMatcher::__get_sheet() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheet*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::RuleMatcher::__set_complexSelector(::UnityEngine::UIElements::StyleComplexSelector*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleComplexSelector*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UIElements::StyleComplexSelector*>(value));
}
constexpr ::UnityEngine::UIElements::StyleComplexSelector* UnityEngine::UIElements::RuleMatcher::__get_complexSelector()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleComplexSelector*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleComplexSelector*> UnityEngine::UIElements::RuleMatcher::__get_complexSelector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleComplexSelector*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW UnityEngine::UIElements::RuleMatcher::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuleMatcher>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityEngine::UIElements::StyleSheet*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "complexSelector", ty: "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::RuleMatcher::RuleMatcher(::UnityEngine::UIElements::StyleSheet*  sheet, ::UnityEngine::UIElements::StyleComplexSelector*  complexSelector) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->sheet = sheet;
this->complexSelector = complexSelector;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
