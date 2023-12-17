#pragma once
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
//  Writing Method size for method: ::System::Globalization::HebrewNumberParsingContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::HebrewNumberParsingContext::*)(int32_t)>(&::System::Globalization::HebrewNumberParsingContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2552e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumberParsingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::HebrewNumberParsingContext::__set_state(::System::Globalization::__HebrewNumber__HS  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__HebrewNumber__HS, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__HebrewNumber__HS>(value));
}
constexpr ::System::Globalization::__HebrewNumber__HS& System::Globalization::HebrewNumberParsingContext::__get_state()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__HebrewNumber__HS, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__HebrewNumber__HS const& System::Globalization::HebrewNumberParsingContext::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__HebrewNumber__HS, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::HebrewNumberParsingContext::__set_result(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::HebrewNumberParsingContext::__get_result()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::HebrewNumberParsingContext::__get_result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Globalization::HebrewNumberParsingContext::_ctor(int32_t  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumberParsingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::__HebrewNumber__HS", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingContext::HebrewNumberParsingContext(::System::Globalization::__HebrewNumber__HS  state, int32_t  result) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->state = state;
this->result = result;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
