#pragma once
#include "System/zzzz__DateTimeToken_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
constexpr void System::DateTimeToken::__set_dtt(::System::__DateTimeParse__DTT  value)  {
::cordl_internals::setInstanceField<::System::__DateTimeParse__DTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::__DateTimeParse__DTT>(value));
}
constexpr ::System::__DateTimeParse__DTT& System::DateTimeToken::__get_dtt()  {
return ::cordl_internals::getInstanceField<::System::__DateTimeParse__DTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::__DateTimeParse__DTT const& System::DateTimeToken::__get_dtt() const {
return ::cordl_internals::getInstanceField<::System::__DateTimeParse__DTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::DateTimeToken::__set_suffix(::System::TokenType  value)  {
::cordl_internals::setInstanceField<::System::TokenType, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::TokenType>(value));
}
constexpr ::System::TokenType& System::DateTimeToken::__get_suffix()  {
return ::cordl_internals::getInstanceField<::System::TokenType, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::TokenType const& System::DateTimeToken::__get_suffix() const {
return ::cordl_internals::getInstanceField<::System::TokenType, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::DateTimeToken::__set_num(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::DateTimeToken::__get_num()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::DateTimeToken::__get_num() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "dtt", ty: "::System::__DateTimeParse__DTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "suffix", ty: "::System::TokenType", modifiers: "", def_value: Some("{}") }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeToken::DateTimeToken(::System::__DateTimeParse__DTT  dtt, ::System::TokenType  suffix, int32_t  num) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->dtt = dtt;
this->suffix = suffix;
this->num = num;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
